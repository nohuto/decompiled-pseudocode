/*
 * XREFs of ?Disconnect@CConnection@@QEAAXXZ @ 0x1800E10C0
 * Callers:
 *     ?Initialize@CConnection@@AEAAJHPEAUIDWMCoRenderEngine@@@Z @ 0x180095788 (-Initialize@CConnection@@AEAAJHPEAUIDWMCoRenderEngine@@@Z.c)
 *     ?MilCompositionEngine_Uninitialize@@YAJPEAUHMIL_CONNECTION__@@@Z @ 0x1800E0CC0 (-MilCompositionEngine_Uninitialize@@YAJPEAUHMIL_CONNECTION__@@@Z.c)
 * Callees:
 *     ??_ECMediaControl@@UEAAPEAXI@Z @ 0x1800E0F00 (--_ECMediaControl@@UEAAPEAXI@Z.c)
 *     ??_GCPartitionVerticalBlankScheduler@@QEAAPEAXI@Z @ 0x1800E0F58 (--_GCPartitionVerticalBlankScheduler@@QEAAPEAXI@Z.c)
 *     ?OnConnectionLostNotification@CConnection@@QEAAXJ@Z @ 0x1800E11DC (-OnConnectionLostNotification@CConnection@@QEAAXJ@Z.c)
 *     ?CheckInUse@CDisplayManager@@AEAAXXZ @ 0x180123118 (-CheckInUse@CDisplayManager@@AEAAXXZ.c)
 *     ?DestroyResources@CD3DDeviceTable@@QEAAXXZ @ 0x180123260 (-DestroyResources@CD3DDeviceTable@@QEAAXXZ.c)
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
      *(_BYTE *)(v3 + 120) = 1;
      SetEvent(*(HANDLE *)(v3 + 88));
      WaitForSingleObject(*(HANDLE *)(v3 + 8), 0xFFFFFFFF);
      CloseHandle(*(HANDLE *)(v3 + 8));
    }
    CPartitionVerticalBlankScheduler::`scalar deleting destructor'((CPartitionVerticalBlankScheduler *)v3);
    CD3DDeviceTable::DestroyResources((CD3DDeviceTable *)&g_deviceTable);
    if ( _InterlockedExchangeAdd(&dword_180193110, 0xFFFFFFFF) == 1 )
      CDisplayManager::CheckInUse(v4);
  }
}
