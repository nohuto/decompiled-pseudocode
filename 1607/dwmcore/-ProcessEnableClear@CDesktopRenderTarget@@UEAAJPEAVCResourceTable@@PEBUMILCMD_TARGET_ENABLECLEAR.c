/*
 * XREFs of ?ProcessEnableClear@CDesktopRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_TARGET_ENABLECLEAR@@@Z @ 0x18011DD30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ProcessEnableClear@CHwndRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_TARGET_ENABLECLEAR@@@Z @ 0x18011C800 (-ProcessEnableClear@CHwndRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_TARGET_ENABLECLEAR@@@.c)
 */

__int64 __fastcall CDesktopRenderTarget::ProcessEnableClear(
        CDesktopRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_TARGET_ENABLECLEAR *a3)
{
  unsigned int v3; // esi
  char v7; // al
  __int64 v8; // rdi
  int v9; // eax

  v3 = 0;
  v7 = *((_DWORD *)a3 + 2) != 0;
  if ( *((_BYTE *)this + 412) != v7 )
  {
    v8 = 0LL;
    *((_BYTE *)this + 412) = v7;
    if ( *((_DWORD *)this + 46) )
    {
      while ( 1 )
      {
        v9 = CHwndRenderTarget::ProcessEnableClear(*(CHwndRenderTarget **)(*((_QWORD *)this + 20) + 8 * v8), a2, a3);
        v3 = v9;
        if ( v9 < 0 )
          break;
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 >= *((_DWORD *)this + 46) )
          return v3;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x4C0u);
    }
  }
  return v3;
}
