/*
 * XREFs of ?GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z @ 0x1C008F48C
 * Callers:
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C0065A90 (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEAU_LUID@@I@Z @ 0x1C008F0B8 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEAU_LUID@@I@Z.c)
 *     ?GetOwnedDisplaySource@DXGSESSIONDATA@@QEBAPEAVDISPLAY_SOURCE@@AEAU_LUID@@I@Z @ 0x1C008F430 (-GetOwnedDisplaySource@DXGSESSIONDATA@@QEBAPEAVDISPLAY_SOURCE@@AEAU_LUID@@I@Z.c)
 * Callees:
 *     <none>
 */

struct DISPLAY_SOURCE *__fastcall SESSION_ADAPTER::GetDisplaySource(SESSION_ADAPTER *this, int a2)
{
  SESSION_ADAPTER *i; // rax

  for ( i = (SESSION_ADAPTER *)*((_QWORD *)this + 10);
        i != (SESSION_ADAPTER *)((char *)this + 80);
        i = *(SESSION_ADAPTER **)i )
  {
    if ( *((_DWORD *)i - 4) == a2 )
      return (SESSION_ADAPTER *)((char *)i - 32);
  }
  return 0LL;
}
