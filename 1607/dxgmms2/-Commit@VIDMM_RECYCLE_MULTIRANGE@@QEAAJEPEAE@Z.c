/*
 * XREFs of ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C005F310
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z @ 0x1C006096C (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z.c)
 * Callees:
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C005E730 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C005F1B4 (-ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C0061F78 (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z @ 0x1C0061FFC (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0062120 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C006213C (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 */

__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Commit(
        VIDMM_RECYCLE_MULTIRANGE *this,
        unsigned __int8 a2,
        unsigned __int8 *a3)
{
  VIDMM_RECYCLE_RANGE *i; // rdi
  int v7; // esi
  struct VIDMM_RECYCLE_RANGE *NextRange; // rcx
  char v9; // r8
  char v10; // al

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
  NextRange = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
  v9 = 0;
  while ( 1 )
  {
    *((_QWORD *)NextRange + 17) = 0LL;
    *((_QWORD *)NextRange + 18) = 0LL;
    *((_QWORD *)NextRange + 19) = 0LL;
    v10 = *((_BYTE *)NextRange + 84);
    *((_QWORD *)NextRange + 20) = this;
    if ( !v10 )
      v9 = 1;
    if ( NextRange == *((struct VIDMM_RECYCLE_RANGE **)this + 9) )
      break;
    NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
  }
  if ( v9 && (dword_1C0035348 || *a3) )
    VIDMM_RECYCLE_MULTIRANGE::ZeroMultirangeMemory(this);
  *((_DWORD *)this + 54) = 3;
  VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(this, 0);
  return 0LL;
}
