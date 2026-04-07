/*
 * XREFs of ?Stop@CPressTapVisual@@UEAAXXZ @ 0x18008C6E0
 * Callers:
 *     ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x18008C374 (-Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z.c)
 *     ?UpdateTransition@CPressTapVisual@@MEAAJXZ @ 0x18008C770 (-UpdateTransition@CPressTapVisual@@MEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180022540 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     TemplateEventDescriptor @ 0x180073BC8 (TemplateEventDescriptor.c)
 *     ?StopTimer@CPressTapVisual@@MEAAJXZ @ 0x18008C720 (-StopTimer@CPressTapVisual@@MEAAJXZ.c)
 */

void __fastcall CPressTapVisual::Stop(CPressTapVisual *this)
{
  __int64 v2; // rcx

  CPressTapVisual::StopTimer(this);
  CVisual::SetOpacity(this, 0.0);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor(v2, (__int64)&UdwmPressTapVisual_End);
}
