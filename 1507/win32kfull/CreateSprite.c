/*
 * XREFs of CreateSprite @ 0x1C000CFD8
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C0056D10 (xxxSetLayeredWindow.c)
 * Callees:
 *     GreCreateSprite @ 0x1C000D128 (GreCreateSprite.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall CreateSprite(HDEV a1, __int64 a2, struct tagRECT *a3, __int64 *a4)
{
  __int128 v5; // xmm0
  char v6; // r15
  __int128 v7; // xmm1
  int v8; // r15d
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  BOOL v15; // ebp
  __int64 v16; // rcx
  BOOL v17; // esi
  unsigned __int8 Prop; // al
  __int64 v19; // rcx
  int v20; // r8d
  int v21; // ebx
  int v22; // eax
  __int64 Sprite; // rdx
  __int64 result; // rax
  _OWORD v25[2]; // [rsp+50h] [rbp-88h] BYREF
  int v26; // [rsp+70h] [rbp-68h]
  int v27; // [rsp+74h] [rbp-64h]
  int v28; // [rsp+78h] [rbp-60h]
  __int64 v29; // [rsp+80h] [rbp-58h]

  v5 = *(_OWORD *)(a2 + 112);
  v6 = *(_BYTE *)(a2 + 55);
  v7 = *(_OWORD *)(a2 + 128);
  v26 = *(_DWORD *)(a2 + 52);
  v8 = v6 & 0x10;
  v27 = *(_DWORD *)(a2 + 48);
  v28 = (*(unsigned __int8 *)(a2 + 40) >> 6) & 1;
  v12 = *(_QWORD *)(a2 + 24);
  v25[0] = v5;
  v25[1] = v7;
  v13 = *(_QWORD *)(v12 + 40);
  v14 = *(_WORD *)(a2 + 66) & 0x3FFF;
  v29 = v13;
  v15 = v14 == 669;
  v16 = *(_QWORD *)(a2 + 112) - *(_QWORD *)(a2 + 128);
  if ( !v16 )
    v16 = *(_QWORD *)(a2 + 120) - *(_QWORD *)(a2 + 136);
  v17 = !v16 || v14 == 669;
  Prop = GetProp(a2, (unsigned __int16)atomDispAffinity, 1LL);
  v21 = 0;
  if ( ((unsigned __int8)v20 & Prop) != 0 )
    v21 = v20;
  v22 = IsWindowDesktopComposed(v19);
  Sprite = GreCreateSprite(a1, *(HWND *)a2, a3, (struct tagMINIWINDOWINFO *)v25, v22, v8, v15, v17, v21);
  result = Sprite == 0 ? 0x803F0002 : 0;
  if ( a4 )
    *a4 = Sprite;
  return result;
}
