/*
 * XREFs of CmpLogTransactionAbortedWithChildName @ 0x1400F3720
 * Callers:
 *     CmpTryToRundownHive @ 0x1400D2844 (CmpTryToRundownHive.c)
 *     CmpLogTransactionAborted @ 0x1401AA55C (CmpLogTransactionAborted.c)
 *     CmpDoCreateChild @ 0x1403DF308 (CmpDoCreateChild.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     TraceLoggingProviderEnabled @ 0x1400923A4 (TraceLoggingProviderEnabled.c)
 *     CmpLogTransactionAbortedByName @ 0x1401AA574 (CmpLogTransactionAbortedByName.c)
 *     RtlUnicodeStringCat @ 0x1401AA648 (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringCatString @ 0x1401AA6D4 (RtlUnicodeStringCatString.c)
 *     RtlUnicodeStringCopy @ 0x1401AA738 (RtlUnicodeStringCopy.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpConstructName @ 0x1403FC9B0 (CmpConstructName.c)
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
  void *v10; // rax
  UNICODE_STRING *p_DestinationString; // rbx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  NTSTRSAFE_PCWSTR v14; // rdx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( !a5 || !TraceLoggingProviderEnabled(&stru_1402CFD30, v8, 0LL) )
    goto LABEL_2;
  if ( !*(_QWORD *)(a1 + 288) )
  {
    v10 = (void *)CmpConstructName(a1);
    if ( v10 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 288), (signed __int64)v10, 0LL) )
        ExFreePoolWithTag(v10, 0x624E4D43u);
    }
  }
  p_DestinationString = *(UNICODE_STRING **)(a1 + 288);
  if ( p_DestinationString )
  {
    if ( a2 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( pszSrc[v12] );
      v13 = a2->Length + p_DestinationString->Length + 2 * v12;
      if ( v13 > 0xFFFF )
        goto LABEL_2;
      DestinationString.MaximumLength = a2->Length + p_DestinationString->Length + 2 * v12;
      DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)v13, 0x624E4D43u);
      if ( !DestinationString.Buffer )
        return;
      RtlUnicodeStringCopy(&DestinationString, p_DestinationString);
      RtlUnicodeStringCatString(&DestinationString, v14);
      RtlUnicodeStringCat(&DestinationString, a2);
      p_DestinationString = &DestinationString;
    }
    CmpLogTransactionAbortedByName(p_DestinationString, a3, v9, a5);
LABEL_2:
    if ( DestinationString.Buffer )
      ExFreePoolWithTag(DestinationString.Buffer, 0);
  }
}
