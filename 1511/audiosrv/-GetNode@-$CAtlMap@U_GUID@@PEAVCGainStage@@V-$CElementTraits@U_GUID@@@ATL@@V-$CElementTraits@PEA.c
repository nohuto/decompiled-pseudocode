/*
 * XREFs of ?GetNode@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@AEBAPEAVCNode@12@AEBU_GUID@@AEAI1AEAPEAV312@@Z @ 0x1800127A4
 * Callers:
 *     ?SetAt@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEAAPEAU__POSITION@@AEBU_GUID@@AEBQEAVCGainStage@@@Z @ 0x180012908 (-SetAt@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTraits@PEAVC.c)
 *     ?Lookup@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEBA_NAEBU_GUID@@AEAPEAVCGainStage@@@Z @ 0x180012990 (-Lookup@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTraits@PEAV.c)
 *     ?RemoveGainStage@CAudioSession@@UEAAJPEBU_GUID@@0_NPEA_J@Z @ 0x180076590 (-RemoveGainStage@CAudioSession@@UEAAJPEBU_GUID@@0_NPEA_J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::GetNode(
        __int64 a1,
        _DWORD *a2,
        unsigned int *a3,
        unsigned int *a4,
        _QWORD *a5)
{
  unsigned int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rdx

  v7 = *a2 ^ a2[1] ^ a2[2] ^ a2[3];
  *a4 = v7;
  *a3 = v7 % *(_DWORD *)(a1 + 16);
  if ( !*(_QWORD *)a1 )
    return 0LL;
  v8 = 0LL;
  *a5 = 0LL;
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * *a3);
  if ( !v9 )
    return 0LL;
  while ( *(_DWORD *)(v9 + 32) != *a4 || *(_QWORD *)v9 != *(_QWORD *)a2 || *(_QWORD *)(v9 + 8) != *((_QWORD *)a2 + 1) )
  {
    v8 = v9;
    v9 = *(_QWORD *)(v9 + 24);
    if ( !v9 )
      return 0LL;
  }
  *a5 = v8;
  return v9;
}
