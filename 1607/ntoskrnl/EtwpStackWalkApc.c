/*
 * XREFs of EtwpStackWalkApc @ 0x140229350
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     EtwpTraceStackWalk @ 0x14022944C (EtwpTraceStackWalk.c)
 */

__int64 __fastcall EtwpStackWalkApc(PSLIST_ENTRY ListEntry, _QWORD *a2, unsigned int *a3, int *a4, int *a5)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v10; // rbp
  __int64 result; // rax
  unsigned int v12; // ebx
  int v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+44h] [rbp+Ch]

  CurrentThread = KeGetCurrentThread();
  v10 = *(_QWORD *)(KeGetPrcb((ULONG)ListEntry[6].Next) + 24536);
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)(v10 + 1184), ListEntry);
  result = *((unsigned int *)&CurrentThread[1].SwapListEntry + 2);
  v12 = *a3;
  if ( (result & 1) == 0 )
  {
    v13 = *a4;
    v14 = *a5;
    result = EtwpTraceStackWalk(v12, 4096LL, CurrentThread, &v13);
  }
  _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, (HIWORD(v12) & 7) + 24);
  _InterlockedDecrement((volatile signed __int32 *)(v10 + 2544));
  *a2 = 0LL;
  return result;
}
