/*
 * XREFs of ?InitializeInterface@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C00D0B18
 * Callers:
 *     ?_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C00CD870 (-_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::InitializeInterface(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct _DXGK_VIDPNSOURCEMODESET_INTERFACE *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rax

  if ( !this )
  {
    v5 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v5);
  }
  *(_QWORD *)this = DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::GetNumModes;
  *((_QWORD *)this + 1) = DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquireFirstModeInfo;
  *((_QWORD *)this + 2) = DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo;
  *((_QWORD *)this + 3) = DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquirePinnedModeInfo;
  *((_QWORD *)this + 4) = DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::ReleaseModeInfo;
  *((_QWORD *)this + 5) = DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::CreateNewModeInfo;
  *((_QWORD *)this + 6) = DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AddMode;
  *((_QWORD *)this + 7) = DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::PinMode;
}
