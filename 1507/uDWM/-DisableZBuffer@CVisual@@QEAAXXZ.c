/*
 * XREFs of ?DisableZBuffer@CVisual@@QEAAXXZ @ 0x180046CDC
 * Callers:
 *     ?Initialize@CLivePreview@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180045D00 (-Initialize@CLivePreview@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?CreateRootVisual@CWindowList@@QEAAJXZ @ 0x18004616C (-CreateRootVisual@CWindowList@@QEAAJXZ.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CVisual::DisableZBuffer(CVisual *this)
{
  if ( (*((_BYTE *)this + 188) & 4) == 0 )
  {
    *((_DWORD *)this + 47) |= 4u;
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 64LL);
  }
}
