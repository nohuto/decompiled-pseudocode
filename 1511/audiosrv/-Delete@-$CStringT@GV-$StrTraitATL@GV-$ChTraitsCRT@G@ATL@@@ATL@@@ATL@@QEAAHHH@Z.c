/*
 * XREFs of ?Delete@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHHH@Z @ 0x18007E054
 * Callers:
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18007F030 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 * Callees:
 *     ?GetBuffer@?$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ @ 0x1800183C8 (-GetBuffer@-$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180018814 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Delete(
        __int64 *a1,
        int a2)
{
  int v2; // ebx
  int v4; // edi
  int v5; // esi
  __int64 Buffer; // rax
  errno_t v7; // eax

  v2 = a2;
  v4 = 1;
  if ( a2 < 0 )
    v2 = 0;
  v5 = *(_DWORD *)(*a1 - 16);
  if ( v2 == 0x7FFFFFFF )
    ATL::AtlThrowImpl(-2147024809);
  if ( v2 + 1 <= v5 || (v4 = v5 - v2, v5 - v2 > 0) )
  {
    Buffer = ATL::CSimpleStringT<unsigned short,0>::GetBuffer((__int64)a1);
    v7 = memmove_s(
           (void *const)(Buffer + 2LL * v2),
           2LL * (v5 - v2 - v4 + 1),
           (const void *const)(Buffer + 2 * (v2 + (__int64)v4)),
           2LL * (v5 - v2 - v4 + 1));
    if ( v7 )
    {
      if ( v7 == 12 )
        ATL::AtlThrowImpl(-2147024882);
      if ( v7 == 22 || v7 == 34 )
        ATL::AtlThrowImpl(-2147024809);
      if ( v7 != 80 )
        ATL::AtlThrowImpl(-2147467259);
    }
    ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, v5 - v4);
  }
  return *(unsigned int *)(*a1 - 16);
}
