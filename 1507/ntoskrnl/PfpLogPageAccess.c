/*
 * XREFs of PfpLogPageAccess @ 0x1404F7F70
 * Callers:
 *     PfpCopyEvent @ 0x1404F7970 (PfpCopyEvent.c)
 *     PfpFlushBuffers @ 0x1404F7BD0 (PfpFlushBuffers.c)
 * Callees:
 *     PfTReplaceCurrentBuffer @ 0x1404F85F4 (PfTReplaceCurrentBuffer.c)
 */

unsigned __int64 __fastcall PfpLogPageAccess(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, int a5)
{
  __int16 v6; // bp
  _QWORD *v8; // rsi
  char v9; // di
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rbx
  __int64 v12; // r8
  unsigned __int64 v13; // r10
  __int64 v14; // r9
  int v15; // edi
  __int64 v16; // rbx
  unsigned __int64 v17; // rbx
  char v18; // r13
  __int64 v19; // r10
  __int64 v20; // r8
  unsigned __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rbx
  unsigned __int64 v24; // r8
  int v25; // r14d
  __int64 v26; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // r8
  __int64 v31; // rdx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rdx
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
  unsigned __int64 v46; // rdx
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
    goto LABEL_9;
  v55 = 0;
  v9 = 0;
  v10 = *(_QWORD *)(a4 - 8LL * (*(_DWORD *)a2 & 0x1FF));
  v11 = v10 & 0xFFFFFFFFFFFFFFFCuLL;
  v53 = v10 & 0xFFFFFFFFFFFFFFFCuLL;
  while ( 1 )
  {
    v12 = qword_140350258;
    v13 = (qword_140350258 + 47) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( *(_QWORD *)(v13 + 40LL * *(unsigned int *)(qword_140350258 + 16)) == v11 )
    {
      LOWORD(v14) = *(_WORD *)(qword_140350258 + 16);
    }
    else
    {
      v35 = *(_DWORD *)(qword_140350258 + 32);
      a2 = BYTE6(v53)
         + 37
         * (BYTE5(v53)
          + 37
          * (BYTE4(v53)
           + 37 * (BYTE3(v53) + 37 * (BYTE2(v53) + 37 * (BYTE1(v53) + 37 * ((unsigned __int8)v11 + 11623883LL))))));
      v14 = (HIBYTE(v53) + 37 * (_DWORD)a2) & (v35 - 1);
      v36 = *(_QWORD *)(v13 + 40 * v14);
      if ( v36 != v11 )
      {
        if ( v36 )
        {
          v37 = 0;
          a2 = (unsigned int)(v14 + 1);
          v50 = 0;
          while ( (unsigned int)a2 >= v35 )
          {
LABEL_43:
            ++v37;
            a2 = 0LL;
            v50 = v37;
            v35 = v14;
            if ( v37 >= 2 )
            {
              LOWORD(v14) = -1;
              v55 = -1;
              goto LABEL_60;
            }
          }
          while ( 1 )
          {
            v38 = *(_QWORD *)(v13 + 40 * a2);
            if ( v38 == v11 )
            {
              *(_DWORD *)(qword_140350258 + 16) = a2;
              LOWORD(v14) = a2;
              goto LABEL_5;
            }
            if ( !v38 )
              break;
            a2 = (unsigned int)(a2 + 1);
            if ( (unsigned int)a2 >= v35 )
            {
              v37 = v50;
              goto LABEL_43;
            }
          }
          LOWORD(v14) = a2;
          *(_DWORD *)(qword_140350258 + 16) = a2;
          v55 = a2;
        }
        else
        {
          *(_DWORD *)(qword_140350258 + 16) = v14;
          v55 = (HIBYTE(v53) + 37 * a2) & (v35 - 1);
        }
        goto LABEL_60;
      }
      *(_DWORD *)(qword_140350258 + 16) = v14;
    }
LABEL_5:
    if ( (_WORD)v14 != 0xFFFF )
      goto LABEL_6;
    LOWORD(v14) = v55;
LABEL_60:
    if ( *(_DWORD *)(v12 + 28) < (unsigned int)(3 * (*(_DWORD *)(v12 + 32) >> 2)) )
      break;
    if ( (unsigned int)PfTReplaceCurrentBuffer(&unk_140350240, a2) == -1073741823 )
      return 0LL;
  }
  ++*(_DWORD *)(v12 + 28);
  v9 = 1;
  *(_QWORD *)(((v12 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 40LL * (unsigned __int16)v14) = v11;
LABEL_6:
  if ( !v12 )
    return 0LL;
  v54 = v14 + *(_WORD *)(v12 + 36);
  if ( v9 )
  {
    v40 = ((v12 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 40LL * (unsigned __int16)v14;
    v41 = (16 * v10) | *(_DWORD *)(v40 + 8) & 8 | 4;
    *(_WORD *)(v40 + 16) ^= (*(_WORD *)(v40 + 16) ^ (v10 >> 60)) & 0xF;
    *(_QWORD *)(v40 + 8) = v41;
  }
LABEL_9:
  v15 = 1;
  if ( a1 < 0 )
  {
    if ( !a5 )
    {
      v16 = (*(_QWORD *)(a1 + 744) ^ *(_QWORD *)(a1 + 776)) & 0x1FFFFFFFFFFFFFFFLL;
      goto LABEL_12;
    }
LABEL_30:
    v16 = a1;
LABEL_12:
    v49 = 0;
    v17 = v16 & 0xFFFFFFFFFFFFFFFCuLL | 1;
    v18 = 0;
    v19 = 4 * (v17 & 3) + 16;
    while ( 2 )
    {
      v20 = qword_140350258;
      v21 = (qword_140350258 + 47) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( *(_QWORD *)(v21 + 40LL * *(unsigned int *)(v19 + qword_140350258)) == v17 )
      {
        v22 = *(unsigned __int16 *)(v19 + qword_140350258);
        goto LABEL_15;
      }
      v51 = *(_DWORD *)(qword_140350258 + 32);
      v22 = (HIBYTE(v17)
           + 37
           * (BYTE6(v17)
            + 37
            * (BYTE5(v17)
             + 37
             * (BYTE4(v17)
              + 37 * (BYTE3(v17) + 37 * (BYTE2(v17) + 37 * (BYTE1(v17) + 37 * ((unsigned __int8)v17 + 11623883)))))))) & (v51 - 1);
      v39 = *(_QWORD *)(v21 + 40 * v22);
      if ( v39 == v17 )
      {
        *(_DWORD *)(v19 + qword_140350258) = v22;
LABEL_15:
        if ( (_WORD)v22 != 0xFFFF )
          goto LABEL_16;
        v48 = v49;
      }
      else if ( v39 )
      {
        v42 = v22 + 1;
        v43 = 0;
        v52 = 0;
        v44 = *(_DWORD *)(qword_140350258 + 32);
        while ( v42 >= v44 )
        {
LABEL_56:
          v51 = v22;
          ++v43;
          v42 = 0;
          v52 = v43;
          v44 = v22;
          if ( v43 >= 2 )
          {
            v48 = -1;
            v49 = -1;
            goto LABEL_69;
          }
        }
        while ( 1 )
        {
          v45 = *(_QWORD *)(v21 + 40LL * v42);
          if ( v45 == v17 )
          {
            *(_DWORD *)(v19 + qword_140350258) = v42;
            v22 = (unsigned __int16)v42;
            goto LABEL_15;
          }
          if ( !v45 )
            break;
          if ( ++v42 >= v51 )
          {
            v43 = v52;
            goto LABEL_56;
          }
        }
        v48 = v42;
        *(_DWORD *)(v19 + qword_140350258) = v42;
        v49 = v42;
      }
      else
      {
        v48 = (HIBYTE(v17)
             + 37
             * (BYTE6(v17)
              + 37
              * (BYTE5(v17)
               + 37
               * (BYTE4(v17)
                + 37 * (BYTE3(v17) + 37 * (BYTE2(v17) + 37 * (BYTE1(v17) + 37 * ((unsigned __int8)v17 + 24011)))))))) & (v51 - 1);
        *(_DWORD *)(v19 + qword_140350258) = v22;
        v49 = v48;
      }
LABEL_69:
      if ( *(_DWORD *)(v20 + 28) < (unsigned int)(3 * (*(_DWORD *)(v20 + 32) >> 2)) )
      {
        ++*(_DWORD *)(v20 + 28);
        v18 = 1;
        *(_QWORD *)(((v20 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 40LL * v48) = v17;
        LOWORD(v22) = v48;
LABEL_16:
        if ( v20 )
        {
          v6 = v22 + *(_WORD *)(v20 + 36);
          v23 = 2LL;
          v24 = ((v20 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 40LL * (unsigned __int16)v22;
          if ( v18 || (*(_BYTE *)(v24 + 8) & 4) != 0 )
          {
            if ( a5 )
            {
              *(_QWORD *)(v24 + 8) = *(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF8uLL | 5;
            }
            else
            {
              v46 = *(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF8uLL | 1;
              *(_QWORD *)(v24 + 8) = v46;
              *(_QWORD *)(v24 + 8) = v46 & 7 | (8LL * (*(_QWORD *)(a1 + 744) ^ *(_QWORD *)(a1 + 776)));
              *(_DWORD *)(v24 + 28) = *(_DWORD *)(a1 + 1172);
              *(_DWORD *)(v24 + 24) = *(_DWORD *)(a1 + 744);
              *(_QWORD *)(v24 + 16) = a1;
            }
          }
LABEL_19:
          v25 = 0;
          goto LABEL_20;
        }
        return 0LL;
      }
      v47 = PfTReplaceCurrentBuffer(&unk_140350240, v22);
      v19 = 4 * (v17 & 3) + 16;
      if ( v47 == -1073741823 )
        return 0LL;
      continue;
    }
  }
  if ( a5 )
    goto LABEL_30;
  if ( !a1 )
  {
    v23 = 0LL;
    goto LABEL_19;
  }
  v23 = 1LL;
  v25 = (a1 & 0x7FFFFFFF) - 1;
LABEL_20:
  v26 = qword_140350230;
  if ( (*a3 & 3) == 2 )
    v15 = 2;
  if ( (unsigned int)(v15 + *(_DWORD *)(qword_140350230 + 16)) > *(_DWORD *)(qword_140350230 + 20) )
  {
    while ( (unsigned int)PfTReplaceCurrentBuffer(&unk_140350218, v26) != -1073741823 )
    {
      v26 = qword_140350230;
      if ( (unsigned int)(v15 + *(_DWORD *)(qword_140350230 + 16)) <= *(_DWORD *)(qword_140350230 + 20) )
        goto LABEL_23;
    }
    return 0LL;
  }
LABEL_23:
  *(_DWORD *)(v26 + 16) += v15;
  result = ((v26 + 31) & 0xFFFFFFFFFFFFFFF8uLL) + 16LL * (unsigned int)(*(_DWORD *)(v26 + 16) - v15);
  if ( (*a3 & 3) == 2 )
  {
    *(_OWORD *)result = *(_OWORD *)a3;
    *(_QWORD *)result = *(_QWORD *)result & 0xFFFFFFFFFFFFF003uLL | 8;
    result += 16LL;
  }
  if ( (*(_DWORD *)v8 & 0x1FF) != 0 )
  {
    v28 = *(_QWORD *)result & 0xFFFFFFFFFFFFFFFCuLL;
    *(_QWORD *)result = v28;
    v29 = ((unsigned __int8)v28 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)v8 >> 7)) & 4 ^ v28;
    *(_QWORD *)result = v29;
    v30 = ((unsigned __int8)v29 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)v8 >> 7)) & 8 ^ v29;
    *(_QWORD *)result = v30;
    v31 = v30 & 0xF | (16LL * (unsigned int)(*v8 >> 12));
    *(_WORD *)(result + 10) = v6;
    *(_QWORD *)result = v31;
    *(_WORD *)(result + 8) = v54;
  }
  else
  {
    v32 = *(_QWORD *)result & 0xFFFFFFFFFFFFFFFCuLL | 1;
    *(_QWORD *)result = v32;
    v33 = ((unsigned __int8)v32 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)v8 >> 7)) & 4 ^ v32;
    v34 = ((unsigned __int8)v33 ^ (unsigned __int8)(8 * v23)) & 0x18 ^ v33;
    *(_QWORD *)result = v34;
    *(_QWORD *)result = *v8 ^ (*(_DWORD *)v8 ^ (unsigned int)v34) & 0xFFF;
    if ( v23 == 2 )
      *(_WORD *)(result + 10) = v6;
    else
      *(_DWORD *)(result + 8) = v25;
  }
  return result;
}
