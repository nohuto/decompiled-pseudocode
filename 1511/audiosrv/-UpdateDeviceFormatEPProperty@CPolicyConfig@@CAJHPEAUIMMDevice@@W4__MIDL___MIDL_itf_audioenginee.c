/*
 * XREFs of ?UpdateDeviceFormatEPProperty@CPolicyConfig@@CAJHPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800863B8
 * Callers:
 *     ?GetDeviceFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180010EC0 (-GetDeviceFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@HHW4__MIDL___MIDL_itf_a.c)
 *     ?SetDeviceFormatHwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z @ 0x180084C00 (-SetDeviceFormatHwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z.c)
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180084E18 (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengine.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800110D0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CPolicyConfig::UpdateDeviceFormatEPProperty(
        int a1,
        struct IMMDevice *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        const struct tWAVEFORMATEX *a4)
{
  int v8; // esi
  const PROPERTYKEY *v9; // rax
  unsigned int v10; // r15d
  __int64 v12; // [rsp+38h] [rbp-99h] BYREF
  __int64 v13; // [rsp+40h] [rbp-91h] BYREF
  __int64 v14; // [rsp+48h] [rbp-89h] BYREF
  __int64 v15; // [rsp+50h] [rbp-81h] BYREF
  __int64 v16; // [rsp+58h] [rbp-79h] BYREF
  PROPVARIANT propvar1; // [rsp+60h] [rbp-71h] BYREF
  __int64 v18; // [rsp+68h] [rbp-69h]
  const struct tWAVEFORMATEX *v19; // [rsp+70h] [rbp-61h]
  PROPVARIANT propvar2[4]; // [rsp+78h] [rbp-59h] BYREF
  int v21[4]; // [rsp+98h] [rbp-39h] BYREF
  GUID v22; // [rsp+A8h] [rbp-29h]
  GUID v23; // [rsp+B8h] [rbp-19h]
  GUID v24; // [rsp+C8h] [rbp-9h]
  GUID fmtid; // [rsp+D8h] [rbp+7h] BYREF
  DWORD pid; // [rsp+E8h] [rbp+17h]

  propvar2[3] = (PROPVARIANT)-2LL;
  v13 = 0LL;
  v12 = 0LL;
  v14 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  propvar1 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  memset(propvar2, 0, 24);
  if ( a2 )
  {
    if ( a4 )
    {
      v8 = ValidateWaveFormatEx(a4);
      if ( v8 < 0 )
        goto LABEL_23;
      LOWORD(propvar1) = 65;
      LODWORD(v18) = a4->cbSize + 18;
      v19 = a4;
    }
    v8 = ((__int64 (__fastcall *)(struct IMMDevice *, __int64, __int64 *))a2->lpVtbl->OpenPropertyStore)(a2, 2LL, &v13);
    if ( v8 >= 0 )
    {
      v9 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
      if ( a3 != eKeywordDetectorConnector )
        v9 = &PKEY_AudioEngine_DeviceFormat;
      fmtid = v9->fmtid;
      pid = v9->pid;
      v8 = 0;
      if ( (*(int (__fastcall **)(__int64, GUID *, PROPVARIANT *))(*(_QWORD *)v13 + 40LL))(v13, &fmtid, propvar2) >= 0
        && !PropVariantCompareEx(&propvar1, propvar2, PVCU_DEFAULT, 0)
        || (v8 = (*(__int64 (__fastcall **)(__int64, GUID *, PROPVARIANT *))(*(_QWORD *)v13 + 48LL))(
                   v13,
                   &fmtid,
                   &propvar1),
            v8 >= 0) )
      {
        if ( a4 )
        {
          if ( !a1 && a3 != eKeywordDetectorConnector )
          {
            v8 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64, _QWORD, __int64 *))a2->lpVtbl->Activate)(
                   a2,
                   &GUID_00bf79d8_20f2_4b3d_a648_d633308ccfe9,
                   1LL,
                   0LL,
                   &v12);
            if ( v8 >= 0 )
            {
              v21[0] = 64;
              v22 = GUID_73647561_0000_0010_8000_00aa00389b71;
              v23 = GUID_00000001_0000_0010_8000_00aa00389b71;
              v24 = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
              v8 = (*(__int64 (__fastcall **)(__int64, int *, __int64, _QWORD, __int64 *))(*(_QWORD *)v12 + 24LL))(
                     v12,
                     v21,
                     64LL,
                     0LL,
                     &v14);
              if ( v8 >= 0
                && (*(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v12 + 32LL))(
                     v12,
                     v14,
                     &GUID_bb11c46f_ec28_493c_b88a_5db88062ce98,
                     &v16) >= 0
                && (*(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v16 + 104LL))(
                     v16,
                     1LL,
                     &GUID_bb11c46f_ec28_493c_b88a_5db88062ce98,
                     &v15) >= 0 )
              {
                if ( a4->wFormatTag == 0xFFFE )
                  v10 = *(_DWORD *)&a4[1].nChannels;
                else
                  v10 = (a4->nChannels != 2) + 3;
                (*(void (__fastcall **)(__int64, _QWORD, void *))(*(_QWORD *)v15 + 24LL))(
                  v15,
                  v10,
                  &EVENTCONTEXT_POLICYCONFIG);
              }
            }
          }
        }
      }
    }
  }
  else
  {
    v8 = -2147467261;
  }
LABEL_23:
  PropVariantClear(propvar2);
  if ( v8 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x37u, (__int64)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids, v8);
  }
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return (unsigned int)v8;
}
