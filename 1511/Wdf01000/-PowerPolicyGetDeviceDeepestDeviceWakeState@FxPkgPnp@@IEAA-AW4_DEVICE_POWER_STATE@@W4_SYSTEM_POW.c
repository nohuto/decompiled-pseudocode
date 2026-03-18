/*
 * XREFs of ?PowerPolicyGetDeviceDeepestDeviceWakeState@FxPkgPnp@@IEAA?AW4_DEVICE_POWER_STATE@@W4_SYSTEM_POWER_STATE@@@Z @ 0x1C00145FC
 * Callers:
 *     ?PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z @ 0x1C0017C04 (-PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z.c)
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x1C0017D80 (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0020B68 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     __security_check_cookie @ 0x1C0035B00 (__security_check_cookie.c)
 *     WPP_IFR_SF_LL @ 0x1C0089DC0 (WPP_IFR_SF_LL.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolicyGetDeviceDeepestDeviceWakeState(FxPkgPnp *this, unsigned int SystemState)
{
  unsigned int v2; // r8d
  __int64 v3; // r9
  __int64 v4; // r10
  _FX_DRIVER_GLOBALS *v5; // r11
  __int64 v6; // rax
  unsigned int id; // ebx
  __int64 v9; // rcx
  const _GUID *v10; // [rsp+20h] [rbp-48h]
  unsigned int v11[4]; // [rsp+40h] [rbp-28h]
  unsigned int v12; // [rsp+50h] [rbp-18h]
  unsigned int v13; // [rsp+54h] [rbp-14h]

  if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, SystemState, 0xBu) )
  {
    if ( (int)v4 - 1 > v2 - 7 )
    {
      id = 1;
    }
    else
    {
      v9 = *(unsigned __int8 *)(v4 + v3 + 1003);
      v12 = v2 - 7;
      v13 = v2 - 7;
      *(__m128i *)v11 = _mm_load_si128((const __m128i *)&_xmm);
      if ( (unsigned int)v9 > 5 )
      {
        id = 0;
LABEL_13:
        WPP_IFR_SF_LL(v5, *(_BYTE *)(v3 + 1009), v2, v3, v10, *(unsigned __int8 *)(v3 + 1009), id);
        return id;
      }
      id = v11[v9];
    }
  }
  else
  {
    v6 = *(unsigned __int8 *)(v3 + 1004);
    v12 = v2 - 7;
    v13 = v2 - 7;
    *(__m128i *)v11 = _mm_load_si128((const __m128i *)&_xmm);
    if ( (unsigned int)v6 > 5 )
      id = 0;
    else
      id = v11[v6];
  }
  if ( !id || !*(_BYTE *)(v3 + 1009) )
    goto LABEL_13;
  return id;
}
