/*
 * XREFs of ?RemoveVisualInternal@CVisualGroup@@AEAAJPEAPEAVCVisual@@PEAIPEAV2@@Z @ 0x180124958
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18004C96C (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualGroup::RemoveVisualInternal(
        CVisualGroup *this,
        struct CVisual **a2,
        unsigned int *a3,
        struct CVisual *a4)
{
  unsigned int v4; // ecx
  __int64 v5; // r10

  v4 = *a3;
  v5 = 0LL;
  if ( *a3 )
  {
    while ( a4 != a2[v5] )
    {
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= v4 )
        return 0LL;
    }
    memmove(&a2[v5], &a2[(unsigned int)(v5 + 1)], 8LL * (v4 - (unsigned int)v5 - 1));
    --*a3;
  }
  return 0LL;
}
