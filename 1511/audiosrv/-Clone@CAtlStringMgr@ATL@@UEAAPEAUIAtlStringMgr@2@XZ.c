/*
 * XREFs of ?Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ @ 0x180018950
 * Callers:
 *     ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180016A50 (-OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800183F4 (--4-$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??0CSid@ATL@@QEAA@AEBV01@@Z @ 0x1800192A0 (--0CSid@ATL@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     <none>
 */

struct ATL::IAtlStringMgr *__fastcall ATL::CAtlStringMgr::Clone(ATL::CAtlStringMgr *this)
{
  return this;
}
