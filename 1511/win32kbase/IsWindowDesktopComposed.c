/*
 * XREFs of IsWindowDesktopComposed @ 0x1C006A000
 * Callers:
 *     ?ClearSystemVisual@CHwndTargetProp@@QEAAHH@Z @ 0x1C0069D70 (-ClearSystemVisual@CHwndTargetProp@@QEAAHH@Z.c)
 *     ?SetSystemVisual@CHwndTargetProp@@QEAAJHPEAUCompositionObject@@@Z @ 0x1C0069E20 (-SetSystemVisual@CHwndTargetProp@@QEAAJHPEAUCompositionObject@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsWindowDesktopComposed(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 && (v2 = *(_QWORD *)(v1 + 8)) != 0 )
    return *(_DWORD *)(v2 + 244) & 1;
  else
    return 0LL;
}
