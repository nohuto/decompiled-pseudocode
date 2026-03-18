/*
 * XREFs of ?DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z @ 0x1C0031730
 * Callers:
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C00317CC (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ??_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C0003E94 (--_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006214 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C00330E4 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 */

void __fastcall VIDMM_PROCESS::DestroyAdapterInfo(VIDMM_PROCESS *this, unsigned int a2)
{
  __int64 v3; // rsi
  VIDMM_GLOBAL **v4; // rbx
  VIDMM_GLOBAL *v5; // rdx
  VIDMM_GLOBAL ***v6; // rcx
  __int64 v7; // rcx

  v3 = a2;
  v4 = *(VIDMM_GLOBAL ***)(*((_QWORD *)this + 2) + 8LL * a2);
  if ( v4 )
  {
    DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)*v4 + 40648));
    v5 = v4[3];
    v6 = (VIDMM_GLOBAL ***)v4[4];
    if ( *((VIDMM_GLOBAL ***)v5 + 1) != v4 + 3 || *v6 != v4 + 3 )
      __fastfail(3u);
    *v6 = (VIDMM_GLOBAL **)v5;
    *((_QWORD *)v5 + 1) = v6;
    *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v3) = 0LL;
    v7 = (__int64)*v4 + 40648;
    *(_QWORD *)(v7 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v7, 0LL);
    KeLeaveCriticalRegion();
    VIDMM_GLOBAL::RequestNewBudget(*v4, 1);
    VIDMM_PROCESS_ADAPTER_INFO::`scalar deleting destructor'((VIDMM_PROCESS_ADAPTER_INFO *)v4);
  }
}
