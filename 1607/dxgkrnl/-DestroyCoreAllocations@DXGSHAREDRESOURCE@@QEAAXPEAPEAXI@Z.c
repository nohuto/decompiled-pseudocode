/*
 * XREFs of ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x1C008F974
 * Callers:
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C008F838 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C01497D4 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0006E88 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00073A0 (-VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C0009C7C (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z @ 0x1C00925B8 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DXGSHAREDRESOURCE::DestroyCoreAllocations(DXGSHAREDRESOURCE *this, void **a2, unsigned int a3)
{
  void **v3; // rdi
  __int64 v5; // rcx
  struct _KTHREAD **Global; // rax
  _QWORD *v7; // rsi
  UINT v8; // r15d
  __int64 v9; // r14
  struct _VIDMM_MULTI_GLOBAL_ALLOC *v10; // r9
  bool v11; // zf
  ADAPTER_RENDER *v12; // rcx
  const HANDLE *pAllocationList; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  _DXGKARG_DESTROYALLOCATION v17; // [rsp+20h] [rbp-20h] BYREF

  v3 = (void **)*((_QWORD *)this + 20);
  if ( a2 && a3 >= *((_DWORD *)this + 31) )
    v3 = a2;
  if ( v3 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGSHAREDRESOURCE *)((char *)this + 32));
    if ( *((_DWORD *)this + 6) )
    {
      if ( (*((_DWORD *)this + 3) & 8) != 0 )
      {
        v15 = WdLogNewEntry5_WdAssertion(v5);
        *(_QWORD *)(v15 + 24) = 10016LL;
        WdLogEvent5_WdAssertion(v15);
      }
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v17);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v17);
      Global = (struct _KTHREAD **)DXGGLOBAL::GetGlobal();
      DXGGLOBAL::FreeHandle(Global, *((_DWORD *)this + 6));
      *((_DWORD *)this + 6) = 0;
      if ( LOBYTE(v17.pAllocationList) )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v17);
    }
    v7 = (_QWORD *)*((_QWORD *)this + 16);
    v8 = 0;
    v9 = 0LL;
    if ( *((_DWORD *)this + 31) )
    {
      do
      {
        v10 = (struct _VIDMM_MULTI_GLOBAL_ALLOC *)*(v7 - 5);
        if ( v10 )
        {
          VIDMM_EXPORT::VidMmDestroyAllocation(
            *(VIDMM_EXPORT **)(*((_QWORD *)this + 9) + 400LL),
            0LL,
            *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 9) + 408LL),
            v10);
          *(v7 - 5) = 0LL;
        }
        v3[v9] = (void *)*(v7 - 4);
        if ( *(v7 - 4) )
        {
          if ( v8 != (_DWORD)v9 )
          {
            v16 = WdLogNewEntry5_WdAssertion(v5);
            *(_QWORD *)(v16 + 24) = 10049LL;
            WdLogEvent5_WdAssertion(v16);
          }
          ++v8;
        }
        *(v7 - 4) = 0LL;
        v9 = (unsigned int)(v9 + 1);
        v7 = (_QWORD *)*v7;
      }
      while ( (unsigned int)v9 < *((_DWORD *)this + 31) );
      if ( v8 )
        goto LABEL_19;
    }
    if ( *((_QWORD *)this + 2) )
    {
LABEL_19:
      memset(&v17, 0, sizeof(v17));
      v11 = *((_QWORD *)this + 2) == 0LL;
      v17.hResource = (HANDLE)*((_QWORD *)this + 2);
      v17.NumAllocations = v8;
      v12 = (ADAPTER_RENDER *)*((_QWORD *)this + 9);
      v17.Flags.Value ^= (*(_BYTE *)&v17.Flags.0 ^ !v11) & 1;
      pAllocationList = v17.pAllocationList;
      if ( v8 )
        pAllocationList = v3;
      v17.pAllocationList = pAllocationList;
      ADAPTER_RENDER::DdiDestroyAllocation(v12, &v17);
      *((_QWORD *)this + 2) = 0LL;
    }
    *((_DWORD *)this + 31) = 0;
    *((_QWORD *)this + 5) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 32, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    v14 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v14 + 24) = 10008LL;
    WdLogEvent5_WdAssertion(v14);
  }
}
