/*
 * XREFs of ValidateExternalLogFont @ 0x1401248C4
 * Callers:
 *     ?GetLogFontFromUserProfile@@YA?AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z @ 0x140123BA0 (-GetLogFontFromUserProfile@@YA-AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z.c)
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x140249884 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 * Callees:
 *     GreCreateFontIndirectW @ 0x140102238 (GreCreateFontIndirectW.c)
 *     GetCharDimensions @ 0x140124F40 (GetCharDimensions.c)
 *     GreSelectFont @ 0x140126190 (GreSelectFont.c)
 */

__int64 __fastcall ValidateExternalLogFont(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int64 v6; // rdx
  __int128 v7; // xmm0
  HDC v8; // rsi
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int64 FontIndirectW; // rax
  __int64 v12; // rbx
  __int64 v13; // r14
  __int128 v15[5]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v16; // [rsp+70h] [rbp-10h]
  int v17; // [rsp+78h] [rbp-8h]
  __int16 v18; // [rsp+7Ch] [rbp-4h]

  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = *(_OWORD *)a1;
  v18 = 0;
  v5 = *(_OWORD *)(a1 + 16);
  v6 = *(_QWORD *)(UserSessionState + 56968);
  LODWORD(UserSessionState) = *(_DWORD *)(a1 + 88);
  v15[0] = v4;
  v7 = *(_OWORD *)(a1 + 32);
  v8 = *(HDC *)(v6 + 64);
  v15[1] = v5;
  v9 = *(_OWORD *)(a1 + 48);
  v17 = UserSessionState;
  v15[2] = v7;
  v10 = *(_OWORD *)(a1 + 64);
  v15[3] = v9;
  *(_QWORD *)&v9 = *(_QWORD *)(a1 + 80);
  v15[4] = v10;
  v16 = v9;
  FontIndirectW = GreCreateFontIndirectW(v15);
  v12 = FontIndirectW;
  if ( FontIndirectW )
  {
    v13 = GreSelectFont(v8, FontIndirectW);
    GetCharDimensions(v8);
    GreSelectFont(v8, v13);
    GreDeleteObject(v12);
  }
  return 0LL;
}
