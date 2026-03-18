/*
 * XREFs of ?IsOutOfFrameOptimizationDisabled@COutOfFrameDirectFlipInfo@@QEBA_NXZ @ 0x180005F50
 * Callers:
 *     ?ProcessOutOfFrameDirectFlipLight@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z @ 0x180005C34 (-ProcessOutOfFrameDirectFlipLight@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z.c)
 *     ?EarlyWakeUp@COutOfFrameDirectFlipInfo@@QEBA_NXZ @ 0x180005F10 (-EarlyWakeUp@COutOfFrameDirectFlipInfo@@QEBA_NXZ.c)
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
