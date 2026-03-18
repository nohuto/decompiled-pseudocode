/*
 * XREFs of HintSpriteShape @ 0x1C00623A8
 * Callers:
 *     SetRedirectedWindow @ 0x1C00620F4 (SetRedirectedWindow.c)
 *     UnsetRedirectedWindow @ 0x1C00D7B74 (UnsetRedirectedWindow.c)
 *     RecreateRedirectionBitmap @ 0x1C00D7E4C (RecreateRedirectionBitmap.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01DE224 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 * Callees:
 *     GreHintSpriteShape @ 0x1C0062450 (GreHintSpriteShape.c)
 */

__int64 __fastcall HintSpriteShape(HDEV a1, __int64 a2, HBITMAP a3, int a4)
{
  __int128 v6; // xmm1
  int v9; // eax
  _OWORD v11[2]; // [rsp+40h] [rbp-48h] BYREF
  int v12; // [rsp+60h] [rbp-28h]
  int v13; // [rsp+64h] [rbp-24h]
  int v14; // [rsp+68h] [rbp-20h]
  __int64 v15; // [rsp+70h] [rbp-18h]

  v6 = *(_OWORD *)(a2 + 128);
  v11[0] = *(_OWORD *)(a2 + 112);
  v11[1] = v6;
  v12 = *(_DWORD *)(a2 + 52);
  v13 = *(_DWORD *)(a2 + 48);
  v14 = (*(unsigned __int8 *)(a2 + 40) >> 6) & 1;
  v15 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 40LL);
  v9 = IsWindowDesktopComposed(a2);
  return GreHintSpriteShape(a1, *(HWND *)a2, a3, (__int64)v11, a4, v9, 1);
}
