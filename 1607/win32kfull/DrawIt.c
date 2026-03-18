/*
 * XREFs of DrawIt @ 0x1C00B0940
 * Callers:
 *     DrawFrameControl @ 0x1C005F534 (DrawFrameControl.c)
 *     DrawScrollArrow @ 0x1C00B0604 (DrawScrollArrow.c)
 * Callees:
 *     GreExtTextOutWInternal @ 0x1C00399F8 (GreExtTextOutWInternal.c)
 *     GreSetTextColor @ 0x1C00B112C (GreSetTextColor.c)
 */

__int64 __fastcall DrawIt(HDC a1, _DWORD *a2, __int16 a3, unsigned __int16 a4)
{
  int v5; // r11d
  int v8; // eax
  int v9; // r9d
  int v10; // r8d
  LONG v11; // edi
  LONG v12; // esi
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
