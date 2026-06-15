/*
 * XREFs of ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18008A600
 * Callers:
 *     ??$GetDeviceFormatInternal@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@@CEndpointCharacteristics@@AEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001C378 (--$GetDeviceFormatInternal@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@@CEndpointCharacteristics.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180020B70 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z @ 0x18006E594 (-SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z.c)
 *     ?SetDeviceFormatHwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@@Z @ 0x18006E85C (-SetDeviceFormatHwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@.c)
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18006EB18 (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_it.c)
 *     ??$GetDeviceFormatInternal@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@@CEndpointCharacteristics@@AEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180086DDC (--$GetDeviceFormatInternal@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@@CEndpointCharacteristics.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18001A650 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x180029AE0 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CEndpointCharacteristics::UpdateDeviceFormatEPProperty(
        CEndpointCharacteristics *this,
        char a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        const struct tWAVEFORMATEX *a4)
{
  const PROPERTYKEY *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // ebx
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C0h]
  __int64 v18; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+58h] [rbp-A8h] BYREF
  PROPVARIANT propvar1; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+68h] [rbp-98h]
  const struct tWAVEFORMATEX *v23; // [rsp+70h] [rbp-90h]
  PROPVARIANT propvar2[5]; // [rsp+78h] [rbp-88h] BYREF
  int v25[4]; // [rsp+A0h] [rbp-60h] BYREF
  GUID v26; // [rsp+B0h] [rbp-50h]
  GUID v27; // [rsp+C0h] [rbp-40h]
  GUID v28; // [rsp+D0h] [rbp-30h]
  GUID fmtid; // [rsp+E0h] [rbp-20h] BYREF
  DWORD pid; // [rsp+F0h] [rbp-10h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+120h] [rbp+20h] BYREF
  __int64 *v33; // [rsp+130h] [rbp+30h]
  int v34; // [rsp+138h] [rbp+38h]
  int v35; // [rsp+13Ch] [rbp+3Ch]
  int *v36; // [rsp+140h] [rbp+40h]
  int v37; // [rsp+148h] [rbp+48h]
  int v38; // [rsp+14Ch] [rbp+4Ch]

  propvar2[3] = (PROPVARIANT)-2LL;
  v15 = 0;
  v17 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  propvar1 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  memset(propvar2, 0, 24);
  if ( a4 )
  {
    v15 = ValidateWaveFormatEx(a4);
    if ( v15 < 0 )
      goto LABEL_26;
    LOWORD(propvar1) = 65;
    LODWORD(v22) = a4->cbSize + 18;
    v23 = a4;
  }
  v8 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
  if ( a3 != eKeywordDetectorConnector )
    v8 = &PKEY_AudioEngine_DeviceFormat;
  fmtid = v8->fmtid;
  pid = v8->pid;
  if ( (*(int (__fastcall **)(_QWORD, GUID *, PROPVARIANT *))(**((_QWORD **)this + 4) + 40LL))(
         *((_QWORD *)this + 4),
         &fmtid,
         propvar2) < 0
    || PropVariantCompareEx(&propvar1, propvar2, PVCU_DEFAULT, 0) )
  {
    v16 = 0LL;
    v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**((_QWORD **)this + 2) + 32LL))(
            *((_QWORD *)this + 2),
            2LL,
            &v16);
    if ( v15 < 0 )
    {
      v9 = v16;
      goto LABEL_10;
    }
    v15 = (*(__int64 (__fastcall **)(__int64, GUID *, PROPVARIANT *))(*(_QWORD *)v16 + 48LL))(v16, &fmtid, &propvar1);
    v9 = v16;
    if ( v15 < 0 )
    {
LABEL_10:
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      goto LABEL_26;
    }
    if ( v16 )
      (*(void (**)(void))(*(_QWORD *)v16 + 16LL))();
  }
  if ( a4 )
  {
    if ( !a2 && a3 != eKeywordDetectorConnector )
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(**((_QWORD **)this + 2) + 24LL))(
              *((_QWORD *)this + 2),
              &GUID_00bf79d8_20f2_4b3d_a648_d633308ccfe9,
              1LL);
      if ( v15 >= 0 )
      {
        v25[0] = 64;
        v26 = GUID_73647561_0000_0010_8000_00aa00389b71;
        v27 = GUID_00000001_0000_0010_8000_00aa00389b71;
        v28 = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
        v15 = (*(__int64 (__fastcall **)(__int64, int *, __int64, _QWORD, __int64 *))(*(_QWORD *)v17 + 24LL))(
                v17,
                v25,
                64LL,
                0LL,
                &v20);
        if ( v15 >= 0
          && (*(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v17 + 32LL))(
               v17,
               v20,
               &GUID_bb11c46f_ec28_493c_b88a_5db88062ce98,
               &v19) >= 0
          && (*(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v19 + 104LL))(
               v19,
               1LL,
               &GUID_bb11c46f_ec28_493c_b88a_5db88062ce98,
               &v18) >= 0 )
        {
          if ( a4->wFormatTag == 0xFFFE )
            v10 = *(unsigned int *)&a4[1].nChannels;
          else
            v10 = (unsigned int)(a4->nChannels != 2) + 3;
          (*(void (__fastcall **)(__int64, __int64, void *))(*(_QWORD *)v18 + 24LL))(
            v18,
            v10,
            &EVENTCONTEXT_POLICYCONFIG);
        }
      }
    }
  }
LABEL_26:
  PropVariantClear(propvar2);
  v11 = v15;
  if ( v15 < 0 && (unsigned int)hProvider > 2 )
  {
    TlgCreateSz(&pDesc, "CEndpointCharacteristics::UpdateDeviceFormatEPProperty");
    LODWORD(v16) = 5355;
    v33 = &v16;
    v34 = 4;
    v35 = 0;
    v36 = &v15;
    v37 = 4;
    v38 = 0;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800A877D, v12, v13, 5u, &pData);
    v11 = v15;
  }
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  return v11;
}
