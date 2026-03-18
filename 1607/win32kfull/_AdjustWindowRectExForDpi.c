/*
 * XREFs of _AdjustWindowRectExForDpi @ 0x1C006D7AC
 * Callers:
 *     DwmChildRectChange @ 0x1C006C824 (DwmChildRectChange.c)
 * Callees:
 *     AdjustWindowRectExInternal @ 0x1C006D828 (AdjustWindowRectExInternal.c)
 *     GetAppCompatFlags2 @ 0x1C006F66C (GetAppCompatFlags2.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall AdjustWindowRectExForDpi(int a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v6; // edi
  int v7; // esi
  int AppCompatFlags2; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8

  v6 = a4;
  v7 = a2;
  AppCompatFlags2 = GetAppCompatFlags2(39168LL, a2, a3, a4);
  if ( (W32GetCurrentThreadDpiAwarenessContext(v10, v9, v11) & 0xF) != 0 )
    AppCompatFlags2 |= 0x2000000u;
  AdjustWindowRectExInternal(a1, v7, gptiCurrent, v6, *(_DWORD *)(gptiCurrent + 552LL), AppCompatFlags2, a5);
  return 1LL;
}
