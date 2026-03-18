/*
 * XREFs of ?Delete@CHwndTargetProp@@UEAAXXZ @ 0x1C0073BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearSystemVisual@CHwndTargetProp@@QEAAHH@Z @ 0x1C0073A50 (-ClearSystemVisual@CHwndTargetProp@@QEAAHH@Z.c)
 */

void __fastcall CHwndTargetProp::Delete(CHwndTargetProp *this)
{
  CHwndTargetProp::ClearSystemVisual(this, 1);
  CHwndTargetProp::ClearSystemVisual(this, 0);
  Win32FreePool();
}
