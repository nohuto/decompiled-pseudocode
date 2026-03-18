/*
 * XREFs of ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C014D708
 * Callers:
 *     ?AcquireCrossSession@DXGPROCESSMUTEXBYHANDLE@@QEAAJXZ @ 0x1C001F7C4 (-AcquireCrossSession@DXGPROCESSMUTEXBYHANDLE@@QEAAJXZ.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N@Z @ 0x1C012AA68 (-DxgEscapeSuspendResumeProcess@@YAJIPEAX_N@Z.c)
 *     DxgkQueryStatistics @ 0x1C0131A30 (DxgkQueryStatistics.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C0132040 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkChangeVideoMemoryReservation @ 0x1C01336B0 (DxgkChangeVideoMemoryReservation.c)
 *     DxgkQueryVideoMemoryInfo @ 0x1C0134490 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1C014E5A0 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1C014E6E0 (DxgkReleaseProcessVidPnSourceOwners.c)
 * Callees:
 *     ?ReleaseReference@DXGPROCESS@@AEAAXXZ @ 0x1C00018D0 (-ReleaseReference@DXGPROCESS@@AEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0006F38 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C000B0D4 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?GetByHandle@DXGPROCESS@@CAJPEAXE_NPEA_N2PEAU_KAPC_STATE@@PEAPEAV1@@Z @ 0x1C014DC5C (-GetByHandle@DXGPROCESS@@CAJPEAXE_NPEA_N2PEAU_KAPC_STATE@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall DXGPROCESSMUTEXBYHANDLE::AcquireInternal(DXGPROCESSMUTEXBYHANDLE *this, bool a2)
{
  __int64 v4; // rax
  struct _KAPC_STATE *v5; // rbp
  _BYTE *v6; // r14
  __int64 v7; // rcx
  int v8; // edi
  struct DXGPROCESS *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _KTHREAD *CurrentThread; // rcx
  struct DXGPROCESS *v14; // rsi
  __int64 v15; // rax
  _QWORD *v16; // rax
  struct DXGPROCESS *v17; // rdi
  void *v18; // rbx
  _BYTE v20[16]; // [rsp+40h] [rbp-28h] BYREF
  struct DXGPROCESS *v21; // [rsp+70h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 1) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 1607LL;
    WdLogEvent5_WdAssertion(v4);
  }
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v20);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  v5 = (struct _KAPC_STATE *)((char *)this + 32);
  v6 = (char *)this + 26;
  v8 = DXGPROCESS::GetByHandle(
         *((HANDLE *)this + 1),
         *((_BYTE *)this + 24),
         a2,
         (bool *)this + 26,
         (bool *)this + 27,
         (struct _KAPC_STATE *)((char *)this + 32),
         &v21);
  if ( v8 >= 0 )
  {
    v9 = v21;
    ++*((_QWORD *)v21 + 4);
    if ( *((__int64 *)v9 + 4) <= 0 )
    {
      v10 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v10 + 24) = 730LL;
      WdLogEvent5_WdAssertion(v10);
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
    CurrentThread = KeGetCurrentThread();
    v14 = v21;
    if ( **((struct _KTHREAD ***)v21 + 11) == CurrentThread )
    {
      v15 = WdLogNewEntry5_WdAssertion(CurrentThread);
      *(_QWORD *)(v15 + 24) = 1637LL;
      WdLogEvent5_WdAssertion(v15);
    }
    if ( *((_BYTE *)this + 25) )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v11, v12);
      v16[3] = 275LL;
      v16[4] = 4LL;
      v16[5] = this;
      v16[6] = 0LL;
      v16[7] = 0LL;
      WdLogEvent5_WdCriticalError(v16);
    }
    DXGFASTMUTEX::Acquire(*((union _LARGE_INTEGER **)v14 + 11));
    v17 = v21;
    if ( *((_DWORD *)v21 + 10) == 1 )
    {
      *((_QWORD *)this + 2) = v21;
      v8 = 0;
      *((_BYTE *)this + 25) = 1;
    }
    else
    {
      DXGFASTMUTEX::Release(*((DXGFASTMUTEX **)v14 + 11));
      v18 = (void *)*((_QWORD *)v17 + 7);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
      DXGPROCESS::ReleaseReference(v17);
      if ( *v6 )
      {
        KeUnstackDetachProcess(v5);
        *v6 = 0;
      }
      ObfDereferenceObject(v18);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
      v8 = -1073741130;
    }
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v20);
  return (unsigned int)v8;
}
