/*
 * XREFs of LdrpProcessWork @ 0x18000E18C
 * Callers:
 *     LdrpDrainWorkQueue @ 0x18000D60C (LdrpDrainWorkQueue.c)
 *     LdrpWorkCallback @ 0x18000E100 (LdrpWorkCallback.c)
 *     LdrpLoadDependentModule @ 0x180016670 (LdrpLoadDependentModule.c)
 *     LdrpLoadDllInternal @ 0x180018D20 (LdrpLoadDllInternal.c)
 * Callees:
 *     LdrpMapDllFullPath @ 0x18000E390 (LdrpMapDllFullPath.c)
 *     LdrpMapDllSearchPath @ 0x18000E5B8 (LdrpMapDllSearchPath.c)
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     LdrpSnapModule @ 0x180033F90 (LdrpSnapModule.c)
 *     LdrpReportError @ 0x18007AF78 (LdrpReportError.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x180081EB4 (LdrpLogLoadFailureEtwEvent.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800826B0 (LdrpLogDeprecatedDllEtwEvent.c)
 *     LdrpLogError @ 0x180086104 (LdrpLogError.c)
 *     ZwSetEvent @ 0x1800A65E0 (ZwSetEvent.c)
 *     LdrpLogDbgPrint @ 0x1800D063C (LdrpLogDbgPrint.c)
 */

int __fastcall LdrpProcessWork(__int64 a1, char a2)
{
  __int64 v4; // rax
  int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // eax
  char v9; // bl
  int v11; // [rsp+20h] [rbp-38h]

  v4 = *(_QWORD *)(a1 + 32);
  if ( *(int *)v4 < 0 )
    goto LABEL_23;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 152LL) + 56LL) )
  {
    LODWORD(v4) = LdrpSnapModule(a1);
    v5 = v4;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 24) & 0x200) != 0 )
      LODWORD(v4) = LdrpMapDllFullPath(a1);
    else
      LODWORD(v4) = LdrpMapDllSearchPath(a1);
    v5 = v4;
    if ( (int)v4 >= 0 )
      goto LABEL_23;
    LODWORD(v4) = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v7 = *(_QWORD *)(a1 + 40);
      if ( v7 )
        v7 += 72LL;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrmap.c",
        1544,
        (unsigned int)"LdrpProcessWork",
        0,
        (__int64)"Unable to load DLL: \"%wZ\", Parent Module: \"%wZ\", Status: 0x%x\n",
        a1,
        v7,
        v5);
      LODWORD(v4) = LdrpDebugFlags;
    }
    if ( (v4 & 0x10) != 0 )
      __debugbreak();
    if ( v5 == -1073741515 )
    {
      LdrpLogError(3221225781LL, 25LL, 0LL, a1);
      LdrpLogDeprecatedDllEtwEvent(a1);
      v6 = *(_QWORD *)(a1 + 40);
      if ( v6 )
        v6 += 72LL;
      LOBYTE(v11) = 0;
      LdrpLogLoadFailureEtwEvent(a1, v6, 3221225781LL, &LoadFailure, v11);
      v4 = *(_QWORD *)(a1 + 48);
      if ( (*(_BYTE *)(v4 + 104) & 0x20) != 0 )
        LODWORD(v4) = LdrpReportError(a1, 0LL, 3221225781LL);
    }
  }
  if ( v5 < 0 )
    **(_DWORD **)(a1 + 32) = v5;
LABEL_23:
  if ( !a2 )
  {
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    v8 = --LdrpWorkInProgress;
    if ( (__int64 *)LdrpWorkQueue != &LdrpWorkQueue || (v9 = 1, v8 != 1) )
      v9 = 0;
    LODWORD(v4) = RtlLeaveCriticalSection(&LdrpWorkQueueLock);
    if ( v9 )
      LODWORD(v4) = ZwSetEvent(LdrpWorkCompleteEvent, 0LL);
  }
  return v4;
}
