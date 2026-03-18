/*
 * XREFs of ?UpdateIndependentFlipSqm@DXGPROCESS@@QEAAXXZ @ 0x1C0002CE0
 * Callers:
 *     ?UpdateProcessSqm@DXGKSQM_GLOBAL@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C00A822C (-UpdateProcessSqm@DXGKSQM_GLOBAL@@QEAAXPEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ?UpdateIndependentFlipSqmPaged@DXGPROCESS@@QEAAXPEAUINDEPENDENT_FLIP_SQM_INFO@@@Z @ 0x1C014B8CC (-UpdateIndependentFlipSqmPaged@DXGPROCESS@@QEAAXPEAUINDEPENDENT_FLIP_SQM_INFO@@@Z.c)
 */

void __fastcall DXGPROCESS::UpdateIndependentFlipSqm(DXGPROCESS *this)
{
  __int128 v2; // xmm0
  KSPIN_LOCK v3; // xmm1_8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int128 v5; // [rsp+38h] [rbp-30h] BYREF
  KSPIN_LOCK v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+50h] [rbp-18h]
  KSPIN_LOCK *v8; // [rsp+70h] [rbp+8h]

  if ( *(_BYTE *)(*((_QWORD *)this + 3) + 24LL) )
  {
    v8 = (KSPIN_LOCK *)*((_QWORD *)this + 3);
    KeAcquireInStackQueuedSpinLock(v8 + 4, &LockHandle);
    v2 = *(_OWORD *)v8;
    v3 = v8[2];
    v7 = *((_DWORD *)v8 + 6);
    v5 = v2;
    v6 = v3;
    *v8 = 0LL;
    v8[1] = 0LL;
    v8[2] = 0LL;
    *((_DWORD *)v8 + 6) = 0;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    DXGPROCESS::UpdateIndependentFlipSqmPaged(this, (struct INDEPENDENT_FLIP_SQM_INFO *)&v5);
  }
}
