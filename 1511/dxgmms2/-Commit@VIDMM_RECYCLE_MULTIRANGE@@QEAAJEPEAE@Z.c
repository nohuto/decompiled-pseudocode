/*
 * XREFs of ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C005C2AC
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z @ 0x1C005C5E8 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z.c)
 * Callees:
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C005B670 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C005DA7C (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z @ 0x1C005DAFC (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C005DBFC (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0061CE4 (-ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0062264 (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 */

__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Commit(struct _SLIST_ENTRY *this, unsigned __int8 a2, unsigned __int8 *a3)
{
  VIDMM_RECYCLE_RANGE *i; // rdi
  int v7; // esi
  struct VIDMM_RECYCLE_RANGE *j; // rax

  for ( i = (VIDMM_RECYCLE_RANGE *)this[4].Next; ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    v7 = VIDMM_RECYCLE_RANGE::Commit(i, a2);
    if ( v7 < 0 )
    {
      while ( i != (VIDMM_RECYCLE_RANGE *)this[4].Next )
      {
        i = VIDMM_RECYCLE_RANGE::GetPreviousRange(i);
        VIDMM_RECYCLE_RANGE::Decommit(i);
      }
      return (unsigned int)v7;
    }
    if ( i == *((VIDMM_RECYCLE_RANGE **)&this[4].Next + 1) )
      break;
  }
  for ( j = (struct VIDMM_RECYCLE_RANGE *)this[4].Next; ; j = VIDMM_RECYCLE_RANGE::GetNextRange(j) )
  {
    *((_QWORD *)j + 17) = 0LL;
    *((_QWORD *)j + 18) = 0LL;
    *((_QWORD *)j + 19) = 0LL;
    *((_QWORD *)j + 20) = this;
    if ( j == *((struct VIDMM_RECYCLE_RANGE **)&this[4].Next + 1) )
      break;
  }
  if ( *a3 || dword_1C002F338 )
    VIDMM_RECYCLE_MULTIRANGE::ZeroMultirangeMemory((VIDMM_RECYCLE_MULTIRANGE *)this);
  *((_DWORD *)&this[13].Next + 2) = 3;
  VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(this, 0);
  return 0LL;
}
