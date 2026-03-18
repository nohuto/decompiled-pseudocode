/*
 * XREFs of ?IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ @ 0x1C017FF84
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00C5804 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PA.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00D1678 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C007AC74 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C007AC88 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 */

unsigned __int8 __fastcall SESSION_VIEW::IsCrossAdapterView(SESSION_VIEW *this)
{
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  SESSION_VIEW *v2; // rcx
  __int64 v4; // r9
  SESSION_VIEW *v5; // r10

  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(this);
  if ( PrimaryDisplaySource )
  {
    while ( 1 )
    {
      PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v2, PrimaryDisplaySource);
      if ( !PrimaryDisplaySource )
        break;
      if ( *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) != *(_QWORD *)(*(_QWORD *)(v4 + 8) + 16LL) )
        return 1;
      v2 = v5;
    }
  }
  return 0;
}
