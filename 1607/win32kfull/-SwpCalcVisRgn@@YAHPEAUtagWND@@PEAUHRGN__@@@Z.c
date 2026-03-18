/*
 * XREFs of ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00D5880
 * Callers:
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00777E4 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C00796A4 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     GetRedirectionBitmap @ 0x1C0053B30 (GetRedirectionBitmap.c)
 *     CalcVisRgn @ 0x1C00D5A60 (CalcVisRgn.c)
 *     GetLayeredOrRedirectedParent @ 0x1C00D6500 (GetLayeredOrRedirectedParent.c)
 *     ?IsMinimizedSausageWindow@@YAHQEAUtagWND@@@Z @ 0x1C00D6554 (-IsMinimizedSausageWindow@@YAHQEAUtagWND@@@Z.c)
 */

__int64 __fastcall SwpCalcVisRgn(struct tagWND *a1, HRGN a2)
{
  __int64 LayeredOrRedirectedParent; // rax
  struct tagWND *v3; // rdi
  HRGN v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  if ( (*((_BYTE *)a1 + 55) & 0x10) == 0 )
    return 0LL;
  LayeredOrRedirectedParent = GetLayeredOrRedirectedParent();
  v3 = (struct tagWND *)LayeredOrRedirectedParent;
  if ( LayeredOrRedirectedParent && (*(_DWORD *)(LayeredOrRedirectedParent + 48) & 0x20000000) != 0 )
  {
    if ( GetRedirectionBitmap(LayeredOrRedirectedParent) )
      IsMinimizedSausageWindow(v3);
  }
  return CalcVisRgn(&v5);
}
