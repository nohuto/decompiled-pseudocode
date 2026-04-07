/*
 * XREFs of ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x180087650
 * Callers:
 *     ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x1800807FC (-ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@.c)
 *     ?ShowBarrel@CPenBarrelKeyVisual@@QEAAJ_N@Z @ 0x180087598 (-ShowBarrel@CPenBarrelKeyVisual@@QEAAJ_N@Z.c)
 *     ?Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z @ 0x1800875BC (-Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z.c)
 * Callees:
 *     ?Hide@CImage@@UEAAXXZ @ 0x180071150 (-Hide@CImage@@UEAAXXZ.c)
 *     ?Unhide@CImage@@QEAAXN@Z @ 0x1800711BC (-Unhide@CImage@@QEAAXN@Z.c)
 *     Template_q @ 0x180074F24 (Template_q.c)
 */

__int64 __fastcall CPenBarrelKeyVisual::UpdateBarrelAlpha(CPenBarrelKeyVisual *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( *((_BYTE *)this + 324) && (*((_BYTE *)this + 292) & 0x20) != 0 )
  {
    CImage::Unhide(*((CImage **)this + 38), 1.0);
    if ( !*((_BYTE *)this + 325) )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        Template_q(v2, (__int64)&UdwmPenBarrel_Start, *((_DWORD *)this + 70));
      *((_BYTE *)this + 325) = 1;
    }
  }
  else
  {
    CImage::Hide(*((CImage **)this + 38));
    if ( *((_BYTE *)this + 325) )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        Template_q(v3, (__int64)&UdwmPenBarrel_Stop, *((_DWORD *)this + 70));
      *((_BYTE *)this + 325) = 0;
    }
  }
  return 0LL;
}
