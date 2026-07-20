/*
 * XREFs of sub_1400099C4 @ 0x1400099C4
 * Callers:
 *     sub_1400092A8 @ 0x1400092A8 (sub_1400092A8.c)
 * Callees:
 *     sub_140004C0C @ 0x140004C0C (sub_140004C0C.c)
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 *     memset @ 0x14000C48C (memset.c)
 *     sub_14000FAC4 @ 0x14000FAC4 (sub_14000FAC4.c)
 *     sub_140010B58 @ 0x140010B58 (sub_140010B58.c)
 *     sub_140010EDC @ 0x140010EDC (sub_140010EDC.c)
 */

void sub_1400099C4()
{
  struct _UNICODE_STRING *v0; // rsi
  __int64 v1; // rcx
  int v2; // ebx
  unsigned int i; // edi
  char v4; // al
  int v5; // eax
  __int64 v6; // rdi
  unsigned int v7; // edi
  unsigned int v8; // ebx
  USHORT Length; // ax
  struct _UNICODE_STRING Destination; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v12; // [rsp+50h] [rbp-B8h] BYREF
  ULONG ResultLength; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v14[2]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v15[2]; // [rsp+78h] [rbp-90h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+88h] [rbp-80h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v18[16]; // [rsp+C8h] [rbp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+D8h] [rbp-30h] BYREF
  _DWORD KeyValueInformation[4]; // [rsp+E8h] [rbp-20h] BYREF
  unsigned int v21; // [rsp+F8h] [rbp-10h]
  _DWORD v22[67]; // [rsp+FCh] [rbp-Ch] BYREF
  WCHAR SourceString[64]; // [rsp+208h] [rbp+100h] BYREF

  LODWORD(v15[0]) = 10092696;
  v15[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\MachineCrash";
  *(_DWORD *)&ValueName.Length = 2752552;
  ValueName.Buffer = L"SavePageFileContents";
  LODWORD(v14[0]) = 2359330;
  v14[1] = L"SavedPageFilePath";
  *(_DWORD *)&v12.Length = 1966108;
  v12.Buffer = L"SavedPageFiles";
  v0 = 0LL;
  v21 = 0;
  memset(v22, 0, 0x104uLL);
  Destination.Length = 0;
  *(_QWORD *)&Destination.MaximumLength = 0LL;
  *(_DWORD *)((char *)&Destination.Buffer + 2) = 0;
  HIWORD(Destination.Buffer) = 0;
  Handle = 0LL;
  if ( byte_140020200 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v15;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenKey(&Handle, 0x20019u, &ObjectAttributes) >= 0
      && NtQueryValueKey(
           ::Handle,
           &ValueName,
           KeyValuePartialInformationAlign64,
           KeyValueInformation,
           0x10u,
           &ResultLength) >= 0
      && KeyValueInformation[0] == 4 )
    {
      v4 = byte_140020948;
      if ( KeyValueInformation[2] == 1 )
        v4 = 1;
      byte_140020948 = v4;
    }
  }
  if ( byte_140020948 )
  {
    v5 = sub_140010B58(v1, v14, 0LL, v18);
    v6 = qword_1400201D0;
    v0 = (struct _UNICODE_STRING *)v18;
    if ( v5 < 0 )
      v0 = 0LL;
    while ( (__int64 *)v6 != &qword_1400201D0 )
    {
      v2 = sub_140010EDC((PCUNICODE_STRING)(v6 + 16));
      if ( v2 < 0 )
        goto LABEL_4;
      v6 = *(_QWORD *)v6;
    }
    v2 = sub_140004C0C(SourceString, 0x80uLL, L"\\??\\%c:\\%s", (unsigned __int16)word_140020448, L"swapfile.sys");
    if ( v2 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      sub_140010EDC(&DestinationString);
      v7 = v22[0] + 2 * (v21 + 1);
      if ( v7 <= 0xFFFF )
      {
        Destination.Buffer = (PWSTR)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v7);
        if ( Destination.Buffer )
        {
          v8 = 0;
          Destination.MaximumLength = v7;
          if ( v21 )
          {
            do
            {
              RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)&v22[4 * v8++ + 1]);
              Length = Destination.Length + 2;
              Destination.Length += 2;
            }
            while ( v8 < v21 );
          }
          else
          {
            Length = Destination.Length;
          }
          Destination.Buffer[(unsigned __int64)Length >> 1] = 0;
          Destination.Length += 2;
          v2 = NtSetValueKey(::Handle, &v12, 0, 7u, Destination.Buffer, v7);
          if ( v2 >= 0 )
            NtFlushKey(::Handle);
        }
        else
        {
          v2 = -1073741670;
        }
      }
      else
      {
        v2 = -1073741562;
      }
    }
  }
  else
  {
    v2 = 0;
  }
LABEL_4:
  if ( Handle )
    NtClose(Handle);
  for ( i = 0; i < v21; ++i )
  {
    if ( *(_QWORD *)&v22[4 * i + 3] )
    {
      if ( v2 < 0LL )
        sub_14000FAC4(&v22[4 * i + 1]);
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, *(PVOID *)&v22[4 * i + 3]);
    }
  }
  if ( Destination.Buffer )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Destination.Buffer);
  if ( v0 )
    RtlFreeUnicodeString(v0);
}
