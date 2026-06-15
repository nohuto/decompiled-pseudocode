/*
 * XREFs of ?Delete@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHHH@Z @ 0x1800831D0
 * Callers:
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800845D8 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 * Callees:
 *     ?GetBuffer@?$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ @ 0x180017864 (-GetBuffer@-$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180017890 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Delete(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // ebx
  int v6; // edi
  int v7; // esi
  __int64 Buffer; // rax
  errno_t v9; // eax

  v4 = a2;
  v6 = 1;
  if ( (int)a2 < 0 )
    v4 = 0;
  v7 = *(_DWORD *)(*a1 - 16);
  if ( v4 == 0x7FFFFFFF )
    ATL::AtlThrowImpl(-2147024809);
  if ( v4 + 1 <= v7 || (v6 = v7 - v4, v7 - v4 > 0) )
  {
    Buffer = ATL::CSimpleStringT<unsigned short,0>::GetBuffer((unsigned __int64)a1, a2, a3, a4);
    v9 = memmove_s(
           (void *const)(Buffer + 2LL * v4),
           2LL * (v7 - v4 - v6 + 1),
           (const void *const)(Buffer + 2 * (v4 + (__int64)v6)),
           2LL * (v7 - v4 - v6 + 1));
    if ( v9 )
    {
      if ( v9 == 12 )
        ATL::AtlThrowImpl(-2147024882);
      if ( v9 == 22 || v9 == 34 )
        ATL::AtlThrowImpl(-2147024809);
      if ( v9 != 80 )
        ATL::AtlThrowImpl(-2147467259);
    }
    ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, v7 - v6);
  }
  return *(unsigned int *)(*a1 - 16);
}
