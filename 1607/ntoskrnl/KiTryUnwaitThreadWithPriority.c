/*
 * XREFs of KiTryUnwaitThreadWithPriority @ 0x14007E9D4
 * Callers:
 *     KiWakePriQueueWaiter @ 0x14007E950 (KiWakePriQueueWaiter.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiSignalThread @ 0x14005E2A0 (KiSignalThread.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x14007F058 (KiSetBasePriorityAndClearDecrement.c)
 *     KiSetPriorityThread @ 0x1400D0A40 (KiSetPriorityThread.c)
 */

char __fastcall KiTryUnwaitThreadWithPriority(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rbx
  char v5; // bp
  unsigned int v9; // edi
  __int64 v10; // rax
  char result; // al
  __int64 v12; // r8
  int v13; // edx
  __int64 v14; // rcx
  int v15; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v16; // [rsp+68h] [rbp+20h] BYREF

  v16 = a4;
  v4 = *(_QWORD *)(a2 + 24);
  v5 = 0;
  v15 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v15);
    while ( *(_QWORD *)(v4 + 64) );
  }
  if ( *(_BYTE *)(v4 + 388) == 5 )
  {
    v9 = v16;
    v10 = (unsigned __int8)*(_DWORD *)(v4 + 540);
    if ( (_DWORD)v10 != v16 )
    {
      v13 = *(_DWORD *)(v4 + 540) & 0x100;
      if ( !v13 )
      {
        v14 = *(_QWORD *)(v4 + 232);
        _InterlockedDecrement((volatile signed __int32 *)(v14 + 4 * v10 + 536));
        _InterlockedIncrement((volatile signed __int32 *)(v14 + 4LL * (int)v16 + 536));
        v9 = v16;
      }
      *(_DWORD *)(v4 + 540) = v13 | (unsigned __int8)v9;
    }
    v5 = KiSignalThread(a1, v4, a3, a2);
    if ( v5 )
    {
      *(_BYTE *)(v4 + 645) = 0;
      KiSetBasePriorityAndClearDecrement(v4, &v16, 0LL);
      if ( v9 != *(char *)(v4 + 195) )
      {
        v12 = *(_QWORD *)(v4 + 72) + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v4 + 651);
        if ( (*(_DWORD *)(v4 + 120) & 0x10) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(v4 + 120), 4u);
        *(_QWORD *)(v4 + 32) = v12;
        KiSetPriorityThread(v4, 0LL, v16);
      }
    }
  }
  *(_QWORD *)(v4 + 64) = 0LL;
  result = v5;
  ++*(_BYTE *)(a2 + 17);
  return result;
}
