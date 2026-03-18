/*
 * XREFs of ?Release@CCompositionSurfaceBitmap@@UEAAKXZ @ 0x180093730
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ @ 0x18004C688 (-ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800538C0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?Release@CCompositionSurfaceBitmap@@WHA@EAAKXZ @ 0x1800BFE30 (-Release@CCompositionSurfaceBitmap@@WHA@EAAKXZ.c)
 *     ?Release@CCompositionSurfaceBitmap@@WHI@EAAKXZ @ 0x1800BFE40 (-Release@CCompositionSurfaceBitmap@@WHI@EAAKXZ.c)
 *     ?Release@CCompositionSurfaceBitmap@@WII@EAAKXZ @ 0x1800BFE50 (-Release@CCompositionSurfaceBitmap@@WII@EAAKXZ.c)
 *     ?Release@CCompositionSurfaceBitmap@@WJA@EAAKXZ @ 0x1800BFE60 (-Release@CCompositionSurfaceBitmap@@WJA@EAAKXZ.c)
 * Callees:
 *     ??_GCCompositionSurfaceBitmap@@MEAAPEAXI@Z @ 0x180093100 (--_GCCompositionSurfaceBitmap@@MEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::Release(CCompositionSurfaceBitmap *this)
{
  unsigned __int32 v1; // ebx
  CCompositionSurfaceBitmap *(__fastcall *v3)(CCompositionSurfaceBitmap *, char); // rax

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
  {
    --*((_DWORD *)this + 2);
    v3 = *(CCompositionSurfaceBitmap *(__fastcall **)(CCompositionSurfaceBitmap *, char))(*(_QWORD *)this + 24LL);
    if ( v3 == CCompositionSurfaceBitmap::`scalar deleting destructor' )
      CCompositionSurfaceBitmap::`scalar deleting destructor'(this, 1);
    else
      v3(this, 1);
  }
  return v1;
}
