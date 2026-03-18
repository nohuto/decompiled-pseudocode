/*
 * XREFs of ?SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z @ 0x180061890
 * Callers:
 *     ?SendResponse@CAsyncFlushResponse@@UEAAJJ@Z @ 0x180061940 (-SendResponse@CAsyncFlushResponse@@UEAAJJ@Z.c)
 *     ?AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z @ 0x180062894 (-AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z.c)
 * Callees:
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x180062E60 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAsyncFlushResponse::SendResponseWorker(struct CChannelContext *a1, int a2, int a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  _DWORD v6[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+44h] [rbp-14h]

  v6[0] = 13;
  v6[4] = 0;
  v6[1] = 0;
  v7 = 0LL;
  v6[2] = a2;
  v6[3] = a3;
  v3 = CChannelContext::PostMessageToChannel(a1, (const struct MIL_MESSAGE *)v6);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x75u);
  return v4;
}
