/*
 * XREFs of ?CopyDxClipShape@CDxAccumulationContext@@QEAAJPEAV1@@Z @ 0x1801219E0
 * Callers:
 *     ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x1800798A4 (-ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x18005B360 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x1800786E0 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?CopyRegion@CRegionShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18014A7A0 (-CopyRegion@CRegionShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CDxAccumulationContext::CopyDxClipShape(
        CDxAccumulationContext *this,
        struct CDxAccumulationContext *a2)
{
  struct CRegionShape **v2; // rdi
  CRegionShape *v4; // rcx
  unsigned int v5; // ebx
  CRegionShape *v7; // rcx
  int v8; // eax

  v2 = (struct CRegionShape **)((char *)this + 8);
  v4 = (CRegionShape *)*((_QWORD *)this + 1);
  v5 = 0;
  if ( v4 )
  {
    CRegionShape::`vector deleting destructor'(v4, 1);
    *v2 = 0LL;
  }
  v7 = (CRegionShape *)*((_QWORD *)a2 + 1);
  if ( v7 && (v8 = CRegionShape::CopyRegion(v7, 0LL, v2), v5 = v8, v8 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xCFu);
  }
  else
  {
    *((_BYTE *)this + 16) = *((_BYTE *)a2 + 16);
    *(_BYTE *)(*(_QWORD *)this + 1272LL) = 1;
    CVisual::PropagateFlags(*(struct CVisual **)this, 1, 1, 0, 0, 0, 0);
  }
  return v5;
}
