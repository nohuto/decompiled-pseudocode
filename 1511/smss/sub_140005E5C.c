/*
 * XREFs of sub_140005E5C @ 0x140005E5C
 * Callers:
 *     sub_140009D20 @ 0x140009D20 (sub_140009D20.c)
 * Callees:
 *     sub_140001E9C @ 0x140001E9C (sub_140001E9C.c)
 *     sub_140004C0C @ 0x140004C0C (sub_140004C0C.c)
 *     sub_140005320 @ 0x140005320 (sub_140005320.c)
 *     sub_1400064C4 @ 0x1400064C4 (sub_1400064C4.c)
 *     sub_1400066B0 @ 0x1400066B0 (sub_1400066B0.c)
 *     sub_140006D94 @ 0x140006D94 (sub_140006D94.c)
 *     sub_140007470 @ 0x140007470 (sub_140007470.c)
 *     sub_140007640 @ 0x140007640 (sub_140007640.c)
 *     sub_140007910 @ 0x140007910 (sub_140007910.c)
 *     sub_140008BD0 @ 0x140008BD0 (sub_140008BD0.c)
 *     sub_140008D78 @ 0x140008D78 (sub_140008D78.c)
 *     sub_14000AEB0 @ 0x14000AEB0 (sub_14000AEB0.c)
 *     sub_14000BCA0 @ 0x14000BCA0 (sub_14000BCA0.c)
 *     sub_14000BE08 @ 0x14000BE08 (sub_14000BE08.c)
 *     sub_14000BE90 @ 0x14000BE90 (sub_14000BE90.c)
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 *     sub_140012454 @ 0x140012454 (sub_140012454.c)
 *     sub_14001259C @ 0x14001259C (sub_14001259C.c)
 */

