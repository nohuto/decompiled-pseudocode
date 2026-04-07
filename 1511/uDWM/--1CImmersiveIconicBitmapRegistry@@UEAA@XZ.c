/*
 * XREFs of ??1CImmersiveIconicBitmapRegistry@@UEAA@XZ @ 0x180078520
 * Callers:
 *     ??_GCImmersiveIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x180074580 (--_GCImmersiveIconicBitmapRegistry@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002B05C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z @ 0x1800785B0 (--_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCTouchVisual@@$0A@@@QEAAJI@Z @ 0x180078C90 (-RemoveAt@-$DynArray@PEAVCTouchVisual@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CImmersiveIconicBitmapRegistry::~CImmersiveIconicBitmapRegistry(
        CImmersiveIconicBitmapRegistry *this,
        unsigned int a2)
{
  bool v2; // zf
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *v4; // rcx

  v2 = *((_DWORD *)this + 10) == 0;
  *(_QWORD *)this = &CImmersiveIconicBitmapRegistry::`vftable';
  if ( !v2 )
  {
    do
    {
      v4 = (CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *)**((_QWORD **)this + 2);
      if ( v4 )
        CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'(v4, a2);
      DynArray<CTouchVisual *,0>::RemoveAt((char *)this + 16, 0LL);
    }
    while ( *((_DWORD *)this + 10) );
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 6);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 2);
}
