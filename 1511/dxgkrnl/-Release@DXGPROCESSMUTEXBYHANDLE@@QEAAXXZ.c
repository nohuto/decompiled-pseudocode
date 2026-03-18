/*
 * XREFs of ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C00B207C
 * Callers:
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1C00B1F90 (DxgkSetProcessSchedulingPriorityClass.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C012486C (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N@Z @ 0x1C012AA68 (-DxgEscapeSuspendResumeProcess@@YAJIPEAX_N@Z.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1C014E5A0 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1C014E6E0 (DxgkReleaseProcessVidPnSourceOwners.c)
 * Callees:
 *     ?ReleaseReference@DXGPROCESS@@AEAAXXZ @ 0x1C00018D0 (-ReleaseReference@DXGPROCESS@@AEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C000B0D4 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 */

void __fastcall DXGPROCESSMUTEXBYHANDLE::Release(DXGPROCESSMUTEXBYHANDLE *this, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  DXGPROCESS *v6; // rcx
  void *v7; // rdi
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !*((_BYTE *)this + 25) )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
    v4[3] = 275LL;
    v4[4] = 4LL;
    v4[5] = this;
    v4[6] = 0LL;
    v4[7] = 0LL;
    WdLogEvent5_WdCriticalError(v4);
  }
  v5 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 25) = 0;
  DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v5 + 88));
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v8);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v6 = (DXGPROCESS *)*((_QWORD *)this + 2);
  v7 = (void *)*((_QWORD *)v6 + 7);
  DXGPROCESS::ReleaseReference(v6);
  *((_QWORD *)this + 2) = 0LL;
  if ( *((_BYTE *)this + 26) )
  {
    KeUnstackDetachProcess((PRKAPC_STATE)((char *)this + 32));
    *((_BYTE *)this + 26) = 0;
  }
  ObfDereferenceObject(v7);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
}
