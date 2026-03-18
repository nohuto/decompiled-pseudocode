/*
 * XREFs of ?Release@CPrimitiveGroup@@UEAAKXZ @ 0x1800917A0
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004BB70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18004C96C (--1CVisual@@MEAA@XZ.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?Release@CPrimitiveGroup@@WDA@EAAKXZ @ 0x1800BCFE0 (-Release@CPrimitiveGroup@@WDA@EAAKXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??_ECPrimitiveGroup@@MEAAPEAXI@Z @ 0x180091170 (--_ECPrimitiveGroup@@MEAAPEAXI@Z.c)
 */

__int64 __fastcall CPrimitiveGroup::Release(CPrimitiveGroup *this)
{
  unsigned __int32 v1; // edi
  CPrimitiveGroup *(__fastcall *v3)(CPrimitiveGroup *, char); // rsi

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
