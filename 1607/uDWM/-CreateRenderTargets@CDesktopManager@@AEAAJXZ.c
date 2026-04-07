/*
 * XREFs of ?CreateRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18001E778
 * Callers:
 *     ?ModeChangeImpl@CDesktopManager@@AEAAJXZ @ 0x18001EEA4 (-ModeChangeImpl@CDesktopManager@@AEAAJXZ.c)
 *     ?CreateDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x180045E84 (-CreateDesktopRenderTarget@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV?$DynArray@PEAUIDCompositionRenderTargetPartner@@$0A@@@PEAPEBVCDWMDisplay@@PEA_NPEAH3@Z @ 0x18001E910 (-GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV-$DynArray@PEAUIDCompositionRenderTargetPa.c)
 *     ?UpdateMaxTextureSize@CDesktopManager@@AEAAXXZ @ 0x18001EFC4 (-UpdateMaxTextureSize@CDesktopManager@@AEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002AA44 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x18003F354 (-Release@CDWMDisplay@@QEBAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseRenderTarget@CDesktopManager@@AEAAJXZ @ 0x180076FF0 (-ReleaseRenderTarget@CDesktopManager@@AEAAJXZ.c)
 *     ?HandleScreenRotation@CWindowList@@QEAAXHH@Z @ 0x180081348 (-HandleScreenRotation@CWindowList@@QEAAXHH@Z.c)
 */

__int64 __fastcall CDesktopManager::CreateRenderTargets(CDesktopManager *this)
{
  int v2; // ebx
  _QWORD *v3; // rsi
  __int64 v4; // rcx
  int v5; // eax
  int DcompTargetsForNewGroup; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int128 v11; // [rsp+38h] [rbp-21h] BYREF
  __int64 v12; // [rsp+48h] [rbp-11h]
  unsigned int v13; // [rsp+50h] [rbp-9h]
  __int128 v14; // [rsp+58h] [rbp-1h] BYREF
  __int64 v15; // [rsp+68h] [rbp+Fh]
  int v16; // [rsp+70h] [rbp+17h]
  __int64 v17; // [rsp+C8h] [rbp+6Fh] BYREF
  __int64 v18; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v19; // [rsp+D8h] [rbp+7Fh] BYREF

  v2 = 0;
  v19 = 0LL;
  if ( *((_QWORD *)this + 9) )
  {
    v15 = 0LL;
    v3 = (_QWORD *)((char *)this + 80);
    v16 = 0;
    v4 = *((_QWORD *)this + 10);
    v12 = 0LL;
    v13 = 0;
    v14 = 0LL;
    v11 = 0LL;
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      *v3 = 0LL;
    }
    v5 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))CDesktopManager::s_pDesktopManagerInstance + 21))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21),
           &GUID_0ab6bdb3_4d49_46a8_b90b_1a86b0cd4e41,
           &v19);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x3C3u);
    }
    else
    {
      DcompTargetsForNewGroup = CDesktopManager::GetDcompTargetsForNewGroup(this, (__int64)&v18, (__int64)&v17);
      v2 = DcompTargetsForNewGroup;
      if ( DcompTargetsForNewGroup < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, DcompTargetsForNewGroup, 0x3C7u);
      }
      else if ( v13 )
      {
        v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v19 + 432LL))(v19, v11, v13, v3);
        v2 = v7;
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x3DDu);
        }
        else
        {
          v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 9) + 40LL))(*((_QWORD *)this + 9), *v3);
          v2 = v8;
          if ( v8 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x3DEu);
          }
          else
          {
            v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 21)
                                                   + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21));
            v2 = v9;
            if ( v9 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x3E0u);
            else
              CDesktopManager::UpdateMaxTextureSize(this);
          }
        }
      }
    }
    DynArrayImpl<0>::~DynArrayImpl<0>(&v11);
    DynArrayImpl<0>::~DynArrayImpl<0>(&v14);
    if ( v2 < 0 )
      CDesktopManager::ReleaseRenderTarget(this);
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  return (unsigned int)v2;
}
