/*
 * XREFs of ?PresentOutOfFrameDirectFlip@CHwndRenderTarget@@UEAAJXZ @ 0x1800B8C20
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x180070438 (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     ?NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ @ 0x18007BAE0 (-NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsPresentDisabled@CHwndRenderTarget@@IEAA_NXZ @ 0x1800F3E14 (-IsPresentDisabled@CHwndRenderTarget@@IEAA_NXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::PresentOutOfFrameDirectFlip(CDisplay **this)
{
  int v2; // ebx
  CDisplay *v3; // rsi
  __int64 v4; // rdx
  int v5; // eax

  v2 = 0;
  if ( !CDisplay::IsPrimary(this[5]) )
    goto LABEL_9;
  v3 = this[6];
  if ( !v3
    || *((_BYTE *)this + 518)
    || *((_BYTE *)this + 516)
    || CHwndRenderTarget::IsPresentDisabled((CHwndRenderTarget *)(this - 5)) )
  {
    goto LABEL_9;
  }
  LOBYTE(v4) = *((_BYTE *)this + 523);
  v5 = (*(__int64 (__fastcall **)(CDisplay *, __int64))(*(_QWORD *)v3 + 184LL))(v3, v4);
  v2 = v5;
  if ( v5 >= 0 )
  {
    CHwndRenderTarget::NotifyPowerManagerContentType((CHwndRenderTarget *)(this - 5));
    *((_BYTE *)this + 514) = 0;
LABEL_9:
    *((_BYTE *)this + 527) = 0;
    return CHwndRenderTarget::HandleWindowErrors(this - 5, v2);
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x6A6u);
  return CHwndRenderTarget::HandleWindowErrors(this - 5, v2);
}
