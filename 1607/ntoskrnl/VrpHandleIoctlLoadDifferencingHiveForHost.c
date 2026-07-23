/*
 * XREFs of VrpHandleIoctlLoadDifferencingHiveForHost @ 0x140613D24
 * Callers:
 *     IoctlDeviceDispatch @ 0x140612B08 (IoctlDeviceDispatch.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     VrpLoadDifferencingHive @ 0x140617528 (VrpLoadDifferencingHive.c)
 */

__int64 __fastcall VrpHandleIoctlLoadDifferencingHiveForHost(_WORD *a1, unsigned int a2, KPROCESSOR_MODE a3)
{
  _WORD *PoolWithQuotaTag; // rdi
  int v7; // ebx
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // cx
  unsigned __int16 v10; // r8
  unsigned int v11; // edx
  unsigned int v12; // ecx
  unsigned int v13; // edx
  int v14; // r8d
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  _BYTE *v18; // rax
  signed __int8 v19; // cf
  _BYTE *v20; // rbx
  UNICODE_STRING String1; // [rsp+30h] [rbp-30h] BYREF
  __int16 v23; // [rsp+40h] [rbp-20h]
  __int16 v24; // [rsp+42h] [rbp-1Eh]
  __int64 v25; // [rsp+48h] [rbp-18h]
  __int16 v26; // [rsp+50h] [rbp-10h]
  __int16 v27; // [rsp+52h] [rbp-Eh]
  __int64 v28; // [rsp+58h] [rbp-8h]

  PoolWithQuotaTag = 0LL;
  if ( a2 < 0xC )
    return (unsigned int)-1073741811;
  v8 = a1[2];
  if ( (v8 & 1) != 0 || (v9 = a1[3], (v9 & 1) != 0) || (v10 = a1[4], (v10 & 1) != 0) )
  {
    v7 = -1073741811;
  }
  else
  {
    if ( !v8 )
      return (unsigned int)-1073741811;
    if ( !v9 )
      return (unsigned int)-1073741811;
    v11 = v8 + 10;
    v12 = v11 + v9;
    if ( v11 > v12 )
      return (unsigned int)-1073741811;
    v13 = v12 + v10;
    if ( v12 > v13 || a2 < v13 )
      return (unsigned int)-1073741811;
    if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, a3) || !SeSinglePrivilegeCheck(SeRestorePrivilege, a3) )
      return (unsigned int)-1073741727;
    v14 = (unsigned __int16)a1[2];
    v15 = (unsigned __int16)a1[2];
    String1.Buffer = a1 + 5;
    String1.MaximumLength = v14;
    String1.Length = v14;
    v16 = (__int64)&a1[(v15 >> 1) + 5];
    v17 = (unsigned __int16)a1[3];
    v27 = v17;
    v26 = v17;
    v28 = v16;
    v25 = v16 + 2 * (v17 >> 1);
    v24 = a1[4];
    v23 = v24;
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag(PagedPool, v14 + 10, 0x67655256u);
    if ( !PoolWithQuotaTag )
      return (unsigned int)-1073741670;
    PoolWithQuotaTag[4] = String1.Length;
    memmove(PoolWithQuotaTag + 5, String1.Buffer, String1.Length);
    v7 = VrpLoadDifferencingHive(&String1, 0, 0);
    if ( v7 >= 0 )
    {
      v18 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&gHostLoadedHivesLock, 0LL, 0);
      v19 = _interlockedbittestandset64((volatile signed __int32 *)&gHostLoadedHivesLock, 0LL);
      v20 = v18;
      if ( v19 )
        ExfAcquirePushLockExclusiveEx(&gHostLoadedHivesLock, v18, (ULONG_PTR)&gHostLoadedHivesLock);
      if ( v20 )
        v20[26] |= 1u;
      *(_QWORD *)PoolWithQuotaTag = gHostLoadedHives;
      gHostLoadedHives = (__int64)PoolWithQuotaTag;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&gHostLoadedHivesLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&gHostLoadedHivesLock);
      KeAbPostRelease((ULONG_PTR)&gHostLoadedHivesLock);
      return 0;
    }
  }
  if ( PoolWithQuotaTag )
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
  return (unsigned int)v7;
}
