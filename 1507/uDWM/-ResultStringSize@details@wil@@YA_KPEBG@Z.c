/*
 * XREFs of ?ResultStringSize@details@wil@@YA_KPEBG@Z @ 0x18006F7FC
 * Callers:
 *     ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x18006D86C (--$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x18006F824 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::ResultStringSize(wil::details *this, const unsigned __int16 *a2)
{
  __int64 v3; // rax

  if ( !this )
    return 2LL;
  v3 = -1LL;
  do
    ++v3;
  while ( *((_WORD *)this + v3) );
  return 2 * v3 + 2;
}
