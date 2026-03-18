/*
 * XREFs of ?Release@CPrimitiveGroup@@UEAAKXZ @ 0x18004D4C0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800538C0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180054360 (--1CVisual@@MEAA@XZ.c)
 *     ?Release@CPrimitiveGroup@@WHI@EAAKXZ @ 0x1800BFE70 (-Release@CPrimitiveGroup@@WHI@EAAKXZ.c)
 * Callees:
 *     ??_ECPrimitiveGroup@@MEAAPEAXI@Z @ 0x18004C580 (--_ECPrimitiveGroup@@MEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::Release(CPrimitiveGroup *this)
{
  unsigned __int32 v1; // ebx
  CPrimitiveGroup *(__fastcall *v3)(CPrimitiveGroup *, char); // rax

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
  {
    --*((_DWORD *)this + 2);
    v3 = *(CPrimitiveGroup *(__fastcall **)(CPrimitiveGroup *, char))(*(_QWORD *)this + 24LL);
    if ( v3 == CPrimitiveGroup::`vector deleting destructor' )
      CPrimitiveGroup::`vector deleting destructor'(this, 1);
    else
      v3(this, 1);
  }
  return v1;
}
