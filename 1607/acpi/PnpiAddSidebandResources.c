/*
 * XREFs of PnpiAddSidebandResources @ 0x1C009EB0C
 * Callers:
 *     PnpBiosUpdateResourceListWithSidebandResources @ 0x1C00849C4 (PnpBiosUpdateResourceListWithSidebandResources.c)
 * Callees:
 *     memcmp @ 0x1C002BD60 (memcmp.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     PnpiValidateSidebandResources @ 0x1C009FD74 (PnpiValidateSidebandResources.c)
 */

__int64 __fastcall PnpiAddSidebandResources(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        unsigned int *a4,
        char *a5,
        int *a6)
{
  unsigned int v6; // ebx
  unsigned int *v7; // r12
  __int64 v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // r14
  unsigned int v11; // esi
  int *v13; // r13
  unsigned int v14; // eax
  int v15; // r10d
  __int64 v16; // r15
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // r13d
  unsigned int v20; // esi
  __int64 v21; // xmm0_8
  unsigned int v22; // eax
  unsigned int v23; // r9d
  unsigned int v24; // edx
  __int64 v25; // rcx
  _DWORD *v26; // rcx
  int v27; // eax
  unsigned int v28; // eax
  char v29; // r9
  unsigned int v30; // r11d
  char *v31; // r13
  unsigned int v32; // edi
  unsigned int v33; // eax
  bool v34; // bp
  unsigned int v35; // edx
  unsigned int v36; // r8d
  unsigned int v37; // r12d
  _OWORD *v38; // rbp
  __int64 v39; // rax
  unsigned int v40; // eax
  char *v41; // rcx
  unsigned int v42; // edi
  unsigned int v43; // r13d
  bool v44; // zf
  __int64 v45; // rax
  char v46; // [rsp+20h] [rbp-98h]
  unsigned int v47; // [rsp+24h] [rbp-94h]
  int v48; // [rsp+28h] [rbp-90h]
  unsigned int v49; // [rsp+2Ch] [rbp-8Ch]
  unsigned int v50; // [rsp+30h] [rbp-88h]
  int v51; // [rsp+34h] [rbp-84h]
  int v52; // [rsp+38h] [rbp-80h]
  int v53; // [rsp+3Ch] [rbp-7Ch]
  unsigned int v54; // [rsp+40h] [rbp-78h]
  _DWORD *v55; // [rsp+48h] [rbp-70h]
  unsigned int v56; // [rsp+50h] [rbp-68h]
  __int64 v57; // [rsp+58h] [rbp-60h]
  char *v58; // [rsp+60h] [rbp-58h]
  __int64 v59; // [rsp+68h] [rbp-50h]

  v6 = 0;
  v49 = 0;
  v7 = a3;
  v47 = *a4;
  v8 = a2;
  v51 = 0;
  v9 = a1;
  v52 = 0;
  v10 = 0LL;
  v11 = 0;
  if ( a1 && !(unsigned __int8)PnpiValidateSidebandResources() )
    return 3221225524LL;
  v13 = a6;
  if ( a6 )
    v14 = *a6;
  else
    v14 = 0;
  v15 = 40;
  v50 = v14;
  if ( v14 >= 0x28 )
  {
    memset(a5, 0, 0x28uLL);
    v15 = 40;
    *((_DWORD *)a5 + 1) = 0;
  }
  v16 = v8 + 32;
  v17 = 8;
  v18 = 0;
  v48 = 8;
  v57 = v8 + 32;
  v54 = 0;
  if ( *(_DWORD *)(v8 + 28) )
  {
    v19 = v47;
    while ( 1 )
    {
      if ( v18 )
      {
        v22 = *(_DWORD *)(v16 + 4);
        v16 += v22 <= 1 ? 40LL : 32LL * (v22 - 1) + 40;
        v57 = v16;
      }
      else
      {
        v20 = v11 + 72;
        if ( v19 >= v20 )
        {
          if ( v9 )
          {
            *(_OWORD *)((char *)v7 + v10) = *(_OWORD *)v9;
            *(_OWORD *)((char *)v7 + v10 + 16) = *(_OWORD *)(v9 + 16);
            *(_OWORD *)((char *)v7 + v10 + 32) = *(_OWORD *)(v9 + 32);
            *(_OWORD *)((char *)v7 + v10 + 48) = *(_OWORD *)(v9 + 48);
            v21 = *(_QWORD *)(v9 + 64);
          }
          else
          {
            *(_OWORD *)((char *)v7 + v10) = *(_OWORD *)v8;
            *(_OWORD *)((char *)v7 + v10 + 16) = *(_OWORD *)(v8 + 16);
            *(_OWORD *)((char *)v7 + v10 + 32) = *(_OWORD *)(v8 + 32);
            *(_OWORD *)((char *)v7 + v10 + 48) = *(_OWORD *)(v8 + 48);
            v21 = *(_QWORD *)(v8 + 64);
          }
          *(_QWORD *)((char *)v7 + v10 + 64) = v21;
          v7[7] = 0;
        }
        v11 = v20 - 40;
        v10 += 32LL;
      }
      v23 = *(_DWORD *)(v16 + 4);
      v24 = 0;
      if ( v23 )
        break;
LABEL_28:
      if ( (unsigned int)++v52 <= 1 )
        goto LABEL_29;
LABEL_73:
      v18 = v54 + 1;
      v54 = v18;
      if ( v18 >= *(_DWORD *)(v8 + 28) )
      {
        v17 = v48;
        v13 = a6;
        goto LABEL_75;
      }
    }
    while ( 1 )
    {
      v25 = 32LL * v24;
      if ( ((AcpiGlobalFlags & 2) != 0 || *(_BYTE *)(*((_QWORD *)AcpiInformation + 1) + 8LL) >= 5u)
        && *(_BYTE *)(v25 + v16 + 9) != 2 )
      {
        break;
      }
      if ( *(_DWORD *)(v25 + v16 + 16) == *(_DWORD *)(v25 + v16 + 20) )
        break;
      if ( ++v24 >= v23 )
        goto LABEL_28;
    }
LABEL_29:
    if ( v9 )
    {
      v26 = (_DWORD *)(v9 + 32);
      v27 = 1;
      if ( !*(_DWORD *)(v9 + 28) )
        v27 = *(_DWORD *)(v9 + 28);
      v28 = v49 + v27;
    }
    else
    {
      v28 = v49 + 1;
      v26 = 0LL;
    }
    v55 = v26;
    v29 = 1;
    v46 = 1;
    if ( v49 < v28 )
    {
      v30 = v47;
      v59 = v28 - v49;
      v49 = v28;
      do
      {
        v31 = (char *)v7 + v10;
        v32 = 40;
        v58 = (char *)v7 + v10;
        if ( v26 )
        {
          v33 = v26[1];
          v34 = 0;
          if ( v33 <= 1 )
            v34 = v33 == 0;
          else
            v32 = 32 * (v33 - 1) + 40;
          if ( v30 >= v32 + v11 )
          {
            memmove((char *)v7 + v10, v26, v32);
            v26 = v55;
            v15 = 40;
            v29 = v46;
            v30 = v47;
            *((_DWORD *)v31 + 1) = 0;
          }
          v35 = v26[1];
          v26 = (_DWORD *)((char *)v26 + v32);
          v55 = v26;
          if ( v34 )
            v32 -= 32;
        }
        else
        {
          if ( v30 >= v11 + 40 )
          {
            *(_WORD *)v31 = *(_WORD *)v16;
            *((_WORD *)v31 + 1) = *(_WORD *)(v16 + 2);
            *((_DWORD *)v31 + 1) = 0;
          }
          v35 = 0;
          v32 = 8;
        }
        v11 += v32;
        v10 += v32;
        v53 = 0;
        v36 = 0;
        if ( *(_DWORD *)(v16 + 4) )
        {
          v37 = v48;
          do
          {
            v38 = (_OWORD *)(32LL * v36 + v16 + 8);
            if ( ((AcpiGlobalFlags & 2) != 0 || *(_BYTE *)(*((_QWORD *)AcpiInformation + 1) + 8LL) >= 5u)
              && *((_BYTE *)v38 + 1) != 2
              || *((_DWORD *)v38 + 2) == *((_DWORD *)v38 + 3) )
            {
              v11 += 32;
              if ( v30 >= v11 )
              {
                v39 = 32LL * v35;
                *(_OWORD *)&v31[v39 + 8] = *v38;
                *(_OWORD *)&v31[v39 + 24] = v38[1];
              }
              ++v51;
              ++v35;
              v10 += 32LL;
              v56 = v35;
              if ( v29 )
              {
                v40 = v50;
                if ( v50 < 0x28 )
                {
                  v37 += 32;
                  v48 = v37;
                }
                else
                {
                  v41 = a5;
                  v42 = 0;
                  v43 = *((_DWORD *)a5 + 1);
                  if ( v43 )
                  {
                    do
                    {
                      if ( !memcmp(&a5[32 * v42 + 8], v38, 0x20uLL) )
                        break;
                      ++v42;
                    }
                    while ( v42 < v43 );
                    v16 = v57;
                    v15 = 40;
                    v35 = v56;
                    v36 = v53;
                    v29 = v46;
                    v37 = v48;
                    v30 = v47;
                    v41 = a5;
                    v40 = v50;
                  }
                  v44 = v42 == v43;
                  v31 = v58;
                  if ( v44 )
                  {
                    v37 += 32;
                    v48 = v37;
                    if ( v40 >= v37 )
                    {
                      v45 = 32LL * v42;
                      *(_OWORD *)&v41[v45 + 8] = *v38;
                      *(_OWORD *)&v41[v45 + 24] = v38[1];
                      ++*((_DWORD *)v41 + 1);
                    }
                  }
                }
              }
            }
            v53 = ++v36;
          }
          while ( v36 < *(_DWORD *)(v16 + 4) );
          v7 = a3;
          v26 = v55;
        }
        if ( !v35 )
        {
          v10 += 32LL;
          v11 += 32;
        }
        if ( v30 >= v11 )
          *((_DWORD *)v31 + 1) = v35;
        v46 = 0;
        v44 = v59-- == 1;
        v29 = 0;
      }
      while ( !v44 );
      v9 = a1;
      v8 = a2;
      v19 = v47;
    }
    goto LABEL_73;
  }
LABEL_75:
  if ( v13 )
  {
    if ( v17 >= 0x28 )
      v15 = v17;
    *v13 = v15;
  }
  if ( v51 )
  {
    if ( v11 <= v47 )
    {
      v7[7] = v49;
      *v7 = v11;
    }
    else
    {
      v6 = -1073741789;
      *a4 = v11;
    }
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return v6;
}
