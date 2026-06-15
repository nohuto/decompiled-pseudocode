/*
 * XREFs of ?FindKey@?$CSimpleMap@U_GUID@@PEAVCPipeInstance@@V?$CSimpleMapEqualHelper@U_GUID@@PEAVCPipeInstance@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x140031E20
 * Callers:
 *     ?CreateMode@CAudioDeviceGraph@@AEAAJPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAVCPipeInstance@@@Z @ 0x1400311D8 (-CreateMode@CAudioDeviceGraph@@AEAAJPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAVCPipeInstance@@@Z.c)
 *     ?DestroyModePipe@CAudioDeviceGraph@@AEAAXPEAVCPipeInstance@@@Z @ 0x140031BA8 (-DestroyModePipe@CAudioDeviceGraph@@AEAAXPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CSimpleMap<_GUID,CPipeInstance *,ATL::CSimpleMapEqualHelper<_GUID,CPipeInstance *>>::FindKey(
        __int64 *a1,
        _QWORD *a2)
{
  int v2; // r9d
  __int64 result; // rax
  __int64 v4; // r10
  __int64 v5; // rcx

  v2 = *((_DWORD *)a1 + 4);
  result = 0LL;
  if ( v2 <= 0 )
    return 0xFFFFFFFFLL;
  v4 = *a1;
  while ( 1 )
  {
    v5 = *(_QWORD *)(v4 + 16LL * (int)result) - *a2;
    if ( !v5 )
      v5 = *(_QWORD *)(v4 + 16LL * (int)result + 8) - a2[1];
    if ( !v5 )
      break;
    result = (unsigned int)(result + 1);
    if ( (int)result >= v2 )
      return 0xFFFFFFFFLL;
  }
  return result;
}
