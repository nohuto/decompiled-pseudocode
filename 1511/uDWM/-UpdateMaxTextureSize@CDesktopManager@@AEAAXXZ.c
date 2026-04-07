/*
 * XREFs of ?UpdateMaxTextureSize@CDesktopManager@@AEAAXXZ @ 0x180021CB4
 * Callers:
 *     ?CreateRenderTargets@CDesktopManager@@AEAAJXZ @ 0x1800219FC (-CreateRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CDesktopManager::UpdateMaxTextureSize(CDesktopManager *this)
{
  int v2; // eax

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 23) + 32LL))(*((_QWORD *)this + 23));
  MilComposition_SyncFlush(*((struct MIL_CHANNEL__ **)this + 4));
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 23) + 576LL))(*((_QWORD *)this + 23));
  *((_DWORD *)this + 38) = v2;
  *((_DWORD *)this + 39) = v2;
}
