/*
 * XREFs of ?KsNotifications_CreateMonitor@@YAXPEBGW4__MIDL___MIDL_itf_devicetopology_0000_0000_0013@@V?$CComPtr@UIConnector@@@ATL@@V?$CComPtr@UIDeviceTopology@@@3@@Z @ 0x18003D1D0
 * Callers:
 *     ?KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z @ 0x18003D050 (-KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z.c)
 * Callees:
 *     ?AddRef@CKsNotificationsMonitor@@UEAAKXZ @ 0x18003A160 (-AddRef@CKsNotificationsMonitor@@UEAAKXZ.c)
 *     ?Initialize@CKsNotificationsMonitor@@QEAAJPEAUIPart@@PEBG@Z @ 0x18003D460 (-Initialize@CKsNotificationsMonitor@@QEAAJPEAUIPart@@PEBG@Z.c)
 *     ?Release@CKsNotificationsMonitor@@UEAAKXZ @ 0x18003D630 (-Release@CKsNotificationsMonitor@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall KsNotifications_CreateMonitor(unsigned __int16 *a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  void (__fastcall ***v7)(_QWORD, GUID *, struct IPart **); // rdi
  struct IPart *v8; // rbx
  HANDLE ProcessHeap; // rax
  CKsNotificationsMonitor *v10; // rax
  CKsNotificationsMonitor *v11; // rdi
  HANDLE v12; // rax
  _QWORD *v13; // rax
  __int64 (__fastcall *v14)(CKsNotificationsMonitor *); // rbx
  unsigned int (__fastcall *v15)(CKsNotificationsMonitor *__hidden); // rbx
  __int64 v16; // rbx
  struct IPart *v17; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v18[8]; // [rsp+28h] [rbp-40h] BYREF

  v18[1] = -2LL;
  v7 = (void (__fastcall ***)(_QWORD, GUID *, struct IPart **))*a3;
  v8 = 0LL;
  v17 = 0LL;
  if ( v7 )
  {
    (**v7)(v7, &GUID_ae2de0e4_5bca_4f2d_aa46_5d13f8fdb3a9, &v17);
    v8 = v17;
  }
  if ( v8 )
  {
    ProcessHeap = GetProcessHeap();
    v10 = (CKsNotificationsMonitor *)HeapAlloc(ProcessHeap, 0, 0x28uLL);
    v11 = v10;
    v18[0] = v10;
    if ( v10 )
    {
      *((_DWORD *)v10 + 3) = 0;
      *((_QWORD *)v10 + 2) = 0LL;
      *((_DWORD *)v10 + 6) = 1;
      *((_QWORD *)v10 + 4) = 0LL;
      ++CKsNotificationsMonitor::m_cRefAll;
      *(_QWORD *)v10 = &CKsSoftwareNotificationsMonitor::`vftable';
      v18[0] = 0LL;
      if ( ((int (__fastcall *)(struct IPart *, __int64, GUID *, _QWORD *))v17->lpVtbl->Activate)(
             v17,
             23LL,
             &GUID_fbe4a6da_1a5e_4633_a491_9a9ff7f97a30,
             v18) >= 0
        && (*(int (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)v18[0] + 24LL))(
             v18[0],
             &gConnectorEnablingInfo,
             2LL) < 0 )
      {
        v16 = v18[0];
        if ( !v18[0] )
          goto LABEL_18;
      }
      else
      {
        if ( (int)CKsNotificationsMonitor::Initialize(v11, v17, a1) >= 0 )
        {
          EnterCriticalSection(&g_csKsNotificationMonitors);
          v12 = GetProcessHeap();
          v13 = HeapAlloc(v12, 0, 0x18uLL);
          if ( v13 )
          {
            *v13 = 0LL;
            v13[1] = 0LL;
            v13[2] = v11;
            v13[1] = qword_1800E6890;
            *v13 = 0LL;
            if ( qword_1800E6890 )
              *(_QWORD *)qword_1800E6890 = v13;
            else
              g_lstKsNotificationMonitors = v13;
            qword_1800E6890 = (__int64)v13;
            ++dword_1800E6898;
            v14 = *(__int64 (__fastcall **)(CKsNotificationsMonitor *))(*(_QWORD *)v11 + 8LL);
            if ( v14 == CKsNotificationsMonitor::AddRef )
              CKsNotificationsMonitor::AddRef(v11);
            else
              v14(v11);
          }
          LeaveCriticalSection(&g_csKsNotificationMonitors);
        }
        v15 = *(unsigned int (__fastcall **)(CKsNotificationsMonitor *__hidden))(*(_QWORD *)v11 + 16LL);
        if ( v15 == CKsNotificationsMonitor::Release )
          CKsNotificationsMonitor::Release(v11);
        else
          v15(v11);
        v16 = v18[0];
        if ( !v18[0] )
          goto LABEL_18;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
LABEL_18:
    v8 = v17;
  }
  if ( v8 )
    ((void (__fastcall *)(struct IPart *))v8->lpVtbl->Release)(v8);
  if ( *a3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 16LL))(*a3);
  if ( *a4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 16LL))(*a4);
}
