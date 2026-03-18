/*
 * XREFs of ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00CE1EC
 * Callers:
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1C00CDED0 (DxgkSetProcessSchedulingPriorityClass.c)
 *     DxgkQueryProcessOfferInfo @ 0x1C00CDF90 (DxgkQueryProcessOfferInfo.c)
 *     DxgkQueryStatistics @ 0x1C014FEC0 (DxgkQueryStatistics.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C01504E0 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkChangeVideoMemoryReservation @ 0x1C01529E0 (DxgkChangeVideoMemoryReservation.c)
 *     DxgkQueryVideoMemoryInfo @ 0x1C0153870 (DxgkQueryVideoMemoryInfo.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z @ 0x1C01686FC (-DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1C0174110 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1C0174250 (DxgkReleaseProcessVidPnSourceOwners.c)
 *     DxgkTrimProcessCommitment @ 0x1C0174760 (DxgkTrimProcessCommitment.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@AEAAXXZ @ 0x1C0009544 (-ReleaseReference@DXGPROCESS@@AEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C000C4EC (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?GetByHandle@DXGPROCESS@@CAJPEAXK_NPEA_N2PEAU_KAPC_STATE@@PEAPEAV1@@Z @ 0x1C00CE2E4 (-GetByHandle@DXGPROCESS@@CAJPEAXK_NPEA_N2PEAU_KAPC_STATE@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall DXGPROCESSMUTEXBYHANDLE::AcquireInternal(DXGPROCESSMUTEXBYHANDLE *this, bool a2)
{
  struct _KAPC_STATE *v4; // rbp
  _BYTE *v5; // r14
  __int64 v6; // rcx
  int v7; // ebx
  __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _KTHREAD *CurrentThread; // rcx
  DXGFASTMUTEX **v12; // rsi
  __int64 *v13; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  void *v18; // rdi
  _BYTE v19[16]; // [rsp+40h] [rbp-28h] BYREF
  PVOID P; // [rsp+70h] [rbp+8h] BYREF

  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v19);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
  v4 = (struct _KAPC_STATE *)((char *)this + 32);
  v5 = (char *)this + 29;
  v7 = DXGPROCESS::GetByHandle(
         *((HANDLE *)this + 1),
         *((_DWORD *)this + 6),
         a2,
         (bool *)this + 29,
         (bool *)this + 30,
         (struct _KAPC_STATE *)((char *)this + 32),
         (struct DXGPROCESS **)&P);
  if ( v7 >= 0 )
  {
    v8 = (__int64 *)P;
    ++*((_QWORD *)P + 3);
    if ( v8[3] <= 0 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v15 + 24) = 859LL;
      WdLogEvent5_WdAssertion(v15);
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
    CurrentThread = KeGetCurrentThread();
    v12 = (DXGFASTMUTEX **)P;
    if ( *(struct _KTHREAD **)(*((_QWORD *)P + 10) + 8LL) == CurrentThread )
    {
      v16 = WdLogNewEntry5_WdAssertion(CurrentThread);
      *(_QWORD *)(v16 + 24) = 1856LL;
      WdLogEvent5_WdAssertion(v16);
    }
    if ( *((_BYTE *)this + 28) )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v9, v10);
      v17[3] = 275LL;
      v17[4] = 4LL;
      v17[5] = this;
      v17[6] = 0LL;
      v17[7] = 0LL;
      WdLogEvent5_WdCriticalError(v17);
    }
    DXGFASTMUTEX::Acquire(v12[10]);
    v13 = (__int64 *)P;
    if ( *((_DWORD *)P + 8) == 1 )
    {
      *((_QWORD *)this + 2) = P;
      v7 = 0;
      *((_BYTE *)this + 28) = 1;
    }
    else
    {
      DXGFASTMUTEX::Release((struct _KTHREAD **)v12[10]);
      v18 = (void *)v13[6];
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
      DXGPROCESS::ReleaseReference(v13);
      if ( *v5 )
      {
        KeUnstackDetachProcess(v4);
        *v5 = 0;
      }
      ObfDereferenceObject(v18);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
      v7 = -1073741130;
    }
  }
  if ( v19[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
  return (unsigned int)v7;
}
