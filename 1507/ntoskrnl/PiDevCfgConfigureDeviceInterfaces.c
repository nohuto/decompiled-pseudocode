/*
 * XREFs of PiDevCfgConfigureDeviceInterfaces @ 0x1406835F4
 * Callers:
 *     PiDevCfgConfigureDeviceKeys @ 0x140683C20 (PiDevCfgConfigureDeviceKeys.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1401723FC (_wcsicmp.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x14017F630 (ZwEnumerateKey.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlGUIDFromString @ 0x14043D910 (RtlGUIDFromString.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x1404587AC (_CmGetMatchingFilteredDeviceInterfaceList.c)
 *     IopRegisterDeviceInterface @ 0x1404DED78 (IopRegisterDeviceInterface.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x1406833E4 (PiDevCfgConfigureDeviceInterface.c)
 *     PiDevCfgResolveVariable @ 0x140689AFC (PiDevCfgResolveVariable.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceInterfaces(const wchar_t *a1, void *a2, __int64 a3)
{
  const WCHAR *v3; // rsi
  const wchar_t *v6; // r15
  NTSTATUS v7; // eax
  int MatchingFilteredDeviceInterfaceList; // ebx
  NTSTATUS v9; // eax
  wchar_t *PoolWithTag; // r14
  ULONG v11; // edi
  ULONG i; // edx
  wchar_t *v13; // rbx
  wchar_t v14; // ax
  unsigned __int64 v15; // rcx
  int v16; // eax
  int v17; // edx
  wchar_t *Buffer; // rdi
  NTSTATUS v19; // eax
  wchar_t v20; // cx
  __int64 v21; // rax
  NTSTATUS v22; // eax
  wchar_t v23; // cx
  NTSTATUS v24; // eax
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-A8h] BYREF
  PVOID P; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING v29; // [rsp+68h] [rbp-98h] BYREF
  ULONG v30; // [rsp+78h] [rbp-88h]
  ULONG ResultLength; // [rsp+7Ch] [rbp-84h] BYREF
  UNICODE_STRING v32; // [rsp+80h] [rbp-80h]
  const wchar_t *v33; // [rsp+90h] [rbp-70h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  __int64 v35; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-30h] BYREF
  UNICODE_STRING v37; // [rsp+E0h] [rbp-20h] BYREF
  UNICODE_STRING GuidString; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v39[2]; // [rsp+100h] [rbp+0h] BYREF
  int v40; // [rsp+110h] [rbp+10h]
  UNICODE_STRING v41; // [rsp+120h] [rbp+20h] BYREF
  GUID Guid; // [rsp+130h] [rbp+30h] BYREF

  v3 = 0LL;
  v33 = a1;
  ObjectAttributes.RootDirectory = a2;
  v29.Buffer = L"Interfaces";
  Handle = 0LL;
  P = 0LL;
  *(_DWORD *)&v29.Length = 1441812;
  KeyHandle = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &v29;
  v6 = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  MatchingFilteredDeviceInterfaceList = v7;
  if ( v7 == -1073741772 )
  {
    MatchingFilteredDeviceInterfaceList = 0;
    goto LABEL_73;
  }
  if ( v7 < 0 )
    goto LABEL_73;
  *(_DWORD *)&v29.Length = 262146;
  v29.Buffer = (wchar_t *)L"*";
  ObjectAttributes.RootDirectory = KeyHandle;
  Handle = 0LL;
  ObjectAttributes.ObjectName = &v29;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
  MatchingFilteredDeviceInterfaceList = v9;
  if ( v9 == -1073741772 )
    goto LABEL_8;
  if ( v9 < 0 )
    goto LABEL_73;
  v39[0] = Handle;
  v39[1] = a3;
  v40 = 0;
  MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                          *(__int64 *)&PiPnpRtlCtx,
                                          0LL,
                                          (__int64)a1,
                                          0,
                                          (__int64)PiDevCfgConfigureDeviceInterfaceCallback,
                                          (__int64)v39,
                                          0LL,
                                          0,
                                          (__int64)&ResultLength,
                                          0);
  ZwClose(Handle);
  Handle = 0LL;
  if ( MatchingFilteredDeviceInterfaceList >= 0 )
  {
    MatchingFilteredDeviceInterfaceList = v40;
    if ( v40 >= 0 )
    {
LABEL_8:
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x26EuLL, 0x63647050u);
      if ( !PoolWithTag )
      {
        MatchingFilteredDeviceInterfaceList = -1073741670;
        goto LABEL_73;
      }
      v11 = 0;
      for ( i = 0; ; i = v11 )
      {
        v30 = v11;
        v24 = ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, PoolWithTag, 0x26Eu, &ResultLength);
        MatchingFilteredDeviceInterfaceList = v24;
        if ( v24 < 0 )
        {
          if ( v24 == -2147483622 )
          {
            MatchingFilteredDeviceInterfaceList = 0;
          }
          else if ( v24 == -2147483643 )
          {
            MatchingFilteredDeviceInterfaceList = -1073741773;
          }
LABEL_72:
          ExFreePoolWithTag(PoolWithTag, 0);
LABEL_73:
          if ( Handle )
            ZwClose(Handle);
          goto LABEL_75;
        }
        PoolWithTag[((unsigned __int64)*((unsigned int *)PoolWithTag + 3) >> 1) + 8] = 0;
        if ( wcsicmp(PoolWithTag + 8, L"*") )
          break;
LABEL_66:
        ++v11;
      }
      MatchingFilteredDeviceInterfaceList = RtlInitUnicodeStringEx(&DestinationString, PoolWithTag + 8);
      if ( MatchingFilteredDeviceInterfaceList < 0 )
        goto LABEL_72;
      v32 = DestinationString;
      ObjectAttributes.RootDirectory = KeyHandle;
      Handle = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      MatchingFilteredDeviceInterfaceList = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
      if ( MatchingFilteredDeviceInterfaceList < 0 )
        goto LABEL_72;
      if ( a3 && *(_QWORD *)(a3 + 16) )
      {
        v13 = 0LL;
        if ( *DestinationString.Buffer == 36 )
        {
          v13 = DestinationString.Buffer + 1;
          v14 = DestinationString.Buffer[1];
          if ( v14 )
          {
            while ( v14 <= 0x3Fu )
            {
              v15 = 0x8000280200000000uLL;
              if ( !_bittest64((const __int64 *)&v15, v14) )
                break;
              v14 = *++v13;
              if ( !*v13 )
                goto LABEL_24;
            }
            if ( *v13 == 36 )
              ++v13;
          }
        }
LABEL_24:
        RtlInitUnicodeString(&v41, v13);
        if ( v13 )
        {
          v35 = 0LL;
          v16 = PiDevCfgResolveVariable(a3, v41.Buffer, &v35);
          MatchingFilteredDeviceInterfaceList = v16;
          if ( v16 >= 0 )
          {
            v17 = *(_DWORD *)(v35 + 32);
            if ( (unsigned int)(v17 - 1) <= 1 )
            {
              Buffer = *(wchar_t **)(v35 + 40);
              v32.MaximumLength = *(_WORD *)(v35 + 36);
              v32.Length = v32.MaximumLength - 2;
LABEL_31:
              if ( v3 )
              {
                while ( *v3 )
                {
                  RtlInitUnicodeString(&v29, v3);
                  if ( v29.Length >= 0x4Cu )
                  {
                    GuidString.Buffer = v29.Buffer;
                    GuidString.Length = 76;
                    GuidString.MaximumLength = v29.MaximumLength;
                    v19 = RtlGUIDFromString(&GuidString, &Guid);
                    if ( v19 >= 0 )
                    {
                      v20 = v29.Buffer[38];
                      if ( v20 == 35 )
                      {
                        v6 = (const wchar_t *)((__int64)(v29.Buffer + 39) & -(__int64)(v29.Buffer[39] != 0));
                      }
                      else if ( v20 )
                      {
                        v19 = -1073741823;
                      }
                      else
                      {
                        v6 = 0LL;
                      }
                      if ( v19 >= 0 )
                      {
                        MatchingFilteredDeviceInterfaceList = IopRegisterDeviceInterface(
                                                                v33,
                                                                (int *)&Guid,
                                                                v6,
                                                                1,
                                                                &P,
                                                                0LL);
                        if ( MatchingFilteredDeviceInterfaceList < 0 )
                          goto LABEL_72;
                        MatchingFilteredDeviceInterfaceList = PiDevCfgConfigureDeviceInterface((__int64)P, Handle, a3);
                        ExFreePoolWithTag(P, 0);
                        if ( MatchingFilteredDeviceInterfaceList < 0 )
                          goto LABEL_72;
                      }
                    }
                  }
                  v21 = -1LL;
                  do
                    ++v21;
                  while ( v3[v21] );
                  v3 += v21 + 1;
                }
                v3 = 0LL;
LABEL_48:
                if ( MatchingFilteredDeviceInterfaceList < 0 )
                  goto LABEL_72;
                goto LABEL_64;
              }
LABEL_53:
              if ( v32.Length < 0x4Cu )
              {
                v3 = 0LL;
              }
              else
              {
                v37.Length = 76;
                v37.MaximumLength = v32.MaximumLength;
                v37.Buffer = Buffer;
                v22 = RtlGUIDFromString(&v37, &Guid);
                v3 = 0LL;
                if ( v22 >= 0 )
                {
                  v23 = Buffer[38];
                  if ( v23 == 35 )
                  {
                    v6 = (const wchar_t *)((unsigned __int64)(Buffer + 39) & -(__int64)(Buffer[39] != 0));
                  }
                  else if ( v23 )
                  {
                    v22 = -1073741823;
                  }
                  else
                  {
                    v6 = 0LL;
                  }
                  if ( v22 >= 0 )
                  {
                    MatchingFilteredDeviceInterfaceList = IopRegisterDeviceInterface(v33, (int *)&Guid, v6, 1, &P, 0LL);
                    if ( MatchingFilteredDeviceInterfaceList < 0 )
                      goto LABEL_72;
                    MatchingFilteredDeviceInterfaceList = PiDevCfgConfigureDeviceInterface((__int64)P, Handle, a3);
                    ExFreePoolWithTag(P, 0);
                    goto LABEL_48;
                  }
                }
              }
LABEL_64:
              ZwClose(Handle);
              v11 = v30;
              goto LABEL_65;
            }
            if ( v17 == 7 )
            {
              v3 = *(const WCHAR **)(v35 + 40);
              Buffer = v32.Buffer;
              goto LABEL_31;
            }
LABEL_29:
            ZwClose(Handle);
            v3 = 0LL;
LABEL_65:
            Handle = 0LL;
            goto LABEL_66;
          }
          if ( v16 != -1073741772 )
            goto LABEL_29;
          v32 = v41;
        }
      }
      Buffer = v32.Buffer;
      goto LABEL_53;
    }
  }
LABEL_75:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)MatchingFilteredDeviceInterfaceList;
}
