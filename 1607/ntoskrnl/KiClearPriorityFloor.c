/*
 * XREFs of KiClearPriorityFloor @ 0x14009FD80
 * Callers:
 *     KiAbThreadUnboostCpuPriority @ 0x14009FD10 (KiAbThreadUnboostCpuPriority.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiSetPriorityThread @ 0x1400D0A40 (KiSetPriorityThread.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

char __fastcall KiClearPriorityFloor(ULONG_PTR BugCheckParameter1, __int64 a2, char a3)
{
  char v6; // al
  unsigned int v7; // eax
  char v8; // dl
  unsigned __int8 v9; // cl
  char v10; // cl
  int v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v12);
    while ( *(_QWORD *)(BugCheckParameter1 + 64) );
  }
  v6 = *(_BYTE *)(a3 + BugCheckParameter1 + 1392);
  if ( !v6 )
    KeBugCheckEx(0x157u, BugCheckParameter1, a3, 2uLL, 0LL);
  LOBYTE(v7) = v6 - 1;
  *(_BYTE *)(a3 + BugCheckParameter1 + 1392) = v7;
  if ( !(_BYTE)v7 )
  {
    v7 = *(_DWORD *)(BugCheckParameter1 + 1408) ^ (1 << a3);
    *(_DWORD *)(BugCheckParameter1 + 1408) = v7;
    if ( v7 < 1 << a3 )
    {
      v8 = *(_BYTE *)(BugCheckParameter1 + 195);
      if ( v8 < 16 )
      {
        v9 = *(_BYTE *)(BugCheckParameter1 + 564);
        LOBYTE(v7) = v9 & 0xF;
        v10 = *(_BYTE *)(BugCheckParameter1 + 563) + (v9 & 0xF) + (v9 >> 4);
        if ( v10 < v8 )
          LOBYTE(v7) = KiSetPriorityThread(BugCheckParameter1, a2, (unsigned int)v10);
      }
    }
  }
  *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  return v7;
}
