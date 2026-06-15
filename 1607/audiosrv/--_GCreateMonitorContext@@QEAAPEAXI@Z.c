/*
 * XREFs of ??_GCreateMonitorContext@@QEAAPEAXI@Z @ 0x18007B0F4
 * Callers:
 *     ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x18007B658 (-CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?CreateMonitorIfAppropriateWorker@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18007B7E0 (-CreateMonitorIfAppropriateWorker@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WOR.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180027E90 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

CreateMonitorContext *__fastcall CreateMonitorContext::`scalar deleting destructor'(CreateMonitorContext *this)
{
  struct _TP_WORK *v2; // rcx
  __int64 v3; // rcx

  v2 = (struct _TP_WORK *)*((_QWORD *)this + 2);
  if ( v2 )
    CloseThreadpoolWork(v2);
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
  operator delete(this);
  return this;
}
