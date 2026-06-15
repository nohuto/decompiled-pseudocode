/*
 * XREFs of ?AddHead@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCVADServer@@@Z @ 0x18000D628
 * Callers:
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAG@Z @ 0x18000AB50 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 * Callees:
 *     ?NewNode@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCVADServer@@PEAV312@1@Z @ 0x18000D518 (-NewNode@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@AEAAPEAVCNode@.c)
 */

__int64 *__fastcall ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::AddHead(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 *result; // rax

  result = ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::NewNode(a1, a2, a3, g_VADServerList);
  if ( g_VADServerList )
    *(_QWORD *)(g_VADServerList + 8) = result;
  else
    qword_1800CA538 = (__int64)result;
  g_VADServerList = (__int64)result;
  return result;
}
