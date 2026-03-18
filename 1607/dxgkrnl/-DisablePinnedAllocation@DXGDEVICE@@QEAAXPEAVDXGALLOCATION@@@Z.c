/*
 * XREFs of ?DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C00E0C3C
 * Callers:
 *     ?DisablePinnedResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C00E0C90 (-DisablePinnedResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?DisablePinnedHardware@DXGDEVICE@@QEAAXXZ @ 0x1C00E0D20 (-DisablePinnedHardware@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00072BC (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C015F104 (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGDEVICE::DisablePinnedAllocation(DXGDEVICE *this, struct _VIDMM_MULTI_ALLOC **a2)
{
  __int64 v4; // rcx
  unsigned int v5; // r8d
  unsigned int v6; // edx
  __int64 v7; // rax
  struct DXGALLOCATION *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = (struct DXGALLOCATION *)a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v7 + 24) = 389LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( ((_DWORD)a2[9] & 0x800) != 0 )
  {
    VIDMM_EXPORT::VidMmUnpinAllocation(
      *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
      *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 408LL),
      a2[3]);
    *((_DWORD *)a2 + 18) &= ~0x800u;
  }
  v6 = *((_DWORD *)a2[6] + 1);
  if ( (v6 & 0x2000) != 0 )
  {
    if ( a2[3] )
      DXGDEVICE::UnpinDirectFlipAllocation(this, (v6 >> 6) & 0xF, v5, &v8, 0LL);
  }
}
