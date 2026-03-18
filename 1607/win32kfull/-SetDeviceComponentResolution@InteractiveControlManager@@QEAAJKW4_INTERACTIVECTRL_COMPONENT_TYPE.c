/*
 * XREFs of ?SetDeviceComponentResolution@InteractiveControlManager@@QEAAJKW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C023BC38
 * Callers:
 *     NtUserSetInteractiveCtrlRotationAngle @ 0x1C0219C30 (NtUserSetInteractiveCtrlRotationAngle.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C021F6CC (_TlgCreateSz.c)
 *     ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C023E230 (-SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4.c)
 */

__int64 __fastcall InteractiveControlManager::SetDeviceComponentResolution(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  unsigned int v5; // r10d
  int v10; // r10d
  LPCGUID v11; // r9
  LPCGUID v12; // r8
  __int64 *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rcx
  unsigned int v16; // r10d
  LPCGUID v17; // r8
  LPCGUID v18; // r9
  LPCGUID cData; // r9
  LPCGUID v20; // r8
  int v22; // [rsp+30h] [rbp-51h] BYREF
  unsigned int v23; // [rsp+34h] [rbp-4Dh] BYREF
  int v24; // [rsp+38h] [rbp-49h] BYREF
  unsigned int v25; // [rsp+3Ch] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-21h] BYREF
  int *v28; // [rsp+70h] [rbp-11h]
  int v29; // [rsp+78h] [rbp-9h]
  int v30; // [rsp+7Ch] [rbp-5h]
  int *v31; // [rsp+80h] [rbp-1h]
  int v32; // [rsp+88h] [rbp+7h]
  int v33; // [rsp+8Ch] [rbp+Bh]
  int *v34; // [rsp+90h] [rbp+Fh]
  int v35; // [rsp+98h] [rbp+17h]
  int v36; // [rsp+9Ch] [rbp+1Bh]

  v5 = 0;
  v22 = 0;
  if ( (unsigned int)hProvider > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::SetDeviceComponentResolution entry");
    v30 &= v10;
    v33 &= v10;
    v36 &= v10;
    v28 = &v24;
    v31 = (int *)&v25;
    v34 = (int *)&v23;
    v24 = a2;
    v29 = (int)v11;
    v25 = a3;
    v32 = (int)v11;
    v23 = a4;
    v35 = (int)v11;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF462, v12, v11, 6u, &pData);
    v5 = v22;
  }
  v13 = (__int64 *)(a1 + 40);
  v14 = 5LL;
  do
  {
    v15 = *v13;
    if ( *v13 && (!a2 || a2 == *(_DWORD *)(v15 + 8)) )
    {
      v22 = InteractiveControlDevice::SetComponentResolution(v15, a3, a4, a5);
      v5 = v22;
      if ( v22 < 0 && (unsigned int)hProvider > 2 )
      {
        TlgCreateSz(&pDesc, "Function failed.");
        v30 = 0;
        v28 = (int *)&v23;
        v23 = v16;
        v29 = 4;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF7B5, v17, v18, 4u, &pData);
        v5 = v22;
      }
    }
    ++v13;
    --v14;
  }
  while ( v14 );
  if ( !a2 && a3 == 3 )
    *(_DWORD *)(a1 + 28) = a4;
  if ( (unsigned int)hProvider > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::SetDeviceComponentResolution exit");
    v30 = 0;
    v28 = &v22;
    v29 = (int)cData;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF3B0, v20, cData, (UINT32)cData, &pData);
    return (unsigned int)v22;
  }
  return v5;
}
