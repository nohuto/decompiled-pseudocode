/*
 * XREFs of ?Stop@CPressTapVisual@@UEAAXXZ @ 0x18008B960
 * Callers:
 *     ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x18008B604 (-Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z.c)
 *     ?UpdateTransition@CPressTapVisual@@MEAAJXZ @ 0x18008B9F0 (-UpdateTransition@CPressTapVisual@@MEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x18001F7E4 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     TemplateEventDescriptor @ 0x180075A10 (TemplateEventDescriptor.c)
 *     ?StopTimer@CPressTapVisual@@MEAAJXZ @ 0x18008B9A0 (-StopTimer@CPressTapVisual@@MEAAJXZ.c)
 */

void __fastcall CPressTapVisual::Stop(CPressTapVisual *this)
{
  __int64 v2; // rcx

  CPressTapVisual::StopTimer(this);
  CVisual::SetOpacity(this, 0.0);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor(v2, (__int64)&UdwmPressTapVisual_End);
}
