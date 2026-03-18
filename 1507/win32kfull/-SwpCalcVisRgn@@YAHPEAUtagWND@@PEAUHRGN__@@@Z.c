/*
 * XREFs of ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C005B600
 * Callers:
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0062A3C (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C0066BA0 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?IsMinimizedSausageWindow@@YAHQEAUtagWND@@@Z @ 0x1C00586F8 (-IsMinimizedSausageWindow@@YAHQEAUtagWND@@@Z.c)
 *     GetRedirectionBitmap @ 0x1C0059490 (GetRedirectionBitmap.c)
 *     GetLayeredOrRedirectedParent @ 0x1C005B5B0 (GetLayeredOrRedirectedParent.c)
 *     CalcVisRgn @ 0x1C005D6D0 (CalcVisRgn.c)
 */

__int64 __fastcall SwpCalcVisRgn(struct tagWND *a1, HRGN a2)
{
  __int64 LayeredOrRedirectedParent; // rax
  struct tagWND *v3; // rdi
  HRGN v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  if ( (*((_BYTE *)a1 + 55) & 0x10) == 0 )
    return 0LL;
  LayeredOrRedirectedParent = GetLayeredOrRedirectedParent((__int64)a1);
  v3 = (struct tagWND *)LayeredOrRedirectedParent;
  if ( LayeredOrRedirectedParent && (*(_DWORD *)(LayeredOrRedirectedParent + 48) & 0x20000000) != 0 )
  {
    if ( GetRedirectionBitmap(LayeredOrRedirectedParent) )
      IsMinimizedSausageWindow(v3);
  }
  return CalcVisRgn(&v5);
}
