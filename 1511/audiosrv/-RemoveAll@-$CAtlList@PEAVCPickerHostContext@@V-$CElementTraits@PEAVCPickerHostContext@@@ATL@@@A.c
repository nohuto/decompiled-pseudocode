/*
 * XREFs of ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18003273C
 * Callers:
 *     ??_GCPickerHostContext@@QEAAPEAXI@Z @ 0x1800325E4 (--_GCPickerHostContext@@QEAAPEAXI@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18003266C (-FreeNode@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@.c)
 *     ??1CHostedAppInteractivityManager@@QEAA@XZ @ 0x180046968 (--1CHostedAppInteractivityManager@@QEAA@XZ.c)
 *     ??1?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAA@XZ @ 0x180046990 (--1-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAA.c)
 *     ??1?$CAtlList@PEAVCGainStage@@V?$CElementTraits@PEAVCGainStage@@@ATL@@@ATL@@QEAA@XZ @ 0x180066DF0 (--1-$CAtlList@PEAVCGainStage@@V-$CElementTraits@PEAVCGainStage@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ??1CPolicyConfig@@UEAA@XZ @ 0x18007F23C (--1CPolicyConfig@@UEAA@XZ.c)
 * Callees:
 *     ?FreeNode@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18003266C (-FreeNode@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@.c)
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x180039400 (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll(__int64 *a1)
{
  ATL::CAtlPlex *v2; // rcx
  __int64 *v3; // rdx

  while ( a1[2] )
  {
    v3 = (__int64 *)*a1;
    if ( !*a1 )
      ATL::AtlThrowImpl(-2147467259);
    *a1 = *v3;
    ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::FreeNode((__int64)a1, v3);
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
