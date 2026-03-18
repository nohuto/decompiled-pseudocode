/*
 * XREFs of UpdateSprite @ 0x1C00527B0
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C0053734 (zzzUpdateLayeredWindow.c)
 *     _SetLayeredWindowAttributes @ 0x1C0061F00 (_SetLayeredWindowAttributes.c)
 *     UnsetLayeredWindow @ 0x1C0066114 (UnsetLayeredWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006CB00 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     UpdateSpriteArea @ 0x1C00D661C (UpdateSpriteArea.c)
 *     OffsetChildren @ 0x1C010F838 (OffsetChildren.c)
 *     xxxCompositedPaint @ 0x1C0225130 (xxxCompositedPaint.c)
 * Callees:
 *     GreUpdateSprite @ 0x1C00503E0 (GreUpdateSprite.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
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
  struct _LUID *v19; // [rsp+70h] [rbp-98h]
  _OWORD v21[2]; // [rsp+88h] [rbp-80h] BYREF
  int v22; // [rsp+A8h] [rbp-60h]
  int v23; // [rsp+ACh] [rbp-5Ch]
  int v24; // [rsp+B0h] [rbp-58h]
  __int64 v25; // [rsp+B8h] [rbp-50h]

  v13 = *(_OWORD *)(a2 + 112);
  v15 = *(_OWORD *)(a2 + 128);
  v22 = *(_DWORD *)(a2 + 52);
  v23 = *(_DWORD *)(a2 + 48);
  v24 = (*(unsigned __int8 *)(a2 + 40) >> 6) & 1;
  v16 = *(_QWORD *)(a2 + 24);
  v21[0] = v13;
  v21[1] = v15;
  v25 = *(_QWORD *)(v16 + 40);
  v17 = IsWindowDesktopComposed(a2);
  LODWORD(v19) = 0;
  return (unsigned int)GreUpdateSprite(
                         a1,
                         *(HWND *)a2,
                         0LL,
                         a4,
                         a5,
                         a6,
                         a7,
                         a8,
                         a9,
                         a10,
                         a11,
                         a12,
                         (__int64)v21,
                         v17,
                         v19) == 0
       ? 0x803F0001
       : 0;
}
