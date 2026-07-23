/*
 * XREFs of VrpHandleIoctlLoadDifferencingHive @ 0x140613AAC
 * Callers:
 *     IoctlDeviceDispatch @ 0x140612B08 (IoctlDeviceDispatch.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     PsGetPermanentSiloContext @ 0x140091640 (PsGetPermanentSiloContext.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     PsGetJobSilo @ 0x14020F5C0 (PsGetJobSilo.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     VrpLockJobContextExclusive @ 0x140612FD8 (VrpLockJobContextExclusive.c)
 *     VrpUnlockJobContextExclusive @ 0x140613114 (VrpUnlockJobContextExclusive.c)
 *     VrpLoadDifferencingHive @ 0x140617528 (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x14061792C (VrpUnloadDifferencingHive.c)
 */

__int64 __fastcall VrpHandleIoctlLoadDifferencingHive(
        __int64 a1,
        unsigned int a2,
        KPROCESSOR_MODE a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int JobSilo; // ebx
  unsigned __int16 v10; // dx
  unsigned __int16 v11; // r8
  unsigned __int16 v12; // r9
  unsigned int v13; // ecx
  unsigned int v14; // r10d
  unsigned int v15; // ecx
  void *v16; // rcx
  __int64 v17; // rsi
  _WORD *PoolWithTag; // rbx
  UNICODE_STRING String1; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int16 v21; // [rsp+50h] [rbp-20h]
  unsigned __int16 v22; // [rsp+52h] [rbp-1Eh]
  unsigned __int64 v23; // [rsp+58h] [rbp-18h]
  unsigned __int16 v24; // [rsp+60h] [rbp-10h]
  unsigned __int16 v25; // [rsp+62h] [rbp-Eh]
  unsigned __int64 v26; // [rsp+68h] [rbp-8h]
  PVOID Object; // [rsp+A8h] [rbp+38h] BYREF

  Object = 0LL;
  a6 = 0LL;
  a5 = 0LL;
  if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, a3) || !SeSinglePrivilegeCheck(SeRestorePrivilege, a3) )
    return (unsigned int)-1073741727;
  if ( a2 < 0x20 )
    return (unsigned int)-1073741811;
  v10 = *(_WORD *)(a1 + 24);
  if ( (v10 & 1) != 0 )
    return (unsigned int)-1073741811;
  v11 = *(_WORD *)(a1 + 26);
  if ( (v11 & 1) != 0 )
    return (unsigned int)-1073741811;
  v12 = *(_WORD *)(a1 + 28);
  if ( (v12 & 1) != 0 )
    return (unsigned int)-1073741811;
  if ( !v10 )
    return (unsigned int)-1073741811;
  if ( !v11 )
    return (unsigned int)-1073741811;
  v13 = v10 + 30;
  v14 = v13 + v11;
  if ( v13 > v14 )
    return (unsigned int)-1073741811;
  v15 = v14 + v12;
  if ( v14 > v15 || a2 < v15 || *(_DWORD *)(a1 + 12) && !v12 )
    return (unsigned int)-1073741811;
  String1.MaximumLength = *(_WORD *)(a1 + 24);
  String1.Length = v10;
  String1.Buffer = (wchar_t *)(a1 + 30);
  v25 = v11;
  v16 = *(void **)a1;
  v26 = a1 + 30 + 2 * ((unsigned __int64)v10 >> 1);
  v24 = v11;
  v22 = v12;
  v23 = v26 + 2 * ((unsigned __int64)v11 >> 1);
  v21 = v12;
  JobSilo = ObReferenceObjectByHandleWithTag(v16, 6u, (POBJECT_TYPE)PsJobType, a3, 0x52566D43u, &Object, 0LL);
  if ( JobSilo >= 0 )
  {
    JobSilo = PsGetJobSilo((__int64)Object);
    if ( JobSilo >= 0 )
    {
      JobSilo = PsGetPermanentSiloContext(a5, gVregSiloContextSlot, (unsigned __int64 *)&a6);
      if ( JobSilo >= 0 )
      {
        v17 = a6;
        VrpLockJobContextExclusive(a6);
        if ( *(_DWORD *)(v17 + 84) )
        {
          JobSilo = -1073741738;
LABEL_20:
          VrpUnlockJobContextExclusive(v17);
          goto LABEL_21;
        }
        JobSilo = VrpLoadDifferencingHive(&String1, *(_DWORD *)(a1 + 12), *(_DWORD *)(a1 + 16));
        if ( JobSilo < 0 )
          goto LABEL_20;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, String1.Length + 10, 0x67655256u);
        if ( !PoolWithTag )
        {
          JobSilo = -1073741670;
          VrpUnloadDifferencingHive(&String1);
          goto LABEL_20;
        }
        PoolWithTag[4] = String1.Length;
        memmove(PoolWithTag + 5, String1.Buffer, String1.Length);
        *(_QWORD *)PoolWithTag = *(_QWORD *)(v17 + 24);
        *(_QWORD *)(v17 + 24) = PoolWithTag;
        VrpUnlockJobContextExclusive(v17);
        JobSilo = 0;
      }
    }
  }
LABEL_21:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
