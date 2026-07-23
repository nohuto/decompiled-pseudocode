/*
 * XREFs of PiDevCfgResetDeviceDriverSettings @ 0x140609F54
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140511EA0 (PiDevCfgConfigureDevice.c)
 *     PpDevCfgProcessDeviceReset @ 0x14060D8F8 (PpDevCfgProcessDeviceReset.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     _CmOpenDeviceRegKey @ 0x14043AEB4 (_CmOpenDeviceRegKey.c)
 *     _PnpGetObjectProperty @ 0x14043CBB0 (_PnpGetObjectProperty.c)
 *     _PnpOpenObjectRegKey @ 0x14043E904 (_PnpOpenObjectRegKey.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x140447328 (RtlStringFromGUIDEx.c)
 *     PnpIsNullGuid @ 0x14045E9F8 (PnpIsNullGuid.c)
 *     _PnpCtxRegDeleteValue @ 0x1404EBE98 (_PnpCtxRegDeleteValue.c)
 *     PiDevCfgSetObjectProperty @ 0x140512D8C (PiDevCfgSetObjectProperty.c)
 *     _PnpCtxRegDeleteTree @ 0x140522444 (_PnpCtxRegDeleteTree.c)
 *     PiDevCfgResetDeviceKeys @ 0x14060A338 (PiDevCfgResetDeviceKeys.c)
 */

__int64 __fastcall PiDevCfgResetDeviceDriverSettings(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, PGUID Guid)
{
  __int64 *v5; // rbx
  __int64 v8; // rdi
  GUID **v9; // rdi
  __int64 v10; // r12
  NTSTATUS v11; // r15d
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  bool v15; // zf
  __int64 v16; // rax
  const WCHAR *v17; // rdx
  NTSTATUS v18; // ebx
  HANDLE v19; // rcx
  const WCHAR *v20; // r8
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rbx
  int v25; // [rsp+28h] [rbp-D8h]
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+68h] [rbp-98h]
  HANDLE KeyHandle; // [rsp+70h] [rbp-90h] BYREF
  int v29; // [rsp+78h] [rbp-88h] BYREF
  HANDLE v30[2]; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING GuidString; // [rsp+90h] [rbp-70h] BYREF
  __int64 v32; // [rsp+A0h] [rbp-60h]
  _BYTE v33[8]; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-50h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-40h] BYREF
  __int64 Source2; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v37; // [rsp+F8h] [rbp-8h]

  v5 = (__int64 *)off_1406FB840;
  v32 = a4;
  v27 = a1;
  Handle = 0LL;
  KeyHandle = 0LL;
  v8 = 8LL;
  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0LL;
  v30[0] = 0LL;
  do
  {
    PiDevCfgSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      (_BYTE *)a2,
      *(_QWORD *)(a2 + 8),
      1u,
      *(_QWORD *)(a2 + 16),
      v25,
      *v5++,
      0,
      0LL,
      0);
    --v8;
  }
  while ( v8 );
  if ( (int)PnpGetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              *(_QWORD *)(a2 + 8),
              1u,
              *(_QWORD *)(a2 + 16),
              0LL,
              (__int64)&DEVPKEY_Device_BusTypeGuid,
              (__int64)&v29,
              (__int64)&Source2,
              16,
              (__int64)v33,
              0) < 0
    || v29 != 13 )
  {
    Source2 = 0LL;
    v37 = 0LL;
  }
  v9 = &off_1406A37D8;
  v10 = 2LL;
  v11 = 0;
  do
  {
    v12 = *(v9 - 1);
    if ( v12 )
    {
      if ( !a3 )
        goto LABEL_12;
      v13 = *v12 - *a3;
      if ( *v12 == *a3 )
        v13 = v12[1] - a3[1];
      if ( v13 )
      {
LABEL_12:
        if ( !Guid )
          goto LABEL_33;
        v14 = *v12 - *(_QWORD *)&Guid->Data1;
        if ( *v12 == *(_QWORD *)&Guid->Data1 )
          v14 = v12[1] - *(_QWORD *)Guid->Data4;
        v15 = v14 == 0;
        goto LABEL_21;
      }
      goto LABEL_22;
    }
    if ( *v9 && !PnpIsNullGuid(&Source2) )
    {
      v16 = *(_QWORD *)&(*v9)->Data1 - Source2;
      if ( !v16 )
        v16 = *(_QWORD *)(*v9)->Data4 - v37;
      v15 = v16 == 0;
LABEL_21:
      if ( !v15 )
        goto LABEL_33;
LABEL_22:
      if ( (int)CmOpenDeviceRegKey(
                  *(__int64 *)&PiPnpRtlCtx,
                  *(_QWORD *)(a2 + 8),
                  *((_DWORD *)v9 + 2),
                  0,
                  983103,
                  1,
                  (__int64)&Handle,
                  0LL) < 0 )
        goto LABEL_33;
      v17 = (const WCHAR *)v9[2];
      if ( v17 )
      {
        RtlInitUnicodeString(&DestinationString, v17);
        ObjectAttributes.RootDirectory = Handle;
        KeyHandle = 0LL;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v18 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
        ZwClose(Handle);
        if ( v18 < 0 )
          goto LABEL_33;
        v19 = KeyHandle;
        Handle = KeyHandle;
      }
      else
      {
        v19 = Handle;
      }
      v20 = (const WCHAR *)v9[3];
      if ( v20 )
      {
        PnpCtxRegDeleteValue((__int64)v19, v19, v20);
      }
      else
      {
        if ( !v9[2] )
        {
LABEL_32:
          ZwClose(v19);
          goto LABEL_33;
        }
        PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, (__int64)v19, 0LL);
      }
      v19 = Handle;
      goto LABEL_32;
    }
LABEL_33:
    v9 += 5;
    --v10;
  }
  while ( v10 );
  if ( !Guid )
    goto LABEL_43;
  if ( !a3 )
    goto LABEL_39;
  v21 = *(_QWORD *)&Guid->Data1 - *a3;
  if ( *(_QWORD *)&Guid->Data1 == *a3 )
    v21 = *(_QWORD *)Guid->Data4 - a3[1];
  if ( v21 )
  {
LABEL_39:
    v11 = RtlStringFromGUIDEx(Guid, &GuidString, 1u);
    if ( v11 >= 0 )
    {
      v22 = PnpOpenObjectRegKey(
              *(__int64 *)&PiPnpRtlCtx,
              (__int64)GuidString.Buffer,
              2u,
              131097,
              0,
              (__int64)v30,
              0LL,
              0);
      v23 = v27;
      if ( v22 < 0 )
        goto LABEL_44;
      v11 = PiDevCfgResetDeviceKeys(v27, a2, v30[0]);
      if ( v11 >= 0 )
        goto LABEL_44;
    }
  }
  else
  {
LABEL_43:
    v23 = v27;
LABEL_44:
    if ( a3 && v32 )
      v11 = PiDevCfgResetDeviceKeys(v23, a2, v32);
  }
  RtlFreeAnsiString(&GuidString);
  if ( v30[0] )
    ZwClose(v30[0]);
  return (unsigned int)v11;
}
