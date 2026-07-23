/*
 * XREFs of PpDevCfgProcessDeviceClass @ 0x14060CF64
 * Callers:
 *     PiConfigureDevice @ 0x140614C4C (PiConfigureDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     _CmGetDeviceRegProp @ 0x14043AFD0 (_CmGetDeviceRegProp.c)
 *     _PnpOpenObjectRegKey @ 0x14043E904 (_PnpOpenObjectRegKey.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x140447328 (RtlStringFromGUIDEx.c)
 *     PiDevCfgInitDeviceContext @ 0x14051047C (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140513DF8 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x140513FDC (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgSetDeviceRegProp @ 0x140514F8C (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgFreeDeviceContext @ 0x14053B1A8 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgQueryObjectProperties @ 0x14053EF3C (PiDevCfgQueryObjectProperties.c)
 */

__int64 __fastcall PpDevCfgProcessDeviceClass(__int64 a1)
{
  int v2; // esi
  int inited; // ebx
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  NTSTATUS v8; // eax
  int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  int v14; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+44h] [rbp-BCh] BYREF
  int v16; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING GuidString; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  int v21; // [rsp+A0h] [rbp-60h] BYREF
  const wchar_t *v22; // [rsp+A8h] [rbp-58h]
  _QWORD v23[10]; // [rsp+B0h] [rbp-50h] BYREF
  GUID Guid; // [rsp+100h] [rbp+0h] BYREF

  LODWORD(v23[0]) = 0;
  memset(&v23[1], 0, 0x40uLL);
  v16 = 1;
  v2 = 0;
  Handle = 0LL;
  KeyHandle = 0LL;
  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0LL;
  v14 = 0;
  v15 = 0;
  if ( !PiDevCfgMode )
  {
    inited = 0;
    goto LABEL_24;
  }
  if ( !*(_QWORD *)(a1 + 48) )
  {
    inited = -1073741808;
    goto LABEL_24;
  }
  inited = PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), 0LL, v23);
  if ( inited >= 0 )
  {
    v4 = v23[2];
    memset(&ObjectAttributes, 0, 0x28uLL);
    v5 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)&ObjectAttributes.Length = &DEVPKEY_Device_ClassGuid;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&Guid;
    LODWORD(ObjectAttributes.RootDirectory) = 13;
    ObjectAttributes.Attributes = 16;
    inited = PiDevCfgQueryObjectProperties(v6, v5, 1u, (void *)v23[2], (__int64)&ObjectAttributes, 1u);
    if ( inited >= 0 )
    {
      if ( SLODWORD(ObjectAttributes.SecurityDescriptor) >= 0 )
      {
        inited = RtlStringFromGUIDEx(&Guid, &GuidString, 1u);
        if ( inited < 0 )
          goto LABEL_24;
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
LABEL_17:
          inited = PiDevCfgConfigureDeviceLocation(a1, (__int64)v23, &v14, 0LL);
          if ( inited >= 0 )
          {
            v9 = v14 | v2;
            if ( v9 )
            {
              v10 = *(_QWORD *)(a1 + 48);
              v15 = 4;
              if ( (int)CmGetDeviceRegProp(
                          *(__int64 *)&PiPnpRtlCtx,
                          v10,
                          v4,
                          11,
                          (__int64)&v16,
                          (__int64)&v14,
                          (__int64)&v15) < 0
                || v16 != 4
                || (v12 = v14, v15 != 4) )
              {
                v12 = 0;
              }
              v14 = v9 | v12;
              PiDevCfgSetDeviceRegProp(v11, (__int64)v23, 0xBu, 4u, (__int64)&v14, 4u);
            }
          }
          goto LABEL_24;
        }
        if ( v7 < 0 )
          goto LABEL_24;
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
            goto LABEL_24;
          inited = PiDevCfgConfigureDeviceKeys(a1, (__int64)v23, KeyHandle, -1, &v14, 0LL);
          if ( inited < 0 )
            goto LABEL_24;
          v2 = v14;
        }
      }
      goto LABEL_17;
    }
  }
LABEL_24:
  RtlFreeAnsiString(&GuidString);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  PiDevCfgFreeDeviceContext((__int64)v23);
  return (unsigned int)inited;
}
