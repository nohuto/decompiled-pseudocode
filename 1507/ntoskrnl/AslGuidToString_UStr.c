/*
 * XREFs of AslGuidToString_UStr @ 0x140704E64
 * Callers:
 *     SdbResolveDatabase @ 0x140704364 (SdbResolveDatabase.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140008054 (RtlStringCchPrintfW.c)
 *     AslFree @ 0x1405783C4 (AslFree.c)
 *     AslAlloc @ 0x1405783E4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslGuidToString_UStr(__int64 a1, unsigned int *a2)
{
  wchar_t *v4; // r14
  __int64 v5; // rcx
  NTSTATUS v6; // ebx

  *(_DWORD *)a1 = 5111884;
  v4 = (wchar_t *)AslAlloc(a1, 0x4EuLL);
  if ( v4 )
  {
    v6 = RtlStringCchPrintfW(
           v4,
           (unsigned __int64)*(unsigned __int16 *)(a1 + 2) >> 1,
           L"{%08lx-%04hx-%04hx-%02hx%02hx-%02hx%02hx%02hx%02hx%02hx%02hx}",
           *a2,
           *((unsigned __int16 *)a2 + 2),
           *((unsigned __int16 *)a2 + 3),
           *((unsigned __int8 *)a2 + 8),
           *((unsigned __int8 *)a2 + 9),
           *((unsigned __int8 *)a2 + 10),
           *((unsigned __int8 *)a2 + 11),
           *((unsigned __int8 *)a2 + 12),
           *((unsigned __int8 *)a2 + 13),
           *((unsigned __int8 *)a2 + 14),
           *((unsigned __int8 *)a2 + 15));
    if ( v6 >= 0 )
    {
      *(_QWORD *)(a1 + 8) = v4;
      v4 = 0LL;
      v6 = 0;
    }
    else
    {
      AslLogCallPrintf(1LL);
    }
  }
  else
  {
    AslLogCallPrintf(1LL);
    v6 = -1073741801;
  }
  AslFree(v5, v4);
  return (unsigned int)v6;
}
