/*
 * XREFs of ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C0065B00
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z @ 0x1C00652AC (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z.c)
 * Callees:
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z @ 0x1C0065BE4 (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C006666C (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0066D48 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0066D64 (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ @ 0x1C00685CC (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ.c)
 *     ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C006B1F0 (-ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Commit(
        VIDMM_RECYCLE_MULTIRANGE *this,
        unsigned __int8 a2,
        unsigned __int8 *a3)
{
  VIDMM_RECYCLE_RANGE *i; // rdi
  int v7; // esi
  struct VIDMM_RECYCLE_RANGE *j; // rax

  for ( i = (VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    v7 = VIDMM_RECYCLE_RANGE::Commit(i, a2);
    if ( v7 < 0 )
    {
      while ( i != *((VIDMM_RECYCLE_RANGE **)this + 8) )
      {
        i = VIDMM_RECYCLE_RANGE::GetPreviousRange(i);
        VIDMM_RECYCLE_RANGE::Decommit(i);
      }
      return (unsigned int)v7;
    }
    if ( i == *((VIDMM_RECYCLE_RANGE **)this + 9) )
      break;
  }
  for ( j = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8); ; j = VIDMM_RECYCLE_RANGE::GetNextRange(j) )
  {
    *((_QWORD *)j + 17) = 0LL;
    *((_QWORD *)j + 18) = 0LL;
    *((_QWORD *)j + 19) = 0LL;
    *((_QWORD *)j + 20) = this;
    if ( j == *((struct VIDMM_RECYCLE_RANGE **)this + 9) )
      break;
  }
  if ( *a3 || dword_1C0027310 )
    VIDMM_RECYCLE_MULTIRANGE::ZeroMultirangeMemory(this);
  *((_DWORD *)this + 54) = 3;
  VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(this);
  return 0LL;
}
