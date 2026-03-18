/*
 * XREFs of EtwpDisableKernelTrace @ 0x14054AC78
 * Callers:
 *     EtwpUpdateKernelGroupMasks @ 0x14054A8A8 (EtwpUpdateKernelGroupMasks.c)
 *     EtwpEnableKernelTrace @ 0x14054A9EC (EtwpEnableKernelTrace.c)
 * Callees:
 *     KeCancelTimer @ 0x140066860 (KeCancelTimer.c)
 *     IoPerfReset @ 0x1401F7ED8 (IoPerfReset.c)
 *     KeStopProfile @ 0x140204E84 (KeStopProfile.c)
 *     DbgSetDebugPrintCallback @ 0x140246644 (DbgSetDebugPrintCallback.c)
 *     CmSetTraceNotifyRoutines @ 0x140652F88 (CmSetTraceNotifyRoutines.c)
 *     AlpcUnregisterLogRoutine @ 0x14069FF70 (AlpcUnregisterLogRoutine.c)
 *     ObDisableEtwReferenceTrace @ 0x1406AD058 (ObDisableEtwReferenceTrace.c)
 *     WmiSetNetworkNotify @ 0x1406E146C (WmiSetNetworkNotify.c)
 */

__int64 __fastcall EtwpDisableKernelTrace(__int64 a1, _DWORD *a2, __int64 a3)
{
  unsigned int v3; // ebp
  unsigned int i; // edi

  v3 = a3;
  if ( a2 )
  {
    if ( (*a2 & 0x20000) != 0 )
    {
      LOBYTE(a3) = 1;
      CmSetTraceNotifyRoutines(0LL, 0LL, a3);
    }
    if ( (*a2 & 0x100000) != 0 )
      AlpcUnregisterLogRoutine();
    if ( (*a2 & 0x2000000) != 0 )
      qword_140316470 = 0LL;
    if ( (*a2 & 0x4000000) != 0 )
      qword_140316468 = 0LL;
    if ( (*a2 & 0x200) != 0 )
      qword_140316460 = 0LL;
    if ( (*a2 & 0x100) != 0 )
    {
      EtwpDiskIoNotifyRoutines = 0LL;
      qword_140316450 = 0LL;
    }
    if ( (*a2 & 0x400) != 0 )
      qword_14034E348 = 0LL;
    if ( (a2[4] & 1) != 0 )
      qword_14034E350 = 0LL;
    if ( (a2[4] & 2) != 0 )
      qword_14034E358 = 0LL;
    if ( (*a2 & 0x200000) != 0 )
      EtwpSplitIoNotifyRoutines = 0LL;
    if ( (*a2 & 0x10000) != 0 )
      WmiSetNetworkNotify(0LL);
    if ( (a2[1] & 0x10) != 0 )
      IoPerfReset(1);
    if ( (a2[4] & 0x400000) != 0 )
      qword_140316430 = 0LL;
    if ( (a2[4] & 0x80000) != 0 )
      qword_140316438 = 0LL;
    if ( (a2[4] & 0x100000) != 0 )
      qword_140316440 = 0LL;
    if ( (a2[4] & 0x200000) != 0 )
      qword_140316448 = 0LL;
    if ( (a2[4] & 0x1000000) != 0 )
      qword_14031EE00 = 0LL;
    if ( (a2[4] & 0x2000000) != 0 )
      qword_14031EE08 = 0LL;
    if ( (a2[2] & 0x8000000) != 0 )
      qword_14031EE10 = 0LL;
    if ( (*a2 & 0x40000) != 0 )
      DbgSetDebugPrintCallback((PDEBUG_PRINT_CALLBACK)EtwpTraceDebugPrint, 0);
    if ( (a2[1] & 2) != 0 )
      KeStopProfile((ULONG_PTR)&EtwpProfileObject);
    if ( (a2[1] & 0x400) != 0 )
    {
      for ( i = 0; i < EtwpPmcProfile; ++i )
        KeStopProfile((ULONG_PTR)qword_1403274E8 + 248 * i);
    }
    if ( (a2[4] & 0x80u) != 0 )
      ObDisableEtwReferenceTrace();
    if ( (a2[1] & 0x880000) != 0 && (!a1 || (*(_DWORD *)(a1 + 4) & 0x880000) == 0) )
      KeCancelTimer(&EtwpMemInfoTimer);
  }
  return EtwpUpdateFileInfoDriverState(a1, a2, 0LL, v3);
}
