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

__int64 __fastcall LdrpProcessWork(__int64 a1, char a2)
{
  __int64 result; // rax
  int v5; // edi
  __int64 v6; // rdx
  int v7; // eax
  char v8; // bl

  result = *(_QWORD *)(a1 + 32);
  if ( *(int *)result < 0 )
    goto LABEL_19;
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
      goto LABEL_19;
    result = (unsigned int)LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrmap.c",
        1544,
        (unsigned int)"LdrpProcessWork",
        0,
        (__int64)"Unable to load DLL: \"%wZ\", Parent Module: \"%wZ\", Status: 0x%x\n");
      result = (unsigned int)LdrpDebugFlags;
    }
    if ( (result & 0x10) != 0 )
      __debugbreak();
    if ( v5 == -1073741515 )
    {
      LdrpLogError(-1073741515, 25, 0, a1);
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
LABEL_19:
  if ( !a2 )
  {
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    v7 = --LdrpWorkInProgress;
    if ( (__int64 *)LdrpWorkQueue != &LdrpWorkQueue || (v8 = 1, v7 != 1) )
      v8 = 0;
    result = RtlLeaveCriticalSection(&LdrpWorkQueueLock);
    if ( v8 )
      return ZwSetEvent(LdrpWorkCompleteEvent, 0LL);
  }
  return result;
}
