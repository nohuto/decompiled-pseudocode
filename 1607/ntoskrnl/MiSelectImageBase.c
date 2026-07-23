/*
 * XREFs of MiSelectImageBase @ 0x14046D450
 * Callers:
 *     MiRelocateImageAgain @ 0x14042B18C (MiRelocateImageAgain.c)
 *     MiRelocateImage @ 0x140507390 (MiRelocateImage.c)
 * Callees:
 *     MiGetImageBitMapInfo @ 0x14007CAFC (MiGetImageBitMapInfo.c)
 *     MiSetControlAreaSystemVa @ 0x1400B2A64 (MiSetControlAreaSystemVa.c)
 *     ExGenRandom @ 0x1400EE314 (ExGenRandom.c)
 *     MiSelectBitMapForImage @ 0x14046D6C8 (MiSelectBitMapForImage.c)
 *     MiObtainRelocationBits @ 0x14046D704 (MiObtainRelocationBits.c)
 *     MiSelectRelocationStartHint @ 0x14046D81C (MiSelectRelocationStartHint.c)
 *     MiSelectSystemImageAddress @ 0x1404B2AC8 (MiSelectSystemImageAddress.c)
 */

__int64 __fastcall MiSelectImageBase(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned __int64 *a5)
{
  __int64 v5; // rbp
  __int64 v7; // rbx
  int v10; // eax
  int v11; // r11d
  unsigned int v12; // esi
  unsigned int v13; // eax
  unsigned int v14; // r14d
  int v15; // r10d
  __int64 v16; // rdx
  unsigned __int64 v17; // rdi
  unsigned int started; // eax
  unsigned int v19; // eax
  unsigned __int64 v20; // rbx
  __int64 v22; // rax
  unsigned int v23; // ecx
  __int64 v24; // rax
  unsigned int v25; // ecx
  unsigned __int64 v26; // r8
  unsigned int v27; // eax
  _QWORD v28[9]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v30; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v31; // [rsp+88h] [rbp+20h] BYREF

  v5 = *(_QWORD *)a2;
  v7 = *(_QWORD *)(a2 + 56);
  v10 = MiSelectBitMapForImage(a2);
  MiGetImageBitMapInfo(v10, v28, &v30, &v31);
  v12 = -1;
  *(_DWORD *)(v5 + 92) ^= (*(_DWORD *)(v5 + 92) ^ (v11 << 29)) & 0x60000000;
  v13 = *(_DWORD *)(a2 + 8);
  v14 = (v13 + 15) >> 4;
  if ( v15 == 1 )
  {
    *(_DWORD *)(v5 + 88) = -1;
    *(_WORD *)(v5 + 92) = 0;
    v20 = *(_QWORD *)(a2 + 32);
    goto LABEL_9;
  }
  v16 = *(_QWORD *)(a1 + 40);
  v17 = *(_QWORD *)(a2 + 32) - v16;
  if ( !a3 )
  {
    if ( (*(_WORD *)(v7 + 44) & 0x2000) != 0 )
    {
      started = MiSelectRelocationStartHint(v28, (unsigned __int16)v14, v31);
      if ( started != -1 )
      {
        v19 = MiObtainRelocationBits(v28, (unsigned __int16)v14, started, 0LL);
        v12 = v19;
        if ( v19 != -1 )
        {
          v20 = v30 - ((v19 + (unsigned __int64)(unsigned __int16)v14) << 16);
          if ( v20 == v17 )
          {
            v27 = MiObtainRelocationBits(v28, (unsigned __int16)v14, v19 + (unsigned __int16)v14, 1LL);
            if ( v27 != -1 )
              v12 = v27;
            v20 = v30 - (((unsigned __int16)v14 + (unsigned __int64)v12) << 16);
          }
          if ( v12 != -1 )
            goto LABEL_8;
        }
      }
    }
    else
    {
      if ( v16 )
      {
        *a5 = *(_QWORD *)(a2 + 32);
        return 0LL;
      }
      if ( v11 == 2 )
      {
        v20 = ((unsigned int)ExGenRandom(1) % (131073 - (unsigned __int64)(unsigned __int16)v14) + 2146828288) << 16;
LABEL_8:
        *(_DWORD *)(v5 + 88) = v12;
        *(_WORD *)(v5 + 92) = v14;
LABEL_9:
        *a5 = v20;
        return 0LL;
      }
    }
    v23 = (unsigned int)ExGenRandom(1) % 0xFE;
    v24 = (unsigned __int16)v14 << 16;
    v25 = (v23 + 1) << 16;
    if ( v17 <= 0x7FFFFFFEFFFFLL )
    {
      v26 = v24 + v17;
      if ( v24 + v17 > v17 && v26 <= 0x7FFFFFFEFFFFLL )
      {
        if ( v25 + *(_QWORD *)(a1 + 40) )
        {
          if ( v17 <= v25 )
          {
            v20 = v25 + v17;
            if ( v20 >= v17 && (unsigned int)v24 + v20 <= 0x7FFFFFFDFFFFLL && (unsigned int)v24 + v20 >= v26 )
              goto LABEL_25;
            return 3221225595LL;
          }
          v20 = v17 - v25;
        }
        else
        {
          v20 = *(_QWORD *)(a2 + 32);
        }
LABEL_25:
        v12 = -1;
        goto LABEL_8;
      }
    }
    return 3221225595LL;
  }
  v22 = MiSelectSystemImageAddress(a3, v13);
  v20 = v22;
  if ( v22 )
  {
    *(_WORD *)(v5 + 92) = v14;
    *(_DWORD *)(v5 + 88) = (unsigned __int64)(v22 + 0x800000000000LL) >> 16;
    MiSetControlAreaSystemVa(v5, a3);
    goto LABEL_9;
  }
  return 3221225626LL;
}
