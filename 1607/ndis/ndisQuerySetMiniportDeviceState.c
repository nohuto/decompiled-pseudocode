/*
 * XREFs of ndisQuerySetMiniportDeviceState @ 0x1C009C914
 * Callers:
 *     ndisSetDevicePower @ 0x1C0011174 (ndisSetDevicePower.c)
 *     ndisDevicePowerOn @ 0x1C00E5000 (ndisDevicePowerOn.c)
 *     ndisQueryPower @ 0x1C00E5B80 (ndisQueryPower.c)
 *     ndisDevicePowerDown @ 0x1C00E5F90 (ndisDevicePowerDown.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C000A5A0 (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     Template_jqxqqt @ 0x1C0062E3C (Template_jqxqqt.c)
 *     WPP_SF_qZLLL @ 0x1C006305C (WPP_SF_qZLLL.c)
 */

__int64 __fastcall ndisQuerySetMiniportDeviceState(__int64 a1, int a2, int a3, unsigned __int8 a4)
{
  char v7; // cl
  unsigned int SetMiniport; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v13; // [rsp+20h] [rbp-E0h]
  int v14; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v15[248]; // [rsp+60h] [rbp-A0h] BYREF

  v14 = a2;
  memset(v15, 0, sizeof(v15));
  v7 = byte_1C00895D5;
  if ( (unsigned __int8)byte_1C00895D5 >= 4u )
  {
    WPP_SF_q(0x34u, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, a1);
    v7 = byte_1C00895D5;
  }
  if ( (*(_DWORD *)(a1 + 120) & 0x80u) != 0 )
  {
    if ( (unsigned __int8)v7 >= 4u )
      WPP_SF_q(0x35u, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, a1);
    return 0LL;
  }
  else
  {
    memset(v15, 0, sizeof(v15));
    *(_DWORD *)&v15[88] |= 8u;
    *(_QWORD *)&v15[104] = &ndisIntReqGeneric;
    *(_DWORD *)v15 = 15466902;
    *(_DWORD *)&v15[32] = a3;
    *(_DWORD *)&v15[48] = 4;
    *(_DWORD *)&v15[8] = 0;
    *(_DWORD *)&v15[4] = a4 != 0;
    *(_QWORD *)&v15[40] = &v14;
    SetMiniport = ndisQuerySetMiniport((void *)a1, 0LL, (struct _NDIS_OID_REQUEST *)v15, 0LL, 0LL);
    v11 = SetMiniport;
    if ( SetMiniport && SetMiniport != -1073741637 )
    {
      if ( (unsigned __int8)byte_1C00895D5 >= 4u )
      {
        LODWORD(v13) = a3;
        WPP_SF_qZLLL(a4, v9, a1, *(unsigned __int16 **)(a1 + 3912), v13, a4, SetMiniport);
      }
      if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
        Template_jqxqqt(
          v10,
          v9,
          (const GUID *)(a1 + 4064),
          a1 + 4064,
          *(_DWORD *)(a1 + 4112),
          *(_QWORD *)(a1 + 4080),
          v11,
          a3,
          a4);
    }
    if ( (unsigned __int8)byte_1C00895D5 >= 4u )
      WPP_SF_qD(0x37u, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, a1, v11);
    return v11;
  }
}
