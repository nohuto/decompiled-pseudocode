/*
 * XREFs of ?ClearWaitHandles@CManipulationManager@@CAXXZ @ 0x180129ECC
 * Callers:
 *     ?Initialize@CManipulationManager@@AEAAJXZ @ 0x180092F2C (-Initialize@CManipulationManager@@AEAAJXZ.c)
 *     ??1CManipulationManager@@EEAA@XZ @ 0x180129688 (--1CManipulationManager@@EEAA@XZ.c)
 * Callees:
 *     <none>
 */

void CManipulationManager::ClearWaitHandles(void)
{
  HANDLE *v0; // rbx
  __int64 v1; // rdi

  v0 = &CManipulationManager::s_rghWaitEvents;
  v1 = 4LL;
  do
  {
    if ( *v0 )
    {
      CloseHandle(*v0);
      *v0 = 0LL;
    }
    ++v0;
    --v1;
  }
  while ( v1 );
}
