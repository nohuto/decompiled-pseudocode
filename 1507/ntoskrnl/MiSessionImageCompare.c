/*
 * XREFs of MiSessionImageCompare @ 0x14001F3C0
 * Callers:
 *     MiSessionLookupImage @ 0x1400FEA40 (MiSessionLookupImage.c)
 *     MiSessionInsertImage @ 0x140154248 (MiSessionInsertImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSessionImageCompare(unsigned __int64 a1, __int64 a2)
{
  if ( a1 > *(_QWORD *)(a2 + 48) )
    return 1LL;
  else
    return (unsigned int)-(a1 < (*(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFFCuLL));
}
