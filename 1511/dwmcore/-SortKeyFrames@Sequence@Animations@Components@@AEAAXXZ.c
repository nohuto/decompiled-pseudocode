/*
 * XREFs of ?SortKeyFrames@Sequence@Animations@Components@@AEAAXXZ @ 0x180164BC8
 * Callers:
 *     ?Play@Sequence@Animations@Components@@QEAAJXZ @ 0x1801646EC (-Play@Sequence@Animations@Components@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Components::Animations::Sequence::SortKeyFrames(void **this)
{
  size_t v2; // rbx

  if ( (*((_BYTE *)this + 244) & 4) != 0 )
  {
    v2 = *((int *)this + 6);
    qsort(
      this[2],
      v2,
      0x18uLL,
      (_CoreCrtNonSecureSearchSortCompareFunction)Components::Animations::Sequence::CompareItems);
    *((_BYTE *)this + 244) &= ~4u;
    *((_DWORD *)this + 62) = 0;
    if ( (int)v2 >= 2 )
      *((_DWORD *)this + 62) = *((_DWORD *)this[2] + 6 * v2 - 6) - *(_DWORD *)this[2];
  }
}
