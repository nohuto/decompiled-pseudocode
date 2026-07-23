/*
 * XREFs of RtlDecompressBufferXpressLzProgress @ 0x140113CD0
 * Callers:
 *     RtlDecompressBufferProgress @ 0x140113C60 (RtlDecompressBufferProgress.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x140114480 (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlDecompressBufferXpressLzProgress(
        _BYTE *a1,
        unsigned int a2,
        _BYTE *a3,
        unsigned int a4,
        _DWORD *a5,
        __int64 a6,
        __int64 a7)
{
  _BYTE *v7; // r15
  unsigned int v9; // esi
  _BYTE *v10; // r8
  _BYTE *v11; // rdi
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rdx
  _BYTE *v15; // r12
  int v16; // ebx
  bool v17; // sf
  int v18; // ebx
  unsigned __int64 v19; // rcx
  char v20; // r14
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r14
  signed __int64 v23; // r14
  _BYTE *v24; // rsi
  _DWORD *v25; // rsi
  unsigned __int64 v26; // r14
  __int64 v27; // r14
  unsigned __int64 v28; // rcx
  __int64 v29; // r14
  __int64 v30; // rax
  unsigned __int64 v31; // r9
  _BYTE *v32; // rax
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // rdx
  char v35; // cl
  __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rcx
  __int16 v39; // ax
  unsigned __int64 v40; // rcx
  __int64 v42; // rcx
  int v43; // eax
  unsigned __int64 v44; // rcx
  char v45; // r14
  unsigned __int64 v46; // r14
  _BYTE *v47; // rsi
  unsigned __int64 v48; // r14
  __int64 v49; // r14
  __int64 v50; // r14
  __int64 XpressCallback; // rax
  __int64 v52; // rcx
  unsigned __int64 v53; // [rsp+28h] [rbp-50h]
  _BYTE *v54; // [rsp+30h] [rbp-48h]
  _QWORD v55[2]; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v56; // [rsp+48h] [rbp-30h]

  v7 = a3;
  v9 = 4096;
  if ( a4 < 5 )
    return 3221226050LL;
  v10 = &a3[a4];
  v11 = a1;
  v12 = (unsigned __int64)(v10 - 86);
  v54 = &a1[a2];
  v13 = (unsigned __int64)(v54 - 352);
  v53 = (unsigned __int64)v10;
  if ( !a6 || a2 < 0x1000 )
    v9 = a2;
  v14 = (unsigned __int64)&a1[v9];
  v55[0] = a6;
  v55[1] = a7;
  v56 = v9;
  if ( v13 < v14 )
    v14 = (unsigned __int64)(v54 - 352);
  v15 = 0LL;
LABEL_7:
  v16 = *(_DWORD *)v7;
  v7 += 4;
  if ( (unsigned __int64)v7 >= v12 )
  {
    v33 = v53;
    while ( 1 )
    {
      if ( (unsigned __int64)v11 >= v14 )
      {
        if ( (unsigned __int64)v11 >= v13 )
          goto LABEL_92;
        XpressCallback = RtlpMakeXpressCallback(v55, v13, v11, v13);
        v33 = v53;
        v14 = XpressCallback;
        v13 = (unsigned __int64)(v54 - 352);
      }
      v17 = v16 < 0;
      v18 = 2 * v16 + 1;
      if ( !v17 )
        break;
LABEL_108:
      if ( v7 == (_BYTE *)v33 )
      {
        v31 = (unsigned __int64)v54;
        while ( 1 )
        {
LABEL_70:
          if ( v18 >= 0 )
          {
            v18 *= 2;
            goto LABEL_72;
          }
LABEL_63:
          while ( 1 )
          {
            v18 *= 2;
            if ( v18 )
              break;
            if ( (unsigned __int64)(v7 + 3) >= v33 )
              return 3221226050LL;
            v16 = *(_DWORD *)v7;
            v7 += 4;
LABEL_83:
            v17 = v16 < 0;
            v18 = 2 * v16 + 1;
            if ( v17 )
              break;
LABEL_72:
            while ( v18 >= 0 )
            {
              v18 *= 2;
              if ( (unsigned __int64)(v7 + 2) > v33 || (unsigned __int64)(v11 + 2) > v31 )
                return 3221226050LL;
              v39 = *(_WORD *)v7;
              v7 += 2;
              *(_WORD *)v11 = v39;
              v11 += 2;
              if ( v18 < 0 )
                goto LABEL_63;
              v18 *= 2;
            }
            if ( (unsigned __int64)v7 >= v33 || (unsigned __int64)v11 >= v31 )
              return 3221226050LL;
            *v11++ = *v7++;
          }
          if ( v7 == (_BYTE *)v33 )
            goto LABEL_87;
          if ( (unsigned __int64)(v7 + 1) >= v33 )
            break;
          v34 = *(unsigned __int16 *)v7;
          v7 += 2;
          v35 = v34;
          v36 = (v34 >> 3) + 1;
          v37 = v35 & 7;
          if ( v37 == 7 )
          {
            if ( v15 )
            {
              v40 = (unsigned __int64)(unsigned __int8)*v15 >> 4;
              v15 = 0LL;
            }
            else
            {
              if ( (unsigned __int64)v7 >= v33 )
                return 3221226050LL;
              v15 = v7++;
              v40 = *v15 & 0xF;
            }
            if ( v40 == 15 )
            {
              if ( (unsigned __int64)v7 >= v33 )
                return 3221226050LL;
              v42 = (unsigned __int8)*v7++;
              if ( v42 == 255 )
              {
                if ( (unsigned __int64)(v7 + 1) >= v33 )
                  return 3221226050LL;
                v52 = *(unsigned __int16 *)v7;
                v7 += 2;
                if ( !v52 )
                {
                  if ( (unsigned __int64)(v7 + 3) >= v33 )
                    return 3221226050LL;
                  v52 = *(unsigned int *)v7;
                  v7 += 4;
                }
                if ( v52 < 22 || &v11[v52 + 3] < v11 )
                  return 3221226050LL;
                v42 = v52 - 22;
              }
              v40 = v42 + 15;
            }
            v37 = v40 + 7;
          }
          v38 = v37 + 3;
          if ( &v11[-v36] < a1 || (unsigned __int64)&v11[v38] > v31 )
            return 3221226050LL;
          qmemcpy(v11, &v11[-v36], v38);
          v11 += v38;
        }
        if ( (unsigned __int64)v11 >= v31 )
        {
LABEL_87:
          *a5 = (_DWORD)v11 - (_DWORD)a1;
          return 0LL;
        }
        return 3221226050LL;
      }
      if ( (unsigned __int64)(v7 + 1) >= v33 )
      {
        v31 = (unsigned __int64)v54;
        if ( v11 >= v54 )
          goto LABEL_70;
        return 3221226050LL;
      }
      v44 = *(unsigned __int16 *)v7;
      v7 += 2;
      v45 = v44;
      v21 = (v44 >> 3) + 1;
      v46 = v45 & 7;
      if ( v46 == 7 )
      {
        if ( v15 )
        {
          v48 = (unsigned __int64)(unsigned __int8)*v15 >> 4;
          v15 = 0LL;
        }
        else
        {
          if ( (unsigned __int64)v7 >= v33 )
            return 3221226050LL;
          v15 = v7++;
          v48 = *v15 & 0xF;
        }
        if ( v48 == 15 )
        {
LABEL_126:
          if ( (unsigned __int64)v7 >= v33 )
            return 3221226050LL;
          v49 = (unsigned __int8)*v7++;
          if ( v49 == 255 )
          {
            if ( (unsigned __int64)(v7 + 1) >= v33 )
              return 3221226050LL;
            v50 = *(unsigned __int16 *)v7;
            v7 += 2;
            if ( !v50 )
            {
              if ( (unsigned __int64)(v7 + 3) >= v33 )
                return 3221226050LL;
              v50 = *(unsigned int *)v7;
              v7 += 4;
            }
            if ( v50 < 22 || &v11[v50 + 3] < v11 )
              return 3221226050LL;
            v49 = v50 - 22;
          }
          v48 = v49 + 15;
        }
        v46 = v48 + 7;
      }
      v23 = v46 + 3;
      v47 = &v11[-v21];
      if ( &v11[-v21] < a1 )
        return 3221226050LL;
      if ( v21 < 4 )
      {
        *v11 = *v47;
        if ( v21 == 1 )
        {
          v23 -= 3LL;
          v11[1] = *v47;
          v11[2] = *v47;
          v11 += 3;
        }
        else
        {
          v11[1] = v47[1];
          if ( v21 == 2 )
          {
            v23 -= 2LL;
            v11 += 2;
          }
          else
          {
            v11[2] = v47[2];
            v11 += 3;
            v23 -= 3LL;
          }
        }
        if ( !v23 )
          goto LABEL_120;
      }
      *(_DWORD *)v11 = *(_DWORD *)v47;
      *((_DWORD *)v11 + 1) = *((_DWORD *)v47 + 1);
      if ( v23 < 9 )
        goto LABEL_119;
      v11 += 8;
      v25 = v47 + 8;
      for ( v23 -= 8LL; ; v23 -= 16LL )
      {
        if ( (unsigned __int64)v11 >= v14 )
        {
          if ( (unsigned __int64)v11 >= v13 )
          {
            v31 = (unsigned __int64)v54;
            v32 = &v11[v23];
            if ( &v11[v23] <= v54 )
            {
LABEL_59:
              v33 = v53;
              qmemcpy(v11, v25, v23);
              v11 = v32;
              goto LABEL_70;
            }
            return 3221226050LL;
          }
          v14 = RtlpMakeXpressCallback(v55, v13, v11, v13);
        }
        *(_DWORD *)v11 = *v25;
        *((_DWORD *)v11 + 1) = v25[1];
        *((_DWORD *)v11 + 2) = v25[2];
        *((_DWORD *)v11 + 3) = v25[3];
        if ( v23 < 17 )
          break;
        v13 = (unsigned __int64)(v54 - 352);
        v11 += 16;
        v25 += 4;
      }
      v33 = v53;
LABEL_119:
      v11 += v23;
LABEL_120:
      if ( v18 >= 0 )
      {
LABEL_103:
        v18 *= 2;
        break;
      }
LABEL_107:
      v13 = (unsigned __int64)(v54 - 352);
      v18 *= 2;
      if ( v18 )
        goto LABEL_108;
      if ( (unsigned __int64)(v7 + 3) >= v33 )
        return 3221226050LL;
      v16 = *(_DWORD *)v7;
      v7 += 4;
    }
    if ( v18 >= 0 )
    {
      v17 = (v18 & 0x40000000) != 0;
      v18 *= 2;
      if ( v17 )
      {
        if ( (unsigned __int64)(v7 + 1) < v33 )
        {
          *(_WORD *)v11 = *(_WORD *)v7;
          v11 += 2;
          v7 += 2;
          goto LABEL_107;
        }
      }
      else
      {
        v17 = (v18 & 0x40000000) != 0;
        v18 *= 2;
        if ( v17 )
        {
          if ( (unsigned __int64)(v7 + 2) < v33 )
          {
            *(_WORD *)v11 = *(_WORD *)v7;
            v11[2] = v7[2];
            v11 += 3;
            v7 += 3;
            goto LABEL_107;
          }
        }
        else
        {
          v18 *= 2;
          if ( (unsigned __int64)(v7 + 3) < v33 )
          {
            v43 = *(_DWORD *)v7;
            v7 += 4;
            *(_DWORD *)v11 = v43;
            v11 += 4;
            if ( v18 >= 0 )
              goto LABEL_103;
            goto LABEL_107;
          }
        }
      }
    }
    else if ( (unsigned __int64)v7 < v33 )
    {
      *v11++ = *v7++;
      goto LABEL_107;
    }
    return 3221226050LL;
  }
  if ( (unsigned __int64)v11 >= v14 )
  {
    if ( (unsigned __int64)v11 >= v13 )
    {
      v33 = v53;
LABEL_92:
      v31 = (unsigned __int64)v54;
      goto LABEL_83;
    }
    v30 = RtlpMakeXpressCallback(v55, v13, v11, v13);
    v13 = (unsigned __int64)(v54 - 352);
    v14 = v30;
  }
  v17 = v16 < 0;
  v18 = 2 * v16 + 1;
  if ( !v17 )
    goto LABEL_20;
  while ( 1 )
  {
    v19 = *(unsigned __int16 *)v7;
    v7 += 2;
    v20 = v19;
    v21 = (v19 >> 3) + 1;
    v22 = v20 & 7;
    if ( v22 == 7 )
    {
      if ( v15 )
      {
        v26 = (unsigned __int64)(unsigned __int8)*v15 >> 4;
        v15 = 0LL;
      }
      else
      {
        v15 = v7++;
        v26 = *v15 & 0xF;
      }
      if ( v26 == 15 )
      {
        if ( (unsigned __int64)(v7 + 7) >= v12 )
        {
          v33 = v53;
          goto LABEL_126;
        }
        v27 = (unsigned __int8)*v7++;
        if ( v27 == 255 )
        {
          v29 = *(unsigned __int16 *)v7;
          v7 += 2;
          if ( !v29 )
          {
            v29 = *(unsigned int *)v7;
            v7 += 4;
          }
          if ( v29 < 22 || &v11[v29 + 3] < v11 )
            return 3221226050LL;
          v27 = v29 - 22;
        }
        v26 = v27 + 15;
      }
      v22 = v26 + 7;
    }
    v23 = v22 + 3;
    v24 = &v11[-v21];
    if ( &v11[-v21] < a1 )
      return 3221226050LL;
    if ( v21 >= 4 )
      break;
    *v11 = *v24;
    v28 = v21 - 1;
    if ( v28 )
    {
      v11[1] = v24[1];
      if ( v28 == 1 )
      {
        v23 -= 2LL;
        v11 += 2;
      }
      else
      {
        v11[2] = v24[2];
        v11 += 3;
        v23 -= 3LL;
      }
    }
    else
    {
      v23 -= 3LL;
      v11[1] = *v24;
      v11[2] = *v24;
      v11 += 3;
    }
    if ( v23 )
      break;
LABEL_18:
    v13 = (unsigned __int64)(v54 - 352);
    if ( v18 >= 0 )
    {
      for ( v18 *= 2; ; v18 *= 2 )
      {
LABEL_20:
        if ( v18 < 0 )
        {
          *v11++ = *v7++;
          goto LABEL_12;
        }
        v17 = (v18 & 0x40000000) != 0;
        v18 *= 2;
        if ( v17 )
        {
          *(_WORD *)v11 = *(_WORD *)v7;
          v11 += 2;
          v7 += 2;
          goto LABEL_12;
        }
        v17 = (v18 & 0x40000000) != 0;
        v18 *= 2;
        *(_DWORD *)v11 = *(_DWORD *)v7;
        if ( v17 )
          break;
        v11 += 4;
        v7 += 4;
        v17 = (v18 & 0x40000000) != 0;
        v18 *= 2;
        if ( v17 )
          goto LABEL_12;
      }
      v11 += 3;
      v7 += 3;
    }
LABEL_12:
    v18 *= 2;
    if ( !v18 )
      goto LABEL_7;
  }
  *(_DWORD *)v11 = *(_DWORD *)v24;
  *((_DWORD *)v11 + 1) = *((_DWORD *)v24 + 1);
  if ( v23 < 9 )
  {
LABEL_17:
    v11 += v23;
    goto LABEL_18;
  }
  v11 += 8;
  v25 = v24 + 8;
  for ( v23 -= 8LL; ; v23 -= 16LL )
  {
    if ( (unsigned __int64)v11 < v14 )
      goto LABEL_27;
    if ( (unsigned __int64)v11 >= v13 )
      break;
    v14 = RtlpMakeXpressCallback(v55, v13, v11, v13);
LABEL_27:
    *(_DWORD *)v11 = *v25;
    *((_DWORD *)v11 + 1) = v25[1];
    *((_DWORD *)v11 + 2) = v25[2];
    *((_DWORD *)v11 + 3) = v25[3];
    if ( v23 < 17 )
      goto LABEL_17;
    v13 = (unsigned __int64)(v54 - 352);
    v11 += 16;
    v25 += 4;
  }
  v31 = (unsigned __int64)v54;
  v32 = &v11[v23];
  if ( &v11[v23] <= v54 )
    goto LABEL_59;
  return 3221226050LL;
}
