/*
 * XREFs of ?ResultStringSize@details@wil@@YA_KPEBD@Z @ 0x180077A0C
 * Callers:
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x180075884 (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180077A5C (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
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
