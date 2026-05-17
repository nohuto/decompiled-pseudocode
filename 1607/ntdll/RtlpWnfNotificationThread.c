/*
 * XREFs of RtlpWnfNotificationThread @ 0x180065C30
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     TpSetWaitEx @ 0x18003BD60 (TpSetWaitEx.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x180065D48 (RtlpWnfProcessCurrentDescriptor.c)
 *     NtGetCompleteWnfStateSubscription @ 0x1800A80B0 (NtGetCompleteWnfStateSubscription.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x1800D9958 (RtlpWnfCalculateAndSetNextTimer.c)
 */

__int64 __fastcall RtlpWnfNotificationThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v4; // rsi
  unsigned int v5; // ebp
  unsigned int v6; // edi
  unsigned __int64 Heap; // rbx
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11[4]; // [rsp+38h] [rbp-20h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v4 = 0LL;
  v11[0] = -50000000LL;
  v10 = 0LL;
  v5 = 0;
  v6 = 0;
  Heap = 0LL;
  if ( !qword_1801530A0 )
    return result;
  TpSetWaitEx(a3, a2, 0LL, 0LL);
  while ( 1 )
  {
    if ( !Heap )
    {
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0x1030uLL);
      if ( !Heap )
        break;
    }
    result = ((__int64 (__fastcall *)(unsigned __int64, __int64 *, _QWORD, _QWORD, unsigned __int64, int))NtGetCompleteWnfStateSubscription)(
               v4,
               &v10,
               v5,
               v6,
               Heap,
               4144);
    if ( (int)result < 0 )
      goto LABEL_10;
    v6 = RtlpWnfProcessCurrentDescriptor(Heap, 0LL);
    if ( v6 == 259 )
    {
      v4 = 0LL;
      v5 = 0;
      v10 = 0LL;
      v6 = 0;
LABEL_16:
      Heap = 0LL;
    }
    else
    {
      v4 = Heap + 8;
      v10 = *(_QWORD *)Heap;
      v5 = *(_DWORD *)(Heap + 24);
      if ( v6 == -1073741267 )
      {
        RtlpWnfCalculateAndSetNextTimer();
        goto LABEL_16;
      }
    }
  }
  result = 3221225495LL;
LABEL_10:
  if ( (_DWORD)result != -2147483622 )
    result = TpSetWaitEx(a3, a2, v11, 0LL);
  if ( Heap )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  return result;
}
