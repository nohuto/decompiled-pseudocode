/*
 * XREFs of ?Delete@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHHH@Z @ 0x1800659D0
 * Callers:
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180066C3C (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 * Callees:
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180012C68 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _invalid_parameter_noinfo @ 0x180036CBA (_invalid_parameter_noinfo.c)
 *     ?GetBuffer@?$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ @ 0x180050254 (-GetBuffer@-$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Delete(
        const void **a1,
        int a2)
{
  int v2; // ebx
  int v4; // edi
  int v5; // esi
  char *Buffer; // rax
  char *v7; // rcx
  size_t v8; // r8

  v2 = a2;
  v4 = 1;
  if ( a2 < 0 )
    v2 = 0;
  v5 = *((_DWORD *)*a1 - 4);
  if ( v2 == 0x7FFFFFFF )
    ATL::AtlThrowImpl(-2147024809);
  if ( v2 + 1 <= v5 || (v4 = v5 - v2, v5 - v2 > 0) )
  {
    Buffer = (char *)ATL::CSimpleStringT<unsigned short,0>::GetBuffer(a1);
    v7 = &Buffer[2 * v2];
    v8 = 2LL * (v5 - v2 - v4 + 1);
    if ( v8 )
    {
      if ( !v7 || !&Buffer[2 * v2 + 2 * (__int64)v4] )
      {
        *(_DWORD *)_o__errno(v7, v2) = 22;
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      memmove(v7, &Buffer[2 * v2 + 2 * (__int64)v4], v8);
    }
    ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)a1, v5 - v4);
  }
  return *((unsigned int *)*a1 - 4);
}
