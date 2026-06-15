/*
 * XREFs of ATL::_dynamic_atexit_destructor_for___AtlWinModule__ @ 0x180022F60
 * Callers:
 *     <none>
 * Callees:
 *     free @ 0x180021678 (free.c)
 */

void ATL::_dynamic_atexit_destructor_for___AtlWinModule__()
{
  if ( ATL::_AtlWinModule == 72 )
  {
    if ( qword_180031E38 )
    {
      free(qword_180031E38);
      qword_180031E38 = 0LL;
    }
    qword_180031E40 = 0LL;
    DeleteCriticalSection(&stru_180031E08);
    ATL::_AtlWinModule = 0;
  }
  if ( qword_180031E38 )
  {
    free(qword_180031E38);
    qword_180031E38 = 0LL;
  }
  qword_180031E40 = 0LL;
}
