/*
 * XREFs of ?Acquire@DXGPROCESSMUTEXBYHANDLE@@QEAAJXZ @ 0x1C00DB2B4
 * Callers:
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1C00DB1A0 (DxgkSetProcessSchedulingPriorityClass.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N@Z @ 0x1C0124974 (-DxgEscapeSuspendResumeProcess@@YAJIPEAX_N@Z.c)
 *     DxgkQueryStatistics @ 0x1C012B490 (DxgkQueryStatistics.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C012BA90 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkChangeVideoMemoryReservation @ 0x1C012E080 (DxgkChangeVideoMemoryReservation.c)
 *     DxgkQueryVideoMemoryInfo @ 0x1C012F410 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1C014A300 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1C014A420 (DxgkReleaseProcessVidPnSourceOwners.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@AEAAXXZ @ 0x1C0002D00 (-ReleaseReference@DXGPROCESS@@AEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0004A54 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C00094EC (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?GetByHandle@DXGPROCESS@@CAJPEAXEPEAPEAV1@@Z @ 0x1C00DB384 (-GetByHandle@DXGPROCESS@@CAJPEAXEPEAPEAV1@@Z.c)
 */

__int64 __fastcall DXGPROCESSMUTEXBYHANDLE::Acquire(DXGPROCESSMUTEXBYHANDLE *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // edi
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGPROCESS *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _KTHREAD *CurrentThread; // rcx
  struct DXGPROCESS *v15; // rsi
  struct DXGPROCESS *v16; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  void *v22; // rbx
  _BYTE v23[24]; // [rsp+20h] [rbp-18h] BYREF
  struct DXGPROCESS *v24; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 1) )
  {
    v18 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v18 + 24) = 1493LL;
    WdLogEvent5_WdAssertion(v18);
  }
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v23);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  v7 = DXGPROCESS::GetByHandle(*((HANDLE *)this + 1), *((_BYTE *)this + 24), &v24);
  if ( v7 >= 0 )
  {
    v10 = v24;
    ++*((_QWORD *)v24 + 4);
    if ( *((__int64 *)v10 + 4) <= 0 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v6, v5, v8, v9);
      *(_QWORD *)(v19 + 24) = 878LL;
      WdLogEvent5_WdAssertion(v19);
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
    CurrentThread = KeGetCurrentThread();
    v15 = v24;
    if ( *(struct _KTHREAD **)(*((_QWORD *)v24 + 11) + 8LL) == CurrentThread )
    {
      v20 = WdLogNewEntry5_WdAssertion(CurrentThread, v11, v12, v13);
      *(_QWORD *)(v20 + 24) = 1523LL;
      WdLogEvent5_WdAssertion(v20);
    }
    if ( *((_BYTE *)this + 25) )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v11, v12);
      v21[3] = 275LL;
      v21[4] = 4LL;
      v21[5] = this;
      v21[6] = 0LL;
      v21[7] = 0LL;
      WdLogEvent5_WdCriticalError(v21);
    }
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)v15 + 11));
    v16 = v24;
    if ( *((_DWORD *)v24 + 10) == 1 )
    {
      *((_QWORD *)this + 2) = v24;
      v7 = 0;
      *((_BYTE *)this + 25) = 1;
    }
    else
    {
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)v15 + 11));
      v22 = (void *)*((_QWORD *)v16 + 7);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
      DXGPROCESS::ReleaseReference(v16);
      ObfDereferenceObject(v22);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
      v7 = -1073741130;
    }
  }
  if ( v23[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
  return (unsigned int)v7;
}
