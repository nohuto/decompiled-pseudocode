/*
 * XREFs of DpiAppendNumberToString @ 0x1C00ECDF0
 * Callers:
 *     DpiPdoHandleQueryId @ 0x1C00EC870 (DpiPdoHandleQueryId.c)
 *     DpiGdoCreateGdiObjects @ 0x1C00ECAA8 (DpiGdoCreateGdiObjects.c)
 *     DpiGdoDestroyGdiObjects @ 0x1C019E4F0 (DpiGdoDestroyGdiObjects.c)
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 */

__int64 __fastcall DpiAppendNumberToString(PCWSTR SourceString, ULONG Value, PUNICODE_STRING Destination)
{
  wchar_t *PoolWithTag; // rax
  __int64 v6; // rcx
  NTSTATUS v7; // edi
  SIZE_T v8; // rdx
  wchar_t *v9; // rax
  __int64 v10; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  struct _UNICODE_STRING String; // [rsp+20h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, SourceString);
  *(_DWORD *)&String.Length = 1441792;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x16uLL, 0x74727044u);
  String.Buffer = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, String.MaximumLength);
    v7 = RtlIntegerToUnicodeString(Value, 0xAu, &String);
    if ( v7 >= 0 )
    {
      v8 = (unsigned __int16)(String.MaximumLength + DestinationString.MaximumLength);
      Destination->MaximumLength = v8;
      Destination->Length = 0;
      v9 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v8, 0x74727044u);
      Destination->Buffer = v9;
      if ( v9 )
      {
        memset(v9, 0, Destination->MaximumLength);
        RtlCopyUnicodeString(Destination, &DestinationString);
        RtlAppendUnicodeStringToString(Destination, &String);
      }
      else
      {
        v7 = -1073741801;
        v13 = WdLogNewEntry5_WdLowResource(v10);
        *(_QWORD *)(v13 + 24) = -1073741801LL;
        WdLogEvent5_WdLowResource(v13);
      }
    }
    ExFreePoolWithTag(String.Buffer, 0x74727044u);
  }
  else
  {
    v7 = -1073741801;
    v12 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v12 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v12);
  }
  return (unsigned int)v7;
}
