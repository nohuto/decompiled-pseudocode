/*
 * XREFs of ?ReadBackgroundAudioCapability@CApplicationManager@@QEAAJPEAXPEAH@Z @ 0x1800029B0
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001B5F0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CApplicationManager::ReadBackgroundAudioCapability(CApplicationManager *this, void *a2, int *a3)
{
  HRESULT v5; // esi
  int v6; // ebp
  int ppv; // [rsp+20h] [rbp-28h]
  LPVOID v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = this;
  *a3 = 0;
  v5 = CoInitializeEx(0LL, 0);
  if ( v5 < 0 )
    goto LABEL_12;
  v5 = CoCreateInstance(&CLSID_BackgroundTaskCapability, 0LL, 1u, &GUID_d54e68c2_54cd_48b3_ad9a_3f4a4503ba80, &v9);
  if ( v5 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(LPVOID, void *, __int64, int *))(*(_QWORD *)v9 + 48LL))(v9, a2, 1LL, a3);
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v6 < 0
      && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 3u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        27LL,
        &WPP_a823fe2c17e0c03c8d4e6152eedcd7b2_Traceguids,
        (unsigned int)v6,
        ppv);
    }
  }
  CoUninitialize();
  if ( v5 < 0 )
  {
LABEL_12:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        28LL,
        &WPP_a823fe2c17e0c03c8d4e6152eedcd7b2_Traceguids,
        (unsigned int)v5,
        ppv);
    }
  }
  return (unsigned int)v5;
}
