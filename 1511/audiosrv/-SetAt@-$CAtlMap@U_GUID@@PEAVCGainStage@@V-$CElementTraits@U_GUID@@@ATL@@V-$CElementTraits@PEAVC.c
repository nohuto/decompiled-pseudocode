/*
 * XREFs of ?SetAt@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEAAPEAU__POSITION@@AEBU_GUID@@AEBQEAVCGainStage@@@Z @ 0x180012908
 * Callers:
 *     ?AddGainStage@CAudioSession@@UEAAJPEAVCGainStage@@PEBU_GUID@@@Z @ 0x180025F70 (-AddGainStage@CAudioSession@@UEAAJPEAVCGainStage@@PEBU_GUID@@@Z.c)
 * Callees:
 *     ?CreateNode@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@AEAAPEAVCNode@12@AEBU_GUID@@II@Z @ 0x180012740 (-CreateNode@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTraits@.c)
 *     ?GetNode@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@AEBAPEAVCNode@12@AEBU_GUID@@AEAI1AEAPEAV312@@Z @ 0x1800127A4 (-GetNode@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTraits@PEA.c)
 */

__int64 __fastcall ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::SetAt(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 Node; // r9
  unsigned int v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h]
  _QWORD v10[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  v9 = -2LL;
  Node = ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::GetNode(
           a1,
           a2,
           &v8,
           (unsigned int *)&v12,
           v10);
  if ( Node )
  {
    *(_QWORD *)(Node + 16) = *a3;
  }
  else
  {
    Node = ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::CreateNode(
             a1,
             a2,
             v8,
             v12);
    v12 = Node;
    try
    {
      *(_QWORD *)(Node + 16) = *a3;
    }
    catch ( ... )
    {
      ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::RemoveAtPos(
        a1,
        v12);
      throw;
    }
  }
  return Node;
}
