/*
 * XREFs of PipPendingServicesFilter @ 0x1407CF698
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 */

__int64 __fastcall PipPendingServicesFilter(const wchar_t *a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  *a4 = 0;
  if ( !wcsicmp(a1, L"EventLog") )
    *a4 = 1;
  return 0LL;
}
