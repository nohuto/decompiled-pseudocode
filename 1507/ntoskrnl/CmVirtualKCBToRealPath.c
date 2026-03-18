/*
 * XREFs of CmVirtualKCBToRealPath @ 0x140657A00
 * Callers:
 *     CmpVEExecuteParseLogic @ 0x1404071F8 (CmpVEExecuteParseLogic.c)
 *     CmpQueryKeyName @ 0x140427100 (CmpQueryKeyName.c)
 *     CmQueryKey @ 0x1404C3F30 (CmQueryKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404C7070 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpDoOpen @ 0x1404C78D0 (CmpDoOpen.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1406599C0 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1400D1F10 (RtlAppendUnicodeStringToString.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     CmpConstructName @ 0x1404C5EC0 (CmpConstructName.c)
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
