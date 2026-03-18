/*
 * XREFs of ?VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_ALLOC@@@Z @ 0x1C0038610
 * Callers:
 *     ?VidMmProcessAsyncOperation@@YAXPEAX@Z @ 0x1C005F700 (-VidMmProcessAsyncOperation@@YAXPEAX@Z.c)
 * Callees:
 *     ?CompleteAsynchronousUnpin@DXGDEVICE@@QEAAXIPEAVDXGALLOCATION@@@Z @ 0x1C0001CB0 (-CompleteAsynchronousUnpin@DXGDEVICE@@QEAAXIPEAVDXGALLOCATION@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0011388 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0011AFC (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011B34 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C004C664 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 */

void __fastcall VidMmCompleteAsyncUnpin(struct _KTHREAD **a1, struct VIDMM_ALLOC *a2, __int64 a3, __int64 a4)
{
  char v4; // di
  __int64 v7; // rbx
  __int64 v8; // r9
  char v9; // al
  char v10; // di
  DXGDEVICE *v11; // rcx
  _BYTE v12[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v13; // [rsp+28h] [rbp-20h]
  int v14; // [rsp+30h] [rbp-18h]

  v4 = 0;
  v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 8LL) + 40LL);
  if ( v7 )
  {
    if ( *(struct _KTHREAD **)(v7 + 128) == KeGetCurrentThread() )
      v7 = 0LL;
    else
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v7 + 120));
  }
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12, a1 + 5166, 0LL, a4);
  DXGPUSHLOCK::AcquireExclusive(v13);
  *((_BYTE *)a2 + 25) &= ~2u;
  v9 = *((_BYTE *)a2 + 25);
  v14 = 2;
  if ( (v9 & 1) != 0 && (v9 & 4) == 0 )
  {
    LOBYTE(v8) = 1;
    v10 = VIDMM_GLOBAL::UnpinOneAllocation(a1, a2, 1LL, v8);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
    if ( v10 )
      VIDMM_GLOBAL::UnpinOneAllocation(a1, a2, 2LL, 0LL);
    v4 = 1;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
  if ( v7 )
  {
    *(_QWORD *)(v7 + 128) = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 120, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( v4 )
    DXGDEVICE::CompleteAsynchronousUnpin(
      v11,
      (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 48LL) + 4LL) >> 6) & 0xF,
      *((struct DXGALLOCATION **)a2 + 2));
}
