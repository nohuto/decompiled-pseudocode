/*
 * XREFs of MiSelectImageBase @ 0x14046B754
 * Callers:
 *     MiRelocateImageAgain @ 0x14046B548 (MiRelocateImageAgain.c)
 *     MiRelocateImage @ 0x14046E680 (MiRelocateImage.c)
 * Callees:
 *     ExGenRandom @ 0x140020AD0 (ExGenRandom.c)
 *     MiSetControlAreaSystemVa @ 0x1401588D8 (MiSetControlAreaSystemVa.c)
 *     MiSelectBitMapForImage @ 0x14046BA2C (MiSelectBitMapForImage.c)
 *     MiObtainRelocationBits @ 0x14046BA68 (MiObtainRelocationBits.c)
 *     MiSelectRelocationStartHint @ 0x14046BBA8 (MiSelectRelocationStartHint.c)
 *     MiSelectSystemImageAddress @ 0x140579030 (MiSelectSystemImageAddress.c)
 */

__int64 __fastcall MiSelectImageBase(__int64 a1, __int64 *a2, unsigned int a3, __int64 a4, char **a5)
{
  __int64 v5; // rbx
  int v9; // r9d
  int v10; // r11d
  __int64 v11; // r8
  __int64 v12; // r15
  unsigned int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // r10
  unsigned __int64 v16; // rbp
  unsigned int v17; // r14d
  unsigned int started; // eax
  unsigned int v19; // eax
  char *v20; // rbx
  __int64 v22; // rax
  unsigned int v23; // ecx
  __int64 v24; // rax
  unsigned int v25; // ecx
  unsigned __int64 v26; // r8
  unsigned int v27; // eax
  int *v28; // [rsp+20h] [rbp-38h] BYREF
  int *v29; // [rsp+28h] [rbp-30h]

  v5 = a2[7];
  v10 = MiSelectBitMapForImage(a2);
  v29 = 0LL;
  switch ( v10 )
  {
    case 1:
      goto LABEL_21;
    case 2:
      v11 = (unsigned int)dword_14034E92C;
      v12 = (__int64)MmHighestUserAddress - 0xFFFF;
      v28 = &dword_14034E940;
      goto LABEL_4;
    case 3:
      v29 = &dword_14034E918;
LABEL_21:
      v11 = (unsigned int)dword_14034E928;
      v28 = &dword_14034E930;
      goto LABEL_17;
  }
  v11 = (unsigned int)dword_14034E908;
  v28 = &dword_14034E918;
LABEL_17:
  v12 = 2013265920LL;
LABEL_4:
  v13 = -1;
  *(_DWORD *)(*a2 + 92) ^= (*(_DWORD *)(*a2 + 92) ^ (v10 << 29)) & 0x60000000;
  v14 = *((unsigned int *)a2 + 2);
  v15 = *(_QWORD *)(a1 + 40);
  v16 = a2[4] - v15;
  v17 = (unsigned int)(v14 + 15) >> 4;
  if ( !a3 )
  {
    if ( (*(_WORD *)(v5 + 44) & 0x2000) != 0 )
    {
      started = MiSelectRelocationStartHint(&v28, (unsigned __int16)v17, v11);
      if ( started != -1 )
      {
        v19 = ((__int64 (__fastcall *)(int **, _QWORD, _QWORD, _QWORD))MiObtainRelocationBits)(
                &v28,
                (unsigned __int16)v17,
                started,
                0LL);
        v13 = v19;
        if ( v19 != -1 )
        {
          v20 = (char *)(v12 - (((unsigned __int16)v17 + (unsigned __int64)v19) << 16));
          if ( v20 == (char *)v16 )
          {
            v27 = ((__int64 (__fastcall *)(int **, _QWORD, _QWORD, __int64))MiObtainRelocationBits)(
                    &v28,
                    (unsigned __int16)v17,
                    v19 + (unsigned __int16)v17,
                    1LL);
            if ( v27 != -1 )
              v13 = v27;
            v20 = (char *)(v12 - (((unsigned __int16)v17 + (unsigned __int64)v13) << 16));
          }
          if ( v13 != -1 )
            goto LABEL_10;
        }
      }
    }
    else
    {
      if ( v15 )
      {
        *a5 = (char *)a2[4];
        return 0LL;
      }
      if ( v10 == 2 )
      {
        v20 = (char *)MmHighestUserAddress
            + 0x10000 * ((unsigned int)ExGenRandom(1) % (131073 - (unsigned __int64)(unsigned __int16)v17))
            - 0x9FFFEFFFFLL;
LABEL_10:
        *(_DWORD *)(*a2 + 88) = v13;
        *(_WORD *)(*a2 + 92) = v17;
LABEL_11:
        *a5 = v20;
        return 0LL;
      }
    }
    v23 = (unsigned int)ExGenRandom(1) % 0xFE;
    v24 = (unsigned __int16)v17 << 16;
    v25 = (v23 + 1) << 16;
    if ( v16 <= (unsigned __int64)MmHighestUserAddress && (unsigned int)v24 <= (unsigned __int64)MmHighestUserAddress )
    {
      v26 = v24 + v16;
      if ( v24 + v16 > v16 && v26 <= (unsigned __int64)MmHighestUserAddress )
      {
        if ( v25 + *(_QWORD *)(a1 + 40) )
        {
          if ( v16 <= v25 )
          {
            v20 = (char *)(v25 + v16);
            if ( (unsigned __int64)v20 >= v16
              && &v20[v24] <= (char *)MmHighestUserAddress - 0x10000
              && (unsigned __int64)&v20[v24] >= v26 )
            {
              goto LABEL_34;
            }
            return 3221225595LL;
          }
          v20 = (char *)(v16 - v25);
        }
        else
        {
          v20 = (char *)a2[4];
        }
LABEL_34:
        v13 = -1;
        goto LABEL_10;
      }
    }
    return 3221225595LL;
  }
  if ( v9 == 1 )
  {
    *(_DWORD *)(*a2 + 88) = -1;
    *(_WORD *)(*a2 + 92) = 0;
    v20 = (char *)a2[4];
    goto LABEL_11;
  }
  v22 = MiSelectSystemImageAddress(a3, v14, v11);
  v20 = (char *)v22;
  if ( v22 )
  {
    *(_DWORD *)(*a2 + 88) = (unsigned __int64)(v22 + 0x80000000000LL) >> 16;
    *(_WORD *)(*a2 + 92) = v17;
    MiSetControlAreaSystemVa(*a2, a3);
    goto LABEL_11;
  }
  return 3221225626LL;
}
