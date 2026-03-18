/*
 * XREFs of ?VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_ALLOC@@@Z @ 0x1C005B3AC
 * Callers:
 *     ?VidMmProcessAsyncOperation@@YAXPEAX@Z @ 0x1C00327C0 (-VidMmProcessAsyncOperation@@YAXPEAX@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0005E14 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005E4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006214 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?CompleteAsynchronousUnpin@DXGDEVICE@@QEAAXIPEAVDXGALLOCATION@@@Z @ 0x1C000E014 (-CompleteAsynchronousUnpin@DXGDEVICE@@QEAAXIPEAVDXGALLOCATION@@@Z.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C0054128 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 */

void __fastcall VidMmCompleteAsyncUnpin(struct _KTHREAD **a1, struct VIDMM_ALLOC *a2, __int64 a3, __int64 a4)
{
  char v4; // di
  __int64 v7; // rbx
  char v8; // al
  bool v9; // di
  DXGDEVICE *v10; // rcx
  _BYTE v11[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+30h] [rbp-18h]

  v4 = 0;
  v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 8LL) + 40LL);
  if ( v7 )
  {
    if ( *(struct _KTHREAD **)(v7 + 128) == KeGetCurrentThread() )
      v7 = 0LL;
    else
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v7 + 120));
  }
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11, a1 + 5159, 0LL, a4);
  DXGPUSHLOCK::AcquireExclusive(v12);
  *((_BYTE *)a2 + 25) &= ~2u;
  v8 = *((_BYTE *)a2 + 25);
  v13 = 2;
  if ( (v8 & 1) != 0 && (v8 & 4) == 0 )
  {
    v9 = VIDMM_GLOBAL::UnpinOneAllocation((VIDMM_GLOBAL *)a1, a2, 1LL, 1);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
    if ( v9 )
      VIDMM_GLOBAL::UnpinOneAllocation((VIDMM_GLOBAL *)a1, a2, 2LL, 0);
    v4 = 1;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
  if ( v7 )
  {
    *(_QWORD *)(v7 + 128) = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 120, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( v4 )
    DXGDEVICE::CompleteAsynchronousUnpin(
      v10,
      (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 48LL) + 4LL) >> 6) & 0xF,
      *((struct DXGALLOCATION **)a2 + 2));
}
