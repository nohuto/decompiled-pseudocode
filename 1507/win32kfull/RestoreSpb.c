/*
 * XREFs of RestoreSpb @ 0x1C01EA24C
 * Callers:
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0062A3C (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     FreeSpb @ 0x1C0008718 (FreeSpb.c)
 *     IsVisible @ 0x1C0057870 (IsVisible.c)
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     FindSpb @ 0x1C01EA224 (FindSpb.c)
 *     GreSaveScreenBits @ 0x1C0290ED8 (GreSaveScreenBits.c)
 */

__int64 __fastcall RestoreSpb(__int64 *a1, __int64 a2, HDC *a3)
{
  unsigned int v6; // esi
  __int64 **Spb; // rbx
  __int64 v8; // r14
  __int64 *v9; // r8
  int v10; // eax
  __int64 *v11; // r8
  HDC v12; // r12
  __int64 v13; // rdi

  v6 = 0;
  Spb = FindSpb(a1);
  v8 = a2;
  v9 = Spb[5];
  if ( v9 )
  {
    v6 = 1;
    v8 = ghrgnSPB1;
    if ( (unsigned int)GreCombineRgn(ghrgnSPB1, a2, v9, 1LL) < 2 )
      goto LABEL_10;
  }
  v10 = *((_DWORD *)Spb + 12);
  if ( (v10 & 1) != 0 )
  {
    v11 = Spb[7];
    *((_DWORD *)Spb + 12) = v10 & 0xFFFFFFFE;
    if ( GreSaveScreenBits(*gpDispInfo, 1LL, v11) )
    {
      SetRectRgnIndirect(ghrgnSPB2, Spb + 3);
      if ( (unsigned int)GreCombineRgn(a2, ghrgnSPB2, v8, 4LL) != 1 )
        v6 = 2;
      goto LABEL_12;
    }
LABEL_10:
    FreeSpb((__int64)Spb);
    return 1LL;
  }
  if ( !*a3 )
    *a3 = *(HDC *)(gpDispInfo + 24LL);
  v12 = *a3;
  v13 = GreSelectBitmap(ghdcMem, Spb[2]);
  if ( !v13 )
    goto LABEL_10;
  GreSelectVisRgn(v12, v8, 2LL);
  NtGdiBitBltInternal(
    v12,
    *((_DWORD *)Spb + 6),
    *((_DWORD *)Spb + 7),
    *((_DWORD *)Spb + 8) - *((_DWORD *)Spb + 6),
    *((_DWORD *)Spb + 9) - *((_DWORD *)Spb + 7),
    ghdcMem,
    (_DWORD)Spb[3] & 7,
    0,
    0xCC0020u,
    0,
    0);
  GreSelectBitmap(ghdcMem, v13);
  GreCombineRgn(a2, a2, v8, 4LL);
LABEL_12:
  if ( !a1[25] || !(unsigned int)IsVisible((__int64)a1) )
    FreeSpb((__int64)Spb);
  return v6;
}
