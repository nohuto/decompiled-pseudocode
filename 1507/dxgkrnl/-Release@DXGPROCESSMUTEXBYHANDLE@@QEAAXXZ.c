/*
 * XREFs of ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C00DB224
 * Callers:
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1C00DB1A0 (DxgkSetProcessSchedulingPriorityClass.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C011ECF4 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N@Z @ 0x1C0124974 (-DxgEscapeSuspendResumeProcess@@YAJIPEAX_N@Z.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1C014A300 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1C014A420 (DxgkReleaseProcessVidPnSourceOwners.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@AEAAXXZ @ 0x1C0002D00 (-ReleaseReference@DXGPROCESS@@AEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C00094EC (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 */

void __fastcall DXGPROCESSMUTEXBYHANDLE::Release(DXGPROCESS **this, __int64 a2, __int64 a3)
{
  DXGPROCESS *v4; // rcx
  DXGPROCESS *v5; // rcx
  void *v6; // rbx
  _QWORD *v7; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !*((_BYTE *)this + 25) )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
    v7[3] = 275LL;
    v7[4] = 4LL;
    v7[5] = this;
    v7[6] = 0LL;
    v7[7] = 0LL;
    WdLogEvent5_WdCriticalError(v7);
  }
  v4 = this[2];
  *((_BYTE *)this + 25) = 0;
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)v4 + 11));
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v8);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v5 = this[2];
  v6 = (void *)*((_QWORD *)v5 + 7);
  DXGPROCESS::ReleaseReference(v5);
  this[2] = 0LL;
  ObfDereferenceObject(v6);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
}
