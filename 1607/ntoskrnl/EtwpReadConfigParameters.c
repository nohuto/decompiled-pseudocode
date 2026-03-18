/*
 * XREFs of EtwpReadConfigParameters @ 0x1407BAF90
 * Callers:
 *     EtwpInitialize @ 0x1407A0D3C (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwOpenKey @ 0x140159EC0 (ZwOpenKey.c)
 *     memmove @ 0x140171280 (memmove.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140458CF0 (RtlFreeAnsiString.c)
 *     RtlQueryRegistryValuesEx @ 0x1404F6E7C (RtlQueryRegistryValuesEx.c)
 */

void EtwpReadConfigParameters()
{
  const WCHAR *v0; // rbx
  int v1; // eax
  int v2; // ecx
  WCHAR *PoolWithTag; // rax
  unsigned __int64 v4; // rax
  unsigned int v5; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v6; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v7; // [rsp+40h] [rbp-C8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v12[28]; // [rsp+A8h] [rbp-60h] BYREF

  LOWORD(v7) = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v0 = 0LL;
  v6 = 0;
  v5 = 10;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    goto LABEL_21;
  memset(v12, 0, sizeof(v12));
  v12[0] = EtwpQueryRegistryCallback;
  v12[3] = &UnicodeString;
  v12[7] = EtwpQueryRegistryCallback;
  v12[2] = L"RTBacklogRoot";
  v12[14] = EtwpQueryRegistryCallback;
  v12[5] = &v7;
  LODWORD(v12[4]) = 1;
  v12[10] = &v5;
  LODWORD(v12[11]) = 4;
  v12[9] = L"MaxNonPagedPoolUsage";
  v12[17] = &v6;
  v12[16] = L"StackCaptureTimeout";
  LODWORD(v12[18]) = 4;
  if ( (int)RtlQueryRegistryValuesEx(0x40000000LL, (__int64)KeyHandle, (__int64)v12) < 0 )
  {
LABEL_21:
    v1 = v5;
    v2 = v6;
  }
  else
  {
    if ( UnicodeString.Buffer )
    {
      if ( UnicodeString.Length >= 4u )
      {
        PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, UnicodeString.MaximumLength + 2LL, 0x50777445u);
        v0 = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, UnicodeString.Buffer, UnicodeString.MaximumLength);
          v4 = (unsigned __int64)UnicodeString.Length >> 1;
          if ( v0[v4 - 1] != 92 )
          {
            v0[v4] = 92;
            v0[((unsigned __int64)UnicodeString.Length >> 1) + 1] = 0;
          }
        }
      }
    }
    v1 = 50;
    if ( v5 <= 0x32 )
    {
      v1 = v5;
      if ( v5 < 0xA )
        v1 = 10;
    }
    v2 = v6;
    v5 = v1;
    if ( v6 > 0x2BF20 )
      v2 = 180000;
    v6 = v2;
  }
  EtwpMaxNonPagedPoolUsage = v1;
  if ( v0 )
    EtwpRTBacklogFileRoot = v0;
  if ( v2 )
    EtwpStackCaptureTimeout = v2;
  if ( KeyHandle )
    ZwClose(KeyHandle);
  RtlFreeAnsiString(&UnicodeString);
}
