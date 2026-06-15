/*
 * XREFs of ?ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z @ 0x180013008
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180012764 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

HRESULT __fastcall CApplicationManager::ReadBackgroundAudioTaskCapability(
        CApplicationManager *this,
        void *a2,
        int *a3,
        int *a4)
{
  HRESULT result; // eax
  const GUID *v8; // r8
  const GUID *v9; // r9
  int v10; // ebx
  UINT32 ppv; // [rsp+20h] [rbp-49h]
  HRESULT Instance; // [rsp+30h] [rbp-39h] BYREF
  UINT32 cData[2]; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  const char *v15; // [rsp+60h] [rbp-9h]
  int v16; // [rsp+68h] [rbp-1h]
  int v17; // [rsp+6Ch] [rbp+3h]
  UINT32 *v18; // [rsp+70h] [rbp+7h]
  int v19; // [rsp+78h] [rbp+Fh]
  int v20; // [rsp+7Ch] [rbp+13h]
  HRESULT *p_Instance; // [rsp+80h] [rbp+17h]
  int v22; // [rsp+88h] [rbp+1Fh]
  int v23; // [rsp+8Ch] [rbp+23h]

  *a3 = 0;
  *a4 = 0;
  result = CoInitializeEx(0LL, 0);
  Instance = result;
  if ( result < 0 )
    goto LABEL_13;
  Instance = CoCreateInstance(
               &CLSID_BackgroundTaskCapability,
               0LL,
               1u,
               &GUID_d54e68c2_54cd_48b3_ad9a_3f4a4503ba80,
               (LPVOID *)cData);
  if ( Instance >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, int *))(**(_QWORD **)cData + 48LL))(
            *(_QWORD *)cData,
            a2,
            1LL,
            a3);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)cData + 16LL))(*(_QWORD *)cData);
    if ( *a3 )
      *a4 = 1;
    if ( v10 < 0
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Eu, &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids, v10);
    }
  }
  CoUninitialize();
  result = Instance;
  if ( Instance < 0 )
  {
LABEL_13:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Fu, &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids, result);
      result = Instance;
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v15 = "__FUNC__";
      v18 = cData;
      p_Instance = &Instance;
      v16 = 9;
      cData[0] = 1261;
      v19 = 4;
      v22 = 4;
      TlgWrite((TraceLoggingHProvider)4, &unk_18002D869, v8, v9, ppv, &pData);
      return Instance;
    }
  }
  return result;
}
