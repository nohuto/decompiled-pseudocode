/*
 * XREFs of ?SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_GERERIC_HAPTICS_OUTPUT@@@Z @ 0x1C023BAB0
 * Callers:
 *     ?xxxSendInteractiveControlDeviceFeedback@@YAJKPEAXK@Z @ 0x1C0229804 (-xxxSendInteractiveControlDeviceFeedback@@YAJKPEAXK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C021F6CC (_TlgCreateSz.c)
 *     ?SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_GERERIC_HAPTICS_OUTPUT@@@Z @ 0x1C023E030 (-SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_GERERIC_HAPTICS_OUTPUT@@@Z.c)
 */

__int64 __fastcall InteractiveControlManager::SendDeviceHapticsOutput(
        InteractiveControlManager *this,
        int a2,
        const struct _GERERIC_HAPTICS_OUTPUT *a3)
{
  unsigned int v3; // r9d
  LPCGUID v7; // r9
  LPCGUID v8; // r8
  InteractiveControlDevice **v9; // rbx
  __int64 v10; // rsi
  InteractiveControlDevice *v11; // rcx
  LPCGUID v12; // r9
  LPCGUID v13; // r8
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  int v17; // [rsp+30h] [rbp-29h] BYREF
  _DWORD v18[3]; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+7h] BYREF
  int *v21; // [rsp+70h] [rbp+17h]
  int v22; // [rsp+78h] [rbp+1Fh]
  int v23; // [rsp+7Ch] [rbp+23h]

  v3 = 0;
  v17 = 0;
  if ( (unsigned int)hProvider > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::SendDeviceHapticsOutput entry");
    v23 &= (unsigned int)v7;
    v21 = v18;
    v18[0] = a2;
    v22 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF4C0, v8, v7, 4u, &pData);
    v3 = v17;
  }
  v9 = (InteractiveControlDevice **)((char *)this + 40);
  v10 = 5LL;
  do
  {
    v11 = *v9;
    if ( *v9 && (!a2 || a2 == *((_DWORD *)v11 + 2)) )
    {
      v17 = InteractiveControlDevice::SendHapticFeedbackOutput(v11, a3);
      v3 = v17;
      if ( v17 < 0 && (unsigned int)hProvider > 2 )
      {
        TlgCreateSz(&pDesc, "Function failed.");
        v23 = 0;
        v21 = v18;
        v18[0] = (_DWORD)v12;
        v22 = 4;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF7B5, v13, v12, 4u, &pData);
        v3 = v17;
      }
    }
    ++v9;
    --v10;
  }
  while ( v10 );
  if ( (unsigned int)hProvider > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::SendDeviceHapticsOutput exit");
    v23 = 0;
    v21 = &v17;
    v22 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF3B0, v14, v15, 4u, &pData);
    return (unsigned int)v17;
  }
  return v3;
}
