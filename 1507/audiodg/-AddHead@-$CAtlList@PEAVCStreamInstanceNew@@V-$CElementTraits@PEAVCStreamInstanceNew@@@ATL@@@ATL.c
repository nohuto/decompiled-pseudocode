/*
 * XREFs of ?AddHead@?$CAtlList@PEAVCStreamInstanceNew@@V?$CElementTraits@PEAVCStreamInstanceNew@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCStreamInstanceNew@@@Z @ 0x140012E64
 * Callers:
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140011FB0 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 * Callees:
 *     ?NewNode@?$CAtlList@PEAVCStreamInstanceNew@@V?$CElementTraits@PEAVCStreamInstanceNew@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCStreamInstanceNew@@PEAV312@1@Z @ 0x140012D04 (-NewNode@-$CAtlList@PEAVCStreamInstanceNew@@V-$CElementTraits@PEAVCStreamInstanceNew@@@ATL@@@ATL.c)
 */

__int64 *__fastcall ATL::CAtlList<CStreamInstanceNew *,ATL::CElementTraits<CStreamInstanceNew *>>::AddHead(
        __int64 *a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 *result; // rax

  result = ATL::CAtlList<CStreamInstanceNew *,ATL::CElementTraits<CStreamInstanceNew *>>::NewNode(
             (__int64)a1,
             a2,
             a3,
             *a1);
  if ( *a1 )
    *(_QWORD *)(*a1 + 8) = result;
  else
    a1[1] = (__int64)result;
  *a1 = (__int64)result;
  return result;
}
