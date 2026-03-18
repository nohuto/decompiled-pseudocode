/*
 * XREFs of ?PowerPolicyGetDeviceDeepestDeviceWakeState@FxPkgPnp@@IEAA?AW4_DEVICE_POWER_STATE@@W4_SYSTEM_POWER_STATE@@@Z @ 0x1C0025080
 * Callers:
 *     ?PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z @ 0x1C00286D0 (-PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z.c)
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x1C002884C (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0018048 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     __security_check_cookie @ 0x1C003A860 (__security_check_cookie.c)
 *     WPP_IFR_SF_LL @ 0x1C0098500 (WPP_IFR_SF_LL.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolicyGetDeviceDeepestDeviceWakeState(FxPkgPnp *this, unsigned int SystemState)
{
  int v2; // edx
  unsigned int v3; // r8d
  __int64 v4; // r9
  int v5; // r10d
  __int64 v6; // rax
  unsigned __int8 v7; // dl
  unsigned int id; // ebx
  unsigned int v10; // eax
  __int64 v11; // rax
  const _GUID *v12; // [rsp+20h] [rbp-68h]
  __m128i si128; // [rsp+40h] [rbp-48h]
  int v14; // [rsp+50h] [rbp-38h]
  int v15; // [rsp+54h] [rbp-34h]
  unsigned int v16[4]; // [rsp+58h] [rbp-30h]
  unsigned int v17; // [rsp+68h] [rbp-20h]
  unsigned int v18; // [rsp+6Ch] [rbp-1Ch]

  if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, SystemState, 0xBu) )
  {
    v10 = v2 - 1;
    v7 = 4;
    if ( v10 > 4 )
    {
      id = 1;
    }
    else
    {
      _mm_lfence();
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      v14 = 4;
      v15 = 4;
      v11 = *(unsigned __int8 *)(v5 - 1 + v4 + 1004);
      if ( (unsigned int)v11 > 5 )
      {
        id = 0;
LABEL_13:
        WPP_IFR_SF_LL(*(_FX_DRIVER_GLOBALS **)(v4 + 16), v7, v3, v4, v12, *(unsigned __int8 *)(v4 + 1009), id);
        return id;
      }
      id = si128.m128i_u32[v11];
    }
  }
  else
  {
    v6 = *(unsigned __int8 *)(v4 + 1004);
    v7 = v3 - 7;
    v17 = v3 - 7;
    v18 = v3 - 7;
    *(__m128i *)v16 = _mm_load_si128((const __m128i *)&_xmm);
    if ( (unsigned int)v6 > 5 )
      id = 0;
    else
      id = v16[v6];
  }
  if ( !id || !*(_BYTE *)(v4 + 1009) )
    goto LABEL_13;
  return id;
}
