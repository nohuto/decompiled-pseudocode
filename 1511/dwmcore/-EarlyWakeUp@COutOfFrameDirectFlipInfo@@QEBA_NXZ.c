/*
 * XREFs of ?EarlyWakeUp@COutOfFrameDirectFlipInfo@@QEBA_NXZ @ 0x180006A7C
 * Callers:
 *     ?Activate@COutOfFrameDirectFlipInfo@@UEAAJXZ @ 0x180006A30 (-Activate@COutOfFrameDirectFlipInfo@@UEAAJXZ.c)
 *     ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x18007CC50 (-Present@CHwndRenderTarget@@UEAAJ_NI@Z.c)
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x18008FC60 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 * Callees:
 *     ?IsOutOfFrameOptimizationDisabled@COutOfFrameDirectFlipInfo@@QEBA_NXZ @ 0x180006ABC (-IsOutOfFrameOptimizationDisabled@COutOfFrameDirectFlipInfo@@QEBA_NXZ.c)
 */

char __fastcall COutOfFrameDirectFlipInfo::EarlyWakeUp(COutOfFrameDirectFlipInfo *this)
{
  char v1; // r8
  char IsOutOfFrameOptimizationDisabled; // al
  char v4; // r8
  char v5; // cl

  v1 = 0;
  if ( *((_DWORD *)this + 14) == 4 && *(_DWORD *)(*((_QWORD *)this + 4) + 104LL) == 2 )
  {
    IsOutOfFrameOptimizationDisabled = COutOfFrameDirectFlipInfo::IsOutOfFrameOptimizationDisabled(this);
    v5 = v4;
    if ( IsOutOfFrameOptimizationDisabled == v4 )
      return 1;
    return v5;
  }
  return v1;
}
