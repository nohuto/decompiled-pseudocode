/*
 * XREFs of vStretchGlyphBitmap @ 0x1C02487D0
 * Callers:
 *     vStretchCvtToBitmap @ 0x1C02486D4 (vStretchCvtToBitmap.c)
 * Callees:
 *     memmove @ 0x1C0152980 (memmove.c)
 *     vEmboldenItalicizeLine @ 0x1C0248618 (vEmboldenItalicizeLine.c)
 */

__int64 __fastcall vStretchGlyphBitmap(char *a1, _BYTE *a2, _BYTE *a3, int a4, unsigned int a5, int a6, int a7, int a8)
{
  int v8; // r13d
  char v9; // r11
  int v10; // r15d
  __int64 v12; // r9
  int v14; // esi
  unsigned int v15; // edi
  __int64 result; // rax
  unsigned int v17; // ebp
  unsigned int v18; // edi
  unsigned int v19; // ecx
  __int64 v20; // r10
  unsigned __int64 v21; // r8
  _BYTE *v22; // rcx
  char *v23; // r14
  __int64 v24; // r15
  int v25; // ebp
  int v26; // r9d
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  int v29; // r8d
  void *v30; // rcx
  unsigned __int64 v31; // r15
  int v32; // r8d
  unsigned __int64 v33; // r10
  char *v34; // r9
  char *v35; // rdx
  char v36; // r11
  int v37; // eax
  char *v38; // rax
  _BYTE *v39; // r10
  char v40; // r9
  unsigned __int64 v41; // rdx
  char *v42; // r8
  char v43; // r9
  unsigned int v44; // [rsp+30h] [rbp-78h]
  __int64 v45; // [rsp+38h] [rbp-70h]
  char *v46; // [rsp+40h] [rbp-68h]
  __int64 v47; // [rsp+48h] [rbp-60h]
  void *Src; // [rsp+58h] [rbp-50h]
  char *Srca; // [rsp+58h] [rbp-50h]
  _BYTE *v50; // [rsp+60h] [rbp-48h]
  _BYTE *v51; // [rsp+B8h] [rbp+10h]
  int v52; // [rsp+C0h] [rbp+18h]
  int v53; // [rsp+C8h] [rbp+20h]

  v51 = a2;
  v8 = a8;
  v9 = 0;
  v52 = 0;
  v10 = a7 * a4;
  v12 = a5;
  v14 = 0;
  v15 = 0;
  v53 = v10;
  v50 = &a2[a5];
  result = (unsigned int)(v10 + 7) >> 3;
  if ( a8 == 0x2000 )
  {
    v17 = (unsigned int)(v10 + 8) >> 3;
  }
  else
  {
    if ( a8 != 0x4000 && a8 != 24576 )
    {
      v17 = (unsigned int)(v10 + 7) >> 3;
      v44 = v17;
      goto LABEL_10;
    }
    v18 = (a6 * a5 - 1) >> 1;
    if ( (a8 & 0x2000) != 0 )
      ++v18;
    v52 = 0;
    v14 = v18 & 7;
    v17 = (v18 + v10 + 7) >> 3;
    v15 = v18 >> 3;
  }
  v44 = v17;
LABEL_10:
  v19 = a6 * v17;
  if ( a2 < &a2[a5] )
  {
    v20 = v19;
    v21 = (unsigned __int64)&a3[result];
    v45 = v19;
    v46 = &a3[result];
    v47 = (unsigned int)(v10 + 7) >> 3;
    do
    {
      v22 = a3;
      if ( (unsigned __int64)a3 < v21 )
      {
        do
        {
          switch ( a7 )
          {
            case 1:
              *v22++ = *a2;
              break;
            case 2:
              *v22 = ajStretch2[(unsigned __int64)(unsigned __int8)*a2 >> 4];
              v22[1] = ajStretch2[*a2 & 0xF];
              v22 += 2;
              break;
            case 3:
              *v22 = ajStretch3B1[(unsigned __int64)(unsigned __int8)*a2 >> 5];
              v22[1] = ajStretch3B2[((unsigned __int64)(unsigned __int8)*a2 >> 2) & 0xF];
              v22[2] = ajStretch3B3[*a2 & 7];
              v22 += 3;
              break;
            case 4:
              *v22 = awStretch4[2 * ((unsigned __int64)(unsigned __int8)*a2 >> 4)];
              v22[1] = byte_1C0320609[2 * ((unsigned __int64)(unsigned __int8)*a2 >> 4)];
              v22[2] = awStretch4[2 * (*a2 & 0xF)];
              v22[3] = byte_1C0320609[2 * (*a2 & 0xF)];
              v22 += 4;
              break;
            case 5:
              *v22 = awStretch5W1[2 * ((unsigned __int64)(unsigned __int8)*a2 >> 4)];
              v22[1] = byte_1C03205E9[2 * ((unsigned __int64)(unsigned __int8)*a2 >> 4)];
              v22[2] = awStretch5W2[2 * (((unsigned __int64)(unsigned __int8)*a2 >> 1) & 0xF)];
              v22[3] = byte_1C0320629[2 * (((unsigned __int64)(unsigned __int8)*a2 >> 1) & 0xF)];
              v22[4] = ajStretch5B1[*a2 & 3];
              v22 += 5;
              break;
          }
          a2 += v12;
        }
        while ( (unsigned __int64)v22 < v21 );
        result = v47;
      }
      v23 = &a1[v20];
      if ( v8 )
      {
        if ( v8 == 0x2000 )
        {
          v38 = &a1[result];
          v39 = a1;
          v40 = 0;
          v41 = v38 - a1;
          if ( a1 > v38 )
            v41 = 0LL;
          if ( v41 )
          {
            v42 = a3;
            do
            {
              *v39++ = v40 | *v42 | ((unsigned __int8)*v42 >> 1);
              v43 = *v42++;
              v40 = v43 << 7;
            }
            while ( v42 - a3 < v41 );
            v9 = 0;
          }
          if ( (v10 & 7) == 0 )
            *v39 = v40;
          Srca = a1;
          a1 += v17;
          if ( a1 < v23 )
          {
            do
            {
              memmove(a1, Srca, v17);
              a1 += v17;
            }
            while ( a1 < v23 );
            v8 = a8;
LABEL_63:
            v9 = 0;
          }
          goto LABEL_64;
        }
        if ( v8 != 0x4000 )
        {
          if ( v8 != 24576 || a1 >= v23 )
            goto LABEL_65;
          v24 = v17;
          v25 = v52;
          do
          {
            vEmboldenItalicizeLine(&a1[v15], (unsigned __int64)a3, v21, v14, v53);
            v9 = 0;
            v26 = v25++ & 1;
            v14 -= v26;
            if ( v14 < 0 )
            {
              v14 = 7;
              --v15;
            }
            v21 = (unsigned __int64)v46;
            a1 += v24;
          }
          while ( a1 < v23 );
          v52 = v25;
          v17 = v44;
LABEL_35:
          v8 = a8;
LABEL_64:
          v10 = v53;
          v12 = a5;
          v20 = v45;
          goto LABEL_65;
        }
        if ( a1 < v23 )
        {
          v27 = v21;
          v28 = v17;
          v29 = v10;
          v30 = (void *)(v27 - (_QWORD)a3);
          v31 = (unsigned __int64)v46;
          v32 = -v29 & 7;
          Src = v30;
          do
          {
            v33 = (unsigned __int64)v30;
            if ( (unsigned __int64)a3 > v31 )
              v33 = 0LL;
            v34 = &a1[v15];
            if ( v33 )
            {
              v35 = a3;
              do
              {
                *v34++ = v9 | ((unsigned __int8)*v35 >> v14);
                v36 = *v35++;
                v9 = v36 << (8 - v14);
              }
              while ( v35 - a3 < v33 );
              v30 = Src;
              v31 = (unsigned __int64)v46;
              v28 = v17;
            }
            if ( v32 < v14 )
              *v34 = v9;
            v9 = 0;
            v37 = v52++ & 1;
            v14 -= v37;
            if ( v14 < 0 )
            {
              v14 = 7;
              --v15;
            }
            a1 += v28;
          }
          while ( a1 < v23 );
          goto LABEL_35;
        }
      }
      else if ( a1 < v23 )
      {
        do
        {
          memmove(a1, a3, v17);
          a1 += v17;
        }
        while ( a1 < v23 );
        goto LABEL_63;
      }
LABEL_65:
      v21 = (unsigned __int64)v46;
      a2 = v51 + 1;
      result = v47;
      v51 = a2;
    }
    while ( a2 < v50 );
  }
  return result;
}
