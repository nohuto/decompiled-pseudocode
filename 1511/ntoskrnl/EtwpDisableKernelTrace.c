/*
 * XREFs of EtwpDisableKernelTrace @ 0x1404B8504
 * Callers:
 *     EtwpUpdateKernelGroupMasks @ 0x1404B8124 (EtwpUpdateKernelGroupMasks.c)
 *     EtwpEnableKernelTrace @ 0x1404B8278 (EtwpEnableKernelTrace.c)
 * Callees:
 *     KeCancelTimer2 @ 0x1400C5258 (KeCancelTimer2.c)
 *     IoPerfReset @ 0x1401BC674 (IoPerfReset.c)
 *     KeStopProfile @ 0x1401C7E10 (KeStopProfile.c)
 *     DbgSetDebugPrintCallback @ 0x1401F7814 (DbgSetDebugPrintCallback.c)
 *     CmSetTraceNotifyRoutines @ 0x1405DDA5C (CmSetTraceNotifyRoutines.c)
 *     AlpcUnregisterLogRoutine @ 0x1406208F4 (AlpcUnregisterLogRoutine.c)
 *     ObDisableEtwReferenceTrace @ 0x14062F160 (ObDisableEtwReferenceTrace.c)
 *     WmiSetNetworkNotify @ 0x14065EBC4 (WmiSetNetworkNotify.c)
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
      qword_1402C7390 = 0LL;
    if ( (*a2 & 0x4000000) != 0 )
      qword_1402C7388 = 0LL;
    if ( (*a2 & 0x200) != 0 )
      qword_1402C7380 = 0LL;
    if ( (*a2 & 0x100) != 0 )
    {
      EtwpDiskIoNotifyRoutines = 0LL;
      qword_1402C7370 = 0LL;
    }
    if ( (*a2 & 0x400) != 0 )
      qword_1402FDEA0 = 0LL;
    if ( (a2[4] & 1) != 0 )
      qword_1402FDEA8 = 0LL;
    if ( (a2[4] & 2) != 0 )
      qword_1402FDEB0 = 0LL;
    if ( (*a2 & 0x200000) != 0 )
      EtwpSplitIoNotifyRoutines = 0LL;
    if ( (*a2 & 0x10000) != 0 )
      WmiSetNetworkNotify(0LL);
    if ( (a2[1] & 0x10) != 0 )
      IoPerfReset(1);
    if ( (a2[4] & 0x400000) != 0 )
      qword_1402C7350 = 0LL;
    if ( (a2[4] & 0x80000) != 0 )
      qword_1402C7358 = 0LL;
    if ( (a2[4] & 0x100000) != 0 )
      qword_1402C7360 = 0LL;
    if ( (a2[4] & 0x200000) != 0 )
      qword_1402C7368 = 0LL;
    if ( (a2[4] & 0x1000000) != 0 )
      qword_1402D21E0 = 0LL;
    if ( (a2[4] & 0x2000000) != 0 )
      qword_1402D21E8 = 0LL;
    if ( (a2[2] & 0x8000000) != 0 )
      qword_1402D21F0 = 0LL;
    if ( (*a2 & 0x40000) != 0 )
      DbgSetDebugPrintCallback((PDEBUG_PRINT_CALLBACK)EtwpTraceDebugPrint, 0);
    if ( (a2[1] & 2) != 0 )
      KeStopProfile((ULONG_PTR)&EtwpProfileObject);
    if ( (a2[1] & 0x400) != 0 )
    {
      for ( i = 0; i < EtwpPmcProfile; ++i )
        KeStopProfile((ULONG_PTR)qword_1402D81B8 + 248 * i);
    }
    if ( (a2[4] & 0x80u) != 0 )
      ObDisableEtwReferenceTrace();
    if ( (a2[1] & 0x880000) != 0 && (!a1 || (*(_DWORD *)(a1 + 4) & 0x880000) == 0) )
      KeCancelTimer2((__int64)EtwpMemInfoTimer);
  }
  return EtwpUpdateFileInfoDriverState(a1, a2, 0LL, v5, a5);
}
