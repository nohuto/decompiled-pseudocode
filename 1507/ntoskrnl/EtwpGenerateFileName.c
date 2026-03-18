/*
 * XREFs of EtwpGenerateFileName @ 0x14055BC88
 * Callers:
 *     EtwpStartLogger @ 0x1404D66D0 (EtwpStartLogger.c)
 *     EtwpFlushBufferToLogfile @ 0x14054B75C (EtwpFlushBufferToLogfile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x1400CEF64 (RtlStringCbPrintfW.c)
 *     memcmp @ 0x140172AE0 (memcmp.c)
 *     wcschr @ 0x140173B98 (wcschr.c)
 *     wcsrchr @ 0x140173D28 (wcsrchr.c)
 *     wcsstr @ 0x140173DA0 (wcsstr.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 */

__int64 __fastcall EtwpGenerateFileName(unsigned __int16 *a1, volatile signed __int32 *a2, UNICODE_STRING *a3)
{
  const wchar_t *v5; // rcx
  wchar_t *v7; // rdi
  unsigned __int32 v8; // ebp
  SIZE_T v9; // r14
  wchar_t *PoolWithTag; // rax
  WCHAR *v11; // rdi

  v5 = (const wchar_t *)*((_QWORD *)a1 + 1);
  if ( !v5 )
    return 3221225520LL;
  v7 = wcschr(v5, 0x25u);
  if ( v7 && v7 == wcsrchr(*((const wchar_t **)a1 + 1), 0x25u) && wcsstr(*((const wchar_t **)a1 + 1), L"%d") )
  {
    v8 = _InterlockedIncrement(a2);
    v9 = a1[1] + 64;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v9, 0x50777445u);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225495LL;
    if ( !RtlStringCbPrintfW(PoolWithTag, v9, *((NTSTRSAFE_PCWSTR *)a1 + 1), v8)
      && memcmp(*((const void **)a1 + 1), v11, *a1) )
    {
      RtlFreeAnsiString(a3);
      RtlInitUnicodeString(a3, v11);
      return 0LL;
    }
    ExFreePoolWithTag(v11, 0);
    return 3221225520LL;
  }
  return 3221225523LL;
}
