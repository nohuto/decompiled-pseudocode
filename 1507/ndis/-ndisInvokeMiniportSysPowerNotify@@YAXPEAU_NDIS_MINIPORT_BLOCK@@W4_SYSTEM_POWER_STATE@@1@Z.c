/*
 * XREFs of ?ndisInvokeMiniportSysPowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1@Z @ 0x1C000F9E8
 * Callers:
 *     ndisSetSystemPower @ 0x1C009B6DC (ndisSetSystemPower.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

void __fastcall ndisInvokeMiniportSysPowerNotify(
        struct _NDIS_MINIPORT_BLOCK *a1,
        enum _SYSTEM_POWER_STATE a2,
        enum _SYSTEM_POWER_STATE a3)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rdi
  _DWORD v5[4]; // [rsp+20h] [rbp-38h] BYREF

  DriverHandle = a1->DriverHandle;
  if ( DriverHandle->SysPowerNotifyHandler && (a1->PnPFlags & 0x4000) == 0 )
  {
    v5[0] = 786816;
    v5[1] = a2;
    v5[2] = a3;
    if ( (unsigned __int8)byte_1C0085315 >= 4u )
      WPP_SF_q(11LL, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, a1);
    DriverHandle->SysPowerNotifyHandler(a1->MiniportAdapterContext, (_NDIS_MINIPORT_SYSPOWER_NOTIFY *)v5);
    if ( (unsigned __int8)byte_1C0085315 >= 4u )
      WPP_SF_q(12LL, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, a1);
  }
}
