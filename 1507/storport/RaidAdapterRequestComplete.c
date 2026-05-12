/*
 * XREFs of RaidAdapterRequestComplete @ 0x1C00221D8
 * Callers:
 *     RaidpAdapterContinueScatterGather @ 0x1C0004350 (RaidpAdapterContinueScatterGather.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C00043C0 (RaidAdapterPostScatterGatherExecute.c)
 *     StorTickEventQueue @ 0x1C0005A40 (StorTickEventQueue.c)
 *     RaidpAdapterContinueDataBufferScatterGather @ 0x1C0024AD0 (RaidpAdapterContinueDataBufferScatterGather.c)
 *     RaidUnitAbortSrbCompletion @ 0x1C0032600 (RaidUnitAbortSrbCompletion.c)
 * Callees:
 *     RaidLogMiniportCompletion @ 0x1C0004DE0 (RaidLogMiniportCompletion.c)
 */

char __fastcall RaidAdapterRequestComplete(__int64 a1, __int64 a2)
{
  PSLIST_ENTRY v4; // rax
  __int64 v5; // rax
  struct _PROCESSOR_NUMBER v6; // eax
  struct _KDPC *v7; // rcx
  void *v8; // rdx
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp+10h] BYREF

  if ( (qword_1C0044010 & 8) != 0 )
    RaidLogMiniportCompletion((_QWORD *)a2);
  if ( (*(_BYTE *)(a2 + 17) & 4) != 0 && _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 32), 0, 1) == 1 )
  {
    LOBYTE(v4) = *(_BYTE *)(a2 + 16) & 0xE3 | 0x14;
    *(_BYTE *)(a2 + 16) = (_BYTE)v4;
    return (char)v4;
  }
  v5 = *(_QWORD *)(a2 + 152);
  if ( v5 )
    *(_BYTE *)(v5 + 141) = -85;
  *(_BYTE *)(a2 + 16) = *(_BYTE *)(a2 + 16) & 0xE3 | 0x10;
  v6 = *(struct _PROCESSOR_NUMBER *)(a2 + 18);
  ProcNumber = v6;
  if ( v6.Group == 0xFFFF )
    goto LABEL_16;
  if ( (*(_BYTE *)(a1 + 4451) & 2) != 0 )
  {
    KeGetCurrentProcessorNumberEx(&ProcNumber);
    v6.Group = ProcNumber.Group;
  }
  if ( v6.Group >= (unsigned int)g_RaidPerfRedirectGroupCount
    || (unsigned int)ProcNumber.Number >= *((_DWORD *)g_RaidDPCRedirectionProcessors + v6.Group) )
  {
LABEL_16:
    ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 224), (PSLIST_ENTRY)(a2 + 32));
    v7 = (struct _KDPC *)(*(_QWORD *)(a1 + 8) + 200LL);
    v8 = 0LL;
    goto LABEL_17;
  }
  v4 = ExpInterlockedPushEntrySList(
         (PSLIST_HEADER)g_RaidPerProcessorState + 8 * (__int64)(ProcNumber.Number + (v6.Group << 6)) + 4,
         (PSLIST_ENTRY)(a2 + 32));
  if ( !v4 )
  {
    LOBYTE(v4) = ProcNumber.Number;
    if ( *((_DWORD *)g_RaidPerProcessorState + 2048 * (unsigned __int64)ProcNumber.Group + 32 * ProcNumber.Number + 20) != 2 )
    {
      v7 = (struct _KDPC *)((char *)g_RaidPerProcessorState
                          + 128 * (__int64)(ProcNumber.Number + (ProcNumber.Group << 6)));
      v8 = *(void **)(a1 + 8);
LABEL_17:
      LOBYTE(v4) = KeInsertQueueDpc(v7, v8, 0LL);
    }
  }
  return (char)v4;
}
