/*
 * XREFs of ?vSrcOpaqCopyS1D8@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1401FE090
 * Callers:
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1400DB4AC (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 * Callees:
 *     <none>
 */

void __fastcall vSrcOpaqCopyS1D8(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10)
{
  int v10; // r13d
  int v11; // esi
  int v12; // edi
  __int64 v13; // r15
  __int64 v14; // r11
  unsigned int v15; // r8d
  unsigned __int8 *v16; // rbx
  __int64 v17; // r12
  const unsigned __int8 *v18; // r14
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  const unsigned __int8 *v22; // r14
  __int64 v23; // rdx
  unsigned __int8 *v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // r13
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int8 *v29; // r11
  unsigned __int8 *v30; // r12
  unsigned __int8 *v31; // r10
  unsigned int v32; // edx
  unsigned __int64 v33; // rax
  unsigned int v34; // r8d
  unsigned int v35; // r9d
  unsigned int v36; // ecx
  unsigned int v37; // edx
  unsigned __int64 v38; // rax
  __int64 v39; // rcx
  const unsigned __int8 *v40; // r9
  int v41; // r11d
  unsigned __int8 *v42; // r8
  unsigned __int8 *v43; // rbx
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rcx
  unsigned __int8 *v46; // r8
  unsigned __int8 *v47; // r15
  int v48; // r11d
  int v49; // ebx
  unsigned int v50; // edx
  int v51; // eax
  unsigned __int8 *v52; // r11
  int v53; // edx
  int v54; // edx
  int v55; // edx
  int v56; // edx
  int v57; // edx
  int v58; // edx
  unsigned __int8 v59; // al
  unsigned __int8 v60; // al
  unsigned __int8 v61; // al
  int v62; // ecx
  unsigned __int8 v63; // al
  unsigned int v64; // ecx
  unsigned int v65; // ecx
  unsigned int v66; // edx
  int v67; // ecx
  unsigned __int8 *v68; // r8
  const unsigned __int8 *v69; // r9
  unsigned __int8 *v70; // r11
  unsigned __int64 v71; // rcx
  int v72; // edx
  int v73; // eax
  unsigned int v74; // ecx
  unsigned int v75; // ecx
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // rax
  int v78; // ecx
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // rax
  _DWORD v81[2]; // [rsp+0h] [rbp-68h]
  unsigned int v82; // [rsp+8h] [rbp-60h]
  unsigned int v83; // [rsp+Ch] [rbp-5Ch]
  unsigned int v84; // [rsp+10h] [rbp-58h]
  unsigned int v85; // [rsp+14h] [rbp-54h]
  unsigned int v86; // [rsp+18h] [rbp-50h]
  unsigned int v87; // [rsp+1Ch] [rbp-4Ch]
  unsigned int v88; // [rsp+20h] [rbp-48h]
  unsigned int v89; // [rsp+24h] [rbp-44h]
  unsigned int v90; // [rsp+28h] [rbp-40h]
  unsigned int v91; // [rsp+2Ch] [rbp-3Ch]
  unsigned int v92; // [rsp+30h] [rbp-38h]
  unsigned int v93; // [rsp+34h] [rbp-34h]
  unsigned int v94; // [rsp+38h] [rbp-30h]
  unsigned int v95; // [rsp+3Ch] [rbp-2Ch]
  __int64 v96; // [rsp+40h] [rbp-28h]
  __int64 v97; // [rsp+48h] [rbp-20h]
  unsigned __int8 *v98; // [rsp+50h] [rbp-18h]
  __int64 v99; // [rsp+58h] [rbp-10h]
  unsigned int v101; // [rsp+B8h] [rbp+50h]

  v10 = a5;
  v11 = a3;
  v12 = a7;
  v13 = a2;
  v14 = (a5 + 7) & 0xFFFFFFF8;
  v15 = (a6 & 0xFFFFFFF8) - v14;
  v101 = v15 & 0xFFFFFFF0;
  v16 = &a4[v14];
  LODWORD(v96) = v15 & 0xFFFFFFE0;
  v81[0] = a10 | (a10 << 8) | ((a10 | (a10 << 8)) << 16);
  v88 = a9 | (v81[0] << 8);
  v84 = a10 | (v88 << 8);
  v90 = a9 | (v84 << 8);
  v85 = a10 | (v90 << 8);
  v82 = a10 | (v85 << 8);
  v89 = a9 | (v82 << 8);
  v92 = a9 | (v89 << 8);
  v94 = a9 | (v92 << 8);
  v95 = a9 | (v94 << 8);
  v87 = a10 | (v95 << 8);
  v91 = a9 | (v87 << 8);
  v93 = a9 | (v91 << 8);
  v86 = a10 | (v93 << 8);
  v83 = a10 | (v86 << 8);
  v81[1] = a10 | (v83 << 8);
  v17 = a8 * a7;
  v99 = v17;
  v98 = &a4[v14 + v17];
  v18 = &a1[(__int64)(a2 + 7) >> 3];
  v19 = v11 - (v15 >> 3);
  v20 = a7 - v15;
  if ( (a6 & 0xFFFFFFF8) > (unsigned int)v14 )
  {
    v25 = (unsigned int)v96;
    v26 = v15;
    v27 = v20;
    v28 = v19;
    v96 = v20;
    v97 = v19;
    do
    {
      v29 = &v16[v25];
      v30 = &v16[v26];
      v31 = &v16[v101];
      if ( v16 != &v16[v25] )
      {
        do
        {
          v32 = v18[1];
          v33 = *v18;
          v34 = v18[2];
          v35 = v18[3];
          v18 += 4;
          *(_DWORD *)v16 = v81[v33 >> 4];
          *((_DWORD *)v16 + 1) = v81[v33 & 0xF];
          *((_DWORD *)v16 + 2) = v81[(unsigned __int64)v32 >> 4];
          *((_DWORD *)v16 + 3) = v81[v32 & 0xF];
          *((_DWORD *)v16 + 4) = v81[(unsigned __int64)v34 >> 4];
          *((_DWORD *)v16 + 5) = v81[v34 & 0xF];
          *((_DWORD *)v16 + 6) = v81[(unsigned __int64)v35 >> 4];
          *((_DWORD *)v16 + 7) = v81[v35 & 0xF];
          v16 += 32;
        }
        while ( v16 != v29 );
        v27 = v96;
        v28 = v97;
      }
      while ( v16 != v31 )
      {
        v37 = v18[1];
        v38 = (unsigned __int64)*v18 >> 4;
        v39 = *v18 & 0xF;
        v18 += 2;
        *(_DWORD *)v16 = v81[v38];
        *((_DWORD *)v16 + 1) = v81[v39];
        *((_DWORD *)v16 + 2) = v81[(unsigned __int64)v37 >> 4];
        *((_DWORD *)v16 + 3) = v81[v37 & 0xF];
        v16 += 16;
      }
      while ( v16 != v30 )
      {
        v36 = *v18++;
        *(_DWORD *)v16 = v81[(unsigned __int64)v36 >> 4];
        *((_DWORD *)v16 + 1) = v81[v36 & 0xF];
        v16 += 8;
      }
      v16 += v27;
      v18 += v28;
    }
    while ( v16 != v98 );
    v12 = a7;
    v11 = a3;
    v10 = a5;
    v17 = v99;
  }
  v21 = a6;
  v22 = a1;
  v23 = v10 & 7;
  if ( (v10 & 7) == 0 )
    goto LABEL_3;
  v40 = &a1[v13 >> 3];
  if ( ((v10 ^ (a6 - 1)) & 0xFFFFFFFC) != 0 )
  {
    v24 = a4;
    v46 = &a4[v10 & 0xFFFFFFFFFFFFFFF8uLL];
    if ( (v10 & 0xFFFFFFF8) == ((a6 - 1) & 0xFFFFFFF8) )
    {
      v47 = &v46[v17];
      v48 = dword_1403704F0[2 * (a6 & 7)] & dword_140370470[2 * v23];
      v49 = dword_1403704F4[2 * (a6 & 7)] & dword_140370474[2 * v23];
      do
      {
        v50 = *v40;
        v40 += v11;
        v51 = *((_DWORD *)v46 + 1);
        *(_DWORD *)v46 = ~v48 & *(_DWORD *)v46 | v48 & v81[(unsigned __int64)v50 >> 4];
        *((_DWORD *)v46 + 1) = ~v49 & v51 | v49 & v81[v50 & 0xF];
        v46 += v12;
      }
      while ( v46 != v47 );
      return;
    }
    v52 = &v46[v17];
    v53 = v23 - 1;
    if ( v53 )
    {
      v54 = v53 - 1;
      if ( v54 )
      {
        v55 = v54 - 1;
        if ( v55 )
        {
          v56 = v55 - 1;
          if ( !v56 )
          {
            do
            {
              v63 = *v40;
              v40 += v11;
              *((_DWORD *)v46 + 1) = v81[v63 & 0xF];
              v46 += v12;
            }
            while ( v46 != v52 );
LABEL_41:
            v21 = a6;
LABEL_4:
            if ( (a6 & 7) != 0 )
            {
              v68 = &v24[v21 & 0xFFFFFFFFFFFFFFF8uLL];
              v69 = &v22[(__int64)(v21 + (int)v13 - v10) >> 3];
              v70 = &v68[v17];
              switch ( a6 & 7 )
              {
                case 1:
                  do
                  {
                    v80 = *v69;
                    v69 += v11;
                    *v68 = v81[v80 >> 4];
                    v68 += v12;
                  }
                  while ( v68 != v70 );
                  break;
                case 2:
                  do
                  {
                    v79 = *v69;
                    v69 += v11;
                    *(_WORD *)v68 = v81[v79 >> 4];
                    v68 += v12;
                  }
                  while ( v68 != v70 );
                  break;
                case 3:
                  do
                  {
                    v77 = *v69;
                    v69 += v11;
                    v78 = v81[v77 >> 4];
                    *(_WORD *)v68 = v78;
                    v68[2] = BYTE2(v78);
                    v68 += v12;
                  }
                  while ( v68 != v70 );
                  break;
                case 4:
                  do
                  {
                    v76 = *v69;
                    v69 += v11;
                    *(_DWORD *)v68 = v81[v76 >> 4];
                    v68 += v12;
                  }
                  while ( v68 != v70 );
                  break;
                case 5:
                  do
                  {
                    v75 = *v69;
                    v69 += v11;
                    *(_DWORD *)v68 = v81[(unsigned __int64)v75 >> 4];
                    v68[4] = v81[v75 & 0xF];
                    v68 += v12;
                  }
                  while ( v68 != v70 );
                  break;
                case 6:
                  do
                  {
                    v74 = *v69;
                    v69 += v11;
                    *(_DWORD *)v68 = v81[(unsigned __int64)v74 >> 4];
                    *((_WORD *)v68 + 2) = v81[v74 & 0xF];
                    v68 += v12;
                  }
                  while ( v68 != v70 );
                  break;
                case 7:
                  do
                  {
                    v71 = *v69;
                    v69 += v11;
                    v72 = v81[v71 & 0xF];
                    v73 = v81[v71 >> 4];
                    *((_WORD *)v68 + 2) = v72;
                    v68[6] = BYTE2(v72);
                    *(_DWORD *)v68 = v73;
                    v68 += v12;
                  }
                  while ( v68 != v70 );
                  break;
              }
            }
            return;
          }
          v57 = v56 - 1;
          if ( v57 )
          {
            v58 = v57 - 1;
            if ( v58 )
            {
              if ( v58 == 1 )
              {
                do
                {
                  v59 = *v40;
                  v40 += v11;
                  v46[7] = HIBYTE(v81[v59 & 0xF]);
                  v46 += v12;
                }
                while ( v46 != v52 );
              }
            }
            else
            {
              do
              {
                v60 = *v40;
                v40 += v11;
                *((_WORD *)v46 + 3) = HIWORD(v81[v60 & 0xF]);
                v46 += v12;
              }
              while ( v46 != v52 );
            }
            goto LABEL_41;
          }
          do
          {
            v61 = *v40;
            v40 += v11;
            v62 = v81[v61 & 0xF];
            v46[5] = BYTE1(v62);
            *((_WORD *)v46 + 3) = HIWORD(v62);
            v46 += v12;
          }
          while ( v46 != v52 );
        }
        else
        {
          do
          {
            v64 = *v40;
            v40 += v11;
            v46[3] = HIBYTE(v81[(unsigned __int64)v64 >> 4]);
            *((_DWORD *)v46 + 1) = v81[v64 & 0xF];
            v46 += v12;
          }
          while ( v46 != v52 );
        }
      }
      else
      {
        do
        {
          v65 = *v40;
          v40 += v11;
          *((_WORD *)v46 + 1) = HIWORD(v81[(unsigned __int64)v65 >> 4]);
          *((_DWORD *)v46 + 1) = v81[v65 & 0xF];
          v46 += v12;
        }
        while ( v46 != v52 );
      }
    }
    else
    {
      do
      {
        v66 = *v40;
        v40 += v11;
        v67 = v81[(unsigned __int64)v66 >> 4];
        v46[1] = BYTE1(v67);
        *((_DWORD *)v46 + 1) = v81[v66 & 0xF];
        *((_WORD *)v46 + 1) = HIWORD(v67);
        v46 += v12;
      }
      while ( v46 != v52 );
      v22 = a1;
    }
    v21 = a6;
LABEL_3:
    v24 = a4;
    goto LABEL_4;
  }
  v41 = dword_140370470[2 * (v10 & 3)] & dword_1403704F0[2 * (a6 & 3)];
  v42 = &a4[v10 & 0xFFFFFFFFFFFFFFFCuLL];
  v43 = &v42[v17];
  do
  {
    v44 = *v40;
    if ( (unsigned int)v23 >= 4 )
      v45 = v44 & 0xF;
    else
      v45 = v44 >> 4;
    v40 += v11;
    *(_DWORD *)v42 = ~v41 & *(_DWORD *)v42 | v41 & v81[v45];
    v42 += v12;
  }
  while ( v42 != v43 );
}
