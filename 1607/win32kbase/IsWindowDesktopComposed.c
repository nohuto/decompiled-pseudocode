/*
 * XREFs of IsWindowDesktopComposed @ 0x1C0073C80
 * Callers:
 *     ?ClearSystemVisual@CHwndTargetProp@@QEAAHH@Z @ 0x1C0073A50 (-ClearSystemVisual@CHwndTargetProp@@QEAAHH@Z.c)
 *     ?SetSystemVisual@CHwndTargetProp@@QEAAJHPEAUCompositionObject@@@Z @ 0x1C0073B00 (-SetSystemVisual@CHwndTargetProp@@QEAAJHPEAUCompositionObject@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsWindowDesktopComposed(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(_QWORD *)(a1 + 24);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 8);
    if ( v3 )
      return *(_DWORD *)(v3 + 244) & 1;
  }
  return result;
}
