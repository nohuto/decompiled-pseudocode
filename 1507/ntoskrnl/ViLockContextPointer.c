/*
 * XREFs of ViLockContextPointer @ 0x140738EC0
 * Callers:
 *     VfInsertContext @ 0x14025A1E0 (VfInsertContext.c)
 *     VfRemoveContext @ 0x14025A398 (VfRemoveContext.c)
 *     ViQueryObjectContext @ 0x140738F1C (ViQueryObjectContext.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

char __fastcall ViLockContextPointer(signed __int64 *a1)
{
  unsigned int v2; // ebx
  signed __int64 v3; // rax
  signed __int64 v4; // rtt

  v2 = 0;
  do
  {
    while ( 1 )
    {
      _m_prefetchw(a1);
      v3 = *a1;
      if ( (*a1 & 1) != 0 )
        break;
      if ( !v3 )
        return v3;
      if ( (++v2 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v2);
    }
    v4 = *a1;
  }
  while ( v4 != _InterlockedCompareExchange64(a1, v3 - 1, v3) );
  LOBYTE(v3) = 1;
  return v3;
}
