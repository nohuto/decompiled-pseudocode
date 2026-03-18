/*
 * XREFs of ?IsOutOfFrameOptimizationDisabled@COutOfFrameDirectFlipInfo@@QEBA_NXZ @ 0x180006ABC
 * Callers:
 *     ?ProcessOutOfFrameDirectFlipLight@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z @ 0x1800067F4 (-ProcessOutOfFrameDirectFlipLight@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z.c)
 *     ?EarlyWakeUp@COutOfFrameDirectFlipInfo@@QEBA_NXZ @ 0x180006A7C (-EarlyWakeUp@COutOfFrameDirectFlipInfo@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall COutOfFrameDirectFlipInfo::IsOutOfFrameOptimizationDisabled(COutOfFrameDirectFlipInfo *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_BYTE *)this + 40) || *(_BYTE *)(*((_QWORD *)this + 4) + 68LL) )
    return 1;
  return v1;
}
