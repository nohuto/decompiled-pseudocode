/*
 * XREFs of ?Init@COutOfFrameDirectFlipStats@@QEAAXPEAVCCompositionSurfaceInfo@@I@Z @ 0x180010098
 * Callers:
 *     ?ProcessOutOfFrameDirectFlipLight@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z @ 0x180005C34 (-ProcessOutOfFrameDirectFlipLight@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z.c)
 *     ?ProcessOutOfFrameDirectFlip@CPartitionVerticalBlankScheduler@@IEAAJPEAVCFrameInfo@@PEA_N@Z @ 0x1800E1A90 (-ProcessOutOfFrameDirectFlip@CPartitionVerticalBlankScheduler@@IEAAJPEAVCFrameInfo@@PEA_N@Z.c)
 *     ?ProcessOutOfFrameDirectFlipTokens@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z @ 0x1800E3798 (-ProcessOutOfFrameDirectFlipTokens@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

void __fastcall COutOfFrameDirectFlipStats::Init(CMILCOMBase **this, struct CCompositionSurfaceInfo *a2, int a3)
{
  CMILCOMBase *v5; // rcx
  CMILCOMBase *v7; // rcx

  v5 = *this;
  if ( v5 )
    CMILCOMBase::InternalRelease(v5);
  *this = a2;
  if ( a2 )
    CBitmapOfDeviceBitmaps::AddRef(a2);
  v7 = (CMILCOMBase *)*((_QWORD *)*this + 7);
  *((_DWORD *)this + 4) = a3;
  this[1] = v7;
}
