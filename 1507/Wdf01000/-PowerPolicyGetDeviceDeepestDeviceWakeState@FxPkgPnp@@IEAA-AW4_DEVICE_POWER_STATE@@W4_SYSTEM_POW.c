/*
 * XREFs of ?PowerPolicyGetDeviceDeepestDeviceWakeState@FxPkgPnp@@IEAA?AW4_DEVICE_POWER_STATE@@W4_SYSTEM_POWER_STATE@@@Z @ 0x1C0019120
 * Callers:
 *     ?PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z @ 0x1C001AFB4 (-PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z.c)
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x1C001B130 (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0021E18 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     __security_check_cookie @ 0x1C0030D80 (__security_check_cookie.c)
 *     WPP_IFR_SF_LL @ 0x1C009F110 (WPP_IFR_SF_LL.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolicyGetDeviceDeepestDeviceWakeState(FxPkgPnp *this, unsigned int SystemState)
{
  unsigned __int8 IsVersionGreaterThanOrEqualTo; // al
  unsigned int v3; // r8d
  __int64 v4; // r9
  __int64 v5; // r10
  unsigned int v6; // edx
  __int64 v7; // rax
  unsigned int id; // ebx
  __int64 v10; // rcx
  const _GUID *v11; // [rsp+20h] [rbp-68h]
  __m128i si128; // [rsp+40h] [rbp-48h]
  unsigned int v13; // [rsp+50h] [rbp-38h]
  unsigned int v14; // [rsp+54h] [rbp-34h]
  unsigned int v15[4]; // [rsp+58h] [rbp-30h]
  unsigned int v16; // [rsp+68h] [rbp-20h]
  unsigned int v17; // [rsp+6Ch] [rbp-1Ch]

  IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, SystemState, 0xBu);
  v6 = v3 - 7;
  if ( IsVersionGreaterThanOrEqualTo )
  {
    if ( (int)v5 - 1 > v6 )
    {
      id = 1;
    }
    else
    {
      _mm_lfence();
      v10 = *(unsigned __int8 *)(v5 + v4 + 1003);
      v13 = v3 - 7;
      v14 = v3 - 7;
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      if ( (unsigned int)v10 > 5 )
      {
        id = 0;
LABEL_13:
        WPP_IFR_SF_LL(*(_FX_DRIVER_GLOBALS **)(v4 + 16), v6, v3, v4, v11, *(unsigned __int8 *)(v4 + 1009), id);
        return id;
      }
      id = si128.m128i_u32[v10];
    }
  }
  else
  {
    v7 = *(unsigned __int8 *)(v4 + 1004);
    v16 = v3 - 7;
    v17 = v3 - 7;
    *(__m128i *)v15 = _mm_load_si128((const __m128i *)&_xmm);
    if ( (unsigned int)v7 > 5 )
      id = 0;
    else
      id = v15[v7];
  }
  if ( !id || !*(_BYTE *)(v4 + 1009) )
    goto LABEL_13;
  return id;
}
