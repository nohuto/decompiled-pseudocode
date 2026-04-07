/*
 * XREFs of ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x18003FE7C
 * Callers:
 *     ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18003F33C (-ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@.c)
 *     ?ShowBarrel@CPenBarrelKeyVisual@@QEAAJ_N@Z @ 0x18008B258 (-ShowBarrel@CPenBarrelKeyVisual@@QEAAJ_N@Z.c)
 *     ?Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z @ 0x18008B27C (-Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z.c)
 * Callees:
 *     ?Unhide@CImage@@QEAAXN@Z @ 0x18006E8C0 (-Unhide@CImage@@QEAAXN@Z.c)
 *     ?Hide@CImage@@UEAAXXZ @ 0x18006E930 (-Hide@CImage@@UEAAXXZ.c)
 *     Template_q @ 0x18007CFB4 (Template_q.c)
 */

__int64 __fastcall CPenBarrelKeyVisual::UpdateBarrelAlpha(CImage **this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

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
        Template_q(v3, &UdwmPenBarrel_Stop, *((unsigned int *)this + 70));
      *((_BYTE *)this + 325) = 0;
    }
  }
  return 0LL;
}
