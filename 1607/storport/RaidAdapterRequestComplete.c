/*
 * XREFs of RaidAdapterRequestComplete @ 0x1C0027AF8
 * Callers:
 *     RaidpAdapterContinueScatterGather @ 0x1C0005720 (RaidpAdapterContinueScatterGather.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C0005790 (RaidAdapterPostScatterGatherExecute.c)
 *     StorTickEventQueue @ 0x1C0009530 (StorTickEventQueue.c)
 *     RaidpAdapterContinueDataBufferScatterGather @ 0x1C002A420 (RaidpAdapterContinueDataBufferScatterGather.c)
 *     RaidUnitAbortSrbCompletion @ 0x1C0036FB0 (RaidUnitAbortSrbCompletion.c)
 * Callees:
 *     RaidLogMiniportCompletion @ 0x1C0002950 (RaidLogMiniportCompletion.c)
 */

char __fastcall RaidAdapterRequestComplete(__int64 a1, __int64 a2, char a3)
{
  PSLIST_ENTRY v6; // rax
  __int64 v7; // rax
  struct _PROCESSOR_NUMBER v8; // eax
  struct _KDPC *v9; // rcx
  void *v10; // rdx
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_BYTE *)(a1 + 544) & 2) != 0 && !a3 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 5208));
  if ( (qword_1C004F2A0 & 8) == 0 )
  {
LABEL_7:
    if ( !a3 && (*(_BYTE *)(a1 + 524) & 0x10) != 0 )
    {
      LODWORD(v6) = _InterlockedExchange((volatile __int32 *)(a2 + 776), 4);
      if ( (_DWORD)v6 == 1 )
        return (char)v6;
    }
    goto LABEL_10;
  }
  if ( !a3 )
  {
    RaidLogMiniportCompletion((_QWORD *)a2);
    goto LABEL_7;
  }
LABEL_10:
  v7 = *(_QWORD *)(a2 + 160);
  if ( v7 )
    *(_BYTE *)(v7 + 141) = -85;
  *(_BYTE *)(a2 + 16) = *(_BYTE *)(a2 + 16) & 0xE3 | 0x10;
  v8 = *(struct _PROCESSOR_NUMBER *)(a2 + 18);
  ProcNumber = v8;
  if ( v8.Group == 0xFFFF )
    goto LABEL_20;
  if ( (*(_BYTE *)(a1 + 4451) & 2) != 0 )
  {
    KeGetCurrentProcessorNumberEx(&ProcNumber);
    v8.Group = ProcNumber.Group;
  }
  if ( v8.Group >= (unsigned int)g_RaidPerfRedirectGroupCount
    || (unsigned int)ProcNumber.Number >= *((_DWORD *)g_RaidDPCRedirectionProcessors + v8.Group) )
  {
LABEL_20:
    ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 224), (PSLIST_ENTRY)(a2 + 32));
    v9 = (struct _KDPC *)(*(_QWORD *)(a1 + 8) + 200LL);
    v10 = 0LL;
    goto LABEL_21;
  }
  v6 = ExpInterlockedPushEntrySList(
         (PSLIST_HEADER)g_RaidPerProcessorState + 8 * (__int64)(ProcNumber.Number + (v8.Group << 6)) + 4,
         (PSLIST_ENTRY)(a2 + 32));
  if ( !v6 )
  {
    LOBYTE(v6) = ProcNumber.Number;
    v9 = (struct _KDPC *)((char *)g_RaidPerProcessorState + 128 * (__int64)(ProcNumber.Number + (ProcNumber.Group << 6)));
    if ( LODWORD(v9[1].ProcessorHistory) != 2 )
    {
      v10 = *(void **)(a1 + 8);
LABEL_21:
      LOBYTE(v6) = KeInsertQueueDpc(v9, v10, 0LL);
    }
  }
  return (char)v6;
}
