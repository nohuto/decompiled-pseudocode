/*
 * XREFs of MiParseImageSectionHeaders @ 0x1403CA140
 * Callers:
 *     MiBuildImageControlArea @ 0x1403C9B5C (MiBuildImageControlArea.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiParseImageSectionHeaders(int a1, __int64 *a2, __int64 a3, int a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r13
  __int64 *v7; // r15
  __int64 v8; // r10
  int v9; // edi
  __int64 *v10; // rbp
  __int64 *v11; // r14
  _DWORD *i; // rcx
  unsigned int v13; // edx
  unsigned int v14; // r9d
  __int64 v16; // rax
  __int64 v17; // r9
  unsigned int v18; // r10d
  __int64 v19; // r12
  unsigned int v20; // esi
  unsigned int *v21; // r11
  unsigned int v22; // r8d
  __int64 v23; // rdx
  int v24; // eax
  unsigned int v25; // edx
  unsigned int v26; // r8d
  int v27; // edx
  unsigned int v28; // r10d
  unsigned int v29; // r9d
  int v30; // edx
  __int64 v31; // rcx
  __int16 v32; // dx
  __int64 v33; // rsi
  __int64 v34; // rdi
  char v35; // cl
  char v36; // r8
  unsigned int v37; // ebp
  unsigned int v38; // r12d
  unsigned int v39; // eax
  bool v40; // zf
  unsigned int v41; // ecx
  char v42; // [rsp+20h] [rbp-68h]
  char v43; // [rsp+21h] [rbp-67h]
  unsigned int v44; // [rsp+24h] [rbp-64h]
  unsigned int v45; // [rsp+28h] [rbp-60h]
  unsigned int v46; // [rsp+2Ch] [rbp-5Ch]
  __int64 v47; // [rsp+30h] [rbp-58h]
  unsigned int v48; // [rsp+38h] [rbp-50h]
  unsigned int v49; // [rsp+3Ch] [rbp-4Ch]
  unsigned int *v50; // [rsp+40h] [rbp-48h]
  __int64 v51; // [rsp+48h] [rbp-40h]
  int v52; // [rsp+90h] [rbp+8h]
  int v54; // [rsp+A8h] [rbp+20h]

  v54 = a4;
  v52 = a1;
  v6 = *a2;
  v7 = a2 + 15;
  v8 = *((unsigned int *)a2 + 41);
  v9 = a4;
  v10 = a2;
  v11 = (__int64 *)(a2[16] + 8 * v8);
  if ( (a1 & 0x80000) != 0 )
  {
    if ( a4 )
    {
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
          dword_1402FE4B8 = 21;
          return 3221225595LL;
        }
        if ( !--v9 )
          return 0LL;
      }
      dword_1402FE4B8 = 20;
      return 3221225595LL;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    v16 = *(_QWORD *)(v6 + 56);
    v17 = *(_QWORD *)(v6 + 32) + (unsigned int)((_DWORD)v8 << 12);
    v18 = *(_DWORD *)(v16 + 56) + 1;
    v19 = a5;
    v47 = v17;
    v51 = v16;
    v20 = *(_DWORD *)(a5 + 12);
    v49 = v20;
    if ( v9 )
    {
      v21 = (unsigned int *)(a3 + 20);
      v22 = a6;
      v50 = v21;
      while ( 1 )
      {
        v23 = *(v21 - 3);
        v44 = v23;
        if ( !(_DWORD)v23 )
        {
          v23 = *(v21 - 1);
          v44 = *(v21 - 1);
        }
        v24 = *(v21 - 1);
        if ( !v24 && *v21 )
        {
          if ( (a1 & 0x10000) != 0 )
          {
            dword_1402FE4B8 = 61;
            return 3221225595LL;
          }
          *v21 = 0;
        }
        if ( *v21 + v24 < *v21 )
          break;
        v7[2] = (__int64)(v7 + 7);
        v7 += 7;
        *v7 = (__int64)v10;
        v7[2] = 0LL;
        v7[3] = 0LL;
        *((_DWORD *)v7 + 13) = 0;
        if ( v17 != *(_QWORD *)v19 + *(v21 - 2) || !(_DWORD)v23 )
        {
          dword_1402FE4B8 = 26;
          return 3221225595LL;
        }
        if ( v20 + (_DWORD)v23 - 1 <= (unsigned int)v23 )
        {
          dword_1402FE4B8 = 43;
          return 3221225595LL;
        }
        v25 = (~(v20 - 1) >> 12) & (((unsigned __int64)v20 + v23 - 1) >> 12);
        *((_DWORD *)v7 + 11) = v25;
        if ( v25 > v22 )
        {
          dword_1402FE4B8 = 27;
          return 3221225595LL;
        }
        v26 = v22 - v25;
        *((_DWORD *)v7 + 8) = 0;
        v27 = *(_DWORD *)(v19 + 8);
        v28 = *v21 >> 9;
        *((_DWORD *)v7 + 9) = v28;
        v45 = v26;
        v29 = ~(v27 - 1) & (*v21 + v27 + *(v21 - 1) - 1);
        if ( v29 < *v21 )
        {
          dword_1402FE4B8 = 54;
          return 3221225595LL;
        }
        v7[1] = (__int64)v11;
        *((_DWORD *)v7 + 10) = (v29 >> 9) - v28;
        *((_WORD *)v7 + 17) = *((_WORD *)v7 + 17) & 0xF | (16 * (v29 & 0x1FF));
        v30 = v21[4];
        v31 = (v30 & 0x20000000) != 0;
        if ( (v30 & 0x40000000) != 0 )
          v31 = (unsigned int)v31 | 2;
        if ( v30 < 0 )
          v31 = (unsigned int)v31 | 4;
        if ( (v30 & 0x10000000) != 0 )
          v31 = (unsigned int)v31 | 8;
        v32 = MiImageProtectionArray[v31];
        if ( (MiImageProtectionArray[v31] & 2) != 0 )
          *(_BYTE *)(v51 + 50) = 1;
        v33 = 32LL * (v32 & 0x1F);
        *((_WORD *)v7 + 16) ^= (*((_WORD *)v7 + 16) ^ (2 * v32)) & 0x3E;
        v34 = 16 * (((_QWORD)v7 << 12) | v7[4] & 0x3E | 0x40);
        if ( !*v21 )
          v34 = 32LL * (v32 & 0x1F);
        v18 = *v21 + *(v21 - 1);
        v35 = 0;
        v48 = v18;
        v36 = 0;
        v43 = 0;
        v42 = 0;
        if ( (v32 & 4) != 0 )
        {
          if ( (v32 & 5) == 5 )
          {
            v35 = 1;
            v43 = 1;
          }
          else
          {
            *((_WORD *)v7 + 17) |= 2u;
            v36 = 1;
            *((_DWORD *)v10 + 14) |= 0x20000u;
            v42 = 1;
          }
        }
        v37 = 0;
        v38 = 0;
        *(_BYTE *)(v6 + 14) ^= (*(_BYTE *)(v6 + 14) ^ (2 * v32)) & 0x3E;
        v39 = *(v21 - 1);
        v46 = v39;
        if ( *((_DWORD *)v7 + 11) )
        {
          do
          {
            if ( v37 >= v44 )
            {
              *v11 = 0LL;
              if ( MiPteInShadowRange((__int64)v11) )
                MiWritePteShadow((__int64)v11, 0LL);
              *((_DWORD *)v7 + 13) ^= (*((_DWORD *)v7 + 13) ^ (*((_DWORD *)v7 + 13) + 1)) & 0x7FFFFFFF;
            }
            else
            {
              if ( v36 == 1 )
                ++*(_QWORD *)(v6 + 16);
              if ( v35 == 1 )
                ++*(_QWORD *)(v6 + 48);
              if ( v37 >= v39 )
              {
                *v11 = v33;
                if ( MiPteInShadowRange((__int64)v11) )
                  MiWritePteShadow((__int64)v11, v33);
              }
              else
              {
                *v11 = v34;
                if ( MiPteInShadowRange((__int64)v11) )
                  MiWritePteShadow((__int64)v11, v34);
              }
            }
            v37 += 4096;
            v39 = v46;
            v17 = v47 + 4096;
            v35 = v43;
            ++v11;
            v36 = v42;
            ++v38;
            v47 += 4096LL;
          }
          while ( v38 < *((_DWORD *)v7 + 11) );
          v21 = v50;
          v18 = v48;
        }
        else
        {
          v17 = v47;
        }
        v19 = a5;
        v21 += 10;
        v40 = v54-- == 1;
        v50 = v21;
        if ( v40 )
        {
          v41 = v45;
          v16 = v51;
          goto LABEL_68;
        }
        a1 = v52;
        v22 = v45;
        v10 = a2;
        v20 = v49;
      }
      dword_1402FE4B8 = 25;
      return 3221225595LL;
    }
    else
    {
      v41 = a6;
LABEL_68:
      if ( v18 <= *(_DWORD *)(v16 + 56) )
      {
        if ( v41 < *(_DWORD *)(v19 + 12) >> 12 )
        {
          if ( v41 )
            memset(v11, 0, 8LL * v41);
          return 0LL;
        }
        else
        {
          dword_1402FE4B8 = 34;
          return 3221225595LL;
        }
      }
      else
      {
        dword_1402FE4B8 = 33;
        return 3221225595LL;
      }
    }
  }
}
