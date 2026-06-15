/*
 * XREFs of ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x140002C94
 * Callers:
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x140002AB8 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x140002C28 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x140002C5C (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140027140 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x14002A6B4 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::SetString(const void **a1, _BYTE *a2, int a3)
{
  __int64 v3; // rdi
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r14
  char *v8; // rcx
  rsize_t v9; // rdx
  rsize_t v10; // r9

  v3 = a3;
  if ( !a3 )
    return ATL::CSimpleStringT<unsigned short,0>::Empty();
  if ( !a2 )
    ATL::AtlThrowImpl(-2147024809);
  v6 = (a2 - (_BYTE *)*a1) >> 1;
  v7 = *((unsigned int *)*a1 - 4);
  if ( ((*((_DWORD *)*a1 - 3) - a3) | (1 - *((_DWORD *)*a1 - 2))) < 0 )
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, a3);
  v8 = (char *)*a1;
  v9 = 2 * v3;
  v10 = 2 * v3;
  if ( v6 <= v7 )
    memmove_s(v8, v9, &v8[2 * v6], v10);
  else
    memcpy_s(v8, v9, a2, v10);
  return ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)a1, v3);
}
