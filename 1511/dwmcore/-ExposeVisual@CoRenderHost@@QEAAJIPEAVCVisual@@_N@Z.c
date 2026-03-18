/*
 * XREFs of ?ExposeVisual@CoRenderHost@@QEAAJIPEAVCVisual@@_N@Z @ 0x180103EC8
 * Callers:
 *     ?ProcessExposeToCoRenderer@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_EXPOSETOCORENDERER@@@Z @ 0x1800F77AC (-ProcessExposeToCoRenderer@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_EXPOSETOCORENDERE.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     Template_xd @ 0x1800F310C (Template_xd.c)
 */

__int64 __fastcall CoRenderHost::ExposeVisual(CoRenderHost *this, unsigned int a2, struct CVisual *a3, char a4)
{
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  const EVENT_DESCRIPTOR *v10; // rdx
  int v11; // eax

  v6 = **((_QWORD **)this + 3);
  if ( a4 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct CVisual *))(v6 + 120))(*((_QWORD *)this + 3), a2, a3);
    v9 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xF4u);
      return v9;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0 )
      return v9;
    v10 = (const EVENT_DESCRIPTOR *)&EVTDESC_PROCESS_VISUAL_EXPOSE_Start;
LABEL_11:
    Template_xd(v8, v10, (__int64)a3, a2);
    return v9;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v6 + 128))(*((_QWORD *)this + 3), a2);
  v9 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xF9u);
    return v9;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    v10 = (const EVENT_DESCRIPTOR *)&EVTDESC_PROCESS_VISUAL_EXPOSE_Stop;
    goto LABEL_11;
  }
  return v9;
}
