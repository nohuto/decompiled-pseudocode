/*
 * XREFs of VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x140614030
 * Callers:
 *     IoctlDeviceDispatch @ 0x140612B08 (IoctlDeviceDispatch.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     VrpUnloadDifferencingHive @ 0x14061792C (VrpUnloadDifferencingHive.c)
 */

__int64 __fastcall VrpHandleIoctlUnloadDifferencingHiveForHost(__int64 a1, unsigned int a2, KPROCESSOR_MODE a3)
{
  _QWORD *v5; // rsi
  unsigned int v6; // edi
  unsigned __int16 v7; // ax
  unsigned int v8; // eax
  _BYTE *v9; // rax
  signed __int8 v10; // cf
  _BYTE *v11; // rbx
  __int64 v12; // rbx
  __int64 *v13; // rdi
  int v14; // eax
  _BYTE *v15; // rax
  _BYTE *v16; // rbp
  UNICODE_STRING String1; // [rsp+20h] [rbp-38h] BYREF
  UNICODE_STRING String2; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0LL;
  if ( a2 < 8 )
    return (unsigned int)-1073741811;
  v7 = *(_WORD *)(a1 + 4);
  if ( (v7 & 1) != 0 )
    return (unsigned int)-1073741811;
  if ( !v7 )
    return (unsigned int)-1073741811;
  if ( *(_DWORD *)a1 )
    return (unsigned int)-1073741811;
  v8 = v7 + 6;
  if ( v8 < 6 || a2 < v8 )
  {
    return (unsigned int)-1073741811;
  }
  else if ( SeSinglePrivilegeCheck(SeBackupPrivilege, a3) && SeSinglePrivilegeCheck(SeRestorePrivilege, a3) )
  {
    String1.Buffer = (wchar_t *)(a1 + 6);
    String1.MaximumLength = *(_WORD *)(a1 + 4);
    String1.Length = String1.MaximumLength;
    v9 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&gHostLoadedHivesLock, 0LL, 0);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&gHostLoadedHivesLock, 0LL);
    v11 = v9;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(&gHostLoadedHivesLock, v9, (ULONG_PTR)&gHostLoadedHivesLock);
    if ( v11 )
      v11[26] |= 1u;
    v12 = gHostLoadedHives;
    v13 = &gHostLoadedHives;
    while ( v12 )
    {
      String2.Buffer = (wchar_t *)(v12 + 10);
      String2.Length = *(_WORD *)(v12 + 8);
      String2.MaximumLength = String2.Length;
      if ( RtlEqualUnicodeString(&String1, &String2, 1u) )
      {
        v5 = (_QWORD *)v12;
        *v13 = *(_QWORD *)v12;
        *(_QWORD *)v12 = 0LL;
        break;
      }
      v13 = (__int64 *)v12;
      v12 = *(_QWORD *)v12;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&gHostLoadedHivesLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&gHostLoadedHivesLock);
    KeAbPostRelease((ULONG_PTR)&gHostLoadedHivesLock);
    if ( v5 )
    {
      v14 = VrpUnloadDifferencingHive(&String1);
      if ( v14 == -1073741772 )
        v14 = 0;
      v6 = v14;
      if ( v14 >= 0 )
      {
        ExFreePoolWithTag(v5, 0);
        v5 = 0LL;
        v6 = 0;
      }
      if ( v5 )
      {
        v15 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&gHostLoadedHivesLock, 0LL, 0);
        v10 = _interlockedbittestandset64((volatile signed __int32 *)&gHostLoadedHivesLock, 0LL);
        v16 = v15;
        if ( v10 )
          ExfAcquirePushLockExclusiveEx(&gHostLoadedHivesLock, v15, (ULONG_PTR)&gHostLoadedHivesLock);
        if ( v16 )
          v16[26] |= 1u;
        *v5 = gHostLoadedHives;
        gHostLoadedHives = (__int64)v5;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&gHostLoadedHivesLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&gHostLoadedHivesLock);
        KeAbPostRelease((ULONG_PTR)&gHostLoadedHivesLock);
      }
    }
    else
    {
      return (unsigned int)-1073741772;
    }
  }
  else
  {
    return (unsigned int)-1073741727;
  }
  return v6;
}
