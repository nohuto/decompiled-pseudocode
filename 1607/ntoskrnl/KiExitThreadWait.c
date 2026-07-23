/*
 * XREFs of KiExitThreadWait @ 0x1400F06F0
 * Callers:
 *     MiWaitForInPageComplete @ 0x140024D30 (MiWaitForInPageComplete.c)
 *     KeWaitForMultipleObjects @ 0x140059E60 (KeWaitForMultipleObjects.c)
 *     KiCommitThreadWait @ 0x14005A850 (KiCommitThreadWait.c)
 *     KiFastExitThreadWait @ 0x1400F0678 (KiFastExitThreadWait.c)
 *     KiSatisfyThreadWait @ 0x1401DA7B8 (KiSatisfyThreadWait.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiDeliverApc @ 0x14005D750 (KiDeliverApc.c)
 *     KiSelectNextThread @ 0x1400C8450 (KiSelectNextThread.c)
 *     KiProcessDeferredReadyList @ 0x1400D12F0 (KiProcessDeferredReadyList.c)
 *     KiCheckForThreadDispatch @ 0x1400F07B0 (KiCheckForThreadDispatch.c)
 */

__int64 __fastcall KiExitThreadWait(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned __int8 v4; // bl
  char v6; // al
  __int64 result; // rax
  int v8; // [rsp+38h] [rbp+10h] BYREF
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v4 = *(_BYTE *)(a2 + 390);
  v6 = *(_BYTE *)(a2 + 112);
  if ( (v6 & 0x38) != 0 )
  {
    if ( (v6 & 0x18) != 0 )
    {
      if ( (v6 & 8) != 0 )
        _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xBu);
      v9 = 0LL;
      v8 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v8);
        while ( *(_QWORD *)(a1 + 48) );
      }
      if ( !*(_QWORD *)(a1 + 16) )
        KiSelectNextThread(a1, &v9, a3);
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      return KiProcessDeferredReadyList(a1, (__int64)&v9, v4);
    }
    else
    {
      LOBYTE(a2) = 1;
      KiCheckForThreadDispatch(a1, a2, a3, a4);
      KiDeliverApc(0, 0, 0LL);
      result = 0LL;
      __writecr8(0LL);
    }
  }
  else if ( (_BYTE)a3 )
  {
    return KiCheckForThreadDispatch(a1, v4, a3, a4);
  }
  else
  {
    result = v4;
    __writecr8(v4);
  }
  return result;
}
