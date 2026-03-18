/*
 * XREFs of ScaleHorizontal @ 0x1C02DD3FC
 * Callers:
 *     sbit_GetBitmap @ 0x1C000BD48 (sbit_GetBitmap.c)
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
 */

void __fastcall ScaleHorizontal(
        unsigned __int8 *a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        __int16 a4,
        unsigned __int16 a5,
        unsigned __int16 a6,
        unsigned __int16 a7)
{
  unsigned __int16 v7; // bp
  unsigned __int8 *v8; // rsi
  unsigned __int16 v9; // r14
  unsigned __int16 v10; // r15
  unsigned __int8 *v11; // r12
  int v12; // ebx
  __int64 v13; // rcx
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // r8
  unsigned __int8 *v16; // rdx
  unsigned __int8 *v17; // r11
  __int16 v18; // r9
  unsigned __int16 v19; // r10
  __int64 v20; // rcx
  unsigned __int8 v21; // al
  unsigned __int8 v22; // cl
  int v23; // eax
  int v24; // ecx
  __int16 v25; // r12
  int v26; // r15d
  char *v27; // r8
  char *v28; // r9
  __int64 v29; // rcx
  unsigned __int16 v30; // si
  char *v31; // r11
  unsigned __int16 v32; // ax
  char *v33; // rbx
  unsigned __int8 v34; // r9
  unsigned __int16 v35; // r8
  __int16 v36; // dx
  char *v37; // rbp
  __int16 v38; // si
  unsigned __int16 v39; // r12
  unsigned __int8 v40; // r13
  char *v41; // r14
  bool v42; // zf
  unsigned __int16 v43; // r14
  unsigned __int8 *v44; // r15
  __int64 v45; // rax
  unsigned __int8 *v46; // r8
  unsigned __int8 *v47; // r9
  unsigned __int16 v48; // dx
  unsigned __int16 v49; // cx
  __int64 v50; // r10
  unsigned __int16 v51; // r9
  int v52; // ecx
  char *v53; // r8
  char *v54; // rcx
  char *v55; // rsi
  __int64 v56; // r12
  char *v57; // r11
  char *v58; // r10
  char *v59; // r8
  unsigned __int16 v60; // dx
  unsigned __int16 v61; // cx
  __int64 v62; // rax
  unsigned __int8 v63; // [rsp+20h] [rbp-68h]
  unsigned __int16 v64; // [rsp+20h] [rbp-68h]
  int v65; // [rsp+24h] [rbp-64h]
  __int64 v66; // [rsp+28h] [rbp-60h]
  char *v67; // [rsp+28h] [rbp-60h]
  __int64 v68; // [rsp+30h] [rbp-58h]
  __int64 v69; // [rsp+30h] [rbp-58h]
  unsigned __int8 *v70; // [rsp+38h] [rbp-50h]
  __int64 v71; // [rsp+40h] [rbp-48h]
  unsigned __int8 v73; // [rsp+A8h] [rbp+20h]

  v7 = a3;
  v8 = a1;
  v73 = 0;
  if ( a4 == 1 )
  {
    v9 = a6;
    if ( a6 >= a5 )
    {
      if ( a6 > a5 )
      {
        v64 = a7;
        v24 = a7 - 1;
        v25 = ((a5 - 1) & 7) - 7;
        v26 = (a6 + 7) >> 3;
        v27 = (char *)&v8[v24 * a2];
        v28 = (char *)&v8[v24 * v7];
        if ( a7 )
        {
          v68 = a2;
          v71 = v7;
          v29 = a2;
          v30 = a5 >> 1;
          v31 = &v28[(unsigned __int16)v26 - 1];
          v32 = a7;
          v33 = &v27[(unsigned __int16)((a5 + 7) >> 3) - 1];
          do
          {
            v34 = 0;
            v67 = v31;
            v35 = v30;
            v36 = v25;
            v37 = v33;
            v38 = 7 - ((a6 - 1) & 7);
            v39 = 0;
            if ( (_WORD)v26 )
            {
              v40 = v73;
              do
              {
                if ( v36 <= 0 )
                {
                  v40 = *v37--;
                  v36 += 8;
                  v73 = v40;
                }
                v35 += v9;
                if ( v35 >= a5 )
                {
                  v41 = v67;
                  do
                  {
                    ++v38;
                    v34 = (v40 << (v36 - 1)) & 0x80 | (v34 >> 1);
                    if ( v38 == 8 )
                    {
                      *v41 = v34;
                      v38 = 0;
                      --v41;
                      ++v39;
                    }
                    v35 -= a5;
                  }
                  while ( v35 >= a5 );
                  v40 = v73;
                  v67 = v41;
                  v9 = a6;
                }
                --v36;
              }
              while ( v39 < (unsigned __int16)v26 );
              v32 = v64;
              v29 = v68;
            }
            v31 -= v71;
            v33 -= v29;
            v30 = a5 >> 1;
            v42 = v32-- == 1;
            v25 = ((a5 - 1) & 7) - 7;
            v64 = v32;
          }
          while ( !v42 );
        }
      }
    }
    else
    {
      v10 = a7;
      v11 = a1;
      v12 = (a6 + 7) >> 3;
      if ( a7 )
      {
        v13 = a2;
        v14 = a5 >> 1;
        v66 = a2;
        do
        {
          v15 = v14;
          v16 = v8;
          v70 = v8;
          v65 = 0;
          v17 = v11;
          v63 = 0;
          v18 = 0;
          v19 = 0;
          if ( (_WORD)v12 )
          {
            do
            {
              while ( v15 >= a6 )
              {
                --v18;
                v15 -= a6;
              }
              if ( v18 > 0 )
              {
                v21 = v73;
              }
              else
              {
                v20 = (unsigned __int16)(((unsigned __int16)-v18 >> 3) + 1);
                v18 += 8 * v20;
                do
                {
                  v21 = *v16++;
                  v73 = v21;
                  --v20;
                }
                while ( v20 );
                v70 = v16;
              }
              v22 = (2 * v63) | (v21 >> (v18 - 1)) & 1;
              HIWORD(v23) = HIWORD(v65);
              LOWORD(v23) = v65 + 1;
              v63 = v22;
              v65 = v23;
              if ( (_WORD)v23 == 8 )
              {
                *v17++ = v22;
                v65 = 0;
                ++v19;
              }
              v16 = v70;
              v15 += a5;
            }
            while ( v19 < (unsigned __int16)v12 );
            v7 = a3;
            v13 = v66;
          }
          if ( v19 < v7 )
          {
            memset(v17, 0, (unsigned __int16)(v7 - v19));
            v13 = v66;
          }
          v8 += v13;
          v11 += v7;
          v14 = a5 >> 1;
          --v10;
        }
        while ( v10 );
      }
    }
  }
  else if ( a6 >= a5 )
  {
    if ( a6 > a5 )
    {
      v51 = a7;
      v52 = a7 - 1;
      v53 = (char *)&v8[v52 * a2];
      v54 = (char *)&v8[v52 * v7];
      if ( a7 )
      {
        v55 = &v53[a5 - 1];
        v56 = a2;
        v57 = &v54[v7 - 1];
        do
        {
          v58 = v55;
          v59 = v57;
          v60 = a5 >> 1;
          v61 = v7;
          if ( v7 > a6 )
          {
            v62 = (unsigned __int16)(v7 - a6);
            do
            {
              *v59 = 0;
              --v61;
              --v59;
              --v62;
            }
            while ( v62 );
          }
          while ( v61 )
          {
            for ( v60 += a6; v60 >= a5; --v59 )
            {
              --v61;
              *v59 = *v58;
              v60 -= a5;
            }
            --v58;
          }
          v55 -= v56;
          v57 -= v7;
          --v51;
        }
        while ( v51 );
      }
    }
  }
  else
  {
    v43 = a7;
    v44 = a1;
    if ( a7 )
    {
      v45 = a2;
      v69 = a2;
      do
      {
        v46 = v8;
        v47 = v44;
        v48 = a5 >> 1;
        v49 = 0;
        if ( a6 )
        {
          v49 = a6;
          v50 = a6;
          do
          {
            while ( v48 >= a6 )
            {
              ++v46;
              v48 -= a6;
            }
            v48 += a5;
            *v47++ = *v46;
            --v50;
          }
          while ( v50 );
          v45 = v69;
        }
        if ( v49 < v7 )
        {
          memset(v47, 0, (unsigned __int16)(v7 - v49));
          v45 = v69;
        }
        v8 += v45;
        v44 += v7;
        --v43;
      }
      while ( v43 );
    }
  }
}
