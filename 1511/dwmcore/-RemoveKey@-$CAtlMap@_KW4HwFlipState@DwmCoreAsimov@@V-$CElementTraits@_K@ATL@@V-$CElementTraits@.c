/*
 * XREFs of ?RemoveKey@?$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@W4HwFlipState@DwmCoreAsimov@@@4@@ATL@@QEAA_N_K@Z @ 0x180069BE0
 * Callers:
 *     ?SetFlipState@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4HwFlipState@2@@Z @ 0x1800697A0 (-SetFlipState@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4HwFlipState@2@@Z.c)
 * Callees:
 *     ?FreeNode@?$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@W4HwFlipState@DwmCoreAsimov@@@4@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180069A04 (-FreeNode@-$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@W.c)
 *     ?GetNode@?$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@W4HwFlipState@DwmCoreAsimov@@@4@@ATL@@AEBAPEAVCNode@12@_KAEAI1AEAPEAV312@@Z @ 0x180069B90 (-GetNode@-$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@W4.c)
 */

char __fastcall ATL::CAtlMap<unsigned __int64,enum DwmCoreAsimov::HwFlipState,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<enum DwmCoreAsimov::HwFlipState>>::RemoveKey(
        __int64 a1,
        __int64 a2)
{
  __int64 Node; // rax
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF
  int v6; // [rsp+60h] [rbp+18h] BYREF
  int v7; // [rsp+68h] [rbp+20h] BYREF

  v5[0] = 0LL;
  Node = ATL::CAtlMap<unsigned __int64,enum DwmCoreAsimov::HwFlipState,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<enum DwmCoreAsimov::HwFlipState>>::GetNode(
           (__int64 *)a1,
           a2,
           &v7,
           &v6,
           v5);
  if ( Node )
  {
    if ( v5[0] )
      *(_QWORD *)(v5[0] + 16LL) = *(_QWORD *)(Node + 16);
    else
      *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)(*(_DWORD *)(Node + 24) % *(_DWORD *)(a1 + 16))) = *(_QWORD *)(Node + 16);
    ATL::CAtlMap<unsigned __int64,enum DwmCoreAsimov::HwFlipState,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<enum DwmCoreAsimov::HwFlipState>>::FreeNode(
      a1,
      Node);
    LOBYTE(Node) = 1;
  }
  return Node;
}
