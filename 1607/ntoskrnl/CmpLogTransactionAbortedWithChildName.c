/*
 * XREFs of CmpLogTransactionAbortedWithChildName @ 0x1400B4B50
 * Callers:
 *     CmpTryToRundownHive @ 0x1400876A8 (CmpTryToRundownHive.c)
 *     CmpLogTransactionAborted @ 0x1401356B4 (CmpLogTransactionAborted.c)
 *     CmpCreateChild @ 0x1403FE088 (CmpCreateChild.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x14000BEC0 (RtlUnicodeStringCopy.c)
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     TraceLoggingProviderEnabled @ 0x140088D10 (TraceLoggingProviderEnabled.c)
 *     RtlUnicodeStringCat @ 0x1400A80E8 (RtlUnicodeStringCat.c)
 *     CmpLogTransactionAbortedByName @ 0x1401B5768 (CmpLogTransactionAbortedByName.c)
 *     RtlUnicodeStringCatString @ 0x1401B5854 (RtlUnicodeStringCatString.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpConstructAndCacheName @ 0x1404E2780 (CmpConstructAndCacheName.c)
 */

void __fastcall CmpLogTransactionAbortedWithChildName(
        __int64 a1,
        const UNICODE_STRING *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  UCHAR v8; // dl
  __int64 v9; // r8
  const UNICODE_STRING *v10; // rdi
  unsigned __int64 v11; // r8
  NTSTRSAFE_PCWSTR v12; // rdx
  UNICODE_STRING *p_DestinationString; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  PCUNICODE_STRING SourceString; // [rsp+58h] [rbp+28h] BYREF

  SourceString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( !a5
    || !TraceLoggingProviderEnabled(&stru_1402F34E0, v8, 0LL)
    || (int)CmpConstructAndCacheName(a1, &SourceString) < 0 )
  {
    goto LABEL_2;
  }
  if ( a2 )
  {
    v10 = SourceString;
    v11 = SourceString->Length + 2LL + a2->Length;
    if ( v11 > 0xFFFF )
      goto LABEL_2;
    DestinationString.MaximumLength = SourceString->Length + 2 + a2->Length;
    DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)v11, 0x624E4D43u);
    if ( !DestinationString.Buffer )
      return;
    RtlUnicodeStringCopy(&DestinationString, v10);
    RtlUnicodeStringCatString(&DestinationString, v12);
    RtlUnicodeStringCat(&DestinationString, a2);
    p_DestinationString = &DestinationString;
  }
  else
  {
    p_DestinationString = (UNICODE_STRING *)SourceString;
  }
  CmpLogTransactionAbortedByName(p_DestinationString, a3, v9, a5);
LABEL_2:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
}
