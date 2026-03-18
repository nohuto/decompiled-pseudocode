/*
 * XREFs of KiExitThreadWait @ 0x14002AC60
 * Callers:
 *     KiFastExitThreadWait @ 0x14002ABE8 (KiFastExitThreadWait.c)
 *     KiCommitThreadWait @ 0x140081ED0 (KiCommitThreadWait.c)
 *     KiSatisfyThreadWait @ 0x1401CB548 (KiSatisfyThreadWait.c)
 * Callees:
 *     KiSelectNextThread @ 0x14002A940 (KiSelectNextThread.c)
 *     KiCheckForThreadDispatch @ 0x14002AD14 (KiCheckForThreadDispatch.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiProcessDeferredReadyList @ 0x14007DC70 (KiProcessDeferredReadyList.c)
 *     KiDeliverApc @ 0x140083D40 (KiDeliverApc.c)
 */

__int64 __fastcall KiExitThreadWait(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // si
  char v5; // al
  __int64 result; // rax
  int v7; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v3 = *(_BYTE *)(a2 + 390);
  v5 = *(_BYTE *)(a2 + 112);
  if ( (v5 & 0x38) != 0 )
  {
    if ( (v5 & 0x18) != 0 )
    {
      if ( (v5 & 8) != 0 )
        _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xBu);
      v8 = 0LL;
      v7 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v7);
        while ( *(_QWORD *)(a1 + 48) );
      }
      if ( !*(_QWORD *)(a1 + 16) )
        KiSelectNextThread(a1, &v8);
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      LOBYTE(a3) = v3;
      return KiProcessDeferredReadyList(a1, &v8, a3);
    }
    else
    {
      LOBYTE(a2) = 1;
      KiCheckForThreadDispatch(a1, a2);
      result = KiDeliverApc(0LL, 0LL, 0LL);
      __writecr8(0LL);
    }
  }
  else if ( (_BYTE)a3 )
  {
    LOBYTE(a2) = *(_BYTE *)(a2 + 390);
    return KiCheckForThreadDispatch(a1, a2);
  }
  else
  {
    result = v3;
    __writecr8(v3);
  }
  return result;
}
