/*
 * XREFs of DrvDbBuildDeviceIdDriverInfMatch @ 0x14051A13C
 * Callers:
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1404C6DBC (DrvDbGetDeviceIdDriverInfMatches.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x14008FB80 (RtlStringCchPrintfExW.c)
 *     RtlStringCchCopyExW @ 0x140090110 (RtlStringCchCopyExW.c)
 */

int __fastcall DrvDbBuildDeviceIdDriverInfMatch(size_t a1, unsigned __int8 *a2, wchar_t *a3, unsigned int a4)
{
  unsigned __int8 v4; // cl
  int v6; // eax
  int result; // eax
  unsigned __int8 v8; // cl
  __int64 v9; // [rsp+30h] [rbp-18h]
  size_t pcchRemaining; // [rsp+50h] [rbp+8h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+58h] [rbp+10h] BYREF

  pcchRemaining = a1;
  v4 = *a2;
  ppszDestEnd = 0LL;
  pcchRemaining = 0LL;
  if ( !v4 )
    return RtlStringCchCopyExW(a3, a4, &word_140551830, 0LL, 0LL, 0x800u);
  if ( v4 > 2u )
  {
    if ( v4 == 3 )
      return RtlStringCchPrintfExW(a3, a4, &ppszDestEnd, &pcchRemaining, 0x800u, L"%ws\\*", &word_140551830);
    else
      return -1073741811;
  }
  else
  {
    if ( v4 == 1 )
      v6 = 0;
    else
      v6 = *((unsigned __int16 *)a2 + 1) + 1;
    result = RtlStringCchPrintfExW(a3, a4, &ppszDestEnd, &pcchRemaining, 0x800u, L"%ws\\%X", &word_140551830, v6);
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
  return result;
}
