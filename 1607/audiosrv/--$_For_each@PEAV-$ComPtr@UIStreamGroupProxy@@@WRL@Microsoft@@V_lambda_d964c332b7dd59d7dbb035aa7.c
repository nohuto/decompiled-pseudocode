/*
 * XREFs of ??$_For_each@PEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V_lambda_d964c332b7dd59d7dbb035aa7db56ce6_@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@0AEAV_lambda_d964c332b7dd59d7dbb035aa7db56ce6_@@@Z @ 0x18007752C
 * Callers:
 *     ??$for_each@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@std@@V_lambda_d964c332b7dd59d7dbb035aa7db56ce6_@@@std@@YA?AV_lambda_d964c332b7dd59d7dbb035aa7db56ce6_@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@0@0V1@@Z @ 0x180077884 (--$for_each@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$ComPtr@UIStreamG_ea_180077884.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 */

void __fastcall std::_For_each<Microsoft::WRL::ComPtr<IStreamGroupProxy> *,_lambda_d964c332b7dd59d7dbb035aa7db56ce6_>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v5; // rbx
  int v6; // eax

  if ( a1 != a2 )
  {
    v5 = a1;
    do
    {
      v6 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)g_DeviceGraphManager
                                                                                            + 40LL))(
             g_DeviceGraphManager,
             *v5,
             *a3,
             0LL,
             0LL);
      if ( v6 < 0
        && WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x2Du,
          (__int64)&WPP_c7d29aab855135f4e4ca21d8656ed7ad_Traceguids,
          v6);
      }
      ++v5;
    }
    while ( v5 != a2 );
  }
}
