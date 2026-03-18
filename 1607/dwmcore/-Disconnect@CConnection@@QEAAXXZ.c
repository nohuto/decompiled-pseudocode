/*
 * XREFs of ?Disconnect@CConnection@@QEAAXXZ @ 0x1801139A8
 * Callers:
 *     ?Initialize@CConnection@@AEAAJHPEAUIDWMCoRenderEngine@@@Z @ 0x1800A87D8 (-Initialize@CConnection@@AEAAJHPEAUIDWMCoRenderEngine@@@Z.c)
 *     ?MilCompositionEngine_Uninitialize@@YAJPEAUHMIL_CONNECTION__@@@Z @ 0x180113700 (-MilCompositionEngine_Uninitialize@@YAJPEAUHMIL_CONNECTION__@@@Z.c)
 * Callees:
 *     ??_GCPartitionVerticalBlankScheduler@@QEAAPEAXI@Z @ 0x180113860 (--_GCPartitionVerticalBlankScheduler@@QEAAPEAXI@Z.c)
 *     ?OnConnectionLostNotification@CConnection@@QEAAXJ@Z @ 0x180113A58 (-OnConnectionLostNotification@CConnection@@QEAAXJ@Z.c)
 *     ?CheckInUse@CDisplayManager@@AEAAXXZ @ 0x180161720 (-CheckInUse@CDisplayManager@@AEAAXXZ.c)
 */

void __fastcall CConnection::Disconnect(struct _RTL_CRITICAL_SECTION *this, int a2)
{
  ULONG_PTR SpinCount; // rdi
  CDisplayManager *v4; // rcx

  if ( LOBYTE(this[4].DebugInfo) )
    EnterCriticalSection(this + 3);
  SpinCount = this[2].SpinCount;
  this[2].SpinCount = 0LL;
  LOBYTE(this[4].LockCount) = 0;
  CConnection::OnConnectionLostNotification((CConnection *)this, a2);
  if ( LOBYTE(this[4].DebugInfo) )
    LeaveCriticalSection(this + 3);
  if ( SpinCount )
  {
    if ( *(_QWORD *)(SpinCount + 8) )
    {
      *(_BYTE *)(SpinCount + 136) = 1;
      SetEvent(*(HANDLE *)(SpinCount + 96));
      WaitForSingleObject(*(HANDLE *)(SpinCount + 8), 0xFFFFFFFF);
      CloseHandle(*(HANDLE *)(SpinCount + 8));
    }
    CPartitionVerticalBlankScheduler::`scalar deleting destructor'((CPartitionVerticalBlankScheduler *)SpinCount);
    if ( _InterlockedExchangeAdd(&dword_1801EFD48, 0xFFFFFFFF) == 1 )
      CDisplayManager::CheckInUse(v4);
  }
}
