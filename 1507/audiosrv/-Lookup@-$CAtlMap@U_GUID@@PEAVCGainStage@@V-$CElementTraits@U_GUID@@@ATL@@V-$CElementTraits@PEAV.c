/*
 * XREFs of ?Lookup@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEBA_NAEBU_GUID@@AEAPEAVCGainStage@@@Z @ 0x18000B560
 * Callers:
 *     ?AddGainStage@CAudioSession@@UEAAJPEAVCGainStage@@PEBU_GUID@@@Z @ 0x18000ED20 (-AddGainStage@CAudioSession@@UEAAJPEAVCGainStage@@PEBU_GUID@@@Z.c)
 *     ?RemoveGainStage@CAudioSession@@UEAAJPEBU_GUID@@0_NPEA_J@Z @ 0x18007B300 (-RemoveGainStage@CAudioSession@@UEAAJPEBU_GUID@@0_NPEA_J@Z.c)
 * Callees:
 *     ?GetNode@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@AEBAPEAVCNode@12@AEBU_GUID@@AEAI1AEAPEAV312@@Z @ 0x18000B3C4 (-GetNode@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTraits@PEA.c)
 */

char __fastcall ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::Lookup(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 Node; // rax
  unsigned int v6; // [rsp+30h] [rbp-18h] BYREF
  __int64 v7; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v8; // [rsp+68h] [rbp+20h] BYREF

  Node = ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::GetNode(
           a1,
           a2,
           &v6,
           &v8,
           &v7);
  if ( Node )
  {
    *a3 = *(_QWORD *)(Node + 16);
    LOBYTE(Node) = 1;
  }
  return Node;
}
