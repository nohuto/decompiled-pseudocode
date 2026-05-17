/*
 * XREFs of TppGetCurrentThreadNumaNode @ 0x18000D404
 * Callers:
 *     TpAllocPoolInternal @ 0x1800061E0 (TpAllocPoolInternal.c)
 *     TppInitializeTimerSubQueue @ 0x180007CA4 (TppInitializeTimerSubQueue.c)
 *     TpReserveTaskPost @ 0x180008B64 (TpReserveTaskPost.c)
 *     TpAllocWait @ 0x180009600 (TpAllocWait.c)
 *     TppWorkInitialize @ 0x18000D374 (TppWorkInitialize.c)
 *     TppWorkerThread @ 0x18002B350 (TppWorkerThread.c)
 *     TppAllocAlpcCompletion @ 0x18006BF34 (TppAllocAlpcCompletion.c)
 *     TpAllocIoCompletion @ 0x1800777F0 (TpAllocIoCompletion.c)
 *     TpAllocJobNotification @ 0x180081660 (TpAllocJobNotification.c)
 *     RtlpTpIoAlloc @ 0x18008DD2C (RtlpTpIoAlloc.c)
 * Callees:
 *     TppAdjustRunningThreadGoal @ 0x1800F5174 (TppAdjustRunningThreadGoal.c)
 */

__int64 __fastcall TppGetCurrentThreadNumaNode(__int64 a1, _DWORD *a2, unsigned __int8 *a3)
{
  unsigned __int8 Number; // bp
  unsigned int v7; // r9d
  unsigned int v8; // edi
  unsigned __int16 Group; // r15
  unsigned int v10; // edx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 result; // rax

  Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
  v7 = TppNumberNodes;
  v8 = TppNumberNodes;
  Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
  if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
  {
    TppAdjustRunningThreadGoal();
    v7 = TppNumberNodes;
  }
  v10 = 0;
  if ( v7 )
  {
    v11 = *(_QWORD *)(a1 + 48);
    while ( 1 )
    {
      if ( *(_WORD *)(v11 + 16LL * v10 + 8) == Group )
      {
        v12 = *(_QWORD *)(v11 + 16LL * v10);
        if ( _bittest64(&v12, Number) )
          break;
      }
      if ( ++v10 >= v7 )
        goto LABEL_8;
    }
    v8 = v10;
  }
LABEL_8:
  result = v8 < v7 ? v8 : 0;
  *a2 = result;
  if ( a3 )
    *a3 = Number;
  return result;
}
