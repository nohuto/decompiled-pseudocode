/*
 * XREFs of ??0CMonitorPDO@@QEAA@AEAU_LUID@@KPEAJ@Z @ 0x1C0083360
 * Callers:
 *     ??0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z @ 0x1C0082FEC (--0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z.c)
 * Callees:
 *     ??1CAutoMutex@@QEAA@XZ @ 0x1C0067B40 (--1CAutoMutex@@QEAA@XZ.c)
 *     ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C0067B70 (--0CAutoMutex@@QEAA@PEAVCMutex@@@Z.c)
 *     ??0CMutex@@QEAA@PEAJ@Z @ 0x1C0067BE0 (--0CMutex@@QEAA@PEAJ@Z.c)
 *     ?Destroy@CMonitorPDO@@UEAAJXZ @ 0x1C0083240 (-Destroy@CMonitorPDO@@UEAAJXZ.c)
 *     ??_GCMutex@@QEAAPEAXI@Z @ 0x1C00837C8 (--_GCMutex@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

CMonitorPDO *__fastcall CMonitorPDO::CMonitorPDO(CMonitorPDO *this, struct _LUID *a2, unsigned int a3, int *a4)
{
  CMutex *v4; // rsi
  PVOID *v5; // r14
  PVOID *NotificationEntry; // r13
  NTSTATUS DeviceInterfaces; // edi
  CMutex *PoolWithTag; // rax
  unsigned int v11; // edx
  CMutex *v12; // rax
  PZZWSTR SymbolicLinkList; // [rsp+40h] [rbp-10h] BYREF
  PVOID EventCategoryData; // [rsp+48h] [rbp-8h] BYREF
  PRKMUTEX *v16; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v17; // [rsp+A0h] [rbp+50h]
  int *v18; // [rsp+A8h] [rbp+58h]

  v18 = a4;
  v17 = a3;
  v4 = 0LL;
  v5 = (PVOID *)((char *)this + 16);
  *(_QWORD *)this = &CMonitorPDO::`vftable';
  NotificationEntry = (PVOID *)((char *)this + 40);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  if ( *a4 < 0 )
    return this;
  *((struct _LUID *)this + 8) = *a2;
  SymbolicLinkList = 0LL;
  DeviceInterfaces = 0;
  LODWORD(v16) = 0;
  PoolWithTag = (CMutex *)ExAllocatePoolWithTag(PagedPool, 8uLL, 0x4D504F47u);
  if ( PoolWithTag )
  {
    v12 = CMutex::CMutex(PoolWithTag, (int *)&v16);
    DeviceInterfaces = (int)v16;
    v4 = v12;
  }
  if ( !v4 )
  {
    DeviceInterfaces = -1073741801;
    goto LABEL_14;
  }
  if ( DeviceInterfaces < 0 )
    goto LABEL_14;
  *((_QWORD *)this + 1) = v4;
  v4 = 0LL;
  CAutoMutex::CAutoMutex((CAutoMutex *)&v16, *((struct CMutex **)this + 1));
  DeviceInterfaces = ((__int64 (__fastcall *)(struct _LUID *, _QWORD, PVOID *, PVOID *))qword_1C01042C8)(
                       a2,
                       v17,
                       &EventCategoryData,
                       v5);
  if ( DeviceInterfaces >= 0 )
  {
    ObfReferenceObject(*v5);
    DeviceInterfaces = IoRegisterPlugPlayNotification(
                         EventCategoryTargetDeviceChange,
                         0,
                         EventCategoryData,
                         (PDRIVER_OBJECT)gpWin32kDriverObject,
                         CMonitorPDO::MonitorPDORemovalCallback,
                         this,
                         NotificationEntry);
    ObfDereferenceObject(EventCategoryData);
    EventCategoryData = 0LL;
    if ( DeviceInterfaces >= 0 )
    {
      DeviceInterfaces = IoRegisterPlugPlayNotification(
                           EventCategoryDeviceInterfaceChange,
                           0,
                           &GUID_DEVINTERFACE_MONITOR,
                           (PDRIVER_OBJECT)gpWin32kDriverObject,
                           CMonitorPDO::MonitorInterfaceCallback,
                           this,
                           (PVOID *)this + 6);
      if ( DeviceInterfaces >= 0 )
      {
        DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_MONITOR, (PDEVICE_OBJECT)*v5, 0, &SymbolicLinkList);
        if ( DeviceInterfaces >= 0 )
        {
          if ( !*SymbolicLinkList )
          {
            DeviceInterfaces = -1073741823;
            goto LABEL_13;
          }
          RtlInitUnicodeString((PUNICODE_STRING)((char *)this + 24), SymbolicLinkList);
        }
        SymbolicLinkList = 0LL;
      }
    }
  }
LABEL_13:
  CAutoMutex::~CAutoMutex(&v16);
LABEL_14:
  if ( SymbolicLinkList )
  {
    ExFreePoolWithTag(SymbolicLinkList, 0);
    SymbolicLinkList = 0LL;
  }
  if ( v4 )
    CMutex::`scalar deleting destructor'(v4, v11);
  if ( DeviceInterfaces < 0 )
  {
    if ( *((_QWORD *)this + 1) )
      CMonitorPDO::Destroy(this);
    *v18 = DeviceInterfaces;
  }
  else
  {
    *((_QWORD *)this + 7) = PsGetCurrentProcessId();
  }
  return this;
}
