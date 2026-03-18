/*
 * XREFs of RestoreSpb @ 0x1C01E12DC
 * Callers:
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00777E4 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     FreeSpb @ 0x1C000CAC0 (FreeSpb.c)
 *     NtGdiBitBltInternal @ 0x1C003E620 (NtGdiBitBltInternal.c)
 *     IsVisible @ 0x1C00AE7B0 (IsVisible.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     FindSpb @ 0x1C01E12B4 (FindSpb.c)
 *     GreSaveScreenBits @ 0x1C028FA38 (GreSaveScreenBits.c)
 */

__int64 __fastcall RestoreSpb(__int64 *a1, __int64 a2, HDC *a3)
{
  unsigned int v6; // esi
  __int64 **Spb; // rbx
  __int64 v8; // r14
  __int64 *v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  __int64 *v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  HDC v16; // r12
  __int64 v17; // rdi

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
  v12 = *((_DWORD *)Spb + 12);
  if ( (v12 & 1) != 0 )
  {
    v13 = Spb[7];
    *((_DWORD *)Spb + 12) = v12 & 0xFFFFFFFE;
    if ( GreSaveScreenBits(*gpDispInfo, 1LL, v13) )
    {
      SetRectRgnIndirect(ghrgnSPB2, Spb + 3);
      if ( (unsigned int)GreCombineRgn(a2, ghrgnSPB2, v8, 4LL) != 1 )
        v6 = 2;
      goto LABEL_12;
    }
LABEL_10:
    FreeSpb((__int64)Spb, v10, v11);
    return 1LL;
  }
  if ( !*a3 )
    *a3 = *(HDC *)(gpDispInfo + 24LL);
  v16 = *a3;
  v17 = GreSelectBitmap(ghdcMem, Spb[2]);
  if ( !v17 )
    goto LABEL_10;
  GreSelectVisRgn(v16, v8, 2LL);
  NtGdiBitBltInternal(
    v16,
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
  GreSelectBitmap(ghdcMem, v17);
  GreCombineRgn(a2, a2, v8, 4LL);
LABEL_12:
  if ( !a1[25] || !(unsigned int)IsVisible((__int64)a1) )
    FreeSpb((__int64)Spb, v14, v15);
  return v6;
}
