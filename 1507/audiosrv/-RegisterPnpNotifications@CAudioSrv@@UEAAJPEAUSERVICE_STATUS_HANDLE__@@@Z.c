/*
 * XREFs of ?RegisterPnpNotifications@CAudioSrv@@UEAAJPEAUSERVICE_STATUS_HANDLE__@@@Z @ 0x18003A950
 * Callers:
 *     ?MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z @ 0x180039F48 (-MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     memset_0 @ 0x180043A34 (memset_0.c)
 */

__int64 __fastcall CAudioSrv::RegisterPnpNotifications(HPOWERNOTIFY *this, struct SERVICE_STATUS_HANDLE__ *a2)
{
  DWORD v4; // eax
  DWORD v5; // eax
  DWORD v6; // eax
  DWORD v7; // ebx
  _DWORD v9[4]; // [rsp+20h] [rbp-1B8h] BYREF
  GUID v10; // [rsp+30h] [rbp-1A8h]

  memset_0(v9, 0, 0x1A0uLL);
  v9[2] = 0;
  v9[0] = 416;
  v10 = GUID_6994ad04_93ef_11d0_a3cc_00a0c9223196;
  ((void (__fastcall *)(_DWORD *, _QWORD, __int64 (__fastcall *)(), HPOWERNOTIFY *))CM_Register_Notification)(
    v9,
    0LL,
    ServiceDeviceEventCallback,
    this + 1);
  v4 = PowerSettingRegisterNotification(&GUID_SYSTEM_AWAYMODE, 1u, a2, this + 4);
  if ( v4
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x15u,
      (__int64)&WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids,
      v4);
  }
  v5 = PowerSettingRegisterNotification(&GUID_ACDC_POWER_SOURCE, 1u, a2, this + 3);
  if ( v5
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x16u,
      (__int64)&WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids,
      v5);
  }
  v6 = PowerSettingRegisterNotification(&GUID_LOW_POWER_EPOCH, 1u, a2, this + 5);
  v7 = v6;
  if ( v6
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x17u,
      (__int64)&WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids,
      v6);
  }
  return v7;
}
