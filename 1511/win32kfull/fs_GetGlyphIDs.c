/*
 * XREFs of fs_GetGlyphIDs @ 0x1C02D97E0
 * Callers:
 *     vFillIFICharsets @ 0x1C0012E80 (vFillIFICharsets.c)
 *     cjComputeGLYPHSET_OLDBIDI @ 0x1C0245BFC (cjComputeGLYPHSET_OLDBIDI.c)
 *     pvHandleKerningPairs @ 0x1C0247330 (pvHandleKerningPairs.c)
 * Callees:
 *     fs_SetUpKey @ 0x1C00AD5A8 (fs_SetUpKey.c)
 */

__int64 __fastcall fs_GetGlyphIDs(__int64 a1, __int16 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  int v6; // edx
  int v7; // r9d
  unsigned __int16 v8; // r11
  unsigned int v10; // [rsp+48h] [rbp+10h] BYREF

  LOWORD(v10) = a2;
  v5 = fs_SetUpKey(a1, 2, &v10);
  if ( v5 )
    return sfac_GetMultiGlyphIDs(v5, v6, v8, v7, a5);
  else
    return v10;
}
