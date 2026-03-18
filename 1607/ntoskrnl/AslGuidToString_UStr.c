/*
 * XREFs of AslGuidToString_UStr @ 0x1406C50FC
 * Callers:
 *     SdbResolveDatabase @ 0x1406C44AC (SdbResolveDatabase.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14007F50C (RtlStringCchPrintfW.c)
 *     AslFree @ 0x14048538C (AslFree.c)
 *     AslAlloc @ 0x14048554C (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslGuidToString_UStr(__int64 a1, unsigned int *a2)
{
  wchar_t *v4; // r14
  __int64 v5; // rcx
  unsigned int v6; // ebx
  NTSTATUS v7; // eax
  __int64 v9; // [rsp+20h] [rbp-68h]

  *(_DWORD *)a1 = 5111884;
  v4 = (wchar_t *)AslAlloc(a1, 0x4EuLL);
  if ( v4 )
  {
    v7 = RtlStringCchPrintfW(
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
    v6 = v7;
    if ( v7 >= 0 )
    {
      *(_QWORD *)(a1 + 8) = v4;
      v4 = 0LL;
      v6 = 0;
    }
    else
    {
      LODWORD(v9) = v7;
      AslLogCallPrintf(
        1,
        (unsigned int)"AslGuidToString_UStr",
        256,
        (unsigned int)"RtlStringCchPrintfW failed [%x]",
        v9);
    }
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"AslGuidToString_UStr", 236, (unsigned int)"Out of memory");
    v6 = -1073741801;
  }
  AslFree(v5, v4);
  return v6;
}
