/*
 * XREFs of ?MonitorInterfaceCallbackInternal@CMonitorPDO@@AEAAJPEBU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@@Z @ 0x1C00AF4E0
 * Callers:
 *     ?MonitorInterfaceCallback@CMonitorPDO@@CAJPEAX0@Z @ 0x1C00AF4D0 (-MonitorInterfaceCallback@CMonitorPDO@@CAJPEAX0@Z.c)
 * Callees:
 *     ??1CAutoMutex@@QEAA@XZ @ 0x1C000F080 (--1CAutoMutex@@QEAA@XZ.c)
 *     ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C000F0B0 (--0CAutoMutex@@QEAA@PEAVCMutex@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMonitorPDO::MonitorInterfaceCallbackInternal(
        CMonitorPDO *this,
        const struct _DEVICE_INTERFACE_CHANGE_NOTIFICATION *a2)
{
  __int64 v4; // r8
  bool v5; // di
  PRKMUTEX *v7; // [rsp+38h] [rbp+10h] BYREF

  v4 = *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1 - *(_QWORD *)&a2->Event.Data1;
  if ( *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1 == *(_QWORD *)&a2->Event.Data1 )
    v4 = *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4 - *(_QWORD *)a2->Event.Data4;
  if ( !v4 )
  {
    v5 = 0;
    CAutoMutex::CAutoMutex((CAutoMutex *)&v7, *((struct CMutex **)this + 1));
    if ( *((_QWORD *)this + 4) )
      v5 = RtlCompareUnicodeString((PCUNICODE_STRING)((char *)this + 24), a2->SymbolicLinkName, 0) == 0;
    CAutoMutex::~CAutoMutex(&v7);
    if ( v5 )
      (*(void (__fastcall **)(CMonitorPDO *))(*(_QWORD *)this + 8LL))(this);
  }
  return 0LL;
}
