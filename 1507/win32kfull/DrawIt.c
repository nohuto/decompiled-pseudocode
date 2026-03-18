/*
 * XREFs of DrawIt @ 0x1C005105C
 * Callers:
 *     DrawScrollArrow @ 0x1C004F7E0 (DrawScrollArrow.c)
 *     DrawFrameControl @ 0x1C00564A4 (DrawFrameControl.c)
 * Callees:
 *     GreSetTextColor @ 0x1C005184C (GreSetTextColor.c)
 *     GreExtTextOutWInternal @ 0x1C00EA458 (GreExtTextOutWInternal.c)
 */

__int64 __fastcall DrawIt(HDC a1, _DWORD *a2, __int16 a3, unsigned __int16 a4)
{
  int v5; // r11d
  int v8; // eax
  int v9; // r9d
  int v10; // r8d
  int v11; // edi
  int v12; // esi
  int v13; // r15d
  unsigned __int16 v15; // [rsp+88h] [rbp+20h] BYREF

  v15 = a4;
  v5 = a2[1];
  v8 = a2[2] - *a2;
  v9 = a2[3] - v5;
  v10 = v9;
  if ( v8 < v9 )
    v10 = a2[2] - *a2;
  v11 = *a2 + (v8 - v10) / 2;
  v12 = v5 + (v9 - v10) / 2;
  v13 = a3 & 0x100;
  GreSetTextColor(a1);
  if ( (a3 & 0x300) != 0 )
  {
    ++v11;
    ++v12;
  }
  GreExtTextOutWInternal(a1, v11, v12, 0, 0LL, &v15, 1, 0LL, 0LL, 0);
  if ( v13 )
  {
    GreSetTextColor(a1);
    GreExtTextOutWInternal(a1, v11 - 1, v12 - 1, 0, 0LL, &v15, 1, 0LL, 0LL, 0);
  }
  GreSetTextColor(a1);
  return 1LL;
}
