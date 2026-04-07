/*
 * XREFs of ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x180042228
 * Callers:
 *     ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18003AA9C (-ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@.c)
 *     ?ShowBarrel@CPenBarrelKeyVisual@@QEAAJ_N@Z @ 0x18008A520 (-ShowBarrel@CPenBarrelKeyVisual@@QEAAJ_N@Z.c)
 *     ?Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z @ 0x18008A544 (-Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z.c)
 * Callees:
 *     ?Unhide@CImage@@QEAAXN@Z @ 0x18006E904 (-Unhide@CImage@@QEAAXN@Z.c)
 *     ?Hide@CImage@@UEAAXXZ @ 0x18006E940 (-Hide@CImage@@UEAAXXZ.c)
 *     Template_q @ 0x180075A2C (Template_q.c)
 */

__int64 __fastcall CPenBarrelKeyVisual::UpdateBarrelAlpha(CImage **this)
{
  __int64 v2; // rcx
  __int64 v4; // rcx

  if ( *((_BYTE *)this + 324) && (*((_BYTE *)this + 292) & 0x20) != 0 )
  {
    CImage::Unhide(this[38], 1.0);
    if ( !*((_BYTE *)this + 325) )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        Template_q(v2, &UdwmPenBarrel_Start, *((unsigned int *)this + 70));
      *((_BYTE *)this + 325) = 1;
    }
  }
  else
  {
    CImage::Hide(this[38]);
    if ( *((_BYTE *)this + 325) )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        Template_q(v4, &UdwmPenBarrel_Stop, *((unsigned int *)this + 70));
      *((_BYTE *)this + 325) = 0;
    }
  }
  return 0LL;
}
