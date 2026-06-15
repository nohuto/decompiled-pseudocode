/*
 * XREFs of _GraphStreamingResourceManager::RegisterThread_::_1_::catch$0 @ 0x14001B272
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall GraphStreamingResourceManager::RegisterThread_::_1_::catch_0(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 80);
  if ( *v3 == -1073741571 )
    _resetstkoflw();
  *(_DWORD *)(a2 + 216) = *v3;
  return &loc_14001F068;
}
