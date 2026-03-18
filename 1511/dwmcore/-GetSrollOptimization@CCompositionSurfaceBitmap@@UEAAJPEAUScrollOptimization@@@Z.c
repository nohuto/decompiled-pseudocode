/*
 * XREFs of ?GetSrollOptimization@CCompositionSurfaceBitmap@@UEAAJPEAUScrollOptimization@@@Z @ 0x18002E230
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004BB70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetSrollOptimization(
        CCompositionSurfaceBitmap *this,
        struct ScrollOptimization *a2)
{
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 408);
  *((_QWORD *)a2 + 2) = *((_QWORD *)this + 53);
  *((_DWORD *)a2 + 6) = *((_DWORD *)this + 108);
  return 0LL;
}
