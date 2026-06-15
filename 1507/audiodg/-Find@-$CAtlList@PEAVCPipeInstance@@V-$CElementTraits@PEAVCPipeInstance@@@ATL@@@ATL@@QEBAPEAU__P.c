/*
 * XREFs of ?Find@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCPipeInstance@@PEAU3@@Z @ 0x1400299D0
 * Callers:
 *     ?RemoveStreamFromList@CSystemAudioDeviceBase@@IEAAJPEAVCStreamInstance@@PEAH@Z @ 0x140029C50 (-RemoveStreamFromList@CSystemAudioDeviceBase@@IEAAJPEAVCStreamInstance@@PEAH@Z.c)
 *     ?DestroyModePipe@CAudioDeviceGraph@@AEAAXPEAVCPipeInstance@@@Z @ 0x140032068 (-DestroyModePipe@CAudioDeviceGraph@@AEAAXPEAVCPipeInstance@@@Z.c)
 *     ?DestroyStream@CAudioDeviceGraph@@UEAAJ_K@Z @ 0x140032130 (-DestroyStream@CAudioDeviceGraph@@UEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::Find(_QWORD *a1, _QWORD *a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)*a1;
  if ( !*a1 )
    return 0LL;
  while ( result[2] != *a2 )
  {
    result = (_QWORD *)*result;
    if ( !result )
      return 0LL;
  }
  return result;
}
