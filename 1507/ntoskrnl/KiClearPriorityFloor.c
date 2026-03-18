/*
 * XREFs of KiClearPriorityFloor @ 0x14011B9F0
 * Callers:
 *     KiAbThreadUnboostCpuPriority @ 0x14011B984 (KiAbThreadUnboostCpuPriority.c)
 * Callees:
 *     KiSetPriorityThread @ 0x14009B110 (KiSetPriorityThread.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

char __fastcall KiClearPriorityFloor(ULONG_PTR BugCheckParameter1, _QWORD *a2, char a3)
{
  unsigned int v3; // edi
  char v7; // al
  unsigned int v8; // eax
  char v9; // dl
  unsigned __int8 v10; // cl
  char v11; // cl

  v3 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
  {
    do
    {
      if ( (++v3 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v3);
    }
    while ( *(_QWORD *)(BugCheckParameter1 + 64) );
  }
  v7 = *(_BYTE *)(a3 + BugCheckParameter1 + 1392);
  if ( !v7 )
    KeBugCheckEx(0x157u, BugCheckParameter1, a3, 2uLL, 0LL);
  LOBYTE(v8) = v7 - 1;
  *(_BYTE *)(a3 + BugCheckParameter1 + 1392) = v8;
  if ( !(_BYTE)v8 )
  {
    v8 = *(_DWORD *)(BugCheckParameter1 + 1408) ^ (1 << a3);
    *(_DWORD *)(BugCheckParameter1 + 1408) = v8;
    if ( v8 < 1 << a3 )
    {
      v9 = *(_BYTE *)(BugCheckParameter1 + 195);
      if ( v9 < 16 )
      {
        v10 = *(_BYTE *)(BugCheckParameter1 + 564);
        LOBYTE(v8) = v10 & 0xF;
        v11 = *(_BYTE *)(BugCheckParameter1 + 563) + (v10 & 0xF) + (v10 >> 4);
        if ( v11 < v9 )
          LOBYTE(v8) = KiSetPriorityThread(BugCheckParameter1, a2, v11);
      }
    }
  }
  *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  return v8;
}
