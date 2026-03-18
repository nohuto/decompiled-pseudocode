/*
 * XREFs of KeQuerySpeculationControlInformation @ 0x140699748
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KeKvaShadowingActive @ 0x140209EF0 (KeKvaShadowingActive.c)
 *     KiIsFbClearSupported @ 0x140209FA8 (KiIsFbClearSupported.c)
 */

__int64 __fastcall KeQuerySpeculationControlInformation(void *a1, unsigned int a2, int *a3)
{
  int v4; // ecx
  int v5; // esi
  unsigned int v6; // r12d
  unsigned int v7; // edx
  int v8; // r14d
  int v9; // edx
  ULONG_PTR v10; // r15
  int v11; // edx
  int v12; // ebx
  char v13; // di
  unsigned int v14; // edi
  unsigned int v15; // edi
  int v16; // eax
  int v17; // r8d
  int v18; // edx
  unsigned int v19; // ebx
  unsigned int v20; // ebx
  unsigned int v21; // ecx
  int v22; // ecx
  unsigned int v23; // ecx
  int v24; // ecx
  unsigned int v25; // ecx
  int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // [rsp+24h] [rbp-44h]
  _DWORD v29[16]; // [rsp+28h] [rbp-40h] BYREF
  char v32; // [rsp+88h] [rbp+20h]

  if ( a2 >= 4 )
  {
    v4 = 8;
    if ( a2 < 8 )
      v4 = a2;
    v28 = v4;
    *a3 = v4;
    v5 = dword_1403D123C;
    v6 = (unsigned int)dword_1403D123C >> 3;
    v7 = (dword_1403D123C & 0xC | ((unsigned int)dword_1403D123C >> 3) & 2) >> 1;
    v8 = KiSpeculationFeatures;
    if ( (KiSpeculationFeatures & 0x50) != 0 )
      v7 |= 8u;
    if ( (KiSpeculationFeatures & 4) != 0 )
      v7 |= 0x10u;
    if ( (dword_1403D123C & 0x10) != 0 && (dword_1403D123C & 0x20) != 0 )
      v7 |= 0x2000u;
    v9 = KiSpeculationFeatures & 0x40 | v7 & 0xFFFEE11F | (2
                                                         * (KiSpeculationFeatures & 0x10 | (unsigned __int16)(2 * (KiSpeculationFeatures & 0xA0 | (4 * (dword_1403D123C & 0xC0 | 0x10)))))) & 0xEFFF | ((((((unsigned int)KiSpeculationFeatures >> 8) & 1) == 0) | (16 * (KiSpeculationFeatures & 1 | 0x80))) << 12);
    v10 = KeFeatureBits2;
    v11 = (v9 ^ ((((unsigned __int8)KeFeatureBits2 >> 5) & 1) << 24)) & 0x1000000 ^ v9;
    v32 = KiKvaShadow;
    v12 = 0;
    if ( !KiKvaShadow || (v13 = 1, (KeFeatureBits2 & 8) == 0) )
      v13 = 0;
    v14 = v11 & 0xFDFFFFFF | ((v13 & 1 | 0x12) << 25);
    if ( (KeFeatureBits2 & 0x8000) != 0 && KiDisableTsx || !KiTsxSupported )
    {
      v15 = v14 | 0x18000000;
    }
    else if ( (KeFeatureBits2 & 0x10000) != 0 || (KeFeatureBits2 & 0x28) == 8 && (unsigned int)KeKvaShadowingActive() )
    {
      v15 = v14 & 0xE7FFFFFF | 0x10000000;
    }
    else if ( (v10 & 0x8000) != 0 )
    {
      v15 = v14 & 0xE7FFFFFF | 0x8000000;
    }
    else
    {
      v15 = v14 & 0xE7FFFFFF;
    }
    if ( (v10 & 0x10000) != 0 || !KiTsxSupportedAtBoot )
    {
      v17 = 1;
      v16 = 1;
    }
    else
    {
      v16 = 0;
      v17 = 1;
    }
    v29[0] = (v15 ^ (v16 << 30)) & 0x40000000 ^ v15;
    v18 = ((((v10 & 0x80000) != 0) ^ (unsigned __int8)(2 * ((v10 & 0x100000) != 0))) & 2 ^ ((v10 & 0x80000) != 0) ^ (unsigned __int8)(4 * ((v10 & 0x200000) != 0))) & 4 ^ (((v10 & 0x80000) != 0) ^ (unsigned __int8)(2 * ((v10 & 0x100000) != 0))) & 2 ^ (v10 >> 19) & 1;
    if ( v32 && KiIsFbClearSupported() )
      v12 = v17;
    v19 = v18 & 0xFFFFFFF7 | (8 * (v17 & v12 | 0x82));
    if ( (v8 & 0x8000) != 0 )
    {
      if ( (v5 & 4) != 0 || (v5 & 0x20) != 0 || (v5 & 0x1000) != 0 )
      {
        v20 = v19 & 0xFFFFFCFF | 0x100;
      }
      else if ( ((unsigned __int8)v6 & (unsigned __int8)v17) != 0 || (v5 & 0x2000) != 0 )
      {
        v20 = v19 & 0xFFFFFCFF;
      }
      else
      {
        v20 = v19 | 0x300;
      }
    }
    else
    {
      v20 = v19 & 0xFFFFFCFF | 0x200;
    }
    if ( (v8 & 0x200000) != 0 )
    {
      if ( (v5 & 4) != 0 || (v5 & 0x20) != 0 || (v5 & 0x8000) != 0 )
      {
        v21 = v20 & 0xFFF3E7FF | 0x800 | ((v17 & ((unsigned __int8)v10 >> 4) | 0x20) << 12) & 0xFFF3FFFF | 0x40000;
      }
      else if ( ((unsigned __int8)v6 & (unsigned __int8)v17) != 0
             || (BYTE2(dword_1403D123C) & (unsigned __int8)v17) != 0 )
      {
        v21 = v20 & 0xFFF3E7FF | 0x800 | ((v17 & ((unsigned __int8)v10 >> 4) | 0x20) << 12) & 0xFFF3FFFF;
      }
      else
      {
        v21 = v20 & 0xFFFFE7FF | 0x800 | ((v17 & ((unsigned __int8)v10 >> 4) | 0x20) << 12) | 0xC0000;
      }
    }
    else
    {
      v21 = v20 & 0xFFF3E7FF | 0x800 | ((v17 & ((unsigned __int8)v10 >> 4) | 0x20) << 12) & 0xFFF3FFFF | 0x80000;
    }
    v22 = v21 | 0x400000;
    if ( (v8 & 0x800000) != 0 )
    {
      if ( (v5 & 0x20000) != 0 )
      {
        v23 = v22 & 0xFE7FFFFF | 0x800000;
      }
      else if ( (v5 & 0x40000) != 0 )
      {
        v23 = v22 & 0xFE7FFFFF;
      }
      else
      {
        v23 = v22 | 0x1800000;
      }
    }
    else
    {
      v23 = v22 & 0xFE7FFFFF | 0x1000000;
    }
    v24 = v23 | 0x100000;
    if ( (v8 & 0x400000) != 0 )
      v25 = v24 | 0x200000;
    else
      v25 = v24 & 0xFFDFFFFF;
    if ( (v8 & 0x2000000) != 0 )
    {
      if ( (v5 & 0x100000) != 0 || (v5 & 4) != 0 )
      {
        v25 |= 0x40u;
      }
      else if ( (v5 & 0x200000) != 0 || ((unsigned __int8)v6 & (unsigned __int8)v17) != 0 )
      {
        v25 |= 0x80u;
      }
      else if ( (v5 & 0x400000) != 0 || (v5 & 0x800000) != 0 )
      {
        v25 |= 0x20u;
      }
    }
    v26 = v25 | 0x2000000;
    if ( (v8 & 0x8000000) != 0 )
    {
      if ( (v5 & 4) != 0 || (v5 & 0x20) != 0 || ((unsigned __int8)v17 & HIBYTE(dword_1403D123C)) != 0 )
      {
        v27 = v26 & 0xF3FFFFFF | 0x4000000;
      }
      else if ( ((unsigned __int8)v6 & (unsigned __int8)v17) != 0 || (v5 & 0x2000000) != 0 )
      {
        v27 = v26 & 0xF3FFFFFF;
      }
      else
      {
        v27 = v26 | 0xC000000;
      }
    }
    else
    {
      v27 = v26 & 0xF3FFFFFF | 0x8000000;
    }
    v29[1] = v27;
    memset(a1, 0, a2);
    memmove(a1, v29, v28);
    return 0LL;
  }
  else
  {
    *a3 = 8;
    return 3221225476LL;
  }
}
