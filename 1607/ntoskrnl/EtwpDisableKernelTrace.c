/*
 * XREFs of EtwpDisableKernelTrace @ 0x140496B74
 * Callers:
 *     EtwpUpdateKernelGroupMasks @ 0x1404967A0 (EtwpUpdateKernelGroupMasks.c)
 *     EtwpEnableKernelTrace @ 0x1404968E8 (EtwpEnableKernelTrace.c)
 * Callees:
 *     KeCancelTimer2 @ 0x1400F7600 (KeCancelTimer2.c)
 *     IoPerfReset @ 0x1401CA52C (IoPerfReset.c)
 *     KeStopProfile @ 0x1401D6C80 (KeStopProfile.c)
 *     DbgSetDebugPrintCallback @ 0x1402111E4 (DbgSetDebugPrintCallback.c)
 *     CmSetTraceNotifyRoutines @ 0x1405FB9AC (CmSetTraceNotifyRoutines.c)
 *     AlpcUnregisterLogRoutine @ 0x140656680 (AlpcUnregisterLogRoutine.c)
 *     ObDisableEtwReferenceTrace @ 0x140667324 (ObDisableEtwReferenceTrace.c)
 *     WmiSetNetworkNotify @ 0x14069F054 (WmiSetNetworkNotify.c)
 */

__int64 __fastcall EtwpDisableKernelTrace(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v5; // ebp
  unsigned int i; // edi

  v5 = a3;
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
      qword_1402F2770 = 0LL;
    if ( (*a2 & 0x4000000) != 0 )
      qword_1402F2768 = 0LL;
    if ( (*a2 & 0x200) != 0 )
      qword_1402F2760 = 0LL;
    if ( (*a2 & 0x100) != 0 )
    {
      EtwpDiskIoNotifyRoutines = 0LL;
      qword_1402F2750 = 0LL;
    }
    if ( (*a2 & 0x400) != 0 )
      qword_140326408 = 0LL;
    if ( (a2[4] & 1) != 0 )
      qword_140326410 = 0LL;
    if ( (a2[4] & 2) != 0 )
      qword_140326418 = 0LL;
    if ( (*a2 & 0x200000) != 0 )
      EtwpSplitIoNotifyRoutines = 0LL;
    if ( (*a2 & 0x10000) != 0 )
      WmiSetNetworkNotify(0LL);
    if ( (a2[1] & 0x10) != 0 )
      IoPerfReset(1);
    if ( (a2[4] & 0x400000) != 0 )
      qword_1402F2730 = 0LL;
    if ( (a2[4] & 0x80000) != 0 )
      qword_1402F2738 = 0LL;
    if ( (a2[4] & 0x100000) != 0 )
      qword_1402F2740 = 0LL;
    if ( (a2[4] & 0x200000) != 0 )
      qword_1402F2748 = 0LL;
    if ( (a2[4] & 0x1000000) != 0 )
      qword_1402F6F20 = 0LL;
    if ( (a2[4] & 0x2000000) != 0 )
      qword_1402F6F28 = 0LL;
    if ( (a2[2] & 0x8000000) != 0 )
      qword_1402F6F30 = 0LL;
    if ( (*a2 & 0x40000) != 0 )
      DbgSetDebugPrintCallback((PDEBUG_PRINT_CALLBACK)EtwpTraceDebugPrint, 0);
    if ( (a2[1] & 2) != 0 )
      KeStopProfile((ULONG_PTR)&EtwpProfileObject);
    if ( (a2[1] & 0x400) != 0 )
    {
      for ( i = 0; i < EtwpPmcProfile; ++i )
        KeStopProfile((ULONG_PTR)qword_1402FD668 + 248 * i);
    }
    if ( (a2[4] & 0x80u) != 0 )
      ObDisableEtwReferenceTrace();
    if ( (a2[1] & 0x880000) != 0 && (!a1 || (*(_DWORD *)(a1 + 4) & 0x880000) == 0) )
      KeCancelTimer2((__int64)&EtwpMemInfoTimer);
  }
  return EtwpUpdateFileInfoDriverState(a1, a2, 0LL, v5, a5);
}
