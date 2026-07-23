/*
 * XREFs of LdrpProcessWork @ 0x18000928C
 * Callers:
 *     LdrpWorkCallback @ 0x180009200 (LdrpWorkCallback.c)
 *     LdrpLoadDllInternal @ 0x180011D2C (LdrpLoadDllInternal.c)
 *     LdrpLoadDependentModule @ 0x180013200 (LdrpLoadDependentModule.c)
 *     LdrpDrainWorkQueue @ 0x18002F794 (LdrpDrainWorkQueue.c)
 * Callees:
 *     LdrpLogError @ 0x180003CE8 (LdrpLogError.c)
 *     LdrpMapDllFullPath @ 0x18000946C (LdrpMapDllFullPath.c)
 *     LdrpMapDllSearchPath @ 0x18000A018 (LdrpMapDllSearchPath.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     LdrpSnapModule @ 0x180033FC0 (LdrpSnapModule.c)
 *     LdrpReportError @ 0x1800785E8 (LdrpReportError.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x18007E464 (LdrpLogLoadFailureEtwEvent.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x18007E788 (LdrpLogDeprecatedDllEtwEvent.c)
 *     ZwSetEvent @ 0x1800A5280 (ZwSetEvent.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 */

int __fastcall LdrpProcessWork(__int64 a1, char a2)
{
  __int64 v4; // rax
  int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // eax
  char v9; // bl
  int v11; // [rsp+20h] [rbp-28h]
  __int64 v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h]
  int v14; // [rsp+38h] [rbp-10h]

  v4 = *(_QWORD *)(a1 + 32);
  if ( *(int *)v4 < 0 )
    goto LABEL_21;
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
      goto LABEL_21;
    LODWORD(v4) = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 40);
      if ( v6 )
        v6 += 72LL;
      v14 = v5;
      v13 = v6;
      v12 = a1;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrmap.c",
        1544,
        (unsigned int)"LdrpProcessWork",
        0,
        (__int64)"Unable to load DLL: \"%wZ\", Parent Module: \"%wZ\", Status: 0x%x\n");
      LODWORD(v4) = LdrpDebugFlags;
    }
    if ( (v4 & 0x10) != 0 )
      __debugbreak();
    if ( v5 == -1073741515 )
    {
      LdrpLogError(-1073741515, 25, 0, a1);
      LdrpLogDeprecatedDllEtwEvent(a1);
      v7 = *(_QWORD *)(a1 + 40);
      if ( v7 )
        v7 += 72LL;
      LOBYTE(v11) = 0;
      LdrpLogLoadFailureEtwEvent(a1, v7, 3221225781LL, &LoadFailure, v11, v12, v13, v14);
      v4 = *(_QWORD *)(a1 + 48);
      if ( (*(_BYTE *)(v4 + 104) & 0x20) != 0 )
        LODWORD(v4) = LdrpReportError(a1, 0LL, 3221225781LL);
    }
  }
  if ( v5 < 0 )
  {
    v4 = *(_QWORD *)(a1 + 32);
    *(_DWORD *)v4 = v5;
  }
LABEL_21:
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
