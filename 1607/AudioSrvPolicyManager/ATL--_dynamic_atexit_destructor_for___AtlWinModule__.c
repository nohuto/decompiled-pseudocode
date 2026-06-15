/*
 * XREFs of ATL::_dynamic_atexit_destructor_for___AtlWinModule__ @ 0x1800264B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void ATL::_dynamic_atexit_destructor_for___AtlWinModule__()
{
  if ( ATL::_AtlWinModule == 72 )
  {
    if ( qword_180034D88 )
    {
      free(qword_180034D88);
      qword_180034D88 = 0LL;
    }
    qword_180034D90 = 0LL;
    DeleteCriticalSection(&stru_180034D58);
    ATL::_AtlWinModule = 0;
  }
  if ( qword_180034D88 )
  {
    free(qword_180034D88);
    qword_180034D88 = 0LL;
  }
  qword_180034D90 = 0LL;
}
