/*
 * XREFs of CmVirtualKCBToRealPath @ 0x140600410
 * Callers:
 *     CmpQueryKeyName @ 0x140403390 (CmpQueryKeyName.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140437630 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmQueryKey @ 0x1404396E0 (CmQueryKey.c)
 *     CmpVEExecuteOpenLogic @ 0x14043F180 (CmpVEExecuteOpenLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140601B14 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140602934 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14002CD98 (CmpFreeTransientPoolWithTag.c)
 *     RtlAppendUnicodeStringToString @ 0x14010B80C (RtlAppendUnicodeStringToString.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     CmpConstructName @ 0x14051A1D8 (CmpConstructName.c)
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
    CmpFreeTransientPoolWithTag(v6, 0x624E4D43u);
  }
  return (unsigned int)appended;
}
