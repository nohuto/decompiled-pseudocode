/*
 * XREFs of CreateSprite @ 0x1C007DF3C
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C007D4C8 (xxxSetLayeredWindow.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     GreCreateSprite @ 0x1C007DE98 (GreCreateSprite.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall CreateSprite(HDEV a1, __int64 a2, struct tagRECT *a3, HSPRITE *a4)
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
  char v17; // si
  unsigned __int8 Prop; // al
  int v19; // r8d
  int v20; // ebx
  int v21; // eax
  HSPRITE Sprite; // rdx
  __int64 result; // rax
  _OWORD v24[2]; // [rsp+50h] [rbp-88h] BYREF
  int v25; // [rsp+70h] [rbp-68h]
  int v26; // [rsp+74h] [rbp-64h]
  int v27; // [rsp+78h] [rbp-60h]
  __int64 v28; // [rsp+80h] [rbp-58h]

  v5 = *(_OWORD *)(a2 + 112);
  v6 = *(_BYTE *)(a2 + 55);
  v7 = *(_OWORD *)(a2 + 128);
  v25 = *(_DWORD *)(a2 + 52);
  v8 = v6 & 0x10;
  v26 = *(_DWORD *)(a2 + 48);
  v27 = (*(unsigned __int8 *)(a2 + 40) >> 6) & 1;
  v12 = *(_QWORD *)(a2 + 24);
  v24[0] = v5;
  v24[1] = v7;
  v13 = *(_QWORD *)(v12 + 40);
  v14 = *(_WORD *)(a2 + 66) & 0x3FFF;
  v28 = v13;
  v15 = v14 == 669;
  v16 = *(_QWORD *)(a2 + 112) - *(_QWORD *)(a2 + 128);
  if ( !v16 )
    v16 = *(_QWORD *)(a2 + 120) - *(_QWORD *)(a2 + 136);
  v17 = !v16 || v14 == 669;
  Prop = GetProp(a2, (unsigned __int16)atomDispAffinity, 1LL);
  v20 = 0;
  if ( ((unsigned __int8)v19 & Prop) != 0 )
    v20 = v19;
  v21 = IsWindowDesktopComposed(a2);
  Sprite = GreCreateSprite(a1, *(struct PDEVOBJ **)a2, a3, (struct tagMINIWINDOWINFO *)v24, v21, v8, v15, v17, v20);
  result = Sprite == 0LL ? 0x803F0002 : 0;
  if ( a4 )
    *a4 = Sprite;
  return result;
}
