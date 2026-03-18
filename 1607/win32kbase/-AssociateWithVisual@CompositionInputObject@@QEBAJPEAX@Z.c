/*
 * XREFs of ?AssociateWithVisual@CompositionInputObject@@QEBAJPEAX@Z @ 0x1C00489EC
 * Callers:
 *     ?ReleaseCompositionInputObject@CInteractionMarshaler@DirectComposition@@IEAAXXZ @ 0x1C004B740 (-ReleaseCompositionInputObject@CInteractionMarshaler@DirectComposition@@IEAAXXZ.c)
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x1C004B958 (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z.c)
 * Callees:
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C001B9E0 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C001C300 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 */

__int64 __fastcall CompositionInputObject::AssociateWithVisual(CompositionInputObject *this, void *a2)
{
  int v3; // ebx
  CInputSink *v4; // rcx
  void *v5; // rax
  CInputSink *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = CompositionSurfaceObject::LockForWrite((char *)this, &v7);
  if ( v3 >= 0 )
  {
    v4 = v7;
    v3 = 0;
    v5 = (void *)*((_QWORD *)v7 + 11);
    if ( a2 != v5 )
    {
      if ( a2 && v5 )
        v3 = -1073741823;
      else
        *((_QWORD *)v7 + 11) = a2;
    }
    CInputSink::UnlockAndRelease(v4);
  }
  return (unsigned int)v3;
}
