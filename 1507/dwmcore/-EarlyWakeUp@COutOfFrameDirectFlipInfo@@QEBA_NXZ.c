/*
 * XREFs of ?EarlyWakeUp@COutOfFrameDirectFlipInfo@@QEBA_NXZ @ 0x180005F10
 * Callers:
 *     ?Activate@COutOfFrameDirectFlipInfo@@UEAAJXZ @ 0x180005EC0 (-Activate@COutOfFrameDirectFlipInfo@@UEAAJXZ.c)
 *     ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x18004B580 (-Present@CHwndRenderTarget@@UEAAJ_NI@Z.c)
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x1800945D0 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 * Callees:
 *     ?IsOutOfFrameOptimizationDisabled@COutOfFrameDirectFlipInfo@@QEBA_NXZ @ 0x180005F50 (-IsOutOfFrameOptimizationDisabled@COutOfFrameDirectFlipInfo@@QEBA_NXZ.c)
 */

char __fastcall COutOfFrameDirectFlipInfo::EarlyWakeUp(COutOfFrameDirectFlipInfo *this)
{
  char v1; // r8
  char IsOutOfFrameOptimizationDisabled; // al
  char v4; // r8
  char v5; // cl

  v1 = 0;
  if ( *((_DWORD *)this + 14) == 4 && *(_DWORD *)(*((_QWORD *)this + 4) + 112LL) == 2 )
  {
    IsOutOfFrameOptimizationDisabled = COutOfFrameDirectFlipInfo::IsOutOfFrameOptimizationDisabled(this);
    v5 = v4;
    if ( IsOutOfFrameOptimizationDisabled == v4 )
      return 1;
    return v5;
  }
  return v1;
}
