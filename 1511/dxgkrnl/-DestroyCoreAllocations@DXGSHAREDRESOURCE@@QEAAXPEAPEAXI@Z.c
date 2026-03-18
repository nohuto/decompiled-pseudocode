/*
 * XREFs of ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x1C0065A5C
 * Callers:
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C0065BE4 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C012F574 (-Stop@ADAPTER_RENDER@@QEAAXE@Z.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C00015E8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BC8 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C0004660 (-VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_.c)
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C0006C6C (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z @ 0x1C0069BA8 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
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

  v3 = (void **)*((_QWORD *)this + 19);
  if ( a2 && a3 >= *((_DWORD *)this + 29) )
    v3 = a2;
  if ( v3 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGSHAREDRESOURCE *)((char *)this + 32));
    if ( *((_DWORD *)this + 6) )
    {
      if ( (*((_DWORD *)this + 3) & 8) != 0 )
      {
        v15 = WdLogNewEntry5_WdAssertion(v5);
        *(_QWORD *)(v15 + 24) = 9574LL;
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
    v7 = (_QWORD *)*((_QWORD *)this + 15);
    v8 = 0;
    v9 = 0LL;
    if ( *((_DWORD *)this + 29) )
    {
      do
      {
        v10 = (struct _VIDMM_MULTI_GLOBAL_ALLOC *)*(v7 - 5);
        if ( v10 )
        {
          VIDMM_EXPORT::VidMmDestroyAllocation(
            *(VIDMM_EXPORT **)(*((_QWORD *)this + 9) + 424LL),
            0LL,
            *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 9) + 432LL),
            v10);
          *(v7 - 5) = 0LL;
        }
        v3[v9] = (void *)*(v7 - 4);
        if ( *(v7 - 4) )
        {
          if ( v8 != (_DWORD)v9 )
          {
            v16 = WdLogNewEntry5_WdAssertion(v5);
            *(_QWORD *)(v16 + 24) = 9607LL;
            WdLogEvent5_WdAssertion(v16);
          }
          ++v8;
        }
        *(v7 - 4) = 0LL;
        v9 = (unsigned int)(v9 + 1);
        v7 = (_QWORD *)*v7;
      }
      while ( (unsigned int)v9 < *((_DWORD *)this + 29) );
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
    *((_DWORD *)this + 29) = 0;
    *((_QWORD *)this + 5) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 32, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    v14 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v14 + 24) = 9566LL;
    WdLogEvent5_WdAssertion(v14);
  }
}
