/*
 * XREFs of RtlDecompressBufferXpressHuffProgress @ 0x140217D9C
 * Callers:
 *     RtlDecompressBufferProgress @ 0x140113C60 (RtlDecompressBufferProgress.c)
 * Callees:
 *     XpressBuildHuffmanDecodingTable @ 0x1400060A0 (XpressBuildHuffmanDecodingTable.c)
 *     RtlpMakeXpressCallback @ 0x140114480 (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlDecompressBufferXpressHuffProgress(
        _DWORD *a1,
        unsigned int a2,
        unsigned __int8 *a3,
        int a4,
        _DWORD *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // esi
  unsigned __int8 *v9; // rbp
  _WORD *v11; // rbx
  unsigned __int64 v12; // r12
  _DWORD *v13; // r10
  _DWORD *v14; // rdi
  __int64 v15; // r15
  unsigned __int16 *v16; // rbp
  int v17; // eax
  int v18; // r14d
  unsigned int v19; // r14d
  _DWORD *v20; // rax
  unsigned __int64 v21; // r13
  unsigned __int64 XpressCallback; // r9
  __int16 v23; // si
  int v24; // eax
  __int64 v25; // rcx
  __int16 v26; // si
  int v27; // edx
  unsigned __int64 v28; // rbx
  __int64 v29; // rsi
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // r8
  int v34; // edx
  char *v35; // rsi
  unsigned __int64 v36; // r8
  _DWORD *v37; // rsi
  _DWORD *v38; // rax
  unsigned __int64 v39; // rcx
  __int16 v40; // si
  int v41; // eax
  __int64 v42; // rcx
  int v43; // edx
  unsigned __int64 v44; // rbx
  __int64 v45; // rsi
  unsigned __int64 v46; // rbx
  unsigned __int64 v47; // rbx
  int v48; // edx
  _WORD *v49; // [rsp+20h] [rbp-58h]
  _DWORD *v50; // [rsp+28h] [rbp-50h]
  _QWORD v51[2]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v52; // [rsp+40h] [rbp-38h]
  unsigned __int64 v54; // [rsp+A8h] [rbp+30h]
  int v55; // [rsp+C0h] [rbp+48h]

  v8 = 4096;
  v55 = 4096;
  v9 = a3;
  if ( !a6 )
    return 3221225704LL;
  v11 = (_WORD *)((a6 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
  v12 = (unsigned __int64)&a3[a4];
  v13 = (_DWORD *)((char *)a1 + a2);
  v49 = v11;
  v54 = (unsigned __int64)v13;
  v14 = a1;
  if ( !a7 || a2 < 0x1000 )
  {
    v8 = a2;
    v55 = a2;
  }
  v51[0] = a7;
  v51[1] = a8;
  v52 = v8;
LABEL_7:
  if ( (__int64)(v12 - (_QWORD)v9) < 260 )
  {
    if ( v14 != v13 )
      return 3221226050LL;
    goto LABEL_103;
  }
  if ( (unsigned int)XpressBuildHuffmanDecodingTable(v11, (__int64)v9) )
    return 3221226050LL;
  v13 = (_DWORD *)v54;
  v15 = 16LL;
  v16 = (unsigned __int16 *)(v9 + 256);
  v17 = v16[1];
  v18 = *v16;
  v9 = (unsigned __int8 *)(v16 + 2);
  v19 = v17 + (v18 << 16);
  v20 = v14 + 0x4000;
  if ( (unsigned __int64)(v14 + 0x4000) > v54 )
    v20 = (_DWORD *)v54;
  v50 = v20;
  v21 = (unsigned __int64)(v20 - 47);
  if ( v14 < v20 - 47 )
  {
    XpressCallback = (unsigned __int64)v14 + v8;
    if ( v21 < XpressCallback )
      XpressCallback = (unsigned __int64)(v20 - 47);
    while ( 1 )
    {
      v23 = v11[((unsigned __int64)v19 >> 22) + 528];
      if ( v23 > 0 )
      {
        v25 = v23 & 0xF;
        v19 <<= v25;
        v15 -= v25;
      }
      else
      {
        v19 <<= 10;
        v15 -= 10LL;
        do
        {
          --v15;
          v24 = (unsigned __int64)v19 >> 31;
          v19 *= 2;
          v23 = v11[(__int16)(v24 - v23) + 1552];
        }
        while ( v23 <= 0 );
      }
      v26 = (v23 >> 4) - 256;
      if ( v15 < 0 )
      {
        if ( (unsigned __int64)v14 >= XpressCallback )
        {
          if ( (unsigned __int64)v14 >= v21 )
          {
            v13 = (_DWORD *)v54;
LABEL_76:
            if ( (unsigned __int64)(v9 + 1) >= v12 )
              return 3221226050LL;
            v43 = *(unsigned __int16 *)v9;
            v9 += 2;
            v19 += v43 << -(char)v15;
            v15 += 16LL;
            goto LABEL_78;
          }
          XpressCallback = RtlpMakeXpressCallback((__int64)v51, v21, (__int64)v14);
        }
        if ( (unsigned __int64)(v9 + 1) >= v12 )
          return 3221226050LL;
        v27 = *(unsigned __int16 *)v9;
        v9 += 2;
        v19 += v27 << -(char)v15;
        v15 += 16LL;
      }
      if ( v26 >= 0 )
      {
        v13 = (_DWORD *)v54;
        if ( !v26 && (unsigned __int64)v9 >= v12 && v14 == (_DWORD *)v54 )
          goto LABEL_103;
        v28 = v26 % 16;
        v29 = v26 / 16;
        if ( v28 == 15 )
        {
          if ( (unsigned __int64)v9 >= v12 )
            return 3221226050LL;
          v30 = *v9++;
          if ( v30 == 255 )
          {
            if ( (unsigned __int64)(v9 + 1) >= v12 )
              return 3221226050LL;
            v31 = *(unsigned __int16 *)v9;
            v9 += 2;
            if ( !v31 )
            {
              if ( (unsigned __int64)(v9 + 3) >= v12 )
                return 3221226050LL;
              v31 = *(unsigned int *)v9;
              v9 += 4;
            }
            if ( v31 < 0xF || (_DWORD *)((char *)v14 + v31 + 3) < v14 )
              return 3221226050LL;
            v30 = v31 - 15;
          }
          v28 = v30 + 15;
        }
        v32 = v28 + 3;
        v33 = (1LL << v29) + ((unsigned __int64)v19 >> (31 - (unsigned __int8)v29) >> 1);
        v19 <<= v29;
        v15 -= v29;
        if ( v15 < 0 )
        {
          if ( (unsigned __int64)v14 >= v21 )
            goto LABEL_95;
          if ( (unsigned __int64)(v9 + 1) >= v12 )
            return 3221226050LL;
          v34 = *(unsigned __int16 *)v9;
          v9 += 2;
          v19 += v34 << -(char)v15;
          v15 += 16LL;
        }
        v35 = (char *)v14 - v33;
        if ( (_DWORD *)((char *)v14 - v33) < a1 )
          return 3221226050LL;
        if ( v33 >= 4 )
          goto LABEL_55;
        *(_BYTE *)v14 = *v35;
        v36 = v33 - 1;
        if ( v36 )
        {
          *((_BYTE *)v14 + 1) = v35[1];
          if ( v36 == 1 )
          {
            v32 -= 2LL;
            v14 = (_DWORD *)((char *)v14 + 2);
          }
          else
          {
            *((_BYTE *)v14 + 2) = v35[2];
            v14 = (_DWORD *)((char *)v14 + 3);
            v32 -= 3LL;
          }
        }
        else
        {
          v32 -= 3LL;
          *((_BYTE *)v14 + 1) = *v35;
          *((_BYTE *)v14 + 2) = *v35;
          v14 = (_DWORD *)((char *)v14 + 3);
        }
        if ( v32 )
        {
LABEL_55:
          *v14 = *(_DWORD *)v35;
          v14[1] = *((_DWORD *)v35 + 1);
          if ( v32 < 9 )
          {
            v14 = (_DWORD *)((char *)v14 + v32);
            goto LABEL_15;
          }
          v14 += 2;
          v37 = v35 + 8;
          for ( v32 -= 8LL; ; v32 -= 16LL )
          {
            if ( (unsigned __int64)v14 >= XpressCallback )
            {
              if ( (unsigned __int64)v14 >= v21 )
              {
                v13 = (_DWORD *)v54;
                v38 = (_DWORD *)((char *)v14 + v32);
                if ( (unsigned __int64)v14 + v32 <= v54 )
                {
LABEL_65:
                  v39 = v32;
                  v11 = v49;
                  qmemcpy(v14, v37, v39);
                  v14 = v38;
                  goto LABEL_66;
                }
                return 3221226050LL;
              }
              XpressCallback = RtlpMakeXpressCallback((__int64)v51, v21, (__int64)v14);
            }
            *v14 = *v37;
            v14[1] = v37[1];
            v14[2] = v37[2];
            v14[3] = v37[3];
            if ( v32 < 0x11 )
            {
              v14 = (_DWORD *)((char *)v14 + v32);
              break;
            }
            v14 += 4;
            v37 += 4;
          }
        }
LABEL_15:
        v11 = v49;
      }
      else
      {
        *(_BYTE *)v14 = v26;
        v14 = (_DWORD *)((char *)v14 + 1);
      }
    }
  }
  while ( 1 )
  {
    if ( v14 >= v20 )
    {
      v8 = v55;
      goto LABEL_7;
    }
    v40 = v11[((unsigned __int64)v19 >> 22) + 528];
    if ( v40 > 0 )
    {
      v42 = v40 & 0xF;
      v19 <<= v42;
      v15 -= v42;
    }
    else
    {
      v19 <<= 10;
      v15 -= 10LL;
      do
      {
        --v15;
        v41 = (unsigned __int64)v19 >> 31;
        v19 *= 2;
        v40 = v11[(__int16)(v41 - v40) + 1552];
      }
      while ( v40 <= 0 );
    }
    v26 = (v40 >> 4) - 256;
    if ( v15 < 0 )
      goto LABEL_76;
LABEL_78:
    if ( v26 >= 0 )
      break;
    *(_BYTE *)v14 = v26;
    v14 = (_DWORD *)((char *)v14 + 1);
LABEL_66:
    v20 = v50;
  }
  if ( !v26 && (unsigned __int64)v9 >= v12 && v14 == v13 )
  {
LABEL_103:
    *a5 = (_DWORD)v14 - (_DWORD)a1;
    return 0LL;
  }
  v44 = v26 % 16;
  v45 = v26 / 16;
  if ( v44 != 15 )
    goto LABEL_94;
  if ( (unsigned __int64)v9 >= v12 )
    return 3221226050LL;
  v46 = *v9++;
  if ( v46 != 255 )
  {
LABEL_93:
    v44 = v46 + 15;
LABEL_94:
    v32 = v44 + 3;
    v33 = (1LL << v45) + ((unsigned __int64)v19 >> (31 - (unsigned __int8)v45) >> 1);
    v19 <<= v45;
    v15 -= v45;
    if ( v15 < 0 )
    {
LABEL_95:
      if ( (unsigned __int64)(v9 + 1) >= v12 )
        return 3221226050LL;
      v48 = *(unsigned __int16 *)v9;
      v9 += 2;
      v19 += v48 << -(char)v15;
      v15 += 16LL;
    }
    v37 = (_DWORD *)((char *)v14 - v33);
    if ( (_DWORD *)((char *)v14 - v33) >= a1 )
    {
      v38 = (_DWORD *)((char *)v14 + v32);
      if ( (_DWORD *)((char *)v14 + v32) <= v13 )
        goto LABEL_65;
    }
    return 3221226050LL;
  }
  if ( (unsigned __int64)(v9 + 1) >= v12 )
    return 3221226050LL;
  v47 = *(unsigned __int16 *)v9;
  v9 += 2;
  if ( !v47 )
  {
    if ( (unsigned __int64)(v9 + 3) >= v12 )
      return 3221226050LL;
    v47 = *(unsigned int *)v9;
    v9 += 4;
  }
  if ( v47 >= 0xF && (_DWORD *)((char *)v14 + v47 + 3) >= v14 )
  {
    v46 = v47 - 15;
    goto LABEL_93;
  }
  return 3221226050LL;
}
