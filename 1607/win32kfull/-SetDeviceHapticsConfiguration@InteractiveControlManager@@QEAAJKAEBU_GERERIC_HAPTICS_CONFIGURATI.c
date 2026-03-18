/*
 * XREFs of ?SetDeviceHapticsConfiguration@InteractiveControlManager@@QEAAJKAEBU_GERERIC_HAPTICS_CONFIGURATION@@@Z @ 0x1C023BF88
 * Callers:
 *     ?xxxSendInteractiveControlDeviceFeedback@@YAJKPEAXK@Z @ 0x1C0229804 (-xxxSendInteractiveControlDeviceFeedback@@YAJKPEAXK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C021F6CC (_TlgCreateSz.c)
 *     ?SetDeviceHapticsMode@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C023C130 (-SetDeviceHapticsMode@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 */

__int64 __fastcall InteractiveControlManager::SetDeviceHapticsConfiguration(
        InteractiveControlManager *this,
        unsigned int a2,
        const struct _GERERIC_HAPTICS_CONFIGURATION *a3)
{
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  unsigned int v8; // r9d
  LPCGUID v9; // r9
  LPCGUID v10; // r8
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  int v14; // [rsp+30h] [rbp-19h] BYREF
  _DWORD v15[3]; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+17h] BYREF
  int *v18; // [rsp+70h] [rbp+27h]
  int v19; // [rsp+78h] [rbp+2Fh]
  int v20; // [rsp+7Ch] [rbp+33h]

  v14 = 0;
  if ( (unsigned int)hProvider > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::SetDeviceHapticsConfiguration entry");
    v20 = 0;
    v18 = v15;
    v15[0] = a2;
    v19 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF4C0, v6, v7, 4u, &pData);
  }
  if ( *(_DWORD *)a3 == 1 )
  {
    v14 = InteractiveControlManager::SetDeviceHapticsMode(this, a2);
    v8 = v14;
    if ( v14 < 0 && (unsigned int)hProvider > 2 )
    {
LABEL_9:
      TlgCreateSz(&pDesc, "Function failed.");
      v20 = 0;
      v18 = v15;
      v19 = 4;
      v15[0] = (_DWORD)v9;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF7B5, v10, v9, 4u, &pData);
      v8 = v14;
    }
  }
  else
  {
    v14 = InteractiveControlManager::SetDeviceHapticsMode(this, a2);
    v8 = v14;
    if ( v14 < 0 && (unsigned int)hProvider > 2 )
      goto LABEL_9;
  }
  if ( (unsigned int)hProvider > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::SetDeviceHapticsConfiguration exit");
    v20 = 0;
    v18 = &v14;
    v19 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF3B0, v11, v12, 4u, &pData);
    return (unsigned int)v14;
  }
  return v8;
}
