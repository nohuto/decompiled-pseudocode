/*
 * XREFs of ?GetDeviceInfo@InteractiveControlManager@@QEAAJKPEAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z @ 0x1C023AC10
 * Callers:
 *     NtUserGetInteractiveControlDeviceInfo @ 0x1C02138F0 (NtUserGetInteractiveControlDeviceInfo.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C021F6CC (_TlgCreateSz.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x1C023ABC4 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 */

__int64 __fastcall InteractiveControlManager::GetDeviceInfo(
        InteractiveControlManager *this,
        int a2,
        struct tagINTERACTIVECTRL_DEVICE_INFO *a3)
{
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  unsigned int v8; // r9d
  LPCGUID v9; // r9
  LPCGUID v10; // r8
  struct InteractiveControlDevice *v11; // r8
  __int64 v12; // rcx
  int v13; // eax
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  int Device; // [rsp+30h] [rbp-29h] BYREF
  int v18; // [rsp+34h] [rbp-25h] BYREF
  struct InteractiveControlDevice *v19; // [rsp+38h] [rbp-21h] BYREF
  int v20; // [rsp+40h] [rbp-19h] BYREF
  int v21; // [rsp+44h] [rbp-15h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+17h] BYREF
  int *p_Device; // [rsp+80h] [rbp+27h]
  int v25; // [rsp+88h] [rbp+2Fh]
  int v26; // [rsp+8Ch] [rbp+33h]

  Device = 0;
  v19 = 0LL;
  v20 = 0;
  v21 = 0;
  if ( (unsigned int)hProvider > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::GetDeviceInfo entry");
    v26 = 0;
    p_Device = &v18;
    v18 = a2;
    v25 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF4C0, v6, v7, 4u, &pData);
  }
  Device = InteractiveControlManager::FindDevice(this, a2, 0LL, &v19, 0LL);
  v8 = Device;
  if ( Device < 0 )
  {
    if ( (unsigned int)hProvider <= 2 )
      goto LABEL_10;
    TlgCreateSz(&pDesc, "Function failed.");
    v26 = 0;
    p_Device = &v18;
    v18 = (int)v9;
    v25 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF7B5, v10, v9, 4u, &pData);
    goto LABEL_6;
  }
  v11 = v19;
  *(_DWORD *)a3 = *((_DWORD *)v19 + 2);
  *((_DWORD *)a3 + 5) = *((_DWORD *)v11 + 50);
  *((_DWORD *)a3 + 6) = *((_DWORD *)v11 + 48);
  v12 = *((_QWORD *)v11 + 35);
  if ( v12 )
  {
    LODWORD(v19) = *((_DWORD *)v11 + 65) - *((_DWORD *)v11 + 63);
    HIDWORD(v19) = *((_DWORD *)v11 + 66) - *((_DWORD *)v11 + 64);
    RIMTransformDimensionFromDigitizer(v12, 0LL, &v19, &v20);
    v13 = v20;
    *((_DWORD *)a3 + 1) = 0;
    *((_DWORD *)a3 + 2) = 0;
    *((_DWORD *)a3 + 3) = v13;
    *((_DWORD *)a3 + 4) = v21;
LABEL_6:
    v8 = Device;
    goto LABEL_10;
  }
  *(_OWORD *)((char *)a3 + 4) = *(_OWORD *)((char *)v11 + 252);
LABEL_10:
  if ( (unsigned int)hProvider > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::GetDeviceInfo exit");
    v26 = 0;
    p_Device = &Device;
    v25 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF3B0, v14, v15, 4u, &pData);
    return (unsigned int)Device;
  }
  return v8;
}
