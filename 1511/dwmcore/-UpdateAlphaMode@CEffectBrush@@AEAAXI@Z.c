/*
 * XREFs of ?UpdateAlphaMode@CEffectBrush@@AEAAXI@Z @ 0x18012339C
 * Callers:
 *     ?ProcessSetInput@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETINPUT@@@Z @ 0x1800F5C60 (-ProcessSetInput@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETINPUT@@@Z.c)
 *     ?OnChanged@CEffectBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180123180 (-OnChanged@CEffectBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18002E670 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 */

void __fastcall CEffectBrush::UpdateAlphaMode(CEffectBrush *this, unsigned int a2)
{
  __int64 v4; // rcx
  char IsOpaque; // al
  __int64 *v6; // rsi
  __int64 v7; // r8

  v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 23) + 8LL * a2) + 64LL);
  if ( v4 )
  {
    IsOpaque = CCompositionSurfaceBitmap::IsOpaque((CCompositionSurfaceBitmap *)(v4 + 48));
    v6 = (__int64 *)*((_QWORD *)this + 11);
    v7 = *v6;
    LOBYTE(v7) = IsOpaque;
    (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*v6 + 32))(v6, a2, v7);
  }
}
