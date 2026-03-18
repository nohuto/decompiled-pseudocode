/*
 * XREFs of DpiAppendStringToString @ 0x1C00D7200
 * Callers:
 *     DpiPdoHandleQueryId @ 0x1C00D6720 (DpiPdoHandleQueryId.c)
 *     DpiGdoSetupGdiParameters @ 0x1C00D6D90 (DpiGdoSetupGdiParameters.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x1C000E8B0 (RtlStringCbLengthW.c)
 *     memset @ 0x1C0010C80 (memset.c)
 */

__int64 __fastcall DpiAppendStringToString(PCWSTR Source, PCWSTR a2, PUNICODE_STRING UnicodeString)
{
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rbx
  NTSTATUS v9; // eax
  unsigned __int16 v10; // bx
  wchar_t *PoolWithTag; // rax
  __int64 v12; // rcx
  NTSTATUS appended; // eax
  __int64 v14; // rcx
  NTSTATUS v15; // eax
  _QWORD *v17; // rax
  void *v18; // rcx
  _QWORD *v19; // rax
  size_t pcbLength[5]; // [rsp+20h] [rbp-28h] BYREF
  size_t v21; // [rsp+68h] [rbp+20h] BYREF

  v6 = RtlStringCbLengthW(Source, 0x208uLL, &v21);
  v8 = v6;
  if ( v6 < 0 || (v9 = RtlStringCbLengthW(a2, 0x208uLL, pcbLength), v8 = v9, v9 < 0) )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v17[3] = DpiAppendStringToString;
    v18 = RtlStringCbLengthW;
LABEL_10:
    v17[4] = v18;
    v17[5] = v8;
    WdLogEvent5_WdError(v17);
    goto LABEL_11;
  }
  v10 = LOWORD(pcbLength[0]) + v21 + 2;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v10, 0x74727044u);
  UnicodeString->Buffer = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v8) = -1073741801;
    v19 = (_QWORD *)WdLogNewEntry5_WdLowResource(v12);
    v19[3] = DpiAppendStringToString;
    v19[4] = ExAllocatePoolWithTag;
    v19[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v19);
LABEL_11:
    RtlFreeUnicodeString(UnicodeString);
    return (unsigned int)v8;
  }
  UnicodeString->Length = 0;
  UnicodeString->MaximumLength = v10;
  memset(PoolWithTag, 0, v10);
  appended = RtlAppendUnicodeToString(UnicodeString, Source);
  v8 = appended;
  if ( appended < 0 || (v15 = RtlAppendUnicodeToString(UnicodeString, a2), v8 = v15, v15 < 0) )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v17[3] = DpiAppendStringToString;
    v18 = RtlAppendUnicodeToString;
    goto LABEL_10;
  }
  return (unsigned int)v8;
}
