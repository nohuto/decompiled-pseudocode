/*
 * XREFs of PfpLogPageAccess @ 0x1404D3960
 * Callers:
 *     PfpCopyEvent @ 0x1404D3360 (PfpCopyEvent.c)
 *     PfpFlushBuffers @ 0x1404D35C0 (PfpFlushBuffers.c)
 * Callees:
 *     PfTReplaceCurrentBuffer @ 0x1404D3FE0 (PfTReplaceCurrentBuffer.c)
 */

unsigned __int64 __fastcall PfpLogPageAccess(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, int a5)
{
  __int16 v6; // bp
  _QWORD *v8; // rsi
  int v9; // edi
  __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  char v12; // r13
  __int64 v13; // r10
  __int64 v14; // r8
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rbx
  unsigned __int64 v18; // rdx
  int v19; // r14d
  __int64 v20; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // r8
  __int64 v28; // rdx
  char v29; // di
  unsigned __int64 v30; // r13
  unsigned __int64 v31; // rbx
  __int64 v32; // r8
  unsigned __int64 v33; // r10
  __int64 v34; // r9
  unsigned int v35; // r11d
  __int64 v36; // rax
  unsigned int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned __int64 v40; // r8
  __int64 v41; // rcx
  unsigned int v42; // r11d
  unsigned int v43; // ecx
  unsigned int v44; // eax
  __int64 v45; // rax
  unsigned __int64 v46; // rcx
  int v47; // eax
  unsigned __int16 v48; // r9
  __int16 v49; // [rsp+20h] [rbp-48h]
  unsigned int v50; // [rsp+28h] [rbp-40h]
  unsigned int v51; // [rsp+28h] [rbp-40h]
  unsigned int v52; // [rsp+2Ch] [rbp-3Ch]
  unsigned __int64 v53; // [rsp+30h] [rbp-38h]
  __int16 v54; // [rsp+78h] [rbp+10h]
  __int16 v55; // [rsp+78h] [rbp+10h]

  v6 = -1;
  v54 = -1;
  v8 = (_QWORD *)a2;
  if ( (*(_DWORD *)a2 & 0x1FF) == 0 )
    goto LABEL_2;
  v55 = 0;
  v29 = 0;
  v30 = *(_QWORD *)(a4 - 8LL * (*(_DWORD *)a2 & 0x1FF));
  v31 = v30 & 0xFFFFFFFFFFFFFFFCuLL;
  v53 = v30 & 0xFFFFFFFFFFFFFFFCuLL;
  while ( 1 )
  {
    v32 = qword_1403024D8;
    v33 = (qword_1403024D8 + 47) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( *(_QWORD *)(v33 + 40LL * *(unsigned int *)(qword_1403024D8 + 16)) == v31 )
    {
      LOWORD(v34) = *(_WORD *)(qword_1403024D8 + 16);
    }
    else
    {
      v35 = *(_DWORD *)(qword_1403024D8 + 32);
      a2 = BYTE6(v53)
         + 37
         * (BYTE5(v53)
          + 37
          * (BYTE4(v53)
           + 37 * (BYTE3(v53) + 37 * (BYTE2(v53) + 37 * (BYTE1(v53) + 37 * ((unsigned __int8)v31 + 11623883LL))))));
      v34 = (HIBYTE(v53) + 37 * (_DWORD)a2) & (v35 - 1);
      v36 = *(_QWORD *)(v33 + 40 * v34);
      if ( v36 != v31 )
      {
        if ( v36 )
        {
          v37 = 0;
          a2 = (unsigned int)(v34 + 1);
          v50 = 0;
          while ( (unsigned int)a2 >= v35 )
          {
LABEL_44:
            ++v37;
            a2 = 0LL;
            v50 = v37;
            v35 = v34;
            if ( v37 >= 2 )
            {
              LOWORD(v34) = -1;
              v55 = -1;
              goto LABEL_61;
            }
          }
          while ( 1 )
          {
            v38 = *(_QWORD *)(v33 + 40 * a2);
            if ( v38 == v31 )
            {
              *(_DWORD *)(qword_1403024D8 + 16) = a2;
              LOWORD(v34) = a2;
              goto LABEL_25;
            }
            if ( !v38 )
              break;
            a2 = (unsigned int)(a2 + 1);
            if ( (unsigned int)a2 >= v35 )
            {
              v37 = v50;
              goto LABEL_44;
            }
          }
          LOWORD(v34) = a2;
          *(_DWORD *)(qword_1403024D8 + 16) = a2;
          v55 = a2;
        }
        else
        {
          *(_DWORD *)(qword_1403024D8 + 16) = v34;
          v55 = (HIBYTE(v53) + 37 * a2) & (v35 - 1);
        }
        goto LABEL_61;
      }
      *(_DWORD *)(qword_1403024D8 + 16) = v34;
    }
LABEL_25:
    if ( (_WORD)v34 != 0xFFFF )
      goto LABEL_26;
    LOWORD(v34) = v55;
LABEL_61:
    if ( *(_DWORD *)(v32 + 28) < (unsigned int)(3 * (*(_DWORD *)(v32 + 32) >> 2)) )
      break;
    if ( (unsigned int)PfTReplaceCurrentBuffer(&unk_1403024C0, a2) == -1073741823 )
      return 0LL;
  }
  ++*(_DWORD *)(v32 + 28);
  v29 = 1;
  *(_QWORD *)(((v32 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 40LL * (unsigned __int16)v34) = v31;
LABEL_26:
  if ( !v32 )
    return 0LL;
  v54 = v34 + *(_WORD *)(v32 + 36);
  if ( v29 )
  {
    v40 = ((v32 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 40LL * (unsigned __int16)v34;
    v41 = (16 * v30) | *(_DWORD *)(v40 + 8) & 8 | 4;
    *(_WORD *)(v40 + 16) ^= (*(_WORD *)(v40 + 16) ^ (v30 >> 60)) & 0xF;
    *(_QWORD *)(v40 + 8) = v41;
  }
LABEL_2:
  v9 = 1;
  if ( a1 < 0 )
  {
    if ( !a5 )
    {
      v10 = (a1 ^ *(_QWORD *)(a1 + 776)) & 0x1FFFFFFFFFFFFFFFLL;
      goto LABEL_5;
    }
LABEL_31:
    v10 = a1;
LABEL_5:
    v49 = 0;
    v11 = v10 & 0xFFFFFFFFFFFFFFFCuLL | 1;
    v12 = 0;
    v13 = 4 * (v11 & 3) + 16;
    while ( 2 )
    {
      v14 = qword_1403024D8;
      v15 = (qword_1403024D8 + 47) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( *(_QWORD *)(v15 + 40LL * *(unsigned int *)(v13 + qword_1403024D8)) == v11 )
      {
        v16 = *(unsigned __int16 *)(v13 + qword_1403024D8);
        goto LABEL_8;
      }
      v51 = *(_DWORD *)(qword_1403024D8 + 32);
      v16 = (HIBYTE(v11)
           + 37
           * (BYTE6(v11)
            + 37
            * (BYTE5(v11)
             + 37
             * (BYTE4(v11)
              + 37 * (BYTE3(v11) + 37 * (BYTE2(v11) + 37 * (BYTE1(v11) + 37 * ((unsigned __int8)v11 + 11623883)))))))) & (v51 - 1);
      v39 = *(_QWORD *)(v15 + 40 * v16);
      if ( v39 == v11 )
      {
        *(_DWORD *)(v13 + qword_1403024D8) = v16;
LABEL_8:
        if ( (_WORD)v16 != 0xFFFF )
          goto LABEL_9;
        v48 = v49;
      }
      else if ( v39 )
      {
        v42 = v16 + 1;
        v43 = 0;
        v52 = 0;
        v44 = *(_DWORD *)(qword_1403024D8 + 32);
        while ( v42 >= v44 )
        {
LABEL_57:
          v51 = v16;
          ++v43;
          v42 = 0;
          v52 = v43;
          v44 = v16;
          if ( v43 >= 2 )
          {
            v48 = -1;
            v49 = -1;
            goto LABEL_70;
          }
        }
        while ( 1 )
        {
          v45 = *(_QWORD *)(v15 + 40LL * v42);
          if ( v45 == v11 )
          {
            *(_DWORD *)(v13 + qword_1403024D8) = v42;
            v16 = (unsigned __int16)v42;
            goto LABEL_8;
          }
          if ( !v45 )
            break;
          if ( ++v42 >= v51 )
          {
            v43 = v52;
            goto LABEL_57;
          }
        }
        v48 = v42;
        *(_DWORD *)(v13 + qword_1403024D8) = v42;
        v49 = v42;
      }
      else
      {
        v48 = (HIBYTE(v11)
             + 37
             * (BYTE6(v11)
              + 37
              * (BYTE5(v11)
               + 37
               * (BYTE4(v11)
                + 37 * (BYTE3(v11) + 37 * (BYTE2(v11) + 37 * (BYTE1(v11) + 37 * ((unsigned __int8)v11 + 24011)))))))) & (v51 - 1);
        *(_DWORD *)(v13 + qword_1403024D8) = v16;
        v49 = v48;
      }
LABEL_70:
      if ( *(_DWORD *)(v14 + 28) < (unsigned int)(3 * (*(_DWORD *)(v14 + 32) >> 2)) )
      {
        ++*(_DWORD *)(v14 + 28);
        v12 = 1;
        *(_QWORD *)(((v14 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 40LL * v48) = v11;
        LOWORD(v16) = v48;
LABEL_9:
        if ( v14 )
        {
          v6 = v16 + *(_WORD *)(v14 + 36);
          v17 = 2LL;
          v18 = ((v14 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 40LL * (unsigned __int16)v16;
          if ( v12 || (*(_BYTE *)(v18 + 8) & 4) != 0 )
          {
            if ( a5 )
            {
              *(_QWORD *)(v18 + 8) = *(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF8uLL | 5;
            }
            else
            {
              v46 = *(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF8uLL | 1;
              *(_QWORD *)(v18 + 8) = v46;
              *(_QWORD *)(v18 + 8) = v46 & 7 | (8 * (a1 ^ *(_QWORD *)(a1 + 776)));
              *(_DWORD *)(v18 + 28) = *(_DWORD *)(a1 + 1180);
              *(_DWORD *)(v18 + 24) = *(_DWORD *)(a1 + 744);
              *(_QWORD *)(v18 + 16) = a1;
            }
          }
LABEL_12:
          v19 = 0;
          goto LABEL_13;
        }
        return 0LL;
      }
      v47 = PfTReplaceCurrentBuffer(&unk_1403024C0, v16);
      v13 = 4 * (v11 & 3) + 16;
      if ( v47 == -1073741823 )
        return 0LL;
      continue;
    }
  }
  if ( a5 )
    goto LABEL_31;
  if ( !a1 )
  {
    v17 = 0LL;
    goto LABEL_12;
  }
  v17 = 1LL;
  v19 = (a1 & 0x7FFFFFFF) - 1;
LABEL_13:
  v20 = qword_1403024B0;
  if ( (*a3 & 3) == 2 )
    v9 = 2;
  if ( (unsigned int)(v9 + *(_DWORD *)(qword_1403024B0 + 16)) > *(_DWORD *)(qword_1403024B0 + 20) )
  {
    while ( (unsigned int)PfTReplaceCurrentBuffer(&unk_140302498, v20) != -1073741823 )
    {
      v20 = qword_1403024B0;
      if ( (unsigned int)(v9 + *(_DWORD *)(qword_1403024B0 + 16)) <= *(_DWORD *)(qword_1403024B0 + 20) )
        goto LABEL_16;
    }
    return 0LL;
  }
LABEL_16:
  *(_DWORD *)(v20 + 16) += v9;
  result = ((v20 + 31) & 0xFFFFFFFFFFFFFFF8uLL) + 16LL * (unsigned int)(*(_DWORD *)(v20 + 16) - v9);
  if ( (*a3 & 3) == 2 )
  {
    *(_OWORD *)result = *(_OWORD *)a3;
    *(_QWORD *)result = *(_QWORD *)result & 0xFFFFFFFFFFFFF003uLL | 8;
    result += 16LL;
  }
  if ( (*(_DWORD *)v8 & 0x1FF) != 0 )
  {
    v25 = *(_QWORD *)result & 0xFFFFFFFFFFFFFFFCuLL;
    *(_QWORD *)result = v25;
    v26 = ((unsigned __int8)v25 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)v8 >> 7)) & 4 ^ v25;
    *(_QWORD *)result = v26;
    v27 = ((unsigned __int8)v26 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)v8 >> 7)) & 8 ^ v26;
    *(_QWORD *)result = v27;
    v28 = v27 & 0xF | (16LL * (unsigned int)(*v8 >> 12));
    *(_WORD *)(result + 10) = v6;
    *(_QWORD *)result = v28;
    *(_WORD *)(result + 8) = v54;
  }
  else
  {
    v22 = *(_QWORD *)result & 0xFFFFFFFFFFFFFFFCuLL | 1;
    *(_QWORD *)result = v22;
    v23 = ((unsigned __int8)v22 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)v8 >> 7)) & 4 ^ v22;
    v24 = ((unsigned __int8)v23 ^ (unsigned __int8)(8 * v17)) & 0x18 ^ v23;
    *(_QWORD *)result = v24;
    *(_QWORD *)result = *v8 ^ (*(_DWORD *)v8 ^ (unsigned int)v24) & 0xFFF;
    if ( v17 == 2 )
      *(_WORD *)(result + 10) = v6;
    else
      *(_DWORD *)(result + 8) = v19;
  }
  return result;
}
