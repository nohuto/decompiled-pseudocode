/*
 * XREFs of ?SendResponse@CAsyncFlushResponse@@UEAAJJ@Z @ 0x1800A6220
 * Callers:
 *     ?AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z @ 0x1800A5B5C (-AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z.c)
 *     ?OnPresentComplete@CAsyncFlushResponse@@UEAAJXZ @ 0x1800A6260 (-OnPresentComplete@CAsyncFlushResponse@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z @ 0x1800A62AC (-SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z.c)
 */

__int64 __fastcall CAsyncFlushResponse::SendResponse(CAsyncFlushResponse *this, int a2)
{
  unsigned int v2; // ebx
  int v3; // eax

  v2 = 0;
  if ( !*((_BYTE *)this + 33) )
  {
    *((_BYTE *)this + 33) = 1;
    v3 = CAsyncFlushResponse::SendResponseWorker(*((struct CChannelContext **)this + 5), *((_DWORD *)this + 12), a2);
    v2 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x59u);
  }
  return v2;
}
