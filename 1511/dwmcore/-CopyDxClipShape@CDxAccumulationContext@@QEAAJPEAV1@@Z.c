/*
 * XREFs of ?CopyDxClipShape@CDxAccumulationContext@@QEAAJPEAV1@@Z @ 0x180137328
 * Callers:
 *     ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x18005E6D0 (-ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE.c)
 * Callees:
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x18004E3D0 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800A9D58 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?CopyRegion@CRegionShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x180158C20 (-CopyRegion@CRegionShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
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
    *(_BYTE *)(*(_QWORD *)this + 1224LL) = 1;
    CVisual::PropagateFlags(*(struct CVisual **)this, 1, 1, 0, 0, 0, 0);
  }
  return v5;
}
