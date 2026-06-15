/*
 * XREFs of ATL::_dynamic_atexit_destructor_for___AtlBaseModule__ @ 0x180022F20
 * Callers:
 *     <none>
 * Callees:
 *     free @ 0x180021678 (free.c)
 */

void ATL::_dynamic_atexit_destructor_for___AtlBaseModule__()
{
  DeleteCriticalSection(&CriticalSection);
  if ( Block )
  {
    free(Block);
    Block = 0LL;
  }
  qword_180031DF8 = 0LL;
}
