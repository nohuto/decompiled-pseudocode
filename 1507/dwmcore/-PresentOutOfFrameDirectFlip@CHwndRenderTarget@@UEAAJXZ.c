/*
 * XREFs of ?PresentOutOfFrameDirectFlip@CHwndRenderTarget@@UEAAJXZ @ 0x1800EA4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ @ 0x18004A590 (-NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ.c)
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x1800583AC (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?IsPresentDisabled@CHwndRenderTarget@@IEAA_NXZ @ 0x1800DC4B0 (-IsPresentDisabled@CHwndRenderTarget@@IEAA_NXZ.c)
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
    || *((_BYTE *)this + 525)
    || *((_BYTE *)this + 523)
    || CHwndRenderTarget::IsPresentDisabled((CHwndRenderTarget *)(this - 5)) )
  {
    goto LABEL_9;
  }
  LOBYTE(v4) = *((_BYTE *)this + 530);
  v5 = (*(__int64 (__fastcall **)(CDisplay *, __int64))(*(_QWORD *)v3 + 184LL))(v3, v4);
  v2 = v5;
  if ( v5 >= 0 )
  {
    CHwndRenderTarget::NotifyPowerManagerContentType((CHwndRenderTarget *)(this - 5));
    *((_BYTE *)this + 521) = 0;
LABEL_9:
    *((_BYTE *)this + 534) = 0;
    return CHwndRenderTarget::HandleWindowErrors(this - 5, v2);
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x6EBu);
  return CHwndRenderTarget::HandleWindowErrors(this - 5, v2);
}
