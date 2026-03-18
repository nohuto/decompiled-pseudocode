/*
 * XREFs of ?RestoreState@CEffectBrushLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18012E5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180013A80 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrushLayer::RestoreState(CEffectBrushLayer *this, struct CDrawingContext *a2)
{
  int v4; // eax
  char *v5; // r8
  unsigned int v6; // edi

  v4 = CExternalLayer::RestoreState(this, a2);
  v5 = 0LL;
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x57u);
  }
  else if ( g_LockAndReadLayer )
  {
    if ( a2 )
      v5 = (char *)a2 + 128;
    (*(void (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 1) + 176LL))(
      *((_QWORD *)this + 1),
      *((_QWORD *)a2 + 57),
      v5);
  }
  return v6;
}
