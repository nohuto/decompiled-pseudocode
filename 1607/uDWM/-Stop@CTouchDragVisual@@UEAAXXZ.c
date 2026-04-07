/*
 * XREFs of ?Stop@CTouchDragVisual@@UEAAXXZ @ 0x18006F600
 * Callers:
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18004E448 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ??1CTouchDragVisual@@MEAA@XZ @ 0x1800890AC (--1CTouchDragVisual@@MEAA@XZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x18001F7E4 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x1800488A0 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     TemplateEventDescriptor @ 0x180075A10 (TemplateEventDescriptor.c)
 */

void __fastcall CTouchDragVisual::Stop(CTouchDragVisual *this)
{
  __int64 v2; // rcx

  CTouchVisual::UnRegisterGlobalTimer(this);
  CVisual::SetOpacity(this, 0.0);
  if ( !*((_BYTE *)this + 425) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      TemplateEventDescriptor(v2, &UdwmTouchDragVisual_End);
    *((_BYTE *)this + 425) = 1;
  }
}
