/*
 * XREFs of ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEBGHPEAUIAtlStringMgr@1@@Z @ 0x180071680
 * Callers:
 *     ?Mid@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@HH@Z @ 0x1800752E4 (-Mid@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@HH@Z.c)
 * Callees:
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180018814 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x180069968 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

__int64 *__fastcall ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
        __int64 *a1,
        const void *a2,
        unsigned int a3,
        __int64 (__fastcall ***a4)(_QWORD, _QWORD, __int64))
{
  __int64 v4; // rdi
  __int64 v7; // rax

  v4 = (int)a3;
  if ( !a4 )
    ATL::AtlThrowImpl(-2147467259);
  if ( !a2 && a3 )
    ATL::AtlThrowImpl(-2147024809);
  v7 = (**a4)(a4, a3, 2LL);
  if ( !v7 )
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
  *a1 = v7 + 24;
  ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, v4);
  memcpy_s((void *const)*a1, 2 * v4, a2, 2 * v4);
  return a1;
}
