/*
 * XREFs of DpiAppendStringToString @ 0x1C00CF6C0
 * Callers:
 *     DpiPdoHandleQueryId @ 0x1C00CEBE0 (DpiPdoHandleQueryId.c)
 *     DpiGdoSetupGdiParameters @ 0x1C00CF250 (DpiGdoSetupGdiParameters.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x1C0001B30 (RtlStringCbLengthW.c)
 *     memset @ 0x1C0012400 (memset.c)
 */

__int64 __fastcall DpiAppendStringToString(PCWSTR Source, PCWSTR a2, PUNICODE_STRING UnicodeString)
{
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rbx
  NTSTATUS v9; // eax
  unsigned __int16 v10; // bx
  wchar_t *PoolWithTag; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  NTSTATUS appended; // eax
  __int64 v17; // rcx
  NTSTATUS v18; // eax
  _QWORD *v20; // rax
  void *v21; // rcx
  _QWORD *v22; // rax
  size_t pcbLength[5]; // [rsp+20h] [rbp-28h] BYREF
  size_t v24; // [rsp+68h] [rbp+20h] BYREF

  v6 = RtlStringCbLengthW(Source, 0x208uLL, &v24);
  v8 = v6;
  if ( v6 < 0 || (v9 = RtlStringCbLengthW(a2, 0x208uLL, pcbLength), v8 = v9, v9 < 0) )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v20[3] = DpiAppendStringToString;
    v21 = RtlStringCbLengthW;
LABEL_10:
    v20[4] = v21;
    v20[5] = v8;
    WdLogEvent5_WdError(v20);
    goto LABEL_11;
  }
  v10 = LOWORD(pcbLength[0]) + v24 + 2;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v10, 0x74727044u);
  UnicodeString->Buffer = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v8) = -1073741801;
    v22 = (_QWORD *)WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
    v22[3] = DpiAppendStringToString;
    v22[4] = ExAllocatePoolWithTag;
    v22[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v22);
LABEL_11:
    RtlFreeUnicodeString(UnicodeString);
    return (unsigned int)v8;
  }
  UnicodeString->Length = 0;
  UnicodeString->MaximumLength = v10;
  memset(PoolWithTag, 0, v10);
  appended = RtlAppendUnicodeToString(UnicodeString, Source);
  v8 = appended;
  if ( appended < 0 || (v18 = RtlAppendUnicodeToString(UnicodeString, a2), v8 = v18, v18 < 0) )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    v20[3] = DpiAppendStringToString;
    v21 = RtlAppendUnicodeToString;
    goto LABEL_10;
  }
  return (unsigned int)v8;
}
