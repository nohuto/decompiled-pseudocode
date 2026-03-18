/*
 * XREFs of bConvertExtras @ 0x1C0012730
 * Callers:
 *     bComputeIFISIZE @ 0x1C00120E4 (bComputeIFISIZE.c)
 *     vFill_IFIMETRICS @ 0x1C00130A4 (vFill_IFIMETRICS.c)
 * Callees:
 *     bConvertSwap @ 0x1C001284C (bConvertSwap.c)
 *     GetCodePageFromSpecId @ 0x1C02451B0 (GetCodePageFromSpecId.c)
 *     bConvertMBCS @ 0x1C0245254 (bConvertMBCS.c)
 *     bConvertMac @ 0x1C02453AC (bConvertMac.c)
 */

_BOOL8 __fastcall bConvertExtras(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // eax
  int CodePageFromSpecId; // ebp
  __int64 v12; // r8

  if ( *(_WORD *)(a2 + 132) != 3 )
  {
    if ( !(unsigned int)bConvertMac(
                          a1 + *(unsigned int *)(a2 + 92),
                          a2 + 112,
                          *(_QWORD *)(a2 + 8),
                          *(unsigned int *)(a2 + 16))
      || !(unsigned int)bConvertMac(
                          a1 + *(unsigned int *)(a2 + 108),
                          a2 + 128,
                          *(_QWORD *)(a2 + 72),
                          *(unsigned int *)(a2 + 80))
      || !(unsigned int)bConvertMac(
                          a1 + *(unsigned int *)(a2 + 104),
                          a2 + 124,
                          *(_QWORD *)(a2 + 56),
                          *(unsigned int *)(a2 + 64)) )
    {
      return 0LL;
    }
    v9 = bConvertMac(a1 + *(unsigned int *)(a2 + 100), a2 + 120, *(_QWORD *)(a2 + 40), *(unsigned int *)(a2 + 48));
    return v9 != 0;
  }
  if ( (unsigned __int16)(*(_WORD *)(a2 + 134) - 3) > 2u )
  {
    if ( !(unsigned int)bConvertSwap(
                          a1 + *(unsigned int *)(a2 + 92),
                          a2 + 112,
                          *(_QWORD *)(a2 + 8),
                          *(unsigned int *)(a2 + 16)) )
      return 0LL;
    v4 = *(_QWORD *)(a2 + 24);
    if ( v4 )
    {
      if ( !(unsigned int)bConvertSwap(a1 + *(unsigned int *)(a2 + 96), a2 + 116, v4, *(unsigned int *)(a2 + 32)) )
        return 0LL;
      if ( a1 )
        *(_WORD *)(*(unsigned int *)(a2 + 116) + a1 + *(unsigned int *)(a2 + 96)) = 0;
    }
    if ( !(unsigned int)bConvertSwap(
                          a1 + *(unsigned int *)(a2 + 108),
                          a2 + 128,
                          *(_QWORD *)(a2 + 72),
                          *(unsigned int *)(a2 + 80))
      || !(unsigned int)bConvertSwap(
                          a1 + *(unsigned int *)(a2 + 104),
                          a2 + 124,
                          *(_QWORD *)(a2 + 56),
                          *(unsigned int *)(a2 + 64)) )
    {
      return 0LL;
    }
    v5 = a2 + 120;
    v6 = *(unsigned int *)(a2 + 48);
    v7 = a1 + *(unsigned int *)(a2 + 100);
    v8 = *(_QWORD *)(a2 + 40);
    goto LABEL_8;
  }
  CodePageFromSpecId = GetCodePageFromSpecId();
  if ( !(unsigned int)bConvertMBCS(
                        (int)a1 + *(_DWORD *)(a2 + 92),
                        (int)a2 + 112,
                        *(_QWORD *)(a2 + 8),
                        *(_DWORD *)(a2 + 16),
                        CodePageFromSpecId) )
    return 0LL;
  v12 = *(_QWORD *)(a2 + 24);
  if ( v12 )
  {
    if ( !(unsigned int)bConvertMBCS(
                          (int)a1 + *(_DWORD *)(a2 + 96),
                          (int)a2 + 116,
                          v12,
                          *(_DWORD *)(a2 + 32),
                          CodePageFromSpecId) )
      return 0LL;
    if ( a1 )
      *(_WORD *)(*(unsigned int *)(a2 + 116) + a1 + *(unsigned int *)(a2 + 96)) = 0;
  }
  if ( !(unsigned int)bConvertMBCS(
                        (int)a1 + *(_DWORD *)(a2 + 108),
                        (int)a2 + 128,
                        *(_QWORD *)(a2 + 72),
                        *(_DWORD *)(a2 + 80),
                        CodePageFromSpecId)
    || !(unsigned int)bConvertMBCS(
                        (int)a1 + *(_DWORD *)(a2 + 104),
                        (int)a2 + 124,
                        *(_QWORD *)(a2 + 56),
                        *(_DWORD *)(a2 + 64),
                        CodePageFromSpecId) )
  {
    return 0LL;
  }
  v5 = a2 + 120;
  v6 = *(unsigned int *)(a2 + 48);
  v7 = a1 + *(unsigned int *)(a2 + 100);
  v8 = *(_QWORD *)(a2 + 40);
  if ( (unsigned __int16)(*(_WORD *)(a2 + 134) - 4) <= 1u )
  {
LABEL_8:
    v9 = bConvertSwap(v7, v5, v8, v6);
    return v9 != 0;
  }
  v9 = bConvertMBCS(v7, v5, v8, v6, CodePageFromSpecId);
  return v9 != 0;
}
