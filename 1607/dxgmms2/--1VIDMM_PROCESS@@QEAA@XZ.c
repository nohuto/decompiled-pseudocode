/*
 * XREFs of ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C005C8A0
 * Callers:
 *     VidMmTerminateProcess @ 0x1C00111C0 (VidMmTerminateProcess.c)
 *     ??_GVIDMM_PROCESS@@QEAAPEAXI@Z @ 0x1C001D128 (--_GVIDMM_PROCESS@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0001ACC (--_V@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F69C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C00100C0 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00100E0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C0010148 (--_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ??1VIDMM_PROCESS_FENCE_STORAGE@@QEAA@XZ @ 0x1C00447B4 (--1VIDMM_PROCESS_FENCE_STORAGE@@QEAA@XZ.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C005A00C (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 */

void __fastcall VIDMM_PROCESS::~VIDMM_PROCESS(VIDMM_PROCESS *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  DXGGLOBAL *Global; // rax
  VIDMM_GLOBAL **v7; // rdi
  DXGGLOBAL *v8; // rax
  void (__fastcall ***v9)(_QWORD, __int64); // rcx
  void *v10; // rbx
  VIDMM_GLOBAL *v11; // rdx
  VIDMM_GLOBAL ***v12; // rcx
  __int64 v13; // rcx

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( *((_QWORD *)this + 2) )
  {
    v5 = 0LL;
    Global = DXGGLOBAL::GetGlobal();
    if ( (unsigned int)DXGGLOBAL::GetMaximumAdapterCount(Global) )
    {
      do
      {
        v7 = *(VIDMM_GLOBAL ***)(8 * v5 + *((_QWORD *)this + 2));
        if ( v7 )
        {
          DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)*v7 + 40968));
          v11 = v7[3];
          v12 = (VIDMM_GLOBAL ***)v7[4];
          if ( *((VIDMM_GLOBAL ***)v11 + 1) != v7 + 3 || *v12 != v7 + 3 )
            __fastfail(3u);
          *v12 = (VIDMM_GLOBAL **)v11;
          *((_QWORD *)v11 + 1) = v12;
          *(_QWORD *)(8 * v5 + *((_QWORD *)this + 2)) = 0LL;
          v13 = (__int64)*v7 + 40968;
          *(_QWORD *)(v13 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v13, 0LL);
          KeLeaveCriticalRegion();
          VIDMM_GLOBAL::RequestNewBudget(*v7, 1);
          VIDMM_PROCESS_ADAPTER_INFO::`scalar deleting destructor'((VIDMM_PROCESS_ADAPTER_INFO *)v7);
        }
        v5 = (unsigned int)(v5 + 1);
        v8 = DXGGLOBAL::GetGlobal();
      }
      while ( (unsigned int)v5 < (unsigned int)DXGGLOBAL::GetMaximumAdapterCount(v8) );
    }
    operator delete[](*((void **)this + 2));
  }
  v9 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 3);
  if ( v9 )
    (**v9)(v9, 1LL);
  v10 = (void *)*((_QWORD *)this + 5);
  if ( v10 )
  {
    VIDMM_PROCESS_FENCE_STORAGE::~VIDMM_PROCESS_FENCE_STORAGE(*((VIDMM_PROCESS_FENCE_STORAGE **)this + 5));
    operator delete(v10);
  }
}
