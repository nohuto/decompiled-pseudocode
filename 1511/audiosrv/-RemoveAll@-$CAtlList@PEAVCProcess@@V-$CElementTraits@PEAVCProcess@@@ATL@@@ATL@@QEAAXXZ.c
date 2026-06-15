/*
 * XREFs of ?RemoveAll@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAXXZ @ 0x180030698
 * Callers:
 *     ?FreeNode@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180030678 (-FreeNode@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@AEAAXPEAVCNode@12.c)
 *     ??1?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x18009B938 (--1-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ??1TSSession@@QEAA@XZ @ 0x18009B950 (--1TSSession@@QEAA@XZ.c)
 *     ??1CApplicationManager@@MEAA@XZ @ 0x18009E378 (--1CApplicationManager@@MEAA@XZ.c)
 *     ??1CApplication@@MEAA@XZ @ 0x18009F9D4 (--1CApplication@@MEAA@XZ.c)
 * Callees:
 *     ?FreeNode@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180030678 (-FreeNode@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@AEAAXPEAVCNode@12.c)
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x180039400 (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::RemoveAll(__int64 *a1)
{
  ATL::CAtlPlex *v2; // rcx
  __int64 *v3; // rdx

  while ( a1[2] )
  {
    v3 = (__int64 *)*a1;
    if ( !*a1 )
      ATL::AtlThrowImpl(-2147467259);
    *a1 = *v3;
    ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::FreeNode((__int64)a1, v3);
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[4] = 0LL;
  v2 = (ATL::CAtlPlex *)a1[3];
  if ( v2 )
  {
    ATL::CAtlPlex::FreeDataChain(v2);
    a1[3] = 0LL;
  }
}
