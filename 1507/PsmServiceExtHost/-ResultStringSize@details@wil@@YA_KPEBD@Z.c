/*
 * XREFs of ?ResultStringSize@details@wil@@YA_KPEBD@Z @ 0x18004C3B0
 * Callers:
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x1800483C8 (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x18004C6A4 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::ResultStringSize(wil::details *this, const char *a2)
{
  __int64 v4; // rcx

  if ( !this )
    return 1LL;
  v4 = -1LL;
  do
    ++v4;
  while ( *((_BYTE *)this + v4) );
  return v4 + 1;
}
