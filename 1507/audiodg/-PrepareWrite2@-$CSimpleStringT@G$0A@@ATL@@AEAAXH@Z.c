/*
 * XREFs of ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x140011108
 * Callers:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x140011174 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x14002A2CC (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 * Callees:
 *     ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x140011030 (-Fork@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 */

_DWORD *__fastcall ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(const void **a1, int a2)
{
  _DWORD *result; // rax
  int v3; // r8d
  int v5; // ecx
  int v6; // ecx

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
    return (_DWORD *)ATL::CSimpleStringT<unsigned short,0>::Reallocate(a1, (unsigned int)v6);
  }
  return result;
}
