/*
 * XREFs of ?vSrcOpaqCopyS4D24Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400EE018
 * Callers:
 *     ?vSrcOpaqCopyS4D24@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x140289B80 (-vSrcOpaqCopyS4D24@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 * Callees:
 *     ?pvFillOpaqTable@@YAPEAXKKKPEAVSURFACE@@@Z @ 0x1400EFF78 (-pvFillOpaqTable@@YAPEAXKKKPEAVSURFACE@@@Z.c)
 */

void __fastcall vSrcOpaqCopyS4D24Unsafe(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        struct SURFACE *a11)
{
  _DWORD *v14; // rdi
  const unsigned __int8 *v15; // rsi
  unsigned __int8 *v16; // rbx
  signed int v17; // ecx
  unsigned int v18; // r9d
  int v19; // r10d
  int v20; // edx
  int v21; // r13d
  const unsigned __int8 *v23; // r14
  unsigned __int8 *v24; // r11
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  _BYTE *v27; // r11
  __int64 v28; // rcx
  _BYTE *v29; // r11
  int i; // r15d
  unsigned int v31; // eax
  unsigned int v32; // ecx
  unsigned int v33; // r8d
  unsigned int v34; // r10d
  int v35; // r9d
  _DWORD *v36; // r11
  unsigned __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned __int8 *v39; // r14
  unsigned __int64 v40; // rcx
  __int64 v41; // rdx
  _BYTE *v42; // rbx
  unsigned __int64 v43; // rcx
  _BYTE *v44; // rbx
  int v45; // [rsp+24h] [rbp-74h]
  int v46; // [rsp+28h] [rbp-70h]

  v14 = pvFillOpaqTable(4u, a9, a10, a11);
  v15 = &a1[a2 / 2];
  v16 = &a4[3 * a5];
  v17 = (a5 + 3) & 0xFFFFFFFC;
  v18 = a6 & 0xFFFFFFFC;
  if ( v17 <= (int)(a6 & 0xFFFFFFFC) )
  {
    v19 = v17 - a5;
    v46 = v17 - a5;
    v20 = (int)(v18 - v17) / 4;
    v45 = v20;
    v21 = a6 - v18;
    while ( 1 )
    {
      if ( !a8 )
        return;
      v23 = v15;
      v24 = v16;
      if ( v19 == 1 )
        goto LABEL_9;
      if ( v19 == 2 )
        goto LABEL_8;
      if ( v19 == 3 )
        break;
LABEL_10:
      for ( i = 0; i < v20; ++i )
      {
        v31 = *v23;
        v32 = v23[1];
        v23 += 2;
        v33 = v14[v31 & 0xF];
        v34 = v14[(unsigned __int64)v32 >> 4];
        v35 = v14[v32 & 0xF];
        *(_DWORD *)v24 = v14[(unsigned __int64)v31 >> 4] + (v33 << 24);
        v36 = v24 + 4;
        *v36++ = (v33 >> 8) + (v34 << 16);
        *v36 = HIWORD(v34) + (v35 << 8);
        v24 = (unsigned __int8 *)(v36 + 1);
        v20 = v45;
      }
      if ( v21 )
      {
        v37 = (unsigned __int64)*v23 >> 4;
        *v24 = v14[v37];
        v24[1] = BYTE1(v14[v37]);
        v24[2] = BYTE2(v14[v37]);
        if ( v21 != 1 )
        {
          v38 = *v23 & 0xF;
          v24[3] = v14[v38];
          v24[4] = BYTE1(v14[v38]);
          v24[5] = BYTE2(v14[v38]);
          v39 = (unsigned __int8 *)(v23 + 1);
          if ( v21 != 2 )
          {
            v40 = (unsigned __int64)*v39 >> 4;
            v24[6] = v14[v40];
            v24[7] = BYTE1(v14[v40]);
            v24[8] = BYTE2(v14[v40]);
          }
        }
        v20 = v45;
      }
      --a8;
      v15 += a3;
      v16 += a7;
      v19 = v46;
    }
    v25 = *v15 & 0xF;
    *v16 = v14[v25];
    v16[1] = BYTE1(v14[v25]);
    v16[2] = BYTE2(v14[v25]);
    v24 = v16 + 3;
    v23 = v15 + 1;
    v20 = v45;
LABEL_8:
    v26 = (unsigned __int64)*v23 >> 4;
    *v24 = v14[v26];
    v27 = v24 + 1;
    *v27++ = BYTE1(v14[v26]);
    *v27 = BYTE2(v14[v26]);
    v24 = v27 + 1;
LABEL_9:
    v28 = *v23 & 0xF;
    *v24 = v14[v28];
    v29 = v24 + 1;
    *v29++ = BYTE1(v14[v28]);
    *v29 = BYTE2(v14[v28]);
    v24 = v29 + 1;
    ++v23;
    goto LABEL_10;
  }
  if ( (a5 & 3) == 1 )
  {
    v41 = *v15 & 0xF;
    *v16 = v14[v41];
    v16[1] = BYTE1(v14[v41]);
    v42 = v16 + 2;
    *v42 = BYTE2(v14[v41]);
    v16 = v42 + 1;
    if ( a5 + 1 == a6 )
      return;
    ++v15;
    goto LABEL_24;
  }
  if ( (a5 & 3) == 2 )
  {
LABEL_24:
    v43 = (unsigned __int64)*v15 >> 4;
    *v16 = v14[v43];
    v44 = v16 + 1;
    *v44 = BYTE1(v14[v43]);
    v44[1] = BYTE2(v14[v43]);
  }
}
