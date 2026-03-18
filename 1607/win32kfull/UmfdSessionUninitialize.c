/*
 * XREFs of UmfdSessionUninitialize @ 0x1C0133890
 * Callers:
 *     <none>
 * Callees:
 *     ?Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z @ 0x1C0131228 (-Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z.c)
 *     ?Uninitialize@UmfdAllocation@@SAXXZ @ 0x1C013392C (-Uninitialize@UmfdAllocation@@SAXXZ.c)
 */

void UmfdSessionUninitialize()
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  struct CMultipleConsumerWorkQueue *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8

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
    Win32FreePool(UmfdHostLifeTimeManager::s_WinlogonCallbackEvent, v3, v4);
    UmfdHostLifeTimeManager::s_WinlogonCallbackEvent = 0LL;
  }
  if ( UmfdTls::s_FontDriverThreadsReadyEvent )
  {
    Win32FreePool(UmfdTls::s_FontDriverThreadsReadyEvent, v3, v4);
    UmfdTls::s_FontDriverThreadsReadyEvent = 0LL;
  }
}
