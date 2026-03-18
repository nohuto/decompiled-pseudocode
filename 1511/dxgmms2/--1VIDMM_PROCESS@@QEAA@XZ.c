/*
 * XREFs of ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C0054300
 * Callers:
 *     VidMmTerminateProcess @ 0x1C00133A0 (VidMmTerminateProcess.c)
 *     ??_GVIDMM_PROCESS@@QEAAPEAXI@Z @ 0x1C001C318 (--_GVIDMM_PROCESS@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C001132C (--_V@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0011388 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0011580 (--3@YAXPEAX@Z.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0011CAC (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011CC0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C0011CE8 (--_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ??1VIDMM_PROCESS_FENCE_STORAGE@@QEAA@XZ @ 0x1C003BAD4 (--1VIDMM_PROCESS_FENCE_STORAGE@@QEAA@XZ.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C004222C (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 */

void __fastcall VIDMM_PROCESS::~VIDMM_PROCESS(VIDMM_PROCESS *this)
{
  unsigned int v2; // edi
  DXGGLOBAL *Global; // rax
  __int64 v4; // r14
  VIDMM_GLOBAL **v5; // rbx
  VIDMM_GLOBAL *v6; // rdx
  VIDMM_GLOBAL ***v7; // rcx
  __int64 v8; // rcx
  DXGGLOBAL *v9; // rax
  void (__fastcall ***v10)(_QWORD, __int64); // rcx
  void *v11; // rbx

  if ( *((_QWORD *)this + 2) )
  {
    v2 = 0;
    Global = DXGGLOBAL::GetGlobal();
    if ( (unsigned int)DXGGLOBAL::GetMaximumAdapterCount(Global) )
    {
      do
      {
        v4 = 8LL * v2;
        v5 = *(VIDMM_GLOBAL ***)(v4 + *((_QWORD *)this + 2));
        if ( v5 )
        {
          DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)*v5 + 40704));
          v6 = v5[3];
          v7 = (VIDMM_GLOBAL ***)v5[4];
          if ( *((VIDMM_GLOBAL ***)v6 + 1) != v5 + 3 || *v7 != v5 + 3 )
            __fastfail(3u);
          *v7 = (VIDMM_GLOBAL **)v6;
          *((_QWORD *)v6 + 1) = v7;
          *(_QWORD *)(v4 + *((_QWORD *)this + 2)) = 0LL;
          v8 = (__int64)*v5 + 40704;
          *(_QWORD *)(v8 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v8, 0LL);
          KeLeaveCriticalRegion();
          VIDMM_GLOBAL::RequestNewBudget(*v5, 1);
          VIDMM_PROCESS_ADAPTER_INFO::`scalar deleting destructor'((VIDMM_PROCESS_ADAPTER_INFO *)v5);
        }
        ++v2;
        v9 = DXGGLOBAL::GetGlobal();
      }
      while ( v2 < (unsigned int)DXGGLOBAL::GetMaximumAdapterCount(v9) );
    }
    operator delete[](*((void **)this + 2));
  }
  v10 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 3);
  if ( v10 )
    (**v10)(v10, 1LL);
  v11 = (void *)*((_QWORD *)this + 5);
  if ( v11 )
  {
    VIDMM_PROCESS_FENCE_STORAGE::~VIDMM_PROCESS_FENCE_STORAGE(*((VIDMM_PROCESS_FENCE_STORAGE **)this + 5));
    operator delete(v11);
  }
}
