/*
 * XREFs of ?CopyFromSurfaceToMem@@YAXPEAEIIPEBUtagRECT@@II0@Z @ 0x1800B5EA4
 * Callers:
 *     ?CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJPEBUtagRECT@@@Z @ 0x1800B5A6C (-CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     memcpy_0 @ 0x1800BC8C6 (memcpy_0.c)
 */

void __fastcall CopyFromSurfaceToMem(
        unsigned __int8 *a1,
        int a2,
        int a3,
        const struct tagRECT *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int8 *a7)
{
  LONG top; // ebx
  unsigned int v12; // esi

  top = a4->top;
  if ( top < a4->bottom )
  {
    v12 = a3 * top;
    do
    {
      memcpy_0(
        &a7[(unsigned int)(a2 * a4->left) + (unsigned __int64)(a5 * a2 * (a6 - top++ - 1))],
        &a1[(unsigned int)(a2 * a4->left) + (unsigned __int64)v12],
        (unsigned int)(a2 * (a4->right - a4->left)));
      v12 += a3;
    }
    while ( top < a4->bottom );
  }
}
