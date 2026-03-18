/*
 * XREFs of ?IsMinimizedSausageWindow@@YAHQEAUtagWND@@@Z @ 0x1C00D6554
 * Callers:
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00D5880 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsMinimizedSausageWindow(struct tagWND *const a1)
{
  unsigned int v1; // r9d

  v1 = 0;
  if ( (*((_BYTE *)a1 + 55) & 0x20) != 0
    && *((_DWORD *)a1 + 28) == -32000
    && *((_DWORD *)a1 + 29) == -32000
    && *((_DWORD *)a1 + 34) == *((_DWORD *)a1 + 32) )
  {
    return *((_DWORD *)a1 + 35) == *((_DWORD *)a1 + 33);
  }
  return v1;
}
