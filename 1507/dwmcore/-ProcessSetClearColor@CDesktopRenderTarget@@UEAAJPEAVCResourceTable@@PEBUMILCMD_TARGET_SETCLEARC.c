/*
 * XREFs of ?ProcessSetClearColor@CDesktopRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_TARGET_SETCLEARCOLOR@@@Z @ 0x1800EB8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ProcessSetClearColor@CHwndRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_TARGET_SETCLEARCOLOR@@@Z @ 0x1800EA5A0 (-ProcessSetClearColor@CHwndRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_TARGET_SETCLEARCOLO.c)
 */

__int64 __fastcall CDesktopRenderTarget::ProcessSetClearColor(
        CDesktopRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_TARGET_SETCLEARCOLOR *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  int v8; // eax

  v3 = 0;
  v4 = 0LL;
  *(_OWORD *)((char *)this + 228) = *(_OWORD *)((char *)a3 + 8);
  *((_DWORD *)this + 60) = 1065353216;
  if ( *((_DWORD *)this + 28) )
  {
    while ( 1 )
    {
      v8 = CHwndRenderTarget::ProcessSetClearColor(*(CHwndRenderTarget **)(*((_QWORD *)this + 11) + 8 * v4), a2, a3);
      v3 = v8;
      if ( v8 < 0 )
        break;
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *((_DWORD *)this + 28) )
        return v3;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x41Cu);
  }
  return v3;
}
