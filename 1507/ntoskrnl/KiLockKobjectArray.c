/*
 * XREFs of KiLockKobjectArray @ 0x14011F424
 * Callers:
 *     KiWaitForAllObjects @ 0x14011ECE8 (KiWaitForAllObjects.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

void __fastcall KiLockKobjectArray(volatile signed __int32 **a1, unsigned int a2)
{
  volatile signed __int32 *v2; // rbx
  unsigned int v5; // edi
  volatile signed __int32 **v6; // rsi
  __int64 v7; // rbp
  unsigned int v8; // edi

  v2 = *a1;
  v5 = 0;
  while ( _interlockedbittestandset(v2, 7u) )
  {
    do
    {
      if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v5);
    }
    while ( (*v2 & 0x80u) != 0 );
  }
  if ( a2 > 1 )
  {
    v6 = a1 + 1;
    v7 = a2 - 1;
    do
    {
      if ( *v6 != v2 )
      {
        v8 = 0;
        v2 = *v6;
        if ( _interlockedbittestandset(*v6, 7u) )
        {
          do
          {
            if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v8);
          }
          while ( (*v2 & 0x80u) != 0 || _interlockedbittestandset(v2, 7u) );
        }
      }
      ++v6;
      --v7;
    }
    while ( v7 );
  }
}
