/*
 * XREFs of ?GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z @ 0x1C007C114
 * Callers:
 *     ?GetOwnedDisplaySource@DXGSESSIONDATA@@QEBAPEAVDISPLAY_SOURCE@@AEBU_LUID@@I@Z @ 0x1C007BCE4 (-GetOwnedDisplaySource@DXGSESSIONDATA@@QEBAPEAVDISPLAY_SOURCE@@AEBU_LUID@@I@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C007C090 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C008C62C (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 * Callees:
 *     <none>
 */

struct DISPLAY_SOURCE *__fastcall SESSION_ADAPTER::GetDisplaySource(SESSION_ADAPTER *this, int a2)
{
  SESSION_ADAPTER *i; // rax

  for ( i = (SESSION_ADAPTER *)*((_QWORD *)this + 12);
        i != (SESSION_ADAPTER *)((char *)this + 96);
        i = *(SESSION_ADAPTER **)i )
  {
    if ( *((_DWORD *)i - 4) == a2 )
      return (SESSION_ADAPTER *)((char *)i - 32);
  }
  return 0LL;
}
