/*
 * XREFs of RIMExtractCustomPTPSettings @ 0x1C00E2368
 * Callers:
 *     RIMGetMaxCountFeatureDetails @ 0x1C00062DC (RIMGetMaxCountFeatureDetails.c)
 * Callees:
 *     RIMExtractCustomPTPSetting @ 0x1C00E2064 (RIMExtractCustomPTPSetting.c)
 */

__int64 __fastcall RIMExtractCustomPTPSettings(
        __int64 a1,
        struct _HIDP_PREPARSED_DATA *a2,
        __int64 a3,
        char *a4,
        unsigned __int16 a5,
        unsigned __int16 a6)
{
  unsigned __int16 v7; // r14
  unsigned __int16 v9; // r15
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  __int64 result; // rax
  int v16; // ecx
  int v17; // [rsp+70h] [rbp+8h] BYREF

  *(_BYTE *)(a1 + 232) &= 0xF8u;
  *(_DWORD *)(a1 + 236) = 0;
  v7 = a6;
  v9 = a5;
  *(_DWORD *)(a1 + 240) = 1000;
  *(_DWORD *)(a1 + 244) = 50;
  *(_DWORD *)(a1 + 248) = 25;
  if ( (int)RIMExtractCustomPTPSetting(226LL, a2, a3, a4, v9, v7, 0xE2u, 1, &v17) >= 0 )
  {
    v12 = v17;
    *(_BYTE *)(a1 + 232) |= 1u;
    *(_DWORD *)(a1 + 236) = v12;
  }
  if ( (int)RIMExtractCustomPTPSetting(227LL, a2, a3, a4, v9, v7, 0xE3u, 1, &v17) >= 0 )
  {
    v13 = v17;
    *(_BYTE *)(a1 + 232) |= 1u;
    *(_DWORD *)(a1 + 240) = v13;
  }
  if ( (int)RIMExtractCustomPTPSetting(225LL, a2, a3, a4, v9, v7, 0xE1u, 2, &v17) >= 0 )
    *(_BYTE *)(a1 + 232) ^= (*(_BYTE *)(a1 + 232) ^ (4 * (v17 != 0))) & 4;
  if ( (int)RIMExtractCustomPTPSetting(228LL, a2, a3, a4, v9, v7, 0xE4u, 0, &v17) >= 0 )
  {
    v14 = v17;
    if ( (unsigned int)(v17 - 1) <= 0x63 )
    {
      *(_BYTE *)(a1 + 232) |= 2u;
      *(_DWORD *)(a1 + 244) = v14;
    }
  }
  result = RIMExtractCustomPTPSetting(229LL, a2, a3, a4, v9, v7, 0xE5u, 0, &v17);
  if ( (int)result >= 0 )
  {
    v16 = v17;
    result = (unsigned int)(v17 - 1);
    if ( (unsigned int)result <= 0x63 )
    {
      *(_BYTE *)(a1 + 232) |= 2u;
      *(_DWORD *)(a1 + 248) = v16;
    }
  }
  return result;
}
