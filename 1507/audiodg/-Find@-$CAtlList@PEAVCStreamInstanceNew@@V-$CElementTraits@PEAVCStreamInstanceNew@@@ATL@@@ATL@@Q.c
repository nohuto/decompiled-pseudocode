/*
 * XREFs of ?Find@?$CAtlList@PEAVCStreamInstanceNew@@V?$CElementTraits@PEAVCStreamInstanceNew@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCStreamInstanceNew@@PEAU3@@Z @ 0x140012CE4
 * Callers:
 *     ?DestroyStream@CStreamGroup@@UEAAJ_K@Z @ 0x140011E00 (-DestroyStream@CStreamGroup@@UEAAJ_K@Z.c)
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140011FB0 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ATL::CAtlList<CStreamInstanceNew *,ATL::CElementTraits<CStreamInstanceNew *>>::Find(
        _QWORD *a1,
        _QWORD *a2)
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
