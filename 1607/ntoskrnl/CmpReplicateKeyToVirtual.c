/*
 * XREFs of CmpReplicateKeyToVirtual @ 0x140601798
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x1404D91F4 (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140600020 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     EtwGetKernelTraceTimestamp @ 0x140059D50 (EtwGetKernelTraceTimestamp.c)
 *     ExConvertExclusiveToSharedLite @ 0x1400A5C20 (ExConvertExclusiveToSharedLite.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ExTryConvertSharedToExclusiveLite @ 0x14022D9F4 (ExTryConvertSharedToExclusiveLite.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmRealKCBToVirtualPath @ 0x1403E1950 (CmRealKCBToVirtualPath.c)
 *     CmpLockKcbExclusive @ 0x140422050 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x140438610 (CmpUnlockKcb.c)
 *     RtlFreeAnsiString @ 0x140458CF0 (RtlFreeAnsiString.c)
 *     CmpBuildVirtualReplicationStack @ 0x140600808 (CmpBuildVirtualReplicationStack.c)
 *     CmpDestroyVirtualStack @ 0x140600A64 (CmpDestroyVirtualStack.c)
 *     CmpDoBuildVirtualStack @ 0x140600BE8 (CmpDoBuildVirtualStack.c)
 *     CmpGetVirtualStoreRoot @ 0x1406016A8 (CmpGetVirtualStoreRoot.c)
 */

__int64 __fastcall CmpReplicateKeyToVirtual(char *P, char a2, ULONG_PTR *a3)
{
  __int64 (__fastcall *v3)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rbx
  char *v4; // rsi
  char v8; // r15
  int VirtualStoreRoot; // ebx
  __int64 v10; // rcx
  _DWORD *v11; // r14
  __int64 v12; // rcx
  ULONG_PTR v13; // r8
  unsigned int v14; // edx
  UNICODE_STRING *p_DestinationString; // rcx
  unsigned int v17; // [rsp+30h] [rbp-50h] BYREF
  PVOID Pa; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  ULONG_PTR v20; // [rsp+50h] [rbp-30h] BYREF
  __int64 v21; // [rsp+58h] [rbp-28h] BYREF
  int v22; // [rsp+60h] [rbp-20h] BYREF
  __int64 v23; // [rsp+64h] [rbp-1Ch]
  int v24; // [rsp+6Ch] [rbp-14h]

  v22 = 0;
  v3 = CmpTraceRoutine;
  v4 = 0LL;
  v23 = 0LL;
  v24 = 0;
  if ( CmpTraceRoutine )
  {
    EtwGetKernelTraceTimestamp((char *)&v22, 0x20000uLL);
    v3 = CmpTraceRoutine;
  }
  v20 = 0LL;
  Pa = 0LL;
  v17 = 0;
  v8 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v21 = 0LL;
  if ( v3 && P )
    v4 = P;
  if ( !a2 )
  {
    v8 = ExTryConvertSharedToExclusiveLite();
    if ( !v8 )
    {
      VirtualStoreRoot = -1073741739;
LABEL_22:
      if ( CmpTraceRoutine )
      {
        p_DestinationString = &DestinationString;
        LOBYTE(p_DestinationString) = 26;
        CmpTraceRoutine(p_DestinationString, &v22, (unsigned int)VirtualStoreRoot, 0LL, v4, &DestinationString);
      }
      if ( DestinationString.Buffer )
        RtlFreeAnsiString(&DestinationString);
      return (unsigned int)VirtualStoreRoot;
    }
  }
  CmpUnlockKcb(P);
  VirtualStoreRoot = CmRealKCBToVirtualPath((__int64)P, 0LL, &DestinationString);
  if ( VirtualStoreRoot >= 0 )
  {
    if ( (int)CmpBuildVirtualReplicationStack((__int64)P, (__int64)&DestinationString, &v17, &Pa) >= 0 )
    {
      v11 = Pa;
      if ( v17 )
      {
        VirtualStoreRoot = CmpGetVirtualStoreRoot((__int64 *)&v20, (int *)&Pa, &v21);
        if ( VirtualStoreRoot >= 0 )
        {
          v12 = v21;
          v13 = v20;
          v14 = v17;
          *a3 = v20;
          v11[8] = *(_DWORD *)(v12 + 32);
          *((_QWORD *)v11 + 2) = v12;
          VirtualStoreRoot = CmpDoBuildVirtualStack((__int64)v11, v14, v13, (__int64)P);
        }
      }
      else
      {
        VirtualStoreRoot = -1073741811;
      }
      if ( v11 )
      {
        CmpDestroyVirtualStack((__int64)v11, v17);
        ExFreePoolWithTag(v11, 0);
      }
    }
    else
    {
      VirtualStoreRoot = -1073741670;
    }
    CmpLockKcbExclusive((__int64)P);
    if ( v8 )
      ExConvertExclusiveToSharedLite(&CmpRegistryLock);
    goto LABEL_22;
  }
  if ( CmpTraceRoutine )
  {
    LOBYTE(v10) = 26;
    CmpTraceRoutine(v10, &v22, (unsigned int)VirtualStoreRoot, 0LL, v4, &DestinationString);
  }
  return (unsigned int)VirtualStoreRoot;
}
