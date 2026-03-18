/*
 * XREFs of ?DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C00BD980
 * Callers:
 *     ?DisablePinnedHardware@DXGDEVICE@@QEAAXXZ @ 0x1C00BD9D4 (-DisablePinnedHardware@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C000B670 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0137110 (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGDEVICE::DisablePinnedAllocation(DXGDEVICE *this, struct _VIDMM_MULTI_ALLOC **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // edx
  __int64 v9; // rax
  struct DXGALLOCATION *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = (struct DXGALLOCATION *)a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v9 + 24) = 390LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( ((_DWORD)a2[9] & 0x100) != 0 )
  {
    VIDMM_EXPORT::VidMmUnpinAllocation(
      *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
      *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 408LL),
      a2[3]);
    *((_DWORD *)a2 + 18) &= ~0x100u;
  }
  v8 = *((_DWORD *)a2[6] + 1);
  if ( (v8 & 0x2000) != 0 )
  {
    if ( a2[3] )
      DXGDEVICE::UnpinDirectFlipAllocation(this, (v8 >> 6) & 0xF, 1u, &v10, 0LL);
  }
}
