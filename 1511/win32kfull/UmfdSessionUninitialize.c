/*
 * XREFs of UmfdSessionUninitialize @ 0x1C0112170
 * Callers:
 *     <none>
 * Callees:
 *     ?Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z @ 0x1C0110588 (-Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z.c)
 *     ?Uninitialize@UmfdAllocation@@SAXXZ @ 0x1C01121F4 (-Uninitialize@UmfdAllocation@@SAXXZ.c)
 */

void UmfdSessionUninitialize()
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  struct CMultipleConsumerWorkQueue *v2; // rcx

  v0 = 0LL;
  v1 = 4LL;
  do
  {
    if ( *(_QWORD *)((char *)&g_pUmfdClientPort + v0) )
      *(_QWORD *)((char *)&g_pUmfdClientPort + v0) = 0LL;
    v2 = *(struct CMultipleConsumerWorkQueue **)((char *)&g_pUmfdServerPort + v0);
    if ( v2 )
    {
      CMultipleConsumerWorkQueue::Destroy(v2);
      *(_QWORD *)((char *)&g_pUmfdServerPort + v0) = 0LL;
    }
    v0 += 8LL;
    --v1;
  }
  while ( v1 );
  UmfdAllocation::Uninitialize();
  if ( UmfdHostLifeTimeManager::s_WinlogonCallbackEvent )
  {
    Win32FreePool(UmfdHostLifeTimeManager::s_WinlogonCallbackEvent);
    UmfdHostLifeTimeManager::s_WinlogonCallbackEvent = 0LL;
  }
}
