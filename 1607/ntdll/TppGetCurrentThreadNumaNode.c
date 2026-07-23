/*
 * XREFs of TppGetCurrentThreadNumaNode @ 0x18003E1CC
 * Callers:
 *     TppWorkerThread @ 0x18001E740 (TppWorkerThread.c)
 *     TpAllocWait @ 0x18003A570 (TpAllocWait.c)
 *     TppWorkInitialize @ 0x18003D79C (TppWorkInitialize.c)
 *     TppAllocAlpcCompletion @ 0x180065604 (TppAllocAlpcCompletion.c)
 *     TpAllocPoolInternal @ 0x180072E64 (TpAllocPoolInternal.c)
 *     TppInitializeTimerSubQueue @ 0x180073340 (TppInitializeTimerSubQueue.c)
 *     TpAllocIoCompletion @ 0x180079E60 (TpAllocIoCompletion.c)
 *     TpReserveTaskPost @ 0x180080444 (TpReserveTaskPost.c)
 *     TpAllocJobNotification @ 0x180084510 (TpAllocJobNotification.c)
 *     RtlpTpIoAlloc @ 0x18009052C (RtlpTpIoAlloc.c)
 * Callees:
 *     TppAdjustRunningThreadGoal @ 0x1800FE164 (TppAdjustRunningThreadGoal.c)
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
    TppAdjustRunningThreadGoal(a1);
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
