/*
 * XREFs of UpdateSprite @ 0x1C006BC94
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C006BA10 (zzzUpdateLayeredWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006C148 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     _SetLayeredWindowAttributes @ 0x1C0079C68 (_SetLayeredWindowAttributes.c)
 *     UnsetLayeredWindow @ 0x1C007FC9C (UnsetLayeredWindow.c)
 *     OffsetChildren @ 0x1C00EFED0 (OffsetChildren.c)
 *     UpdateSpriteArea @ 0x1C014577C (UpdateSpriteArea.c)
 *     xxxCompositedPaint @ 0x1C0224568 (xxxCompositedPaint.c)
 * Callees:
 *     GreUpdateSprite @ 0x1C0032AF0 (GreUpdateSprite.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
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
