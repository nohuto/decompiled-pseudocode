/*
 * XREFs of PfpLogPageAccess @ 0x1403E9A00
 * Callers:
 *     PfpCopyEvent @ 0x1403E9400 (PfpCopyEvent.c)
 *     PfpFlushBuffers @ 0x1403E9660 (PfpFlushBuffers.c)
 * Callees:
 *     PfTReplaceCurrentBuffer @ 0x1403EA09C (PfTReplaceCurrentBuffer.c)
 */

unsigned __int64 __fastcall PfpLogPageAccess(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, int a5)
{
  __int16 v6; // bp
  _QWORD *v8; // rsi
  __int16 v9; // r13
  int v10; // edi
  __int64 v11; // rbx
  unsigned __int64 v12; // rbx
  char v13; // r12
  __int64 v14; // r10
  __int64 v15; // r8
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rbx
  unsigned __int64 v19; // r8
  int v20; // r15d
  __int64 v21; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  char v26; // di
  unsigned __int16 v27; // r13
  unsigned __int64 v28; // rbx
  __int64 v29; // r8
  unsigned __int64 v30; // r10
  __int64 v31; // r9
  unsigned __int64 v32; // r8
  __int64 v33; // rcx
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // r8
  __int64 v37; // rdx
  unsigned int v38; // r11d
  __int64 v39; // rax
  unsigned int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned int v43; // eax
  unsigned int v44; // r11d
  unsigned int v45; // ecx
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  int v48; // eax
  unsigned __int16 v49; // r9
  unsigned int v50; // [rsp+24h] [rbp-44h]
  unsigned int v51; // [rsp+28h] [rbp-40h]
  unsigned __int64 v52; // [rsp+30h] [rbp-38h]
  __int64 v53; // [rsp+38h] [rbp-30h]
  unsigned __int64 v54; // [rsp+38h] [rbp-30h]
  __int16 v55; // [rsp+78h] [rbp+10h]
  unsigned int v56; // [rsp+78h] [rbp+10h]

  v6 = -1;
  v8 = (_QWORD *)a2;
  v9 = -1;
  if ( (*(_DWORD *)a2 & 0x1FF) != 0 )
  {
    v26 = 0;
    v27 = 0;
    v54 = *(_QWORD *)(a4 - 8LL * (*(_DWORD *)a2 & 0x1FF));
    v28 = v54 & 0xFFFFFFFFFFFFFFFCuLL;
    v52 = v54 & 0xFFFFFFFFFFFFFFFCuLL;
    while ( 1 )
    {
      v29 = qword_140328098;
      v30 = (qword_140328098 + 47) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( *(_QWORD *)(v30 + 40LL * *(unsigned int *)(qword_140328098 + 16)) == v28 )
      {
        LOWORD(v31) = *(_WORD *)(qword_140328098 + 16);
        goto LABEL_24;
      }
      v38 = *(_DWORD *)(qword_140328098 + 32);
      a2 = BYTE6(v52)
         + 37
         * (BYTE5(v52)
          + 37
          * (BYTE4(v52)
           + 37 * (BYTE3(v52) + 37 * (BYTE2(v52) + 37 * (BYTE1(v52) + 37 * ((unsigned __int8)v28 + 11623883LL))))));
      v31 = (HIBYTE(v52) + 37 * (_DWORD)a2) & (v38 - 1);
      v39 = *(_QWORD *)(v30 + 40 * v31);
      if ( v39 == v28 )
        break;
      if ( !v39 )
      {
        *(_DWORD *)(qword_140328098 + 16) = v31;
        v27 = (HIBYTE(v52) + 37 * a2) & (v38 - 1);
        goto LABEL_60;
      }
      v40 = 0;
      a2 = (unsigned int)(v31 + 1);
      v56 = 0;
LABEL_38:
      if ( (unsigned int)a2 >= v38 )
        goto LABEL_43;
      while ( 1 )
      {
        v41 = *(_QWORD *)(v30 + 40 * a2);
        if ( v41 == v28 )
        {
          *(_DWORD *)(qword_140328098 + 16) = a2;
          LOWORD(v31) = a2;
          goto LABEL_24;
        }
        if ( !v41 )
          break;
        a2 = (unsigned int)(a2 + 1);
        if ( (unsigned int)a2 >= v38 )
        {
          v40 = v56;
LABEL_43:
          ++v40;
          a2 = 0LL;
          v56 = v40;
          v38 = v31;
          if ( v40 >= 2 )
          {
            v27 = -1;
            goto LABEL_60;
          }
          goto LABEL_38;
        }
      }
      *(_DWORD *)(qword_140328098 + 16) = a2;
      v27 = a2;
LABEL_60:
      if ( *(_DWORD *)(v29 + 28) < (unsigned int)(3 * (*(_DWORD *)(v29 + 32) >> 2)) )
      {
        ++*(_DWORD *)(v29 + 28);
        v26 = 1;
        LOWORD(v31) = v27;
        *(_QWORD *)(((v29 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 40LL * v27) = v28;
        goto LABEL_25;
      }
      if ( (unsigned int)PfTReplaceCurrentBuffer(&unk_140328080, a2) == -1073741823 )
        return 0LL;
    }
    *(_DWORD *)(qword_140328098 + 16) = v31;
LABEL_24:
    if ( (_WORD)v31 == 0xFFFF )
      goto LABEL_60;
LABEL_25:
    if ( !v29 )
      return 0LL;
    v9 = v31 + *(_WORD *)(v29 + 36);
    if ( v26 )
    {
      v32 = ((v29 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 40LL * (unsigned __int16)v31;
      v33 = (16 * v54) | *(_DWORD *)(v32 + 8) & 8 | 4;
      *(_WORD *)(v32 + 16) ^= (*(_WORD *)(v32 + 16) ^ (v54 >> 60)) & 0xF;
      *(_QWORD *)(v32 + 8) = v33;
    }
  }
  v10 = 1;
  if ( a1 >= 0 )
  {
    if ( !a5 )
    {
      if ( a1 )
      {
        v18 = 1LL;
        v20 = (a1 & 0x7FFFFFFF) - 1;
      }
      else
      {
        v18 = 0LL;
        v20 = 0;
      }
      goto LABEL_13;
    }
    goto LABEL_34;
  }
  if ( a5 )
  {
LABEL_34:
    v11 = a1;
    goto LABEL_5;
  }
  v11 = (*(_QWORD *)(a1 + 744) ^ *(_QWORD *)(a1 + 776)) & 0x1FFFFFFFFFFFFFFFLL;
LABEL_5:
  v12 = v11 & 0xFFFFFFFFFFFFFFFCuLL | 1;
  v55 = 0;
  v13 = 0;
  v14 = 4 * (v12 & 3) + 16;
  v53 = v14;
  while ( 1 )
  {
    v15 = qword_140328098;
    v16 = (qword_140328098 + 47) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( *(_QWORD *)(v16 + 40LL * *(unsigned int *)(v14 + qword_140328098)) == v12 )
    {
      v17 = *(unsigned __int16 *)(v14 + qword_140328098);
    }
    else
    {
      v50 = *(_DWORD *)(qword_140328098 + 32);
      v17 = (HIBYTE(v12)
           + 37
           * (BYTE6(v12)
            + 37
            * (BYTE5(v12)
             + 37
             * (BYTE4(v12)
              + 37 * (BYTE3(v12) + 37 * (BYTE2(v12) + 37 * (BYTE1(v12) + 37 * ((unsigned __int8)v12 + 11623883)))))))) & (v50 - 1);
      v42 = *(_QWORD *)(v16 + 40 * v17);
      if ( v42 != v12 )
      {
        if ( v42 )
        {
          v43 = *(_DWORD *)(qword_140328098 + 32);
          v44 = v17 + 1;
          v45 = 0;
          v51 = 0;
          while ( v44 >= v43 )
          {
LABEL_56:
            v50 = v17;
            ++v45;
            v44 = 0;
            v51 = v45;
            v43 = v17;
            if ( v45 >= 2 )
            {
              v49 = -1;
              v55 = -1;
              goto LABEL_69;
            }
          }
          while ( 1 )
          {
            v46 = *(_QWORD *)(v16 + 40LL * v44);
            if ( v46 == v12 )
            {
              *(_DWORD *)(v53 + qword_140328098) = v44;
              v17 = (unsigned __int16)v44;
              goto LABEL_8;
            }
            if ( !v46 )
              break;
            if ( ++v44 >= v50 )
            {
              v45 = v51;
              goto LABEL_56;
            }
          }
          v49 = v44;
          *(_DWORD *)(v53 + qword_140328098) = v44;
          v55 = v44;
        }
        else
        {
          v49 = (HIBYTE(v12)
               + 37
               * (BYTE6(v12)
                + 37
                * (BYTE5(v12)
                 + 37
                 * (BYTE4(v12)
                  + 37 * (BYTE3(v12) + 37 * (BYTE2(v12) + 37 * (BYTE1(v12) + 37 * ((unsigned __int8)v12 + 24011)))))))) & (v50 - 1);
          *(_DWORD *)(v14 + qword_140328098) = v17;
          v55 = v49;
        }
        goto LABEL_69;
      }
      *(_DWORD *)(v14 + qword_140328098) = v17;
    }
LABEL_8:
    if ( (_WORD)v17 != 0xFFFF )
      goto LABEL_9;
    v49 = v55;
LABEL_69:
    if ( *(_DWORD *)(v15 + 28) < (unsigned int)(3 * (*(_DWORD *)(v15 + 32) >> 2)) )
      break;
    v48 = PfTReplaceCurrentBuffer(&unk_140328080, v17);
    v14 = 4 * (v12 & 3) + 16;
    if ( v48 == -1073741823 )
      return 0LL;
  }
  ++*(_DWORD *)(v15 + 28);
  v13 = 1;
  *(_QWORD *)(((v15 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 40LL * v49) = v12;
  LOWORD(v17) = v49;
LABEL_9:
  if ( !v15 )
    return 0LL;
  v6 = v17 + *(_WORD *)(v15 + 36);
  v18 = 2LL;
  v19 = ((v15 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 40LL * (unsigned __int16)v17;
  if ( v13 || (*(_BYTE *)(v19 + 8) & 4) != 0 )
  {
    if ( a5 )
    {
      *(_QWORD *)(v19 + 8) = *(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF8uLL | 5;
    }
    else
    {
      v47 = *(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF8uLL | 1;
      *(_QWORD *)(v19 + 8) = v47;
      *(_QWORD *)(v19 + 8) = v47 & 7 | (8LL * (*(_QWORD *)(a1 + 744) ^ *(_QWORD *)(a1 + 776)));
      *(_DWORD *)(v19 + 28) = *(_DWORD *)(a1 + 1180);
      *(_DWORD *)(v19 + 24) = *(_DWORD *)(a1 + 744);
      *(_QWORD *)(v19 + 16) = a1;
    }
  }
  v20 = 0;
LABEL_13:
  v21 = qword_140328070;
  if ( (*a3 & 3) == 2 )
    v10 = 2;
  if ( (unsigned int)(v10 + *(_DWORD *)(qword_140328070 + 16)) > *(_DWORD *)(qword_140328070 + 20) )
  {
    while ( (unsigned int)PfTReplaceCurrentBuffer(&unk_140328058, v21) != -1073741823 )
    {
      v21 = qword_140328070;
      if ( (unsigned int)(v10 + *(_DWORD *)(qword_140328070 + 16)) <= *(_DWORD *)(qword_140328070 + 20) )
        goto LABEL_16;
    }
    return 0LL;
  }
LABEL_16:
  *(_DWORD *)(v21 + 16) += v10;
  result = ((v21 + 31) & 0xFFFFFFFFFFFFFFF8uLL) + 16LL * (unsigned int)(*(_DWORD *)(v21 + 16) - v10);
  if ( (*a3 & 3) == 2 )
  {
    *(_OWORD *)result = *(_OWORD *)a3;
    *(_QWORD *)result = *(_QWORD *)result & 0xFFFFFFFFFFFFF003uLL | 8;
    result += 16LL;
  }
  if ( (*(_DWORD *)v8 & 0x1FF) != 0 )
  {
    v34 = *(_QWORD *)result & 0xFFFFFFFFFFFFFFFCuLL;
    *(_QWORD *)result = v34;
    v35 = ((unsigned __int8)v34 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)v8 >> 7)) & 4 ^ v34;
    *(_QWORD *)result = v35;
    v36 = ((unsigned __int8)v35 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)v8 >> 7)) & 8 ^ v35;
    *(_QWORD *)result = v36;
    v37 = v36 & 0xF | (16LL * (unsigned int)(*v8 >> 12));
    *(_WORD *)(result + 10) = v6;
    *(_QWORD *)result = v37;
    *(_WORD *)(result + 8) = v9;
  }
  else
  {
    v23 = *(_QWORD *)result & 0xFFFFFFFFFFFFFFFCuLL | 1;
    *(_QWORD *)result = v23;
    v24 = ((unsigned __int8)v23 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)v8 >> 7)) & 4 ^ v23;
    v25 = ((unsigned __int8)v24 ^ (unsigned __int8)(8 * v18)) & 0x18 ^ v24;
    *(_QWORD *)result = v25;
    *(_QWORD *)result = *v8 ^ (*(_DWORD *)v8 ^ (unsigned int)v25) & 0xFFF;
    if ( v18 == 2 )
      *(_WORD *)(result + 10) = v6;
    else
      *(_DWORD *)(result + 8) = v20;
  }
  return result;
}
