/*
 * XREFs of CmpSetVersionData @ 0x14051F904
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x14051F09C (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x140092408 (RtlInitAnsiString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     sprintf_s @ 0x14014975C (sprintf_s.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwCreateKey @ 0x1401509C0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140151220 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x140151F40 (ZwDeleteValueKey.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExFreePool @ 0x140239B08 (ExFreePool.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403E1384 (RtlAnsiStringToUnicodeString.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14051E508 (CmpHiveRootSecurityDescriptor.c)
 */

void CmpSetVersionData()
{
  wchar_t **v0; // rsi
  ACL *v1; // rdi
  const WCHAR *v2; // rdx
  NTSTATUS v3; // ebx
  HANDLE v4; // rax
  NTSTATUS v5; // ebx
  NTSTATUS v6; // ebx
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING v8; // [rsp+50h] [rbp-B8h] BYREF
  int Data; // [rsp+60h] [rbp-A8h] BYREF
  _STRING SourceString; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-58h] BYREF
  char DstBuf[128]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v15[256]; // [rsp+148h] [rbp+40h] BYREF

  v0 = &VersionDataKeys;
  v1 = CmpHiveRootSecurityDescriptor();
  if ( VersionDataKeys )
  {
    while ( 1 )
    {
      RtlInitUnicodeString(&DestinationString, *v0);
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.SecurityDescriptor = v1;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      if ( ZwCreateKey(&KeyHandle, 4u, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL) < 0 )
        break;
      v2 = v0[1];
      if ( v2 )
      {
        RtlInitUnicodeString(&DestinationString, v2);
        ObjectAttributes.RootDirectory = KeyHandle;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.SecurityDescriptor = v1;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        v3 = ZwCreateKey(&Handle, 2u, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
        ZwClose(KeyHandle);
        if ( v3 < 0 )
          break;
        v4 = Handle;
        KeyHandle = Handle;
      }
      else
      {
        v4 = KeyHandle;
      }
      ObjectAttributes.RootDirectory = v4;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpWindowsNtString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.SecurityDescriptor = v1;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      v5 = ZwCreateKey(&Handle, 2u, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
      ZwClose(KeyHandle);
      if ( v5 < 0 )
        break;
      ObjectAttributes.RootDirectory = Handle;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpCurrentVersionString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.SecurityDescriptor = v1;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      v6 = ZwCreateKey(&KeyHandle, 2u, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
      ZwClose(Handle);
      if ( v6 < 0 )
        break;
      ZwSetValueKey(
        KeyHandle,
        (PUNICODE_STRING)&CmpCurrentVersionString,
        0,
        1u,
        CmVersionString.Buffer,
        CmVersionString.Length + 2);
      Data = 10;
      ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCurrentMajorVersionString, 0, 4u, &Data, 4u);
      Data = 0;
      ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCurrentMinorVersionString, 0, 4u, &Data, 4u);
      Data = 0;
      sprintf_s(DstBuf, 0x80uLL, "%u", 10586);
      RtlInitAnsiString(&SourceString, DstBuf);
      *(_DWORD *)&v8.Length = 0x1000000;
      v8.Buffer = (wchar_t *)v15;
      if ( RtlAnsiStringToUnicodeString(&v8, &SourceString, 0) >= 0 )
        ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCurrentBuildNumberString, 0, 1u, v8.Buffer, v8.Length + 2);
      RtlInitAnsiString(&SourceString, "10586.th2_release_sec.180322-1844");
      *(_DWORD *)&v8.Length = 0x1000000;
      v8.Buffer = (wchar_t *)v15;
      if ( RtlAnsiStringToUnicodeString(&v8, &SourceString, 0) >= 0 )
        ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpBuildLabString, 0, 1u, v8.Buffer, v8.Length + 2);
      RtlInitAnsiString(&SourceString, "10586.1540.amd64fre.th2_release_sec.180322-1844");
      *(_DWORD *)&v8.Length = 0x1000000;
      v8.Buffer = (wchar_t *)v15;
      if ( RtlAnsiStringToUnicodeString(&v8, &SourceString, 0) >= 0 )
        ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpBuildLabExString, 0, 1u, v8.Buffer, v8.Length + 2);
      RtlInitAnsiString(&SourceString, "ffffffff-ffff-ffff-ffff-ffffffffffff");
      *(_DWORD *)&v8.Length = 0x1000000;
      v8.Buffer = (wchar_t *)v15;
      if ( RtlAnsiStringToUnicodeString(&v8, &SourceString, 0) >= 0 )
        ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpBuildGuidString, 0, 1u, v8.Buffer, v8.Length + 2);
      sprintf_s(DstBuf, 0x80uLL, "%s %s", "Multiprocessor", "Free");
      RtlInitAnsiString(&SourceString, DstBuf);
      *(_DWORD *)&v8.Length = 0x1000000;
      v8.Buffer = (wchar_t *)v15;
      if ( RtlAnsiStringToUnicodeString(&v8, &SourceString, 0) >= 0 )
      {
        ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCurrentTypeString, 0, 1u, v8.Buffer, v8.Length + 2);
        if ( CmCSDVersionString.Length )
        {
          ZwSetValueKey(
            KeyHandle,
            (PUNICODE_STRING)&CmpCsdVersionString,
            0,
            1u,
            CmCSDVersionString.Buffer,
            CmCSDVersionString.Length + 2);
          if ( CmCSDVersionString.Buffer )
            ExFreePool(CmCSDVersionString.Buffer);
          RtlInitUnicodeString(&CmCSDVersionString, 0LL);
        }
        else
        {
          ZwDeleteValueKey(KeyHandle, (PUNICODE_STRING)&CmpCsdVersionString);
        }
      }
      if ( CmNtSpBuildNumber )
      {
        sprintf_s(DstBuf, 0x80uLL, "%u", CmNtSpBuildNumber);
        RtlInitAnsiString(&SourceString, DstBuf);
        *(_DWORD *)&v8.Length = 0x1000000;
        v8.Buffer = (wchar_t *)v15;
        if ( RtlAnsiStringToUnicodeString(&v8, &SourceString, 0) < 0 )
          ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCsdBuildNumberString, 0, 1u, v8.Buffer, v8.Length + 2);
      }
      else
      {
        ZwDeleteValueKey(KeyHandle, (PUNICODE_STRING)&CmpCsdBuildNumberString);
      }
      ZwSetValueKey(
        KeyHandle,
        (PUNICODE_STRING)&CmpSystemRootString,
        0,
        1u,
        NtSystemRoot.Buffer,
        NtSystemRoot.Length + 2);
      ZwClose(KeyHandle);
      v0 += 2;
      if ( !*v0 )
        goto LABEL_23;
    }
  }
  else
  {
LABEL_23:
    if ( CmCSDVersionString.Buffer )
      ExFreePool(CmCSDVersionString.Buffer);
    RtlInitUnicodeString(&CmCSDVersionString, 0LL);
  }
  ExFreePoolWithTag(v1, 0);
}
