/*
 * XREFs of MiParseImageSectionHeaders @ 0x1404FC730
 * Callers:
 *     MiBuildImageControlArea @ 0x1404FC19C (MiBuildImageControlArea.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     MiMakeSubsectionPte @ 0x140225C5C (MiMakeSubsectionPte.c)
 *     MiGetImageProtection @ 0x1404FCBF8 (MiGetImageProtection.c)
 */

__int64 __fastcall MiParseImageSectionHeaders(char a1, __int64 *a2, __int64 a3, int a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r13
  __int64 v7; // r15
  __int64 v9; // rcx
  int v10; // r11d
  __int64 *v11; // rbp
  __int64 *v12; // r14
  _DWORD *i; // rcx
  unsigned int v14; // edx
  unsigned int v15; // r9d
  __int64 v17; // rsi
  unsigned int v18; // eax
  unsigned int v19; // edi
  __int64 v20; // r9
  unsigned int *v21; // r12
  unsigned int v22; // r8d
  __int64 v23; // rdx
  int v24; // eax
  unsigned int v25; // edx
  unsigned int v26; // r8d
  int v27; // edx
  unsigned int v28; // r11d
  unsigned int v29; // r9d
  char ImageProtection; // al
  __int64 SubsectionPte; // rdi
  char v32; // dl
  __int64 DemandZeroPte; // rax
  char v34; // dl
  char v35; // r10
  __int64 v36; // rsi
  char v37; // r10
  char v38; // r10
  unsigned int v39; // ebp
  unsigned int v40; // ecx
  unsigned int v41; // r12d
  char v42; // al
  bool v43; // zf
  unsigned int v44; // ecx
  unsigned int v45; // [rsp+20h] [rbp-68h]
  unsigned int v46; // [rsp+24h] [rbp-64h]
  unsigned int v47; // [rsp+28h] [rbp-60h]
  unsigned int v48; // [rsp+2Ch] [rbp-5Ch]
  int v49; // [rsp+30h] [rbp-58h]
  __int64 v50; // [rsp+38h] [rbp-50h]
  unsigned int *v51; // [rsp+40h] [rbp-48h]
  __int64 v52; // [rsp+48h] [rbp-40h]
  char v53; // [rsp+90h] [rbp+8h]
  int v55; // [rsp+A8h] [rbp+20h]

  v55 = a4;
  v6 = *a2;
  v7 = (__int64)(a2 + 15);
  v9 = *((unsigned int *)a2 + 41);
  v10 = a4;
  v11 = a2;
  v12 = (__int64 *)(a2[16] + 8 * v9);
  if ( (a1 & 8) != 0 )
  {
    if ( a4 )
    {
      for ( i = (_DWORD *)(a3 + 20); ; i += 10 )
      {
        v14 = *(i - 3);
        if ( !v14 )
          v14 = *(i - 1);
        v15 = *(i - 1);
        if ( v15 + *i < *i )
          break;
        if ( *i != *(i - 2) || v14 > v15 )
        {
          dword_14034E980 = 21;
          return 3221225595LL;
        }
        if ( !--v10 )
          return 0LL;
      }
      dword_14034E980 = 20;
      return 3221225595LL;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    v17 = a5;
    v52 = *(_QWORD *)(v6 + 56);
    v18 = *(_DWORD *)(v52 + 56) + 1;
    v19 = *(_DWORD *)(a5 + 12);
    v20 = *(_QWORD *)(v6 + 32) + (unsigned int)((_DWORD)v9 << 12);
    v50 = v20;
    v48 = v19;
    if ( v10 )
    {
      v21 = (unsigned int *)(a3 + 20);
      v22 = a6;
      v51 = v21;
      while ( 1 )
      {
        v23 = *(v21 - 3);
        v45 = v23;
        if ( !(_DWORD)v23 )
        {
          v23 = *(v21 - 1);
          v45 = *(v21 - 1);
        }
        v24 = *(v21 - 1);
        if ( !v24 )
          *v21 = 0;
        if ( *v21 + v24 < *v21 )
          break;
        *(_QWORD *)(v7 + 16) = v7 + 56;
        v7 += 56LL;
        *(_QWORD *)v7 = v11;
        *(_QWORD *)(v7 + 16) = 0LL;
        *(_QWORD *)(v7 + 24) = 0LL;
        *(_DWORD *)(v7 + 52) = 0;
        if ( v20 != *(_QWORD *)v17 + *(v21 - 2) || !(_DWORD)v23 )
        {
          dword_14034E980 = 26;
          return 3221225595LL;
        }
        if ( v19 + (_DWORD)v23 - 1 <= (unsigned int)v23 )
        {
          dword_14034E980 = 43;
          return 3221225595LL;
        }
        v25 = (~(v19 - 1) >> 12) & (((unsigned __int64)v19 + v23 - 1) >> 12);
        *(_DWORD *)(v7 + 44) = v25;
        if ( v25 > v22 )
        {
          dword_14034E980 = 27;
          return 3221225595LL;
        }
        if ( v10 == 1 )
        {
          if ( v25 != v22 )
            v25 = v22;
          *(_DWORD *)(v7 + 44) = v25;
        }
        v26 = v22 - *(_DWORD *)(v7 + 44);
        v27 = *(_DWORD *)(v17 + 8);
        *(_DWORD *)(v7 + 32) = 0;
        v28 = *v21 >> 9;
        *(_DWORD *)(v7 + 36) = v28;
        v46 = v26;
        v29 = ~(v27 - 1) & (*v21 + v27 + *(v21 - 1) - 1);
        if ( v29 < *v21 )
        {
          dword_14034E980 = 54;
          return 3221225595LL;
        }
        *(_QWORD *)(v7 + 8) = v12;
        *(_DWORD *)(v7 + 40) = (v29 >> 9) - v28;
        *(_WORD *)(v7 + 34) = *(_WORD *)(v7 + 34) & 0xF | (16 * (v29 & 0x1FF));
        ImageProtection = MiGetImageProtection(v21[4]);
        if ( (ImageProtection & 2) != 0 )
          *(_BYTE *)(v52 + 50) = 1;
        *(_WORD *)(v7 + 32) ^= (*(_WORD *)(v7 + 32) ^ (2 * ImageProtection)) & 0x3E;
        SubsectionPte = MiMakeSubsectionPte(v7);
        DemandZeroPte = MiMakeDemandZeroPte(v32);
        v36 = DemandZeroPte;
        if ( !*v21 )
          SubsectionPte = DemandZeroPte;
        v37 = v35 & 0xF9;
        v49 = *v21 + *(v21 - 1);
        v53 = v37;
        if ( (v34 & 4) != 0 )
        {
          if ( (v34 & 5) == 5 )
          {
            v38 = v37 | 4;
          }
          else
          {
            *(_WORD *)(v7 + 34) |= 2u;
            v38 = v37 | 2;
            *((_DWORD *)v11 + 14) |= 0x20000u;
          }
          v53 = v38;
        }
        v39 = 0;
        *(_BYTE *)(v6 + 14) ^= (*(_BYTE *)(v6 + 14) ^ (2 * v34)) & 0x3E;
        v40 = *(v21 - 1);
        v41 = 0;
        v47 = v40;
        if ( *(_DWORD *)(v7 + 44) )
        {
          do
          {
            if ( v39 >= v45 )
            {
              *v12 = 0LL;
              if ( MiPteInShadowRange((__int64)v12) )
                MiWritePteShadow((__int64)v12, 0LL);
              ++*(_DWORD *)(v7 + 52);
            }
            else
            {
              v42 = v53;
              if ( (v53 & 2) != 0 )
              {
                ++*(_QWORD *)(v6 + 16);
                v42 = v53;
              }
              if ( (v42 & 4) != 0 )
                ++*(_QWORD *)(v6 + 48);
              if ( v39 >= v40 )
              {
                *v12 = v36;
                if ( MiPteInShadowRange((__int64)v12) )
                  MiWritePteShadow((__int64)v12, v36);
              }
              else
              {
                *v12 = SubsectionPte;
                if ( MiPteInShadowRange((__int64)v12) )
                  MiWritePteShadow((__int64)v12, SubsectionPte);
              }
            }
            v39 += 4096;
            v40 = v47;
            v20 = v50 + 4096;
            ++v12;
            v50 += 4096LL;
            ++v41;
          }
          while ( v41 < *(_DWORD *)(v7 + 44) );
        }
        else
        {
          v20 = v50;
        }
        v21 = v51 + 10;
        v17 = a5;
        v43 = v55 == 1;
        v10 = --v55;
        v51 += 10;
        if ( v43 )
        {
          v44 = v46;
          v18 = v49;
          goto LABEL_64;
        }
        v22 = v46;
        v11 = a2;
        v19 = v48;
      }
      dword_14034E980 = 25;
      return 3221225595LL;
    }
    else
    {
      v44 = a6;
LABEL_64:
      if ( v18 <= *(_DWORD *)(v52 + 56) )
      {
        if ( v44 < *(_DWORD *)(v17 + 12) >> 12 )
        {
          if ( v44 )
            memset(v12, 0, 8LL * v44);
          return 0LL;
        }
        else
        {
          dword_14034E980 = 34;
          return 3221225595LL;
        }
      }
      else
      {
        dword_14034E980 = 33;
        return 3221225595LL;
      }
    }
  }
}
