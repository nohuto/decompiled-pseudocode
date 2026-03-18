/*
 * XREFs of DpiAppendStringToString @ 0x1C00ED344
 * Callers:
 *     DpiPdoHandleQueryId @ 0x1C00EC870 (DpiPdoHandleQueryId.c)
 *     DpiGdoSetupGdiParameters @ 0x1C00ECEE4 (DpiGdoSetupGdiParameters.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x1C00079A0 (RtlStringCbLengthW.c)
 *     memset @ 0x1C00127C0 (memset.c)
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
  NTSTATUS v14; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  size_t pcbLength[5]; // [rsp+20h] [rbp-28h] BYREF
  size_t v19; // [rsp+68h] [rbp+20h] BYREF

  v6 = RtlStringCbLengthW(Source, 0x208uLL, &v19);
  v8 = v6;
  if ( v6 < 0 )
    goto LABEL_8;
  v9 = RtlStringCbLengthW(a2, 0x208uLL, pcbLength);
  v8 = v9;
  if ( v9 < 0 )
    goto LABEL_8;
  v10 = LOWORD(pcbLength[0]) + v19 + 2;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v10, 0x74727044u);
  UnicodeString->Buffer = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v8) = -1073741801;
    v16 = WdLogNewEntry5_WdLowResource(v12);
    *(_QWORD *)(v16 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v16);
LABEL_9:
    RtlFreeUnicodeString(UnicodeString);
    return (unsigned int)v8;
  }
  UnicodeString->Length = 0;
  UnicodeString->MaximumLength = v10;
  memset(PoolWithTag, 0, v10);
  appended = RtlAppendUnicodeToString(UnicodeString, Source);
  v8 = appended;
  if ( appended < 0 || (v14 = RtlAppendUnicodeToString(UnicodeString, a2), v8 = v14, v14 < 0) )
  {
LABEL_8:
    v17 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v17 + 24) = v8;
    WdLogEvent5_WdError(v17);
    goto LABEL_9;
  }
  return (unsigned int)v8;
}
