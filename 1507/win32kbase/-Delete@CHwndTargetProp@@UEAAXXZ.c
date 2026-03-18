/*
 * XREFs of ?Delete@CHwndTargetProp@@UEAAXXZ @ 0x1C000ACE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearSystemVisual@CHwndTargetProp@@QEAAHH@Z @ 0x1C000AB80 (-ClearSystemVisual@CHwndTargetProp@@QEAAHH@Z.c)
 */

void __fastcall CHwndTargetProp::Delete(CHwndTargetProp *this)
{
  CHwndTargetProp::ClearSystemVisual(this, 1);
  CHwndTargetProp::ClearSystemVisual(this, 0);
  Win32FreePool(this);
}
