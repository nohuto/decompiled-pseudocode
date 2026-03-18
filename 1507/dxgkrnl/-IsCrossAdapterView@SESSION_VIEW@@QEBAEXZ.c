/*
 * XREFs of ?IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ @ 0x1C01569AC
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C00A7470 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C00D28D8 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C008EFF4 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C008F008 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
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
