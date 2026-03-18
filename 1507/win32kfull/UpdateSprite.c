/*
 * XREFs of UpdateSprite @ 0x1C00591C0
 * Callers:
 *     UpdateSpriteArea @ 0x1C000A280 (UpdateSpriteArea.c)
 *     UnsetLayeredWindow @ 0x1C000CA0C (UnsetLayeredWindow.c)
 *     _SetLayeredWindowAttributes @ 0x1C0057144 (_SetLayeredWindowAttributes.c)
 *     zzzUpdateLayeredWindow @ 0x1C0058F3C (zzzUpdateLayeredWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0092654 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     OffsetChildren @ 0x1C00EA6A4 (OffsetChildren.c)
 *     xxxCompositedPaint @ 0x1C0225058 (xxxCompositedPaint.c)
 * Callees:
 *     GreUpdateSprite @ 0x1C001B070 (GreUpdateSprite.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall UpdateSprite(
        HDEV a1,
        __int64 a2,
        __int64 a3,
        HDC a4,
        struct tagPOINT *a5,
        struct tagSIZE *a6,
        HDC a7,
        struct tagPOINT *a8,
        unsigned int a9,
        struct _BLENDFUNCTION *a10,
        unsigned int a11,
        struct tagRECT *a12)
{
  __int128 v13; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // rax
  int v17; // eax
  _OWORD v20[2]; // [rsp+88h] [rbp-80h] BYREF
  int v21; // [rsp+A8h] [rbp-60h]
  int v22; // [rsp+ACh] [rbp-5Ch]
  int v23; // [rsp+B0h] [rbp-58h]
  __int64 v24; // [rsp+B8h] [rbp-50h]

  v13 = *(_OWORD *)(a2 + 112);
  v15 = *(_OWORD *)(a2 + 128);
  v21 = *(_DWORD *)(a2 + 52);
  v22 = *(_DWORD *)(a2 + 48);
  v23 = (*(unsigned __int8 *)(a2 + 40) >> 6) & 1;
  v16 = *(_QWORD *)(a2 + 24);
  v20[0] = v13;
  v20[1] = v15;
  v24 = *(_QWORD *)(v16 + 40);
  v17 = IsWindowDesktopComposed(a2);
  return GreUpdateSprite(a1, *(HWND *)a2, 0LL, a4, a5, a6, a7, a8, a9, a10, a11, a12, (__int64)v20, v17, 0) == 0
       ? 0x803F0001
       : 0;
}
