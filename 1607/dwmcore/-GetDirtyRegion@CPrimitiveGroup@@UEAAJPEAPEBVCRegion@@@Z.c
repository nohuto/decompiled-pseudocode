/*
 * XREFs of ?GetDirtyRegion@CPrimitiveGroup@@UEAAJPEAPEBVCRegion@@@Z @ 0x18004D4A0
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800538C0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPrimitiveGroup::GetDirtyRegion(CPrimitiveGroup *this, const struct CRegion **a2)
{
  *a2 = (const struct CRegion *)(((unsigned __int64)this + 392) & -(__int64)(**((_DWORD **)this + 49) != 0));
  return 0LL;
}
