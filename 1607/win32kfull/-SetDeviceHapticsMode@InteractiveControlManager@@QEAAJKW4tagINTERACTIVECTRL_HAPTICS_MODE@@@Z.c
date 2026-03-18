/*
 * XREFs of ?SetDeviceHapticsMode@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C023C130
 * Callers:
 *     ?SetDeviceHapticsConfiguration@InteractiveControlManager@@QEAAJKAEBU_GERERIC_HAPTICS_CONFIGURATION@@@Z @ 0x1C023BF88 (-SetDeviceHapticsConfiguration@InteractiveControlManager@@QEAAJKAEBU_GERERIC_HAPTICS_CONFIGURATI.c)
 *     ?SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1C023C2DC (-SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C021F6CC (_TlgCreateSz.c)
 *     ?SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C023E740 (-SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 */

__int64 __fastcall InteractiveControlManager::SetDeviceHapticsMode(__int64 a1, int a2, unsigned int a3)
{
  unsigned int v3; // r9d
  __int64 v7; // rsi
  LPCGUID v8; // r9
  LPCGUID v9; // r8
  __int64 *v10; // rdi
  __int64 v11; // rcx
  LPCGUID v12; // r9
  LPCGUID v13; // r8
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  int v17; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-35h] BYREF
  int v19; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-9h] BYREF
  int *v22; // [rsp+70h] [rbp+7h]
  int v23; // [rsp+78h] [rbp+Fh]
  int v24; // [rsp+7Ch] [rbp+13h]
  int *v25; // [rsp+80h] [rbp+17h]
  int v26; // [rsp+88h] [rbp+1Fh]
  int v27; // [rsp+8Ch] [rbp+23h]

  v3 = 0;
  v17 = 0;
  v7 = 5LL;
  if ( (unsigned int)hProvider > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::SetDeviceHapticsMode entry");
    v24 &= (unsigned int)v8;
    v27 &= (unsigned int)v8;
    v22 = &v19;
    v25 = (int *)&v18;
    v19 = a2;
    v23 = 4;
    v18 = a3;
    v26 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF4FA, v9, v8, 5u, &pData);
    v3 = v17;
  }
  v10 = (__int64 *)(a1 + 40);
  do
  {
    v11 = *v10;
    if ( *v10 && (!a2 || a2 == *(_DWORD *)(v11 + 8)) )
    {
      v17 = InteractiveControlDevice::SetHapticsMode(v11, a3);
      v3 = v17;
      if ( v17 < 0 && (unsigned int)hProvider > 2 )
      {
        TlgCreateSz(&pDesc, "Function failed.");
        v24 = 0;
        v22 = (int *)&v18;
        v18 = (unsigned int)v12;
        v23 = 4;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF7B5, v13, v12, 4u, &pData);
        v3 = v17;
      }
    }
    ++v10;
    --v7;
  }
  while ( v7 );
  if ( !a2 )
    *(_DWORD *)(a1 + 32) = a3;
  if ( (unsigned int)hProvider > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::SetDeviceHapticsMode exit");
    v24 = 0;
    v22 = &v17;
    v23 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF3B0, v14, v15, 4u, &pData);
    return (unsigned int)v17;
  }
  return v3;
}
