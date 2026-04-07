/*
 * XREFs of ?IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x18003CCD0
 * Callers:
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x18001E3D0 (-RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4Win.c)
 *     ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x18003AFAC (-Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z.c)
 * Callees:
 *     ?RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x18003CC90 (-RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 */

void __fastcall CIconicBitmapRegistry::IconicRepresentationDestroyed(
        CIconicBitmapRegistry *this,
        struct CWindowData *a2)
{
  struct CWindowData *v2; // rdx
  CIconicBitmapRegistry *v3; // rcx

  *((_BYTE *)a2 + 570) &= ~8u;
  CIconicBitmapRegistry::RegisterBitmapPending(this, a2, 0);
  if ( *((_QWORD *)v2 + 47) )
    CIconicBitmapRegistry::RegisterBitmapInUse(v3, v2, 0);
}
