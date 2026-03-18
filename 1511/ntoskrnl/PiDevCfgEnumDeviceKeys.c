/*
 * XREFs of PiDevCfgEnumDeviceKeys @ 0x140514590
 * Callers:
 *     PiDevCfgConfigureDeviceKeys @ 0x140513FDC (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgResetDeviceKeys @ 0x14060A338 (PiDevCfgResetDeviceKeys.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     _CmOpenDeviceRegKey @ 0x14043AEB4 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x14043AFD0 (_CmGetDeviceRegProp.c)
 *     _PnpCtxOpenContextBaseKey @ 0x140515D70 (_PnpCtxOpenContextBaseKey.c)
 */

__int64 __fastcall PiDevCfgEnumDeviceKeys(
        __int64 a1,
        __int64 a2,
        void *a3,
        int a4,
        char a5,
        __int64 (__fastcall *a6)(__int64, __int64, __int64 *, HANDLE, HANDLE, __int64),
        __int64 a7)
{
  __int64 *v7; // rdi
  void *v8; // rbx
  unsigned int v11; // esi
  unsigned int v12; // r14d
  NTSTATUS v13; // eax
  int DeviceRegProp; // ebx
  const WCHAR *v16; // rdx
  __int64 v17; // rdx
  HANDLE v18; // rax
  HANDLE v19; // rax
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE v22; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v23; // [rsp+58h] [rbp-A8h] BYREF
  int v24; // [rsp+5Ch] [rbp-A4h] BYREF
  void *v25; // [rsp+60h] [rbp-A0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  __int64 (__fastcall *v28)(__int64, __int64, __int64 *, HANDLE, HANDLE, __int64); // [rsp+A8h] [rbp-58h]
  __int64 v29; // [rsp+B0h] [rbp-50h]
  __int64 v30; // [rsp+B8h] [rbp-48h]
  WCHAR SourceString[40]; // [rsp+C0h] [rbp-40h] BYREF

  v7 = qword_1406A3580;
  v28 = a6;
  v8 = a3;
  v29 = a7;
  v25 = a3;
  v30 = a1;
  v11 = 0;
  KeyHandle = 0LL;
  v12 = 0;
  Handle = 0LL;
  v22 = 0LL;
  while ( 1 )
  {
    if ( (a4 & *(_DWORD *)(v7 - 1)) == 0 )
      goto LABEL_4;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)*(v7 - 2));
    ObjectAttributes.Length = 48;
    KeyHandle = 0LL;
    ObjectAttributes.RootDirectory = v8;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v13 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v13 == -1073741772 )
      goto LABEL_4;
    if ( v13 < 0 )
      goto LABEL_23;
    if ( *(_DWORD *)v7 )
    {
      DeviceRegProp = CmOpenDeviceRegKey(
                        *(__int64 *)&PiPnpRtlCtx,
                        *(_QWORD *)(a2 + 8),
                        *(_DWORD *)v7,
                        0,
                        983103,
                        a5,
                        (__int64)&Handle,
                        0LL);
    }
    else
    {
      DeviceRegProp = PnpCtxOpenContextBaseKey(0, *((_DWORD *)v7 - 1), 0, 983103, (__int64)&Handle);
      if ( DeviceRegProp >= 0 )
      {
        if ( *((_DWORD *)v7 - 1) == 7 )
        {
          v17 = *(_QWORD *)(a2 + 8);
          v23 = 78;
          DeviceRegProp = CmGetDeviceRegProp(
                            *(__int64 *)&PiPnpRtlCtx,
                            v17,
                            0LL,
                            9,
                            (__int64)&v24,
                            (__int64)SourceString,
                            (__int64)&v23);
          if ( DeviceRegProp >= 0 )
          {
            if ( v24 == 1 && v23 > 2 )
              SourceString[38] = 0;
            else
              DeviceRegProp = -1073741772;
            if ( DeviceRegProp >= 0 )
            {
              RtlInitUnicodeString(&DestinationString, SourceString);
              ObjectAttributes.Length = 48;
              v22 = 0LL;
              ObjectAttributes.RootDirectory = Handle;
              ObjectAttributes.Attributes = 576;
              ObjectAttributes.ObjectName = &DestinationString;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              DeviceRegProp = ZwOpenKey(&v22, 0xF003Fu, &ObjectAttributes);
              ZwClose(Handle);
              v18 = Handle;
              if ( DeviceRegProp >= 0 )
                v18 = v22;
              Handle = v18;
            }
          }
        }
        v16 = (const WCHAR *)v7[1];
        if ( v16 )
        {
          RtlInitUnicodeString(&DestinationString, v16);
          ObjectAttributes.Length = 48;
          v22 = 0LL;
          ObjectAttributes.RootDirectory = Handle;
          ObjectAttributes.Attributes = 576;
          ObjectAttributes.ObjectName = &DestinationString;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          DeviceRegProp = ZwOpenKey(&v22, 0xF003Fu, &ObjectAttributes);
          ZwClose(Handle);
          v19 = Handle;
          if ( DeviceRegProp >= 0 )
            v19 = v22;
          Handle = v19;
        }
      }
    }
    if ( DeviceRegProp != -1073741772 )
      break;
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
LABEL_18:
    v8 = v25;
LABEL_4:
    ++v12;
    v7 += 4;
    if ( v12 >= 7 )
      goto LABEL_5;
  }
  if ( DeviceRegProp >= 0 )
  {
    v13 = v28(v30, a2, v7 - 2, KeyHandle, Handle, v29);
    if ( v13 == -1073741248 )
      goto LABEL_5;
    if ( v13 < 0 )
    {
LABEL_23:
      v11 = v13;
      goto LABEL_5;
    }
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
    ZwClose(Handle);
    Handle = 0LL;
    goto LABEL_18;
  }
  v11 = DeviceRegProp;
LABEL_5:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  return v11;
}
