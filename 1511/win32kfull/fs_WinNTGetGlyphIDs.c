/*
 * XREFs of fs_WinNTGetGlyphIDs @ 0x1C00A2520
 * Callers:
 *     cjComputeGLYPHSET_TEMPLATE @ 0x1C00A2464 (cjComputeGLYPHSET_TEMPLATE.c)
 *     Fixup5cRun @ 0x1C02450BC (Fixup5cRun.c)
 * Callees:
 *     sfac_GetWinNTGlyphIDs @ 0x1C00A2590 (sfac_GetWinNTGlyphIDs.c)
 *     fs_SetUpKey @ 0x1C00AD5A8 (fs_SetUpKey.c)
 */

__int64 __fastcall fs_WinNTGetGlyphIDs(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // rax
  int v9; // r11d
  _DWORD v11[6]; // [rsp+40h] [rbp-18h] BYREF

  v8 = fs_SetUpKey(a1, 2LL, v11);
  if ( v8 )
    return sfac_GetWinNTGlyphIDs(v8, *(unsigned __int16 *)(v8 + 392), a2, a3, v9, a5, a6);
  else
    return v11[0];
}
