/*
 * XREFs of MiFreeLargePages @ 0x14022F190
 * Callers:
 *     MiDeleteVad @ 0x14008B8E0 (MiDeleteVad.c)
 * Callees:
 *     MiFreeLargePageMemory @ 0x1400FF890 (MiFreeLargePageMemory.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall MiFreeLargePages(__int64 *a1)
{
  __int64 v1; // rsi
  volatile signed __int32 *v2; // rbx
  __int64 *v3; // r14
  unsigned __int8 CurrentIrql; // r15
  unsigned int v5; // edi

  v1 = 0LL;
  v2 = (volatile signed __int32 *)a1;
  if ( a1 != (__int64 *)0xFFFFFFFFFLL )
  {
    do
    {
      v3 = *(__int64 **)v2;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v5 = 0;
      while ( _interlockedbittestandset64(v2 + 6, 0x3FuLL) )
      {
        do
        {
          if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v5);
        }
        while ( *((__int64 *)v2 + 3) < 0 );
      }
      *((_QWORD *)v2 + 3) = *((_QWORD *)v2 + 3) & 0xC000000000000000uLL | 1;
      _InterlockedAnd64((volatile signed __int64 *)v2 + 3, 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      v1 += MiFreeLargePageMemory((__int64)(v2 + 0x16000000000LL) / 48);
      v2 = (volatile signed __int32 *)v3;
    }
    while ( v3 != (__int64 *)0xFFFFFFFFFLL );
  }
  return v1;
}
