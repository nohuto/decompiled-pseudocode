/*
 * XREFs of LdrpProcessWork @ 0x18003913C
 * Callers:
 *     LdrpLoadDllInternal @ 0x180020AC4 (LdrpLoadDllInternal.c)
 *     LdrpLoadDependentModule @ 0x180022010 (LdrpLoadDependentModule.c)
 *     LdrpDrainWorkQueue @ 0x180035978 (LdrpDrainWorkQueue.c)
 *     LdrpWorkCallback @ 0x18003BF00 (LdrpWorkCallback.c)
 * Callees:
 *     LdrpSnapModule @ 0x1800156C0 (LdrpSnapModule.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     LdrpMapDllSearchPath @ 0x180042A04 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllFullPath @ 0x180042CB4 (LdrpMapDllFullPath.c)
 *     LdrpReportError @ 0x18006A65C (LdrpReportError.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x180073030 (LdrpLogLoadFailureEtwEvent.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800739D8 (LdrpLogDeprecatedDllEtwEvent.c)
 *     LdrpLogError @ 0x180075B80 (LdrpLogError.c)
 *     ZwSetEvent @ 0x1800939E0 (ZwSetEvent.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpProcessWork(__int64 a1, char a2)
{
  __int64 result; // rax
  int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // eax
  char v9; // bl

  result = *(_QWORD *)(a1 + 32);
  if ( *(int *)result < 0 )
    goto LABEL_23;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 152LL) + 56LL) )
  {
    result = LdrpSnapModule(a1);
    v5 = result;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 24) & 0x200) != 0 )
      result = LdrpMapDllFullPath(a1);
    else
      result = LdrpMapDllSearchPath(a1);
    v5 = result;
    if ( (int)result >= 0 )
      goto LABEL_23;
    result = (unsigned int)LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v7 = *(_QWORD *)(a1 + 40);
      if ( v7 )
        v7 += 72LL;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrmap.c",
        1529,
        (unsigned int)"LdrpProcessWork",
        0,
        "Unable to load DLL: \"%wZ\", Parent Module: \"%wZ\", Status: 0x%x\n",
        a1,
        v7,
        v5);
      result = (unsigned int)LdrpDebugFlags;
    }
    if ( (result & 0x10) != 0 )
      __debugbreak();
    if ( v5 == -1073741515 )
    {
      LdrpLogError(3221225781LL, 25LL, 0LL, a1);
      LdrpLogDeprecatedDllEtwEvent(a1);
      v6 = *(_QWORD *)(a1 + 40);
      if ( v6 )
        LODWORD(v6) = v6 + 72;
      LdrpLogLoadFailureEtwEvent(a1, v6, -1073741515, (unsigned int)&LoadFailure, 0);
      result = *(_QWORD *)(a1 + 48);
      if ( (*(_BYTE *)(result + 104) & 0x20) != 0 )
        result = LdrpReportError(a1, 0LL, 3221225781LL);
    }
  }
  if ( v5 < 0 )
  {
    result = *(_QWORD *)(a1 + 32);
    *(_DWORD *)result = v5;
  }
LABEL_23:
  if ( !a2 )
  {
    RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
    v8 = --LdrpWorkInProgress;
    if ( (__int64 *)LdrpWorkQueue != &LdrpWorkQueue || (v9 = 1, v8 != 1) )
      v9 = 0;
    result = RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
    if ( v9 )
      return ZwSetEvent(LdrpWorkCompleteEvent, 0LL);
  }
  return result;
}
