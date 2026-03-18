/*
 * XREFs of KiTryUnwaitThreadWithPriority @ 0x140094580
 * Callers:
 *     KiWakePriQueueWaiter @ 0x140094500 (KiWakePriQueueWaiter.c)
 * Callees:
 *     KiSignalThread @ 0x14007A4E0 (KiSignalThread.c)
 *     KiSetPriorityThread @ 0x14007BEA0 (KiSetPriorityThread.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1400950A0 (KiSetBasePriorityAndClearDecrement.c)
 */

char __fastcall KiTryUnwaitThreadWithPriority(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rbx
  char v5; // bp
  int v9; // edi
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // r8
  char result; // al
  int v15; // [rsp+58h] [rbp+10h] BYREF
  int v16; // [rsp+68h] [rbp+20h] BYREF

  v16 = a4;
  v4 = *(_QWORD *)(a2 + 24);
  v5 = 0;
  v15 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v15, a2, a3);
    while ( *(_QWORD *)(v4 + 64) );
  }
  if ( *(_BYTE *)(v4 + 388) == 5 )
  {
    v9 = v16;
    v10 = (unsigned __int8)*(_DWORD *)(v4 + 540);
    if ( (_DWORD)v10 != v16 )
    {
      v11 = *(_DWORD *)(v4 + 540) & 0x100;
      if ( !v11 )
      {
        v12 = *(_QWORD *)(v4 + 232);
        _InterlockedDecrement((volatile signed __int32 *)(v12 + 4 * v10 + 536));
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 4LL * v16 + 536));
        v9 = v16;
      }
      *(_DWORD *)(v4 + 540) = v11 | (unsigned __int8)v9;
    }
    v5 = KiSignalThread(a1, v4, a3, a2);
    if ( v5 )
    {
      *(_BYTE *)(v4 + 645) = 0;
      KiSetBasePriorityAndClearDecrement(v4, &v16, 0LL);
      if ( v9 != *(char *)(v4 + 195) )
      {
        v13 = *(_QWORD *)(v4 + 72) + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v4 + 651);
        if ( (*(_DWORD *)(v4 + 120) & 0x10) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(v4 + 120), 4u);
        *(_QWORD *)(v4 + 32) = v13;
        KiSetPriorityThread(v4, 0LL, v16);
      }
    }
  }
  *(_QWORD *)(v4 + 64) = 0LL;
  result = v5;
  ++*(_BYTE *)(a2 + 17);
  return result;
}
