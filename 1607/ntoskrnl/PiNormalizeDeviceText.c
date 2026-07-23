/*
 * XREFs of PiNormalizeDeviceText @ 0x1404B7EB8
 * Callers:
 *     PnpQueryDeviceText @ 0x140512360 (PnpQueryDeviceText.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14000BD54 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfExW @ 0x1400A7360 (RtlStringCbPrintfExW.c)
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     wcschr @ 0x14014F504 (wcschr.c)
 *     _wcstoi64 @ 0x14014FE68 (_wcstoi64.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x14015A4B0 (ZwQueryKey.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     RtlPrefixUnicodeString @ 0x1404E0F60 (RtlPrefixUnicodeString.c)
 *     IopBuildFullDriverPath @ 0x140515EA8 (IopBuildFullDriverPath.c)
 *     PiGetDefaultMessageString @ 0x140574B00 (PiGetDefaultMessageString.c)
 */

__int64 __fastcall PiNormalizeDeviceText(const WCHAR *Src, wchar_t **a2)
{
  void *v3; // r14
  unsigned __int16 *v4; // r15
  wchar_t *v5; // rsi
  NTSTATUS inited; // ebx
  PVOID PoolWithTag; // rax
  const wchar_t *v8; // rbx
  wchar_t *v9; // rax
  const wchar_t *v10; // r12
  wchar_t *v11; // rax
  wchar_t *v12; // rdi
  unsigned __int16 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  SIZE_T v17; // rbx
  wchar_t *v18; // rax
  UNICODE_STRING String2; // [rsp+50h] [rbp-59h] BYREF
  wchar_t *EndPtr; // [rsp+60h] [rbp-49h] BYREF
  void *v22; // [rsp+68h] [rbp-41h]
  size_t pcbRemaining; // [rsp+70h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-31h] BYREF
  ULONG MessageId[2]; // [rsp+88h] [rbp-21h]
  PVOID P; // [rsp+90h] [rbp-19h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-11h] BYREF
  ULONG Length; // [rsp+120h] [rbp+77h] BYREF
  HANDLE KeyHandle; // [rsp+128h] [rbp+7Fh] BYREF

  *a2 = 0LL;
  v22 = 0LL;
  v3 = 0LL;
  KeyHandle = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  inited = RtlInitUnicodeStringEx(&String2, Src);
  if ( inited < 0 )
    goto LABEL_30;
  if ( !RtlPrefixUnicodeString(&CmRegistryMachineName, &String2, 1u) )
  {
    inited = 0;
    goto LABEL_30;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, String2.Length + 2LL, 0x20207050u);
  P = PoolWithTag;
  v8 = (const wchar_t *)PoolWithTag;
  if ( !PoolWithTag )
  {
    inited = -1073741670;
    goto LABEL_30;
  }
  memmove(PoolWithTag, Src, String2.Length);
  v8[(unsigned __int64)String2.Length >> 1] = 0;
  v9 = wcschr(v8, 0x2Cu);
  if ( !v9 )
    goto LABEL_27;
  v10 = v9 + 1;
  *v9 = 0;
  v11 = wcschr(v9 + 1, 0x2Cu);
  v12 = v11;
  if ( v11 )
  {
    *v11 = 0;
    v12 = v11 + 1;
  }
  *(_QWORD *)MessageId = wcstoi64(v10, &EndPtr, 10);
  if ( *EndPtr )
    goto LABEL_27;
  RtlInitUnicodeString(&String2, v8);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &String2;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  inited = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( inited >= 0 )
  {
    inited = ZwQueryKey(KeyHandle, KeyBasicInformation, 0LL, 0, &Length);
    if ( inited == -1073741789 )
    {
      v4 = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, Length, 0x20207050u);
      if ( !v4 )
        goto LABEL_38;
      inited = ZwQueryKey(KeyHandle, KeyBasicInformation, v4, Length, &Length);
      if ( inited < 0 )
        goto LABEL_28;
      String2.Length = v4[6];
      String2.MaximumLength = v4[6];
      String2.Buffer = v4 + 8;
      inited = IopBuildFullDriverPath(&String2, KeyHandle, &DestinationString);
      if ( inited < 0 )
        goto LABEL_28;
      *(_DWORD *)&String2.Length = 1703960;
      String2.Buffer = L"\\SystemRoot\\";
      if ( !RtlPrefixUnicodeString(&String2, &DestinationString, 1u) )
        goto LABEL_28;
      v13 = DestinationString.Length - 24;
      pcbRemaining = (size_t)(DestinationString.Buffer + 12);
      inited = PiGetDefaultMessageString(KeyHandle, MessageId[0]);
      if ( inited < 0 )
      {
        v3 = v22;
        goto LABEL_28;
      }
      v14 = -1LL;
      v15 = -1LL;
      do
        ++v15;
      while ( v10[v15] );
      v3 = v22;
      v16 = -1LL;
      do
        ++v16;
      while ( *((_WORD *)v22 + v16) );
      v17 = v13 + 2 * (v15 + v16 + 5);
      if ( v12 )
      {
        do
          ++v14;
        while ( v12[v14] );
        v17 += 2 * v14 + 6;
      }
      v18 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v17, 0x20207050u);
      v5 = v18;
      if ( !v18 )
      {
LABEL_38:
        inited = -1073741670;
        goto LABEL_28;
      }
      inited = RtlStringCbPrintfExW(v18, v17, &EndPtr, &pcbRemaining, 0, L"@%s,#%s;%s", pcbRemaining, v10, v3);
      if ( inited >= 0 )
      {
        if ( !v12 || (inited = RtlStringCbPrintfW(EndPtr, pcbRemaining, L";(%s)", v12), inited >= 0) )
        {
          *a2 = v5;
LABEL_27:
          inited = 0;
        }
      }
    }
  }
LABEL_28:
  ExFreePoolWithTag(P, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
LABEL_30:
  RtlFreeAnsiString(&DestinationString);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( inited < 0 && v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)inited;
}
