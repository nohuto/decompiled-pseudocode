/*
 * XREFs of ?VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_ALLOC@@@Z @ 0x1C0091DF0
 * Callers:
 *     ?VidMmProcessAsyncOperation@@YAXPEAX@Z @ 0x1C00671F0 (-VidMmProcessAsyncOperation@@YAXPEAX@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F69C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000FCC0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FD00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?CompleteAsynchronousUnpin@DXGDEVICE@@QEAAXIPEAVDXGALLOCATION@@@Z @ 0x1C001D1BC (-CompleteAsynchronousUnpin@DXGDEVICE@@QEAAXIPEAVDXGALLOCATION@@@Z.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C0068FCC (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 */

void __fastcall VidMmCompleteAsyncUnpin(struct _KTHREAD **a1, struct VIDMM_ALLOC *a2)
{
  char v2; // di
  __int64 v5; // rbx
  __int64 v6; // r9
  char v7; // al
  bool v8; // di
  DXGDEVICE *v9; // rcx
  _BYTE v10[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+30h] [rbp-18h]

  v2 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 8LL) + 40LL);
  if ( v5 )
  {
    if ( *(struct _KTHREAD **)(v5 + 120) == KeGetCurrentThread() )
      v5 = 0LL;
    else
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v5 + 112));
  }
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, a1 + 5209, 0);
  DXGPUSHLOCK::AcquireExclusive(v11);
  *((_BYTE *)a2 + 25) &= ~2u;
  v7 = *((_BYTE *)a2 + 25);
  v12 = 2;
  if ( (v7 & 1) != 0 && (v7 & 4) == 0 )
  {
    LOBYTE(v6) = 1;
    v8 = VIDMM_GLOBAL::UnpinOneAllocation((VIDMM_GLOBAL *)a1, (__int64)a2, 1LL, v6);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
    if ( v8 )
      VIDMM_GLOBAL::UnpinOneAllocation((VIDMM_GLOBAL *)a1, (__int64)a2, 2LL, 0LL);
    v2 = 1;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
  if ( v5 )
  {
    *(_QWORD *)(v5 + 120) = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 112, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( v2 )
    DXGDEVICE::CompleteAsynchronousUnpin(
      v9,
      (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 48LL) + 4LL) >> 6) & 0xF,
      *((struct DXGALLOCATION **)a2 + 2));
}
