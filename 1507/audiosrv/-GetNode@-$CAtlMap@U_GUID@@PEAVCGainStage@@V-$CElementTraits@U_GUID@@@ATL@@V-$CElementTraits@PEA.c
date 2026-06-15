/*
 * XREFs of ?GetNode@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@AEBAPEAVCNode@12@AEBU_GUID@@AEAI1AEAPEAV312@@Z @ 0x18000B3C4
 * Callers:
 *     ?SetAt@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEAAPEAU__POSITION@@AEBU_GUID@@AEBQEAVCGainStage@@@Z @ 0x18000B4D8 (-SetAt@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTraits@PEAVC.c)
 *     ?Lookup@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEBA_NAEBU_GUID@@AEAPEAVCGainStage@@@Z @ 0x18000B560 (-Lookup@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTraits@PEAV.c)
 *     ?RemoveGainStage@CAudioSession@@UEAAJPEBU_GUID@@0_NPEA_J@Z @ 0x18007B300 (-RemoveGainStage@CAudioSession@@UEAAJPEBU_GUID@@0_NPEA_J@Z.c)
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
  unsigned int v6; // eax
  __int64 result; // rax
  __int64 v8; // rdx
  unsigned int v9; // r9d
  __int64 v10; // rcx

  v6 = *a2 ^ a2[1] ^ a2[2] ^ a2[3];
  *a4 = v6;
  *a3 = v6 % *(_DWORD *)(a1 + 16);
  if ( !*(_QWORD *)a1 )
    return 0LL;
  v8 = 0LL;
  *a5 = 0LL;
  result = *(_QWORD *)(*(_QWORD *)a1 + 8LL * *a3);
  if ( !result )
    return 0LL;
  v9 = *a4;
  while ( 1 )
  {
    if ( *(_DWORD *)(result + 32) == v9 )
    {
      v10 = *(_QWORD *)result - *(_QWORD *)a2;
      if ( *(_QWORD *)result == *(_QWORD *)a2 )
        v10 = *(_QWORD *)(result + 8) - *((_QWORD *)a2 + 1);
      if ( !v10 )
        break;
    }
    v8 = result;
    result = *(_QWORD *)(result + 24);
    if ( !result )
      return 0LL;
  }
  *a5 = v8;
  return result;
}
