/*
 * XREFs of MiSelectImageBase @ 0x1403C6738
 * Callers:
 *     MiRelocateImage @ 0x1403C5E30 (MiRelocateImage.c)
 *     MiRelocateImageAgain @ 0x1403F753C (MiRelocateImageAgain.c)
 * Callees:
 *     MiGetImageBitMapInfo @ 0x140006EF4 (MiGetImageBitMapInfo.c)
 *     ExGenRandom @ 0x14002D854 (ExGenRandom.c)
 *     MiSetControlAreaSystemVa @ 0x1400F2B30 (MiSetControlAreaSystemVa.c)
 *     MiSelectBitMapForImage @ 0x1403C69B0 (MiSelectBitMapForImage.c)
 *     MiObtainRelocationBits @ 0x1403C69EC (MiObtainRelocationBits.c)
 *     MiSelectRelocationStartHint @ 0x1403C6B04 (MiSelectRelocationStartHint.c)
 *     MiSelectSystemImageAddress @ 0x1404A6D80 (MiSelectSystemImageAddress.c)
 */

__int64 __fastcall MiSelectImageBase(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char **a5)
{
  __int64 v5; // rsi
  __int64 v7; // rbx
  unsigned int v8; // r12d
  int v10; // eax
  int v11; // r11d
  __int64 v12; // r8
  unsigned int v13; // edi
  unsigned __int64 v14; // rbp
  unsigned int v15; // r14d
  int v16; // r10d
  unsigned int started; // eax
  unsigned int v18; // eax
  char *v19; // rbx
  __int64 v21; // rax
  unsigned int v22; // ecx
  __int64 v23; // rax
  unsigned int v24; // ecx
  unsigned __int64 v25; // r8
  unsigned int v26; // eax
  _QWORD v27[9]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v29; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v30; // [rsp+88h] [rbp+20h] BYREF

  v5 = *(_QWORD *)a2;
  v7 = *(_QWORD *)(a2 + 56);
  v8 = a3;
  v10 = MiSelectBitMapForImage(a2, a2, a3);
  MiGetImageBitMapInfo(v10, v27, &v29, &v30);
  *(_DWORD *)(v5 + 92) ^= (*(_DWORD *)(v5 + 92) ^ (v11 << 29)) & 0x60000000;
  v12 = *(_QWORD *)(a1 + 40);
  v13 = -1;
  v14 = *(_QWORD *)(a2 + 32) - v12;
  v15 = (unsigned int)(*(_DWORD *)(a2 + 8) + 15) >> 4;
  if ( v16 == 1 )
  {
    *(_DWORD *)(v5 + 88) = -1;
    *(_WORD *)(v5 + 92) = 0;
    v19 = *(char **)(a2 + 32);
    goto LABEL_9;
  }
  if ( v8 )
  {
    v21 = MiSelectSystemImageAddress(v8);
    v19 = (char *)v21;
    if ( v21 )
    {
      *(_WORD *)(v5 + 92) = v15;
      *(_DWORD *)(v5 + 88) = (unsigned __int64)(v21 + 0x80000000000LL) >> 16;
      MiSetControlAreaSystemVa(v5, v8);
      goto LABEL_9;
    }
    return 3221225626LL;
  }
  else
  {
    if ( (*(_WORD *)(v7 + 44) & 0x2000) != 0 )
    {
      started = MiSelectRelocationStartHint(v27, (unsigned __int16)v15, v30);
      if ( started != -1 )
      {
        v18 = MiObtainRelocationBits(v27, (unsigned __int16)v15, started, 0LL);
        v13 = v18;
        if ( v18 != -1 )
        {
          v19 = (char *)(v29 - (((unsigned __int16)v15 + (unsigned __int64)v18) << 16));
          if ( v19 == (char *)v14 )
          {
            v26 = MiObtainRelocationBits(v27, (unsigned __int16)v15, v18 + (unsigned __int16)v15, 1LL);
            if ( v26 != -1 )
              v13 = v26;
            v19 = (char *)(v29 - (((unsigned __int16)v15 + (unsigned __int64)v13) << 16));
          }
          if ( v13 != -1 )
            goto LABEL_8;
        }
      }
    }
    else
    {
      if ( v12 )
      {
        *a5 = *(char **)(a2 + 32);
        return 0LL;
      }
      if ( v11 == 2 )
      {
        v19 = (char *)MmHighestUserAddress
            + 0x10000 * ((unsigned int)ExGenRandom(1) % (131073 - (unsigned __int64)(unsigned __int16)v15))
            - 0x9FFFEFFFFLL;
LABEL_8:
        *(_DWORD *)(v5 + 88) = v13;
        *(_WORD *)(v5 + 92) = v15;
LABEL_9:
        *a5 = v19;
        return 0LL;
      }
    }
    v22 = (unsigned int)ExGenRandom(1) % 0xFE;
    v23 = (unsigned __int16)v15 << 16;
    v24 = (v22 + 1) << 16;
    if ( v14 <= (unsigned __int64)MmHighestUserAddress && (unsigned int)v23 <= (unsigned __int64)MmHighestUserAddress )
    {
      v25 = v23 + v14;
      if ( v23 + v14 > v14 && v25 <= (unsigned __int64)MmHighestUserAddress )
      {
        if ( !(v24 + *(_QWORD *)(a1 + 40)) )
        {
          v19 = *(char **)(a2 + 32);
          goto LABEL_24;
        }
        if ( v14 > v24 )
        {
          v19 = (char *)(v14 - v24);
LABEL_24:
          v13 = -1;
          goto LABEL_8;
        }
        v19 = (char *)(v24 + v14);
        if ( (unsigned __int64)v19 >= v14
          && &v19[(unsigned int)v23] <= (char *)MmHighestUserAddress - 0x10000
          && (unsigned __int64)&v19[(unsigned int)v23] >= v25 )
        {
          goto LABEL_24;
        }
      }
    }
    return 3221225595LL;
  }
}
