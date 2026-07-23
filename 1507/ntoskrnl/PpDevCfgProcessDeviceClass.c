/*
 * XREFs of PpDevCfgProcessDeviceClass @ 0x140589730
 * Callers:
 *     PiConfigureDevice @ 0x1405878B8 (PiConfigureDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     memset @ 0x140195A80 (memset.c)
 *     _PnpOpenObjectRegKey @ 0x14043BAF4 (_PnpOpenObjectRegKey.c)
 *     _CmGetDeviceRegProp @ 0x14043C46C (_CmGetDeviceRegProp.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x1404FFEB8 (RtlStringFromGUIDEx.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140589984 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgInitDeviceContext @ 0x14058A12C (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgFreeDeviceContext @ 0x1405B20A8 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405B3DCC (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x140683C20 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgSetDeviceRegProp @ 0x14068CBF4 (PiDevCfgSetDeviceRegProp.c)
 */

__int64 __fastcall PpDevCfgProcessDeviceClass(__int64 a1)
{
  int v2; // esi
  NTSTATUS inited; // ebx
  __int64 v4; // r14
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // eax
  NTSTATUS v8; // eax
  int v9; // esi
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // eax
  int P; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+44h] [rbp-BCh] BYREF
  int v16; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING GuidString; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  int v21; // [rsp+A0h] [rbp-60h] BYREF
  const wchar_t *v22; // [rsp+A8h] [rbp-58h]
  int v23[20]; // [rsp+B0h] [rbp-50h] BYREF
  GUID Guid; // [rsp+100h] [rbp+0h] BYREF

  v23[0] = 0;
  memset(&v23[2], 0, 0x40uLL);
  v16 = 1;
  v2 = 0;
  Handle = 0LL;
  KeyHandle = 0LL;
  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0LL;
  P = 0;
  v15 = 0;
  if ( !PiDevCfgMode )
  {
    inited = 0;
    goto LABEL_13;
  }
  if ( !*(_QWORD *)(a1 + 48) )
  {
    inited = -1073741808;
    goto LABEL_13;
  }
  inited = PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), 0LL, v23);
  if ( inited >= 0 )
  {
    v4 = *(_QWORD *)&v23[4];
    memset(&ObjectAttributes, 0, 0x28uLL);
    v5 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)&ObjectAttributes.Length = &DEVPKEY_Device_ClassGuid;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&Guid;
    LODWORD(ObjectAttributes.RootDirectory) = 13;
    ObjectAttributes.Attributes = 16;
    inited = PiDevCfgQueryObjectProperties(v6, v5, 1, v23[4], (__int64)&ObjectAttributes, 1);
    if ( inited >= 0 )
    {
      if ( SLODWORD(ObjectAttributes.SecurityDescriptor) >= 0 )
      {
        inited = RtlStringFromGUIDEx(&Guid, &GuidString, 1u);
        if ( inited < 0 )
          goto LABEL_13;
        v7 = PnpOpenObjectRegKey(
               *(__int64 *)&PiPnpRtlCtx,
               (__int64)GuidString.Buffer,
               2u,
               131097,
               0,
               (__int64)&Handle,
               0LL,
               0);
        inited = v7;
        if ( v7 == -1073741772 )
        {
          Handle = 0LL;
LABEL_11:
          inited = PiDevCfgConfigureDeviceLocation(a1, v23, &P, 0LL);
          if ( inited >= 0 )
          {
            v9 = P | v2;
            if ( v9 )
            {
              v11 = *(_QWORD *)(a1 + 48);
              v15 = 4;
              if ( (int)CmGetDeviceRegProp(
                          *(__int64 *)&PiPnpRtlCtx,
                          v11,
                          v4,
                          11,
                          (__int64)&v16,
                          (__int64)&P,
                          (__int64)&v15) < 0
                || v16 != 4
                || (v13 = P, v15 != 4) )
              {
                v13 = 0;
              }
              P = v9 | v13;
              PiDevCfgSetDeviceRegProp(v12, (unsigned int)v23, 11, 4, (__int64)&P, 4);
            }
          }
          goto LABEL_13;
        }
        if ( v7 < 0 )
          goto LABEL_13;
      }
      if ( Handle )
      {
        ObjectAttributes.RootDirectory = Handle;
        v22 = L"Configuration";
        v21 = 1835034;
        KeyHandle = 0LL;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&v21;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v8 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
        inited = v8;
        if ( v8 != -1073741772 )
        {
          if ( v8 < 0 )
            goto LABEL_13;
          inited = PiDevCfgConfigureDeviceKeys(a1, (int)v23, (int)KeyHandle, -1, &P, 0LL);
          if ( inited < 0 )
            goto LABEL_13;
          v2 = P;
        }
      }
      goto LABEL_11;
    }
  }
LABEL_13:
  RtlFreeAnsiString(&GuidString);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  PiDevCfgFreeDeviceContext(v23);
  return (unsigned int)inited;
}