NTSTATUS __fastcall sub_140005E5C(HANDLE EventHandle)
{
  NTSTATUS result; // eax
  __int64 v3; // rax
  int v4; // esi
  __int64 *v5; // rdi
  __int64 v6; // r8
  __int64 *v7; // rbx
  __int64 v8; // r8
  __int64 *v9; // rdi
  __int64 v10; // r8
  BOOL v11; // ebx
  int v12; // ebx
  __int64 v13; // r8
  __int64 *v14; // rdi
  __int64 (*v15)(void); // rcx
  int v16; // eax
  __int64 *v17; // rbx
  int v18; // ebx
  unsigned int v19; // ebx
  __int64 *v20; // rbx
  void *KeyHandle; // [rsp+38h] [rbp-D0h] BYREF
  int v22; // [rsp+40h] [rbp-C8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+78h] [rbp-90h] BYREF
  __int64 v25; // [rsp+80h] [rbp-88h]
  int v26; // [rsp+88h] [rbp-80h] BYREF
  const wchar_t *v27; // [rsp+90h] [rbp-78h]
  int v28; // [rsp+98h] [rbp-70h] BYREF
  const wchar_t *v29; // [rsp+A0h] [rbp-68h]
  int v30; // [rsp+A8h] [rbp-60h] BYREF
  const wchar_t *v31; // [rsp+B0h] [rbp-58h]
  int v32; // [rsp+B8h] [rbp-50h] BYREF
  const wchar_t *v33; // [rsp+C0h] [rbp-48h]
  HANDLE Handle; // [rsp+C8h] [rbp-40h] BYREF
  void *FileHandle; // [rsp+D0h] [rbp-38h] BYREF
  PWSTR OldEnvironment; // [rsp+D8h] [rbp-30h] BYREF
  int v37; // [rsp+E0h] [rbp-28h] BYREF
  const wchar_t *v38; // [rsp+E8h] [rbp-20h]
  struct _UNICODE_STRING ValueName; // [rsp+F0h] [rbp-18h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+100h] [rbp-8h] BYREF
  struct _RTL_USER_PROCESS_INFORMATION v41; // [rsp+118h] [rbp+10h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+188h] [rbp+80h] BYREF
  wchar_t DstBuf[256]; // [rsp+198h] [rbp+90h] BYREF

  v32 = 7602290;
  v33 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MiniNT";
  v37 = 1310738;
  v38 = L"\\Sessions";
  v26 = 10354844;
  v27 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Environment";
  *(_DWORD *)&ValueName.Length = 2752552;
  ValueName.Buffer = L"NUMBER_OF_PROCESSORS";
  v30 = 9699474;
  v31 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StateSeparation\\Policy";
  v28 = 1048590;
  v29 = L"\\??\\T:\\";
  qword_1400200C8 = (__int64)&qword_1400200C0;
  qword_1400200D8 = (__int64)&qword_1400200D0;
  qword_1400200D0 = (__int64)&qword_1400200D0;
  qword_1400200E8 = (__int64)&qword_1400200E0;
  qword_1400200E0 = (__int64)&qword_1400200E0;
  qword_1400201E8 = (__int64)&qword_1400201E0;
  qword_1400201E0 = (__int64)&qword_1400201E0;
  qword_1400200F8 = (__int64)&qword_1400200F0;
  qword_1400200F0 = (__int64)&qword_1400200F0;
  qword_140020108 = (__int64)&qword_140020100;
  qword_140020100 = (__int64)&qword_140020100;
  qword_140020118 = (__int64)&qword_140020110;
  qword_140020110 = &qword_140020110;
  qword_140020128 = (__int64)&qword_140020120;
  qword_140020120 = (__int64)&qword_140020120;
  qword_140020138 = (__int64)&qword_140020130;
  qword_140020130 = (__int64)&qword_140020130;
  qword_140020148 = (__int64)&qword_140020140;
  qword_140020140 = (__int64)&qword_140020140;
  qword_1400201D8 = (__int64)&qword_1400201D0;
  qword_1400201D0 = (__int64)&qword_1400201D0;
  qword_1400200C0 = (__int64)&qword_1400200C0;
  dword_140020150 = 0;
  sub_140004C0C(::DstBuf, 0x20AuLL, L"\\??\\%s", 2147352624LL);
  RtlInitUnicodeString(&DestinationString, ::DstBuf);
  result = RtlCreateEnvironment(1u, &Environment);
  if ( result < 0 )
  {
    v15 = (__int64 (*)(void))RtlCreateEnvironment;
    dword_14001FCF8 = 1952;
    goto LABEL_47;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v32;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
  {
    NtClose(KeyHandle);
    byte_1400201F4 = 1;
  }
  sub_14000BE90();
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v26;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( result >= 0 )
  {
    NtDeleteValueKey(KeyHandle, (PUNICODE_STRING)&stru_140014960);
    sub_140004C0C(DstBuf, 0x200uLL, L"%u", (unsigned int)byte_1400201B8);
    v3 = -1LL;
    do
      ++v3;
    while ( DstBuf[v3] );
    result = NtSetValueKey(KeyHandle, &ValueName, 0, 1u, DstBuf, 2 * v3 + 2);
    if ( result >= 0 )
    {
      RtlSetCurrentEnvironment(Environment, &OldEnvironment);
      result = RtlQueryRegistryValuesEx(2LL, L"Session Manager", &off_14001F030);
      if ( result < 0 )
      {
        v15 = (__int64 (*)(void))RtlQueryRegistryValuesEx;
        dword_14001FCF8 = 2066;
      }
      else
      {
        result = sub_14000BCA0();
        if ( result < 0 )
        {
          dword_14001FCF8 = 2079;
          v15 = sub_14000BCA0;
        }
        else
        {
          result = sub_140007640();
          if ( result < 0 )
          {
            dword_14001FCF8 = 2086;
            v15 = sub_140007640;
          }
          else
          {
            RtlSetCurrentEnvironment(OldEnvironment, &Environment);
            result = sub_140008BD0();
            if ( result < 0 )
            {
              dword_14001FCF8 = 2107;
              v15 = sub_140008BD0;
            }
            else
            {
              ObjectAttributes.Length = 48;
              ObjectAttributes.ObjectName = (PUNICODE_STRING)&v37;
              ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.Attributes = 208;
              ObjectAttributes.SecurityQualityOfService = 0LL;
              result = NtCreateDirectoryObject(&qword_14001FE50, 0xF000Fu, &ObjectAttributes);
              if ( result < 0 )
              {
                v15 = (__int64 (*)(void))NtCreateDirectoryObject;
                dword_14001FCF8 = 2139;
              }
              else
              {
                result = sub_14000AEB0();
                if ( result < 0 )
                {
                  dword_14001FCF8 = 2156;
                  v15 = sub_14000AEB0;
                }
                else
                {
                  v25 = 0LL;
                  if ( byte_1400208E0 )
                  {
                    if ( byte_1400201F4 || dword_14001F594 != -1 || byte_14001FE59 )
                    {
                      v4 = -1073741823;
                      if ( (unsigned __int8)sub_140012454() )
                        sub_14001259C(2LL, 0LL);
                    }
                    else
                    {
                      v4 = sub_14000BE08(&Destination);
                    }
                  }
                  else
                  {
                    v4 = -1073741823;
                  }
                  v5 = (__int64 *)qword_1400200C0;
                  if ( (__int64 *)qword_1400200C0 != &qword_1400200C0
                    && (*(__int64 **)qword_1400200C0 != &qword_1400200C0
                     || !RtlEqualUnicodeString((PCUNICODE_STRING)(qword_1400200C0 + 16), &stru_140014970, 0))
                    || (__int64 *)qword_1400200E0 != &qword_1400200E0
                    || v4 >= 0 )
                  {
                    v16 = NtSerializeBoot();
                    if ( v16 < 0 )
                    {
                      dword_14001FCFC = v16;
                      qword_14001FD00 = (__int64)NtSerializeBoot;
                      dword_14001FCF8 = 2238;
                    }
                  }
                  sub_1400064C4(&stru_140014950);
                  while ( v5 != &qword_1400200C0 )
                  {
                    v7 = v5;
                    sub_140001E9C((__int64)(v5 + 2), 0LL, v6, 0, 0LL);
                    v5 = (__int64 *)*v5;
                    sub_140008D78(v7);
                  }
                  sub_1400064C4(&stru_140014940);
                  sub_1400064C4(&stru_140014930);
                  v9 = (__int64 *)qword_1400200D0;
                  while ( v9 != &qword_1400200D0 )
                  {
                    v17 = v9;
                    sub_140001E9C((__int64)(v9 + 2), 0LL, v8, 0, 0LL);
                    v9 = (__int64 *)*v9;
                    sub_140008D78(v17);
                  }
                  sub_1400064C4(&stru_140014920);
                  if ( EventHandle )
                    NtSetEvent(EventHandle, 0LL);
                  sub_1400064C4(&stru_140014910);
                  v22 = 0;
                  RtlGetDeviceFamilyInfoEnum(0LL, &v22, 0LL);
                  if ( v22 == 5 )
                  {
                    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v28;
                    ObjectAttributes.Length = 48;
                    ObjectAttributes.RootDirectory = 0LL;
                    ObjectAttributes.Attributes = 64;
                    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                    if ( NtOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 1u, 0x20u) >= 0 )
                      NtClose(FileHandle);
                  }
                  NtInitializeRegistry(0);
                  sub_1400064C4(&stru_140014900);
                  if ( v4 >= 0 )
                  {
                    v18 = sub_140001E9C((__int64)&Destination, 0LL, v10, 32, &v41);
                    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Destination.Buffer);
                    if ( v18 < 0 )
                    {
                      v19 = 1;
                    }
                    else
                    {
                      if ( SLOBYTE(v41.ImageInformation.DllCharacteristics) >= 0 )
                      {
                        v19 = 3;
                        NtTerminateProcess(v41.ProcessHandle, -1073740760);
                      }
                      else
                      {
                        v19 = 0;
                        NtResumeThread(v41.ThreadHandle, 0LL);
                        NtWaitForSingleObject(v41.ProcessHandle, 0, 0LL);
                      }
                      NtClose(v41.ProcessHandle);
                      NtClose(v41.ThreadHandle);
                    }
                    sub_14001259C(v19, v25);
                  }
                  ObjectAttributes.Length = 48;
                  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v30;
                  ObjectAttributes.RootDirectory = 0LL;
                  ObjectAttributes.Attributes = 64;
                  v11 = 0;
                  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                  if ( NtOpenKey(&Handle, 0x20019u, &ObjectAttributes) >= 0 )
                  {
                    NtClose(Handle);
                    v11 = (int)RtlQueryRegistryValuesEx(
                                 0LL,
                                 L"\\Registry\\Machine\\Xbox\\Session Manager",
                                 &off_14001F5A0) >= 0;
                  }
                  if ( !byte_1400201F4 )
                    sub_140006D94(v11);
                  v24 = 0LL;
                  result = TpAllocWork(&v24, sub_140009BE0, 0LL, &dword_14001FC80);
                  if ( result < 0 )
                  {
                    v15 = (__int64 (*)(void))TpAllocWork;
                    dword_14001FCF8 = 2453;
                  }
                  else
                  {
                    TpPostWork(v24);
                    if ( dword_14001FE48 )
                      TpWaitForWork(v24, 0LL);
                    TpReleaseWork(v24);
                    v12 = sub_140007910(KeyHandle);
                    NtClose(KeyHandle);
                    if ( v12 < 0 )
                    {
                      dword_14001FCF8 = 2479;
                      qword_14001FD00 = (__int64)sub_140007910;
                      result = v12;
                      dword_14001FCFC = v12;
                      return result;
                    }
                    sub_1400064C4(&stru_1400148F0);
                    v14 = (__int64 *)qword_1400200E0;
                    while ( v14 != &qword_1400200E0 )
                    {
                      v20 = v14;
                      sub_140001E9C((__int64)(v14 + 2), 0LL, v13, 0, 0LL);
                      v14 = (__int64 *)*v14;
                      sub_140008D78(v20);
                    }
                    sub_1400064C4(&stru_1400148E0);
                    result = sub_1400066B0();
                    if ( result < 0 )
                    {
                      dword_14001FCF8 = 2522;
                      v15 = sub_1400066B0;
                    }
                    else
                    {
                      result = sub_140007470();
                      if ( result >= 0 )
                      {
                        sub_140005320();
                        return 0;
                      }
                      dword_14001FCF8 = 2540;
                      v15 = sub_140007470;
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_47:
      dword_14001FCFC = result;
      qword_14001FD00 = (__int64)v15;
    }
  }
  return result;
}
