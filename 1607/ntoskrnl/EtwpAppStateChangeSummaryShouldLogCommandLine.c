/*
 * XREFs of EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x14054C304
 * Callers:
 *     EtwTraceProcess @ 0x14045C3DC (EtwTraceProcess.c)
 *     EtwTraceAppStateChange @ 0x14051B448 (EtwTraceAppStateChange.c)
 * Callees:
 *     _wcsnicmp @ 0x14014DE10 (_wcsnicmp.c)
 */

char __fastcall EtwpAppStateChangeSummaryShouldLogCommandLine(__int64 a1)
{
  __int16 *v1; // rcx
  char v2; // di
  unsigned __int16 v3; // ax
  const wchar_t *v4; // rcx
  unsigned __int64 v5; // rsi
  const wchar_t *v6; // rbx
  size_t v7; // rsi

  v1 = *(__int16 **)(a1 + 1128);
  v2 = 0;
  v3 = *v1;
  if ( *v1 )
  {
    v4 = (const wchar_t *)*((_QWORD *)v1 + 1);
    v5 = (unsigned __int64)v3 >> 1;
    v6 = &v4[v5];
    while ( v6 != v4 )
    {
      if ( *--v6 == 92 )
      {
        ++v6;
        break;
      }
    }
    v7 = v5 - (v6 - v4);
    if ( !wcsnicmp(v6, L"svchost.exe", v7) || !wcsnicmp(v6, L"oemsvchost.exe", v7) )
      return 1;
  }
  return v2;
}
