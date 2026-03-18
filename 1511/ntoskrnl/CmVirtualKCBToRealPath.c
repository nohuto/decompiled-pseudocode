/*
 * XREFs of CmVirtualKCBToRealPath @ 0x1405E1C6C
 * Callers:
 *     CmpVEExecuteParseLogic @ 0x1403BC378 (CmpVEExecuteParseLogic.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1403FD380 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpDoOpen @ 0x1403FEFA0 (CmpDoOpen.c)
 *     CmQueryKey @ 0x1403FF980 (CmQueryKey.c)
 *     NtQueryKey @ 0x1404003C0 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x140400BF0 (NtQueryValueKey.c)
 *     CmpQueryKeyName @ 0x140420760 (CmpQueryKeyName.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1405E3324 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1400030E4 (RtlAppendUnicodeStringToString.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpConstructName @ 0x1403FC9B0 (CmpConstructName.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 */

__int64 __fastcall CmVirtualKCBToRealPath(__int64 a1, UNICODE_STRING *a2)
{
  NTSTATUS appended; // ebx
  UNICODE_STRING *v5; // rax
  UNICODE_STRING *v6; // rdi
  unsigned int v7; // ebp
  int v8; // edx
  unsigned __int64 v9; // rcx
  unsigned __int16 v10; // r14
  wchar_t *PoolWithTag; // rax
  UNICODE_STRING Source; // [rsp+20h] [rbp-28h] BYREF

  appended = -1073741670;
  if ( !CmpVEEnabled )
    return 3221225485LL;
  v5 = (UNICODE_STRING *)CmpConstructName(a1);
  v6 = v5;
  if ( v5 )
  {
    v7 = 0;
    v8 = 5;
    v9 = 0LL;
    while ( v5->Buffer[v9 / 2] != 92 || --v8 )
    {
      v9 = 2LL * ++v7;
      if ( v9 >= v5->Length )
      {
        appended = -1073741811;
        goto LABEL_14;
      }
    }
    v10 = v5->Length + 2 * (9 - v7);
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v5->Length + 2 * (9 - v7), 0x624E4D43u);
    a2->Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      a2->MaximumLength = v10;
      a2->Length = 0;
      Source = *v6;
      Source.Length = 18;
      appended = RtlAppendUnicodeStringToString(a2, &Source);
      if ( appended < 0
        || (Source.Length = v6->Length - 2 * v7,
            Source.Buffer += v7,
            appended = RtlAppendUnicodeStringToString(a2, &Source),
            appended < 0) )
      {
        RtlFreeAnsiString(a2);
      }
    }
LABEL_14:
    ExFreePoolWithTag(v6, 0x624E4D43u);
  }
  return (unsigned int)appended;
}
