/*
 * XREFs of xxxMoveEvent @ 0x1C011E61C
 * Callers:
 *     ?xxxMouseEventDirect@@YAHKKKK_K00@Z @ 0x1C01D14C8 (-xxxMouseEventDirect@@YAHKKKK_K00@Z.c)
 *     ?xxxMKMouseMove@@YAHG@Z @ 0x1C01E4C10 (-xxxMKMouseMove@@YAHG@Z.c)
 *     ?xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E4DF0 (-xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E4FB0 (-xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxOnPTPMouseOperation @ 0x1C01EDC74 (xxxOnPTPMouseOperation.c)
 * Callees:
 *     ?GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z @ 0x1C01CF6B4 (-GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z.c)
 *     ?xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z @ 0x1C01D19A4 (-xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z.c)
 */

void __fastcall xxxMoveEvent(
        int a1,
        int a2,
        unsigned int a3,
        unsigned __int64 a4,
        struct tagPOINT a5,
        struct _MOUSE_INPUT_DATA *a6,
        struct _SUBPIXELS *a7,
        unsigned __int64 a8,
        unsigned __int64 a9,
        int a10,
        __int64 a11,
        int a12)
{
  int v12; // r10d
  struct _MOUSE_INPUT_DATA *v14; // rsi
  struct _SUBPIXELS *v15; // r11
  int v16; // edi
  unsigned __int64 v17; // rbx
  int v18; // [rsp+38h] [rbp-30h]
  __int64 v19; // [rsp+50h] [rbp-18h] BYREF

  v12 = 0;
  v14 = a6;
  a5 = gptCursorAsync;
  v15 = (struct _SUBPIXELS *)&v19;
  if ( a7 )
    v15 = a7;
  if ( a6 )
    v12 = a6->Flags & 0x80;
  v16 = a10;
  v17 = a8;
  GetMouseCoord(
    a1,
    a2,
    (a3 & 0x20000 | ((a3 & 0x4000 | (a3 >> 2) & 0x2000) >> 1)) >> 12,
    a8,
    a4,
    &a5,
    v15,
    v18,
    a10,
    v12);
  xxxMoveEventAbsolute(a5.x, a5.y, a4, 0LL, v14, v17, a9, v16, a12);
}
