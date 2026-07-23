/*
 * XREFs of DrvDbBuildDeviceIdDriverInfMatch @ 0x1406E0B10
 * Callers:
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1404B8F1C (DrvDbGetDeviceIdDriverInfMatches.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x1400C1338 (RtlStringCchCopyExW.c)
 *     RtlStringCchPrintfExW @ 0x1400C1890 (RtlStringCchPrintfExW.c)
 */

int __fastcall DrvDbBuildDeviceIdDriverInfMatch(size_t a1, unsigned __int8 *a2, wchar_t *a3, unsigned int a4)
{
  unsigned __int8 v4; // cl
  int result; // eax
  int v7; // eax
  unsigned __int8 v8; // cl
  __int64 v9; // [rsp+30h] [rbp-18h]
  size_t pcchRemaining; // [rsp+50h] [rbp+8h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+58h] [rbp+10h] BYREF

  pcchRemaining = a1;
  v4 = *a2;
  ppszDestEnd = 0LL;
  pcchRemaining = 0LL;
  if ( !v4 )
    return RtlStringCchCopyExW(a3, a4, &word_1405841A0, 0LL, 0LL, 0x800u);
  if ( v4 <= 2u )
  {
    if ( v4 == 1 )
      v7 = 0;
    else
      v7 = *((unsigned __int16 *)a2 + 1) + 1;
    result = RtlStringCchPrintfExW(a3, a4, &ppszDestEnd, &pcchRemaining, 0x800u, L"%ws\\%X", &word_1405841A0, v7);
    if ( result >= 0 )
    {
      v8 = a2[1];
      if ( v8 != 0xFF )
      {
        LODWORD(v9) = v8;
        return RtlStringCchPrintfExW(ppszDestEnd, pcchRemaining, 0LL, 0LL, 0x800u, L"\\%X", v9);
      }
    }
  }
  else if ( v4 == 3 )
  {
    return RtlStringCchPrintfExW(a3, a4, &ppszDestEnd, &pcchRemaining, 0x800u, L"%ws\\*", &word_1405841A0);
  }
  else
  {
    return -1073741811;
  }
  return result;
}
