/*
 * XREFs of HvpViewMapPinForFileOffset @ 0x1401B67AC
 * Callers:
 *     HvViewMapPinFile @ 0x1401B65E8 (HvViewMapPinFile.c)
 *     HvViewMapPinForFileOffset @ 0x14060FD20 (HvViewMapPinForFileOffset.c)
 * Callees:
 *     MmProtectSystemCacheView @ 0x1401E6CF0 (MmProtectSystemCacheView.c)
 *     HvpViewMapContiguousBytesAfterFileOffset @ 0x140581D6C (HvpViewMapContiguousBytesAfterFileOffset.c)
 *     HvpViewMapAcquireChargesForPinnedPages @ 0x14060FF74 (HvpViewMapAcquireChargesForPinnedPages.c)
 *     HvpViewMapCountPinMaskSetBits @ 0x14060FFBC (HvpViewMapCountPinMaskSetBits.c)
 */

__int64 __fastcall HvpViewMapPinForFileOffset(__int64 a1, int a2, int a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // ebp
  unsigned int v5; // esi
  unsigned int v6; // r15d
  unsigned int v8; // r14d
  unsigned int v9; // r10d
  __int64 v10; // r12
  __int64 v11; // rdi
  unsigned int v12; // r10d
  unsigned int v13; // r11d
  int v14; // r10d
  int v15; // r11d
  unsigned int v16; // r15d
  unsigned int v17; // edi
  _BYTE *v18; // r10
  __int64 v19; // r11
  unsigned int v20; // r12d
  __int64 v21; // r14
  unsigned int v22; // eax
  __int64 v23; // r10
  unsigned int v24; // ecx

  v3 = a2 & 0xFFFFF000;
  v4 = ((a2 + a3 + 4095) & 0xFFFFF000) - (a2 & 0xFFFFF000);
  v5 = 0;
  v6 = v4;
  v8 = 0;
  v9 = a2 & 0xFFFFF000;
  if ( v4 )
  {
    v10 = *(_QWORD *)(a1 + 24);
    do
    {
      v11 = *(_QWORD *)(v10 + 8LL * (HIBYTE(v9) & 0x7F)) + 32LL * ((v9 >> 18) & 0x3F);
      v13 = HvpViewMapContiguousBytesAfterFileOffset(a1, v9);
      if ( v13 > v6 )
        v13 = v6;
      v8 += HvpViewMapCountPinMaskSetBits((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)(v13 >> 12)) << ((v12 >> 12) & 0x3F)) & ~*(_QWORD *)(v11 + 16));
      v9 = v15 + v14;
      v6 -= v15;
    }
    while ( v6 );
    if ( v8 )
    {
      if ( (unsigned __int8)HvpViewMapAcquireChargesForPinnedPages(a1, v8) )
      {
        v16 = v4;
        v17 = v3;
        do
        {
          v20 = HvpViewMapContiguousBytesAfterFileOffset(a1, v17);
          if ( v20 > v16 )
            v20 = v16;
          if ( (*v18 & 1) == 0 )
          {
            v21 = *(_QWORD *)(v19 + 8LL * (((v17 & 0xFFFC0000) >> 24) & 0x7F))
                + 32LL * (((v17 & 0xFFFC0000) >> 18) & 0x3F);
            if ( (*(_QWORD *)v21 & 1) == 0 )
              MmProtectSystemCacheView(
                *(_QWORD *)v21 & 0xFFFFFFFFFFFFFFFEuLL,
                (*(_DWORD *)(v21 + 24) + 4095) & 0xFFFFF000,
                4LL);
            *(_QWORD *)v21 |= 1uLL;
          }
          v17 += v20;
          v16 -= v20;
        }
        while ( v16 );
        do
        {
          v22 = HvpViewMapContiguousBytesAfterFileOffset(a1, v3);
          if ( v22 > v4 )
            v22 = v4;
          v24 = v3 >> 12;
          v3 += v22;
          *(_QWORD *)(v23 + 16) |= 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)(v22 >> 12)) << (v24 & 0x3F);
          v4 -= v22;
        }
        while ( v4 );
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return v5;
}
