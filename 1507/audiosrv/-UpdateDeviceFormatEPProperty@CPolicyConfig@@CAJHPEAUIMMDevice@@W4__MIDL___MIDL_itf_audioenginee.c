/*
 * XREFs of ?UpdateDeviceFormatEPProperty@CPolicyConfig@@CAJHPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18003742C
 * Callers:
 *     ?GetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002FCC0 (-GetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HHW4__MIDL___MIDL_itf_audioengineendpo.c)
 *     ?SetDeviceFormatHwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z @ 0x180033320 (-SetDeviceFormatHwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z.c)
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180033B28 (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengine.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18001ED50 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?PropVariantCompare@@YAHAEBUtagPROPVARIANT@@0@Z @ 0x180087CE8 (-PropVariantCompare@@YAHAEBUtagPROPVARIANT@@0@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CPolicyConfig::UpdateDeviceFormatEPProperty(
        int a1,
        struct IMMDevice *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct tWAVEFORMATEX *a4)
{
  int v8; // esi
  const PROPERTYKEY *v9; // rax
  unsigned int v10; // r15d
  __int64 v12; // [rsp+38h] [rbp-99h] BYREF
  __int64 v13; // [rsp+40h] [rbp-91h] BYREF
  __int64 v14; // [rsp+48h] [rbp-89h] BYREF
  __int64 v15; // [rsp+50h] [rbp-81h] BYREF
  __int64 v16; // [rsp+58h] [rbp-79h] BYREF
  struct tagPROPVARIANT v17; // [rsp+60h] [rbp-71h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+78h] [rbp-59h] BYREF
  __int64 v19; // [rsp+90h] [rbp-41h]
  int v20[4]; // [rsp+98h] [rbp-39h] BYREF
  GUID v21; // [rsp+A8h] [rbp-29h]
  GUID v22; // [rsp+B8h] [rbp-19h]
  GUID v23; // [rsp+C8h] [rbp-9h]
  GUID fmtid; // [rsp+D8h] [rbp+7h] BYREF
  DWORD pid; // [rsp+E8h] [rbp+17h]

  v19 = -2LL;
  v13 = 0LL;
  v12 = 0LL;
  v14 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  if ( a2 )
  {
    memset(&v17, 0, sizeof(v17));
    memset(&pvar, 0, sizeof(pvar));
    if ( a4 )
    {
      v8 = ValidateWaveFormatEx(a4);
      if ( v8 < 0 )
        goto LABEL_23;
      v17.vt = 65;
      v17.lVal = a4->cbSize + 18;
      v17.bstrblobVal.pData = (BYTE *)a4;
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
      if ( (*(int (__fastcall **)(__int64, GUID *, struct tagPROPVARIANT *))(*(_QWORD *)v13 + 40LL))(v13, &fmtid, &pvar) >= 0
        && !(unsigned int)PropVariantCompare(&v17, &pvar)
        || (v8 = (*(__int64 (__fastcall **)(__int64, GUID *, struct tagPROPVARIANT *))(*(_QWORD *)v13 + 48LL))(
                   v13,
                   &fmtid,
                   &v17),
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
              v20[0] = 64;
              v21 = GUID_73647561_0000_0010_8000_00aa00389b71;
              v22 = GUID_00000001_0000_0010_8000_00aa00389b71;
              v23 = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
              v8 = (*(__int64 (__fastcall **)(__int64, int *, __int64, _QWORD, __int64 *))(*(_QWORD *)v12 + 24LL))(
                     v12,
                     v20,
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
  PropVariantClear((PROPVARIANT *)&pvar);
  if ( v8 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x38u,
      (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      v8);
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
