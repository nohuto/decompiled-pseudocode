/*
 * XREFs of MiParseImageSectionHeaders @ 0x140506B60
 * Callers:
 *     MiBuildImageControlArea @ 0x1405065E4 (MiBuildImageControlArea.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 *     MiMakeSubsectionPte @ 0x1401F25A8 (MiMakeSubsectionPte.c)
 */

__int64 __fastcall MiParseImageSectionHeaders(int a1, __int64 *a2, __int64 a3, int a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // r10
  int v9; // r11d
  __int64 *v10; // rsi
  __int64 *v11; // rbx
  _DWORD *i; // rcx
  unsigned int v13; // edx
  unsigned int v14; // r9d
  __int64 v16; // rbp
  __int64 v17; // r13
  __int64 v18; // rdx
  unsigned int v19; // r10d
  unsigned int v20; // eax
  unsigned int *v21; // r15
  __int64 v22; // r9
  unsigned int v23; // r8d
  unsigned int v24; // r12d
  int v25; // eax
  unsigned int v26; // edx
  int v27; // edx
  unsigned int v28; // r8d
  unsigned int v29; // r11d
  unsigned int v30; // r10d
  __int64 v31; // rax
  int v32; // ecx
  __int16 v33; // dx
  char v34; // dl
  __int64 DemandZeroPte; // rax
  char v36; // dl
  __int64 v37; // r10
  __int64 v38; // r11
  char v39; // cl
  unsigned int v40; // esi
  int v41; // ebp
  unsigned int v42; // r13d
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  bool v47; // zf
  unsigned int v48; // ecx
  char v49; // [rsp+20h] [rbp-68h]
  char v50; // [rsp+21h] [rbp-67h]
  unsigned int v51; // [rsp+24h] [rbp-64h]
  unsigned int v52; // [rsp+28h] [rbp-60h]
  int v53; // [rsp+2Ch] [rbp-5Ch]
  __int64 v54; // [rsp+30h] [rbp-58h]
  unsigned int *v55; // [rsp+38h] [rbp-50h]
  __int64 v56; // [rsp+40h] [rbp-48h]
  int v57; // [rsp+90h] [rbp+8h]
  int v59; // [rsp+A8h] [rbp+20h]

  v59 = a4;
  v57 = a1;
  v6 = *a2;
  v7 = (__int64)(a2 + 16);
  v8 = *((unsigned int *)a2 + 43);
  v9 = a4;
  v10 = a2;
  v11 = (__int64 *)(a2[17] + 8 * v8);
  if ( (a1 & 0x80000) == 0 )
  {
    v16 = a5;
    v17 = *(_QWORD *)(v6 + 56);
    v18 = *(_QWORD *)(v6 + 32) + (unsigned int)((_DWORD)v8 << 12);
    v19 = *(_DWORD *)(a5 + 12);
    v20 = *(_DWORD *)(v17 + 56) + 1;
    v54 = v18;
    v52 = v19;
    v56 = v17;
    if ( a4 )
    {
      v21 = (unsigned int *)(a3 + 20);
      v22 = 0LL;
      v23 = a6;
      v55 = v21;
      while ( 1 )
      {
        v24 = *(v21 - 3);
        if ( !v24 )
          v24 = *(v21 - 1);
        v25 = *(v21 - 1);
        if ( !v25 && *v21 != (_DWORD)v22 )
        {
          if ( (a1 & 0x10000) != 0 )
          {
            dword_1403267C0 = 61;
            return 3221225595LL;
          }
          *v21 = v22;
        }
        if ( *v21 + v25 < *v21 )
        {
          dword_1403267C0 = 25;
          return 3221225595LL;
        }
        *(_QWORD *)(v7 + 16) = v7 + 56;
        v7 += 56LL;
        *(_QWORD *)v7 = v10;
        *(_QWORD *)(v7 + 16) = v22;
        *(_QWORD *)(v7 + 24) = v22;
        *(_DWORD *)(v7 + 52) = v22;
        if ( v18 != *(_QWORD *)v16 + *(v21 - 2) || !v24 )
        {
          dword_1403267C0 = 26;
          return 3221225595LL;
        }
        if ( v19 + v24 - 1 <= v24 )
        {
          dword_1403267C0 = 43;
          return 3221225595LL;
        }
        v26 = (~(v19 - 1) >> 12) & ((v19 + (unsigned __int64)v24 - 1) >> 12);
        *(_DWORD *)(v7 + 44) = v26;
        if ( v26 > v23 )
        {
          dword_1403267C0 = 27;
          return 3221225595LL;
        }
        if ( v9 == 1 )
        {
          if ( v26 != v23 )
            v26 = v23;
          *(_DWORD *)(v7 + 44) = v26;
        }
        v27 = *(_DWORD *)(v16 + 8);
        v28 = v23 - *(_DWORD *)(v7 + 44);
        *(_DWORD *)(v7 + 32) = v22;
        v29 = *v21 >> 9;
        *(_DWORD *)(v7 + 36) = v29;
        v51 = v28;
        v30 = ~(v27 - 1) & (*v21 + *(v21 - 1) + v27 - 1);
        if ( v30 < *v21 )
        {
          dword_1403267C0 = 54;
          return 3221225595LL;
        }
        *(_QWORD *)(v7 + 8) = v11;
        *(_DWORD *)(v7 + 40) = (v30 >> 9) - v29;
        v31 = (unsigned int)v22;
        *(_WORD *)(v7 + 34) = *(_WORD *)(v7 + 34) & 0xF | (16 * (v30 & 0x1FF));
        v32 = v21[4];
        if ( (v32 & 0x20000000) != 0 )
          v31 = 1LL;
        if ( (v32 & 0x40000000) != 0 )
          v31 = (unsigned int)v31 | 2;
        if ( v32 < 0 )
          v31 = (unsigned int)v31 | 4;
        if ( (v32 & 0x10000000) != 0 )
          v31 = (unsigned int)v31 | 8;
        v33 = MiImageProtectionArray[v31];
        if ( (MiImageProtectionArray[v31] & 2) != 0 )
          *(_BYTE *)(v17 + 50) = 1;
        *(_WORD *)(v7 + 32) ^= (*(_WORD *)(v7 + 32) ^ (2 * v33)) & 0x3E;
        MiMakeSubsectionPte(v7);
        DemandZeroPte = MiMakeDemandZeroPte(v34);
        v38 = DemandZeroPte;
        if ( !*v21 )
          v37 = DemandZeroPte;
        v39 = 0;
        v53 = *v21 + *(v21 - 1);
        v50 = 0;
        v49 = 0;
        if ( (v36 & 4) != 0 )
        {
          if ( (v36 & 5) == 5 )
          {
            v49 = 1;
          }
          else
          {
            *(_WORD *)(v7 + 34) |= 2u;
            v39 = 1;
            *((_DWORD *)v10 + 14) |= 0x20000u;
            v50 = 1;
          }
        }
        v40 = v22;
        v41 = v22;
        *(_BYTE *)(v6 + 14) ^= (*(_BYTE *)(v6 + 14) ^ (2 * v36)) & 0x3E;
        v42 = *(v21 - 1);
        v18 = v54;
        if ( *(_DWORD *)(v7 + 44) > (unsigned int)v22 )
        {
          while ( 1 )
          {
            if ( v40 >= v24 )
            {
              *v11 = v22;
              if ( MiPteInShadowRange((unsigned __int64)v11) )
                MiWritePteShadow(v46, v22);
              *(_DWORD *)(v7 + 52) ^= (*(_DWORD *)(v7 + 52) ^ (*(_DWORD *)(v7 + 52) + 1)) & 0x7FFFFFFF;
              goto LABEL_61;
            }
            if ( v39 == 1 )
              ++*(_QWORD *)(v6 + 16);
            if ( v49 == 1 )
              ++*(_QWORD *)(v6 + 48);
            if ( v40 >= v42 )
            {
              *v11 = v38;
              if ( MiPteInShadowRange((unsigned __int64)v11) )
              {
                MiWritePteShadow(v45, v38);
                goto LABEL_61;
              }
            }
            else
            {
              *v11 = v37;
              if ( MiPteInShadowRange((unsigned __int64)v11) )
              {
                MiWritePteShadow(v44, v37);
LABEL_61:
                v43 = v54;
              }
            }
            v39 = v50;
            v18 = v43 + 4096;
            v40 += 4096;
            v54 = v18;
            ++v11;
            if ( (unsigned int)++v41 >= *(_DWORD *)(v7 + 44) )
            {
              v21 = v55;
              break;
            }
          }
        }
        v21 += 10;
        v16 = a5;
        v47 = v59 == 1;
        v9 = v59 - 1;
        v17 = v56;
        --v59;
        v55 = v21;
        if ( v47 )
          break;
        a1 = v57;
        v23 = v51;
        v10 = a2;
        v19 = v52;
      }
      v48 = v51;
      v20 = v53;
    }
    else
    {
      v48 = a6;
    }
    if ( v20 <= *(_DWORD *)(v17 + 56) )
    {
      if ( v48 < *(_DWORD *)(v16 + 12) >> 12 )
      {
        if ( v48 )
          memset(v11, 0, 8LL * v48);
        return 0LL;
      }
      else
      {
        dword_1403267C0 = 34;
        return 3221225595LL;
      }
    }
    else
    {
      dword_1403267C0 = 33;
      return 3221225595LL;
    }
  }
  if ( !a4 )
    return 0LL;
  for ( i = (_DWORD *)(a3 + 20); ; i += 10 )
  {
    v13 = *(i - 3);
    if ( !v13 )
      v13 = *(i - 1);
    v14 = *(i - 1);
    if ( v14 + *i < *i )
      break;
    if ( *i != *(i - 2) || v13 > v14 )
    {
      dword_1403267C0 = 21;
      return 3221225595LL;
    }
    if ( !--v9 )
      return 0LL;
  }
  dword_1403267C0 = 20;
  return 3221225595LL;
}
