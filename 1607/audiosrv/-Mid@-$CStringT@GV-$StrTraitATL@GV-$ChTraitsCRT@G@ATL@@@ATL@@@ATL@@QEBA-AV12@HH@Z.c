/*
 * XREFs of ?Mid@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@HH@Z @ 0x18005D634
 * Callers:
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x18005F618 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 * Callees:
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x180012CE0 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEBGHPEAUIAtlStringMgr@1@@Z @ 0x18005A250 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEBGHPEAUIAtlStringMgr@1@@Z.c)
 *     ?GetManager@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAPEAUIAtlStringMgr@2@XZ @ 0x18005C43C (-GetManager@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAPEAUIAtlStringMgr@.c)
 */

__int64 *__fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Mid(
        __int64 *a1,
        __int64 *a2,
        int a3,
        int a4)
{
  int v4; // edi
  signed int v5; // ebx
  __int64 v8; // r14
  int v9; // ecx
  __int64 (__fastcall ***Manager)(_QWORD, _QWORD, __int64); // rax

  v4 = a3;
  v5 = a4;
  if ( a3 < 0 )
    v4 = 0;
  if ( a4 < 0 )
    v5 = 0;
  if ( 0x7FFFFFFF - v4 < v5 )
    ATL::AtlThrowImpl(-2147024809);
  v8 = *a1;
  v9 = *(_DWORD *)(*a1 - 16);
  if ( v4 + v5 > v9 )
    v5 = v9 - v4;
  if ( v4 > v9 )
    v5 = 0;
  if ( v4 || v5 != v9 )
  {
    Manager = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::GetManager(a1);
    ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
      a2,
      (const void *)(v8 + 2LL * v4),
      v5,
      Manager);
  }
  else
  {
    *a2 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v8 - 24) + 24;
  }
  return a2;
}
