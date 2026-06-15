/*
 * XREFs of ?KsNotifications_AudioInterfaceRemoval@@YAXPEBG@Z @ 0x180083C88
 * Callers:
 *     ?DeviceRemovalEvent@CAudioSrv@@UEAAJV?$CHeapPtr@U_DEV_BROADCAST_DEVICEINTERFACE_W@@VCCRTAllocator@ATL@@@ATL@@@Z @ 0x180052590 (-DeviceRemovalEvent@CAudioSrv@@UEAAJV-$CHeapPtr@U_DEV_BROADCAST_DEVICEINTERFACE_W@@VCCRTAllocato.c)
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180027E90 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?Dispose@CKsNotificationsMonitor@@QEAAXXZ @ 0x180083AF8 (-Dispose@CKsNotificationsMonitor@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall KsNotifications_AudioInterfaceRemoval(const unsigned __int16 *a1)
{
  void **v2; // r10
  void **v3; // rbx
  void **v4; // r8
  CKsNotificationsMonitor *v5; // rdi
  void **v6; // rax
  const unsigned __int16 *v7; // rax
  int v8; // r9d
  int v9; // ecx
  LPCRITICAL_SECTION v10; // [rsp+28h] [rbp-20h] BYREF
  char v11; // [rsp+30h] [rbp-18h]

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v10, &g_csKsNotificationMonitors);
  v2 = (void **)g_lstKsNotificationMonitors;
  v3 = (void **)g_lstKsNotificationMonitors;
  if ( g_lstKsNotificationMonitors )
  {
    do
    {
      v4 = v3;
      v5 = 0LL;
      v6 = v3;
      if ( v3 )
      {
        v3 = (void **)*v3;
        v5 = (CKsNotificationsMonitor *)v6[2];
      }
      v7 = a1;
      do
      {
        v8 = *(const unsigned __int16 *)((char *)v7 + *((_QWORD *)v5 + 2) - (_QWORD)a1);
        v9 = *v7 - v8;
        if ( v9 )
          break;
        ++v7;
      }
      while ( v8 );
      if ( !v9 )
      {
        if ( v4 == v2 )
          g_lstKsNotificationMonitors = *v4;
        else
          *(_QWORD *)v4[1] = *v4;
        if ( v4 == (void **)qword_1800CB550 )
          qword_1800CB550 = (__int64)v4[1];
        else
          *((_QWORD *)*v4 + 1) = v4[1];
        --dword_1800CB558;
        *v4 = 0LL;
        v4[1] = 0LL;
        operator delete(v4);
        CKsNotificationsMonitor::Dispose(v5);
        (*(void (__fastcall **)(CKsNotificationsMonitor *))(*(_QWORD *)v5 + 16LL))(v5);
        v2 = (void **)g_lstKsNotificationMonitors;
      }
    }
    while ( v3 );
  }
  if ( v11 )
    ATL::CCritSecLock::Unlock(&v10);
}
