/*
 * XREFs of ?GetOffloadDeviceFormat@@YAJPEBGPEAPEAUtWAVEFORMATEX@@@Z @ 0x1800680D4
 * Callers:
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x180081AB4 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 *     ?GetDefaultFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIPropertyStore@@PEAPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180083034 (-GetDefaultFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@HW4__MIDL___MIDL_itf_audioengi.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetOffloadDeviceFormat(const unsigned __int16 *a1, struct tWAVEFORMATEX **a2)
{
  HRESULT v4; // esi
  __int64 v6; // [rsp+80h] [rbp+40h] BYREF
  LPVOID ppv; // [rsp+88h] [rbp+48h] BYREF

  ppv = 0LL;
  v6 = 0LL;
  if ( !a1 || !a2 )
  {
    v4 = -2147024809;
LABEL_9:
    if ( v4 >= 0 )
      goto LABEL_14;
    goto LABEL_10;
  }
  v4 = CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &ppv);
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, a1, &v6);
    if ( v4 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v6 + 24LL))(
             v6,
             &GUID_eddce3e4_f3c1_453a_b461_223563cbd886,
             1LL);
      if ( v4 >= 0 )
      {
        v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, struct tWAVEFORMATEX **))(MEMORY[0] + 32LL))(
               0LL,
               v6,
               1LL,
               a2);
        goto LABEL_9;
      }
    }
  }
LABEL_10:
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x22u, (__int64)&WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids, v4);
  }
LABEL_14:
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v4;
}
