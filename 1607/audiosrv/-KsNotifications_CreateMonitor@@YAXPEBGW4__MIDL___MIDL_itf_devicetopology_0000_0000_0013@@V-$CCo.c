/*
 * XREFs of ?KsNotifications_CreateMonitor@@YAXPEBGW4__MIDL___MIDL_itf_devicetopology_0000_0000_0013@@V?$CComPtr@UIConnector@@@ATL@@V?$CComPtr@UIDeviceTopology@@@3@@Z @ 0x18002FEE0
 * Callers:
 *     ?KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z @ 0x18002FD80 (-KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AddRef@CKsNotificationsMonitor@@UEAAKXZ @ 0x180029B20 (-AddRef@CKsNotificationsMonitor@@UEAAKXZ.c)
 *     ?Initialize@CKsNotificationsMonitor@@QEAAJPEAUIPart@@PEBG@Z @ 0x180030150 (-Initialize@CKsNotificationsMonitor@@QEAAJPEAUIPart@@PEBG@Z.c)
 *     ?Release@CKsNotificationsMonitor@@UEAAKXZ @ 0x1800302F0 (-Release@CKsNotificationsMonitor@@UEAAKXZ.c)
 *     memset @ 0x180036D30 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
int __fastcall KsNotifications_CreateMonitor(unsigned __int16 *a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  CKsNotificationsMonitor *v4; // rax
  __int64 (__fastcall ***v8)(_QWORD, GUID *, struct IPart **); // r10
  struct IPart *v9; // rcx
  HANDLE ProcessHeap; // rax
  CKsNotificationsMonitor *v11; // rbx
  HANDLE v12; // rax
  _QWORD *v13; // rax
  __int64 (__fastcall *v14)(CKsNotificationsMonitor *); // rax
  unsigned int (__fastcall *v15)(CKsNotificationsMonitor *__hidden); // rax
  __int64 v16; // rcx
  struct IPart *v18; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v19[2]; // [rsp+38h] [rbp-40h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-30h] BYREF
  char v21; // [rsp+50h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  v4 = (CKsNotificationsMonitor *)&retaddr;
  v19[1] = -2LL;
  v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IPart **))*a3;
  v9 = 0LL;
  v18 = 0LL;
  if ( v8 )
  {
    LODWORD(v4) = (**v8)(v8, &GUID_ae2de0e4_5bca_4f2d_aa46_5d13f8fdb3a9, &v18);
    v9 = v18;
  }
  if ( v9 )
  {
    ProcessHeap = GetProcessHeap();
    v4 = (CKsNotificationsMonitor *)HeapAlloc(ProcessHeap, 0, 0x28uLL);
    v11 = v4;
    v19[0] = v4;
    if ( v4 )
    {
      memset(v4, 0, 0x28uLL);
      *((_DWORD *)v11 + 3) = 0;
      *((_QWORD *)v11 + 2) = 0LL;
      *((_DWORD *)v11 + 6) = 1;
      *((_QWORD *)v11 + 4) = 0LL;
      ++CKsNotificationsMonitor::m_cRefAll;
      *(_QWORD *)v11 = &CKsSoftwareNotificationsMonitor::`vftable';
      v19[0] = 0LL;
      if ( ((int (__fastcall *)(struct IPart *, __int64, GUID *, _QWORD *))v18->lpVtbl->Activate)(
             v18,
             23LL,
             &GUID_fbe4a6da_1a5e_4633_a491_9a9ff7f97a30,
             v19) >= 0
        && (LODWORD(v4) = (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)v19[0] + 24LL))(
                            v19[0],
                            &gConnectorEnablingInfo,
                            2LL),
            (int)v4 < 0) )
      {
        v16 = v19[0];
        if ( !v19[0] )
          goto LABEL_19;
      }
      else
      {
        if ( (int)CKsNotificationsMonitor::Initialize(v11, v18, a1) >= 0 )
        {
          lpCriticalSection = &g_csKsNotificationMonitors;
          v21 = 0;
          ATL::CCritSecLock::Lock(&lpCriticalSection);
          v12 = GetProcessHeap();
          v13 = HeapAlloc(v12, 0, 0x18uLL);
          if ( v13 )
          {
            *v13 = 0LL;
            v13[1] = 0LL;
            v13[2] = v11;
            v13[1] = qword_1800CB550;
            *v13 = 0LL;
            if ( qword_1800CB550 )
              *(_QWORD *)qword_1800CB550 = v13;
            else
              g_lstKsNotificationMonitors = v13;
            qword_1800CB550 = (__int64)v13;
            ++dword_1800CB558;
            v14 = *(__int64 (__fastcall **)(CKsNotificationsMonitor *))(*(_QWORD *)v11 + 8LL);
            if ( v14 == CKsNotificationsMonitor::AddRef )
              CKsNotificationsMonitor::AddRef(v11);
            else
              v14(v11);
          }
          if ( v21 )
            LeaveCriticalSection(lpCriticalSection);
        }
        v15 = *(unsigned int (__fastcall **)(CKsNotificationsMonitor *__hidden))(*(_QWORD *)v11 + 16LL);
        if ( v15 == CKsNotificationsMonitor::Release )
          LODWORD(v4) = CKsNotificationsMonitor::Release(v11);
        else
          LODWORD(v4) = v15(v11);
        v16 = v19[0];
        if ( !v19[0] )
          goto LABEL_19;
      }
      LODWORD(v4) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
LABEL_19:
    v9 = v18;
  }
  if ( v9 )
    LODWORD(v4) = ((__int64 (__fastcall *)(struct IPart *))v9->lpVtbl->Release)(v9);
  if ( *a3 )
    LODWORD(v4) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 16LL))(*a3);
  if ( *a4 )
    LODWORD(v4) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 16LL))(*a4);
  return (int)v4;
}
