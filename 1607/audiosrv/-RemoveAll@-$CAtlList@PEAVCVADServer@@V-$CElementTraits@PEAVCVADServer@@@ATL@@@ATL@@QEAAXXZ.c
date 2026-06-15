/*
 * XREFs of ?RemoveAll@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ @ 0x18000D4C0
 * Callers:
 *     ?FreeNode@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18000D4A0 (-FreeNode@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@AEAAXPEAVCNod.c)
 *     ??1?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAA@XZ @ 0x1800358C8 (--1-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x180053FD0 (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?FreeNode@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18000D4A0 (-FreeNode@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@AEAAXPEAVCNod.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAll(__int64 *a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx
  __int64 *v4; // rdx

  while ( a1[2] )
  {
    v4 = (__int64 *)*a1;
    if ( !*a1 )
      ATL::AtlThrowImpl(-2147467259);
    *a1 = *v4;
    ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::FreeNode((__int64)a1, v4);
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[4] = 0LL;
  v2 = (_QWORD *)a1[3];
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      free(v2);
      v2 = v3;
    }
    while ( v3 );
    a1[3] = 0LL;
  }
}
