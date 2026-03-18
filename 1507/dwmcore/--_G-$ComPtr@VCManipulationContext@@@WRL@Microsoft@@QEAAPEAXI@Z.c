/*
 * XREFs of ??_G?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1801299A0
 * Callers:
 *     ??1MCCollections@@QEAA@XZ @ 0x1801297B0 (--1MCCollections@@QEAA@XZ.c)
 *     ?Remove@?$CArray@V?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@Z @ 0x18012B574 (-Remove@-$CArray@V-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CArrayEqualHelper@V-$ComPtr.c)
 *     ?RemoveAll@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x18012B8D0 (-RemoveAll@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPt.c)
 *     ?RemoveRange@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEAAHHH@Z @ 0x18012BAA4 (-RemoveRange@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$Com.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x1801310B0 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 *     ?RevalidationCleanup@CManipulationContext@@CAXHPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x18013197C (-RevalidationCleanup@CManipulationContext@@CAXHPEAUMCCollections@@PEAV-$CQueue@PEAVCResource@@@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ @ 0x18012A2B4 (-InternalRelease@-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CManipulationContext>::`scalar deleting destructor'(__int64 a1)
{
  Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease(a1);
  return a1;
}
