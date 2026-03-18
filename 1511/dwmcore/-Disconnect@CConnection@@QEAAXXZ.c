/*
 * XREFs of ?Disconnect@CConnection@@QEAAXXZ @ 0x1800FF7E0
 * Callers:
 *     ?Initialize@CConnection@@AEAAJHPEAUIDWMCoRenderEngine@@@Z @ 0x1800A3DE8 (-Initialize@CConnection@@AEAAJHPEAUIDWMCoRenderEngine@@@Z.c)
 *     ?MilCompositionEngine_Uninitialize@@YAJPEAUHMIL_CONNECTION__@@@Z @ 0x1800FF3E0 (-MilCompositionEngine_Uninitialize@@YAJPEAUHMIL_CONNECTION__@@@Z.c)
 * Callees:
 *     ??_ECMediaControl@@UEAAPEAXI@Z @ 0x1800FF620 (--_ECMediaControl@@UEAAPEAXI@Z.c)
 *     ??_GCPartitionVerticalBlankScheduler@@QEAAPEAXI@Z @ 0x1800FF678 (--_GCPartitionVerticalBlankScheduler@@QEAAPEAXI@Z.c)
 *     ?OnConnectionLostNotification@CConnection@@QEAAXJ@Z @ 0x1800FF8FC (-OnConnectionLostNotification@CConnection@@QEAAXJ@Z.c)
 *     ?CheckInUse@CDisplayManager@@AEAAXXZ @ 0x180138684 (-CheckInUse@CDisplayManager@@AEAAXXZ.c)
 *     ?DestroyResources@CD3DDeviceTable@@QEAAXXZ @ 0x1801387D0 (-DestroyResources@CD3DDeviceTable@@QEAAXXZ.c)
 */

void __fastcall CConnection::Disconnect(CConnection *this, int a2)
{
  __int64 v3; // rdi
  CDisplayManager *v4; // rcx

  if ( *((_BYTE *)this + 168) )
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  v3 = *((_QWORD *)this + 15);
  *((_QWORD *)this + 15) = 0LL;
  *((_BYTE *)this + 176) = 0;
  CConnection::OnConnectionLostNotification(this, a2);
  if ( g_pMediaControl )
  {
    CMediaControl::`vector deleting destructor'(g_pMediaControl, 1);
    g_pMediaControl = 0LL;
  }
  if ( *((_BYTE *)this + 168) )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  if ( v3 )
  {
    if ( *(_QWORD *)(v3 + 8) )
    {
      *(_BYTE *)(v3 + 128) = 1;
      SetEvent(*(HANDLE *)(v3 + 96));
      WaitForSingleObject(*(HANDLE *)(v3 + 8), 0xFFFFFFFF);
      CloseHandle(*(HANDLE *)(v3 + 8));
    }
    CPartitionVerticalBlankScheduler::`scalar deleting destructor'((CPartitionVerticalBlankScheduler *)v3);
    CD3DDeviceTable::DestroyResources((CD3DDeviceTable *)&g_deviceTable);
    if ( _InterlockedExchangeAdd(&dword_1801A3A10, 0xFFFFFFFF) == 1 )
      CDisplayManager::CheckInUse(v4);
  }
}
