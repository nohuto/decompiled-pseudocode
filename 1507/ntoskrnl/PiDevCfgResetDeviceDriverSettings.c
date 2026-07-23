/*
 * XREFs of PiDevCfgResetDeviceDriverSettings @ 0x140589C68
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140587D2C (PiDevCfgConfigureDevice.c)
 *     PpDevCfgProcessDeviceReset @ 0x140589A64 (PpDevCfgProcessDeviceReset.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     _PnpGetObjectProperty @ 0x140438FD0 (_PnpGetObjectProperty.c)
 *     _PnpOpenObjectRegKey @ 0x14043BAF4 (_PnpOpenObjectRegKey.c)
 *     _CmOpenDeviceRegKey @ 0x14043C350 (_CmOpenDeviceRegKey.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x1404FFEB8 (RtlStringFromGUIDEx.c)
 *     PnpIsNullGuid @ 0x14054E1B4 (PnpIsNullGuid.c)
 *     _PnpCtxRegDeleteValue @ 0x140564078 (_PnpCtxRegDeleteValue.c)
 *     PiDevCfgSetObjectProperty @ 0x140589E38 (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgResetDeviceKeys @ 0x140589EC0 (PiDevCfgResetDeviceKeys.c)
 *     _PnpCtxRegDeleteTree @ 0x14058F9B0 (_PnpCtxRegDeleteTree.c)
 */

__int64 __fastcall PiDevCfgResetDeviceDriverSettings(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, PGUID Guid)
{
  __int64 *v5; // rbx
  __int64 v8; // rdi
  GUID **v9; // rdi
  __int64 v10; // r12
  NTSTATUS v11; // r15d
  _QWORD *v12; // rdx
  __int64 v13; // rax
  bool v14; // zf
  __int64 v15; // rbx
  __int64 v17; // rcx
  __int64 v18; // rcx
  const WCHAR *v19; // rdx
  NTSTATUS v20; // ebx
  HANDLE v21; // rcx
  const WCHAR *v22; // r8
  __int64 v23; // rcx
  int v24; // eax
  int v25; // [rsp+28h] [rbp-D8h]
  HANDLE v26; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+68h] [rbp-98h]
  HANDLE KeyHandle; // [rsp+70h] [rbp-90h] BYREF
  int v29; // [rsp+78h] [rbp-88h] BYREF
  HANDLE Handle[2]; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-70h] BYREF
  __int64 v32; // [rsp+A0h] [rbp-60h]
  _BYTE v33[8]; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-50h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-40h] BYREF
  __int64 Source2; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v37; // [rsp+F8h] [rbp-8h]

  v5 = (__int64 *)off_14077E870;
  v32 = a4;
  v27 = a1;
  v26 = 0LL;
  KeyHandle = 0LL;
  v8 = 8LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  Handle[0] = 0LL;
  do
  {
    PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(a2 + 8), 1, *(_QWORD *)(a2 + 16), v25, *v5++, 0, 0LL, 0);
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
  v9 = &off_140723A18;
  v10 = 2LL;
  v11 = 0;
  do
  {
    v12 = *(v9 - 1);
    if ( v12 )
    {
      if ( !a3 )
        goto LABEL_27;
      v17 = *v12 - *a3;
      if ( *v12 == *a3 )
        v17 = v12[1] - a3[1];
      if ( v17 )
      {
LABEL_27:
        if ( !Guid )
          goto LABEL_13;
        v18 = *v12 - *(_QWORD *)&Guid->Data1;
        if ( *v12 == *(_QWORD *)&Guid->Data1 )
          v18 = v12[1] - *(_QWORD *)Guid->Data4;
        v14 = v18 == 0;
LABEL_12:
        if ( !v14 )
          goto LABEL_13;
      }
      if ( (int)CmOpenDeviceRegKey(
                  *(__int64 *)&PiPnpRtlCtx,
                  *(_QWORD *)(a2 + 8),
                  *((_DWORD *)v9 + 2),
                  0,
                  983103,
                  1,
                  (__int64)&v26,
                  0LL) < 0 )
        goto LABEL_13;
      v19 = (const WCHAR *)v9[2];
      if ( v19 )
      {
        RtlInitUnicodeString(&DestinationString, v19);
        ObjectAttributes.RootDirectory = v26;
        KeyHandle = 0LL;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v20 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
        ZwClose(v26);
        if ( v20 < 0 )
          goto LABEL_13;
        v21 = KeyHandle;
        v26 = KeyHandle;
      }
      else
      {
        v21 = v26;
      }
      v22 = (const WCHAR *)v9[3];
      if ( v22 )
      {
        PnpCtxRegDeleteValue((__int64)v21, v21, v22);
      }
      else
      {
        if ( !v9[2] )
        {
LABEL_41:
          ZwClose(v21);
          goto LABEL_13;
        }
        PnpCtxRegDeleteTree(*(_QWORD *)&PiPnpRtlCtx, v21, 0LL);
      }
      v21 = v26;
      goto LABEL_41;
    }
    if ( *v9 && !PnpIsNullGuid(&Source2) )
    {
      v13 = *(_QWORD *)&(*v9)->Data1 - Source2;
      if ( !v13 )
        v13 = *(_QWORD *)(*v9)->Data4 - v37;
      v14 = v13 == 0;
      goto LABEL_12;
    }
LABEL_13:
    v9 += 5;
    --v10;
  }
  while ( v10 );
  if ( !Guid )
    goto LABEL_15;
  if ( !a3 )
    goto LABEL_46;
  v23 = *(_QWORD *)&Guid->Data1 - *a3;
  if ( *(_QWORD *)&Guid->Data1 == *a3 )
    v23 = *(_QWORD *)Guid->Data4 - a3[1];
  if ( v23 )
  {
LABEL_46:
    v11 = RtlStringFromGUIDEx(Guid, &UnicodeString, 1u);
    if ( v11 >= 0 )
    {
      v24 = PnpOpenObjectRegKey(
              *(__int64 *)&PiPnpRtlCtx,
              (__int64)UnicodeString.Buffer,
              2u,
              131097,
              0,
              (__int64)Handle,
              0LL,
              0);
      v15 = v27;
      if ( v24 < 0 )
        goto LABEL_16;
      v11 = PiDevCfgResetDeviceKeys(v27, a2, Handle[0]);
      if ( v11 >= 0 )
        goto LABEL_16;
    }
  }
  else
  {
LABEL_15:
    v15 = v27;
LABEL_16:
    if ( a3 && v32 )
      v11 = PiDevCfgResetDeviceKeys(v15, a2, v32);
  }
  RtlFreeAnsiString(&UnicodeString);
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)v11;
}
