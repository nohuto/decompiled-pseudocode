/*
 * XREFs of EtwpApplyExeFilter @ 0x1406A8BD4
 * Callers:
 *     EtwpApplyScopeFilters @ 0x14040CB48 (EtwpApplyScopeFilters.c)
 *     EtwpIsCaptureStateAllowed @ 0x14052E318 (EtwpIsCaptureStateAllowed.c)
 * Callees:
 *     _wcsnicmp @ 0x14014DE10 (_wcsnicmp.c)
 */

char __fastcall EtwpApplyExeFilter(__int64 a1, _WORD *a2)
{
  unsigned __int16 *v3; // rcx
  const wchar_t *v4; // rdx
  unsigned int v5; // ebp
  const wchar_t *v6; // rbx
  unsigned __int16 v7; // si
  unsigned int v8; // ebp
  char v9; // di

  v3 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 80) + 1128LL);
  v4 = (const wchar_t *)*((_QWORD *)v3 + 1);
  v5 = *v3 >> 1;
  v6 = &v4[v5];
  while ( v6 != v4 )
  {
    if ( *--v6 == 92 )
    {
      ++v6;
      break;
    }
  }
  v7 = 0;
  v8 = v5 - (v6 - v4);
  if ( !*a2 )
    return 0;
  v9 = 1;
  while ( (unsigned __int16)a2[8 * v7 + 4] != v8 || wcsnicmp(*(const wchar_t **)&a2[8 * v7 + 8], v6, v8) )
  {
    if ( ++v7 >= *a2 )
      return 0;
  }
  return v9;
}
