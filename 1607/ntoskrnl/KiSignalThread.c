/*
 * XREFs of KiSignalThread @ 0x14005E2A0
 * Callers:
 *     IopfCompleteRequest @ 0x1400530F0 (IopfCompleteRequest.c)
 *     AlpcpSignal @ 0x14005DED0 (AlpcpSignal.c)
 *     KeInsertPriQueue @ 0x14005F280 (KeInsertPriQueue.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400684D0 (ExpReleaseResourceForThreadLite.c)
 *     KiTryUnwaitThreadWithPriority @ 0x14007E9D4 (KiTryUnwaitThreadWithPriority.c)
 *     KeAlertThreadByThreadId @ 0x140096B20 (KeAlertThreadByThreadId.c)
 *     KiSuspendThread @ 0x1400C7874 (KiSuspendThread.c)
 *     KeAlertThread @ 0x1400C7B94 (KeAlertThread.c)
 *     KiSignalThreadForApc @ 0x1400C7FD4 (KiSignalThreadForApc.c)
 *     KiResumeThread @ 0x1400C92C0 (KiResumeThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 */

char __fastcall KiSignalThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // dl
  char result; // al
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // rcx
  int v15; // [rsp+48h] [rbp+10h] BYREF

  v6 = *(_BYTE *)(a2 + 112);
  result = 0;
  v9 = v6 & 7;
  if ( v9 == 1 || v9 == 4 )
  {
    v10 = *(_QWORD *)(a2 + 232);
    if ( v10 )
    {
      if ( (*(_BYTE *)v10 & 0x7F) == 0x15 )
      {
        v14 = (unsigned __int8)*(_DWORD *)(a2 + 540);
        *(_DWORD *)(a2 + 540) = v14;
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 4 * v14 + 536));
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 40));
      }
    }
    v11 = *(_QWORD *)(a2 + 712);
    if ( v11 )
    {
      v15 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 22672), 0LL) )
      {
        do
          KeYieldProcessorEx(&v15);
        while ( *(_QWORD *)(v11 + 22672) );
      }
      if ( *(_QWORD *)(a2 + 712) )
      {
        v12 = *(_QWORD *)(a2 + 216);
        v13 = *(_QWORD **)(a2 + 224);
        if ( *(_QWORD *)(v12 + 8) != a2 + 216 || *v13 != a2 + 216 )
          __fastfail(3u);
        *v13 = v12;
        *(_QWORD *)(v12 + 8) = v13;
        *(_QWORD *)(a2 + 712) = 0LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 22672), 0LL);
    }
    *(_BYTE *)(a2 + 388) = 7;
    *(_QWORD *)(a2 + 216) = *(_QWORD *)(a1 + 11400);
    *(_QWORD *)(a1 + 11400) = a2 + 216;
    *(_QWORD *)(a2 + 200) = a3;
    return 1;
  }
  if ( a4 )
  {
    if ( (v6 & 7) == 0 )
    {
      *(_BYTE *)(a2 + 112) = v6 & 0xF8 | 2;
      *(_QWORD *)(a2 + 200) = a3;
      *(_BYTE *)(a4 + 17) = 0;
      return 1;
    }
    if ( v9 == 5 )
    {
      *(_BYTE *)(a2 + 112) = v6 & 0xF8 | 6;
    }
    else if ( v9 == 3 )
    {
      *(_BYTE *)(a4 + 17) = 2;
    }
  }
  return result;
}
