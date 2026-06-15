/*
 * XREFs of ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18000A18C
 * Callers:
 *     ??4?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBG@Z @ 0x1800094F4 (--4-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBG@Z.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x1800105CC (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 * Callees:
 *     ?Reallocate@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18000A134 (-Reallocate@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 */

_DWORD *__fastcall ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(const void **a1, signed int a2)
{
  _DWORD *result; // rax
  signed int v3; // r8d
  int v5; // ecx
  signed int v6; // ecx

  result = *a1;
  v3 = a2;
  if ( *((_DWORD *)*a1 - 4) > a2 )
    v3 = *(result - 4);
  if ( (int)*(result - 2) > 1 )
    return (_DWORD *)ATL::CSimpleStringT<unsigned short,0>::Fork(a1, v3);
  v5 = *(result - 3);
  if ( v5 < v3 )
  {
    if ( v5 <= 0x40000000 )
      v6 = v5 / 2 + v5;
    else
      v6 = v5 + 0x100000;
    if ( v6 < v3 )
      v6 = v3;
    return (_DWORD *)ATL::CSimpleStringT<unsigned short,0>::Reallocate((__int64 *)a1, v6);
  }
  return result;
}
