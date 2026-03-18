/*
 * XREFs of ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C006A080
 * Callers:
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0050400 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C0055B50 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     CalcVisRgn @ 0x1C006AE10 (CalcVisRgn.c)
 *     GetLayeredOrRedirectedParent @ 0x1C006B9C0 (GetLayeredOrRedirectedParent.c)
 *     GetRedirectionBitmap @ 0x1C006BF60 (GetRedirectionBitmap.c)
 *     ?IsMinimizedSausageWindow@@YAHQEAUtagWND@@@Z @ 0x1C00F6BB8 (-IsMinimizedSausageWindow@@YAHQEAUtagWND@@@Z.c)
 */

__int64 __fastcall SwpCalcVisRgn(struct tagWND *a1, HRGN a2)
{
  __int64 LayeredOrRedirectedParent; // rax
  struct tagWND *v3; // rdi
  HRGN v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  if ( (*((_BYTE *)a1 + 55) & 0x10) == 0 )
    return 0LL;
  LayeredOrRedirectedParent = GetLayeredOrRedirectedParent(a1);
  v3 = (struct tagWND *)LayeredOrRedirectedParent;
  if ( LayeredOrRedirectedParent && (*(_DWORD *)(LayeredOrRedirectedParent + 48) & 0x20000000) != 0 )
  {
    if ( GetRedirectionBitmap(LayeredOrRedirectedParent) )
      IsMinimizedSausageWindow(v3);
  }
  return CalcVisRgn(&v5);
}
