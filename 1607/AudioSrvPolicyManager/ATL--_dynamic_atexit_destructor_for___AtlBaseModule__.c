/*
 * XREFs of ATL::_dynamic_atexit_destructor_for___AtlBaseModule__ @ 0x180026460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void ATL::_dynamic_atexit_destructor_for___AtlBaseModule__()
{
  DeleteCriticalSection(&stru_180034D18);
  if ( Block )
  {
    free(Block);
    Block = 0LL;
  }
  qword_180034D48 = 0LL;
}
