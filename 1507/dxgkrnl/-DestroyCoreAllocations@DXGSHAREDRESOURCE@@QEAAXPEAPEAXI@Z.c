/*
 * XREFs of ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x1C0090564
 * Callers:
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C00906EC (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C0128F10 (-Stop@ADAPTER_RENDER@@QEAAXE@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C0004950 (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0004FF8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C0005128 (-VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z @ 0x1C00932EC (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z.c)
 */

void __fastcall DXGSHAREDRESOURCE::DestroyCoreAllocations(DXGSHAREDRESOURCE *this, void **a2, __int64 a3, __int64 a4)
{
  void **v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _KTHREAD **Global; // rax
  _QWORD *v15; // rsi
  UINT v16; // r15d
  __int64 v17; // r14
  struct _VIDMM_MULTI_GLOBAL_ALLOC *v18; // r9
  bool v19; // zf
  ADAPTER_RENDER *v20; // rcx
  const HANDLE *pAllocationList; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  struct _DXGKARG_DESTROYALLOCATION v25; // [rsp+20h] [rbp-20h] BYREF

  v4 = (void **)*((_QWORD *)this + 19);
  if ( a2 && (unsigned int)a3 >= *((_DWORD *)this + 29) )
    v4 = a2;
  if ( v4 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGSHAREDRESOURCE *)((char *)this + 32));
    if ( *((_DWORD *)this + 6) )
    {
      if ( (*((_DWORD *)this + 3) & 8) != 0 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
        *(_QWORD *)(v23 + 24) = 9855LL;
        WdLogEvent5_WdAssertion(v23);
      }
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v25);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v25);
      Global = (struct _KTHREAD **)DXGGLOBAL::GetGlobal(v11, v10, v12, v13);
      DXGGLOBAL::FreeHandle(Global, *((_DWORD *)this + 6));
      *((_DWORD *)this + 6) = 0;
      if ( LOBYTE(v25.pAllocationList) )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v25);
    }
    v15 = (_QWORD *)*((_QWORD *)this + 15);
    v16 = 0;
    v17 = 0LL;
    if ( *((_DWORD *)this + 29) )
    {
      do
      {
        v18 = (struct _VIDMM_MULTI_GLOBAL_ALLOC *)*(v15 - 5);
        if ( v18 )
        {
          VIDMM_EXPORT::VidMmDestroyAllocation(
            *(VIDMM_EXPORT **)(*((_QWORD *)this + 9) + 400LL),
            0LL,
            *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 9) + 408LL),
            v18);
          *(v15 - 5) = 0LL;
        }
        v4[v17] = (void *)*(v15 - 4);
        if ( *(v15 - 4) )
        {
          if ( v16 != (_DWORD)v17 )
          {
            v24 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v18);
            *(_QWORD *)(v24 + 24) = 9888LL;
            WdLogEvent5_WdAssertion(v24);
          }
          ++v16;
        }
        *(v15 - 4) = 0LL;
        v17 = (unsigned int)(v17 + 1);
        v15 = (_QWORD *)*v15;
      }
      while ( (unsigned int)v17 < *((_DWORD *)this + 29) );
      if ( v16 )
        goto LABEL_19;
    }
    if ( *((_QWORD *)this + 2) )
    {
LABEL_19:
      memset(&v25, 0, sizeof(v25));
      v19 = *((_QWORD *)this + 2) == 0LL;
      v25.hResource = (HANDLE)*((_QWORD *)this + 2);
      v25.NumAllocations = v16;
      v20 = (ADAPTER_RENDER *)*((_QWORD *)this + 9);
      v25.Flags.Value ^= (*(_BYTE *)&v25.Flags.0 ^ !v19) & 1;
      pAllocationList = v25.pAllocationList;
      if ( v16 )
        pAllocationList = v4;
      v25.pAllocationList = pAllocationList;
      ADAPTER_RENDER::DdiDestroyAllocation(v20, &v25);
      *((_QWORD *)this + 2) = 0LL;
    }
    *((_DWORD *)this + 29) = 0;
    *((_QWORD *)this + 5) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 32, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    v22 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v22 + 24) = 9847LL;
    WdLogEvent5_WdAssertion(v22);
  }
}
