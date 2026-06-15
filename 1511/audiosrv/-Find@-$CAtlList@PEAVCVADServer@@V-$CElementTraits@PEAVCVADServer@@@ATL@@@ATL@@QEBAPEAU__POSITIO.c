/*
 * XREFs of ?Find@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCVADServer@@PEAU3@@Z @ 0x180002C18
 * Callers:
 *     AUDIOSERVER_rundown @ 0x180002AF0 (AUDIOSERVER_rundown.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::Find(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)g_VADServerList;
  if ( !g_VADServerList )
    return 0LL;
  while ( result[2] != *a2 )
  {
    result = (_QWORD *)*result;
    if ( !result )
      return 0LL;
  }
  return result;
}
