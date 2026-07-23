/*
 * XREFs of PpDevCfgProcessDeviceReset @ 0x140589A64
 * Callers:
 *     PiConfigureDevice @ 0x1405878B8 (PiConfigureDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     _PnpOpenObjectRegKey @ 0x14043BAF4 (_PnpOpenObjectRegKey.c)
 *     _CmGetDeviceRegProp @ 0x14043C46C (_CmGetDeviceRegProp.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x1404FFEB8 (RtlStringFromGUIDEx.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140589C68 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgMigrateDevice @ 0x140589F68 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgInitDeviceContext @ 0x14058A12C (PiDevCfgInitDeviceContext.c)
 *     _PnpCtxRegDeleteTree @ 0x14058F9B0 (_PnpCtxRegDeleteTree.c)
 *     PiDevCfgFreeDeviceContext @ 0x1405B20A8 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405B3DCC (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgSetDeviceRegProp @ 0x14068CBF4 (PiDevCfgSetDeviceRegProp.c)
 */

__int64 __fastcall PpDevCfgProcessDeviceReset(__int64 a1)
{
  int v1; // ebx
  NTSTATUS inited; // edi
  __int64 v4; // r14
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // eax
  int v8; // r15d
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // [rsp+48h] [rbp-79h] BYREF
  int v13; // [rsp+4Ch] [rbp-75h] BYREF
  int v14; // [rsp+50h] [rbp-71h] BYREF
  int v15; // [rsp+54h] [rbp-6Dh] BYREF
  UNICODE_STRING GuidString; // [rsp+58h] [rbp-69h] BYREF
  int v17[2]; // [rsp+68h] [rbp-59h] BYREF
  _QWORD v18[5]; // [rsp+70h] [rbp-51h] BYREF
  int v19[20]; // [rsp+98h] [rbp-29h] BYREF
  GUID Guid; // [rsp+E8h] [rbp+27h] BYREF

  v1 = 0;
  v19[0] = 0;
  memset(&v19[2], 0, 0x40uLL);
  v15 = 1;
  *(_QWORD *)v17 = 0LL;
  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0LL;
  v12 = 0;
  v14 = 0;
  v13 = 0;
  if ( !PiDevCfgMode )
  {
    inited = 0;
    goto LABEL_11;
  }
  if ( !*(_QWORD *)(a1 + 48) )
  {
    inited = -1073741808;
    goto LABEL_11;
  }
  inited = PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), 0LL, v19);
  if ( inited >= 0 )
  {
    v4 = *(_QWORD *)&v19[4];
    memset(v18, 0, sizeof(v18));
    v5 = *(_QWORD *)(a1 + 48);
    v18[0] = &DEVPKEY_Device_ClassGuid;
    v18[2] = &Guid;
    LODWORD(v18[1]) = 13;
    LODWORD(v18[3]) = 16;
    inited = PiDevCfgQueryObjectProperties(v6, v5, 1, v19[4], (__int64)v18, 1);
    if ( inited >= 0 )
    {
      if ( SLODWORD(v18[4]) >= 0 )
      {
        inited = RtlStringFromGUIDEx(&Guid, &GuidString, 1u);
        if ( inited < 0 )
          goto LABEL_11;
        if ( (int)PnpOpenObjectRegKey(
                    *(__int64 *)&PiPnpRtlCtx,
                    (__int64)GuidString.Buffer,
                    2u,
                    131097,
                    0,
                    (__int64)v17,
                    0LL,
                    0) >= 0 )
          goto LABEL_8;
        RtlFreeAnsiString(&GuidString);
      }
      *(_QWORD *)Guid.Data4 = 0LL;
      *(_QWORD *)&Guid.Data1 = 0LL;
LABEL_8:
      v7 = PiDevCfgMigrateDevice(
             a1,
             (unsigned int)v19,
             (unsigned __int64)&GuidString & -(__int64)(GuidString.Buffer != 0LL),
             0,
             (__int64)&v14,
             0LL);
      v8 = v14;
      if ( v7 < 0 )
        v8 = 0;
      PiDevCfgResetDeviceDriverSettings(
        a1,
        (int)v19,
        (unsigned __int64)&Guid & -(__int64)(GuidString.Buffer != 0LL),
        v17[0],
        0LL);
      PnpCtxRegDeleteTree(*(_QWORD *)&PiPnpRtlCtx, v4, L"Devices");
      if ( v8 )
      {
        v10 = *(_QWORD *)(a1 + 48);
        v13 = 4;
        if ( (int)CmGetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v10, v4, 11, (__int64)&v15, (__int64)&v12, (__int64)&v13) >= 0
          && v15 == 4
          && v13 == 4 )
        {
          v1 = v12;
        }
        v12 = v8 | v1;
        PiDevCfgSetDeviceRegProp(v11, (unsigned int)v19, 11, 4, (__int64)&v12, 4);
      }
    }
  }
LABEL_11:
  RtlFreeAnsiString(&GuidString);
  PiDevCfgFreeDeviceContext(v19);
  return (unsigned int)inited;
}
