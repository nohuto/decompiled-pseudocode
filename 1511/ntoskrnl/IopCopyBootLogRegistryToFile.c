/*
 * XREFs of IopCopyBootLogRegistryToFile @ 0x14054B79C
 * Callers:
 *     NtInitializeRegistry @ 0x14050C454 (NtInitializeRegistry.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140003C28 (RtlStringCchPrintfW.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlInitAnsiString @ 0x140092408 (RtlInitAnsiString.c)
 *     ExSystemTimeToLocalTime @ 0x1400F3D68 (ExSystemTimeToLocalTime.c)
 *     RtlTimeToTimeFields @ 0x140123118 (RtlTimeToTimeFields.c)
 *     RtlStringCchPrintfA @ 0x140133D10 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwDeleteKey @ 0x140151EE0 (ZwDeleteKey.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x1403BCBA8 (IopGetRegistryValue.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403E1384 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x140447238 (RtlCreateUnicodeString.c)
 *     IopOpenRegistryKey @ 0x14049446C (IopOpenRegistryKey.c)
 *     IopBootLogToFile @ 0x1405F7140 (IopBootLogToFile.c)
 */

__int64 IopCopyBootLogRegistryToFile()
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int i; // ebx
  NTSTATUS RegistryValue; // eax
  PVOID v4; // rdi
  PUNICODE_STRING v5; // rcx
  ULONG v6; // [rsp+28h] [rbp-E0h]
  ULONG v7; // [rsp+28h] [rbp-E0h]
  HANDLE Handle; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A8h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-90h] BYREF
  PVOID P; // [rsp+88h] [rbp-80h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING v14; // [rsp+98h] [rbp-70h] BYREF
  UNICODE_STRING v15; // [rsp+A8h] [rbp-60h] BYREF
  _STRING DestinationString; // [rsp+B8h] [rbp-50h] BYREF
  char pszDest[256]; // [rsp+C8h] [rbp-40h] BYREF
  wchar_t SourceString[256]; // [rsp+1C8h] [rbp+C0h] BYREF

  result = 0LL;
  UnicodeString.Length = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  if ( qword_1406FB018 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)&qword_1406FB018[4], 1u);
    IopBootLogToFile(&qword_1406FB018[3]);
    ExSystemTimeToLocalTime(&KeBootTime, &LocalTime);
    RtlTimeToTimeFields(&LocalTime, &TimeFields);
    RtlStringCchPrintfA(
      pszDest,
      0x100uLL,
      "%2d %2d %4d %02d:%02d:%02d.%03d\r\n",
      TimeFields.Month,
      TimeFields.Day,
      TimeFields.Year,
      TimeFields.Hour,
      TimeFields.Minute,
      TimeFields.Second,
      TimeFields.Milliseconds);
    RtlInitAnsiString(&DestinationString, pszDest);
    RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
    IopBootLogToFile(&UnicodeString);
    RtlFreeAnsiString(&UnicodeString);
    LOBYTE(v6) = 0;
    if ( IopOpenRegistryKey(&Handle, 0LL, &CmRegistryMachineSystemCurrentControlSetControlBootLog, 0xF003Fu, v6) < 0 )
    {
      v5 = qword_1406FB018;
    }
    else
    {
      for ( i = 0; i < LODWORD(qword_1406FB018[10].Buffer); ++i )
      {
        RtlStringCchPrintfW(SourceString, 0x100uLL, L"%d", i);
        RtlCreateUnicodeString(&v14, SourceString);
        LOBYTE(v7) = 0;
        if ( IopOpenRegistryKey(&KeyHandle, Handle, &v14, 0xF003Fu, v7) >= 0 )
        {
          P = 0LL;
          RegistryValue = IopGetRegistryValue(KeyHandle, &word_140551830, 256, &P);
          v4 = P;
          if ( RegistryValue >= 0 )
          {
            RtlInitUnicodeString(&v15, (PCWSTR)((char *)P + *((unsigned int *)P + 2)));
            IopBootLogToFile(&v15);
          }
          ExFreePoolWithTag(v4, 0);
          ZwDeleteKey(KeyHandle);
          ZwClose(KeyHandle);
        }
      }
      ZwDeleteKey(Handle);
      ZwClose(Handle);
      v5 = qword_1406FB018;
      BYTE4(qword_1406FB018[10].Buffer) = 1;
    }
    ExReleaseResourceLite((PERESOURCE)&v5[4]);
    return KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
  return result;
}
