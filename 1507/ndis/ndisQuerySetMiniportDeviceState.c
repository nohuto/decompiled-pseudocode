/*
 * XREFs of ndisQuerySetMiniportDeviceState @ 0x1C009B1E4
 * Callers:
 *     ndisSetDevicePower @ 0x1C000F10C (ndisSetDevicePower.c)
 *     ndisDevicePowerOn @ 0x1C00E5640 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C00E5B90 (ndisDevicePowerDown.c)
 *     ndisQueryPower @ 0x1C00E5E24 (ndisQueryPower.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C00036AC (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     Template_jqxqqt @ 0x1C005F4EC (Template_jqxqqt.c)
 *     WPP_SF_qZLLL @ 0x1C005F714 (WPP_SF_qZLLL.c)
 */

__int64 __fastcall ndisQuerySetMiniportDeviceState(__int64 a1, int a2, int a3, unsigned __int8 a4)
{
  unsigned int SetMiniport; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 v12; // [rsp+20h] [rbp-E0h]
  int v13; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v14[248]; // [rsp+60h] [rbp-A0h] BYREF

  v13 = a2;
  memset(v14, 0, sizeof(v14));
  if ( (unsigned __int8)byte_1C0085315 >= 4u )
    WPP_SF_q(0x34u, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, a1);
  memset(v14, 0, sizeof(v14));
  *(_DWORD *)&v14[88] |= 8u;
  *(_QWORD *)&v14[104] = &ndisIntReqGeneric;
  *(_DWORD *)v14 = 15466902;
  *(_DWORD *)&v14[32] = a3;
  *(_DWORD *)&v14[48] = 4;
  *(_DWORD *)&v14[8] = 0;
  *(_DWORD *)&v14[4] = a4 != 0;
  *(_QWORD *)&v14[40] = &v13;
  SetMiniport = ndisQuerySetMiniport((void *)a1, 0LL, (struct _NDIS_OID_REQUEST *)v14, 0LL, 0LL);
  v10 = SetMiniport;
  if ( SetMiniport && SetMiniport != -1073741637 )
  {
    if ( (unsigned __int8)byte_1C0085315 >= 4u )
    {
      LODWORD(v12) = a3;
      WPP_SF_qZLLL(a4, v8, a1, *(__int64 **)(a1 + 3912), v12, a4, SetMiniport);
    }
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      Template_jqxqqt(
        v9,
        v8,
        (const GUID *)(a1 + 4064),
        a1 + 4064,
        *(_DWORD *)(a1 + 4112),
        *(_QWORD *)(a1 + 4080),
        v10,
        a3,
        a4);
  }
  if ( (unsigned __int8)byte_1C0085315 >= 4u )
    WPP_SF_qD(0x36u, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, a1, v10);
  return v10;
}
