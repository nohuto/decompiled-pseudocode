/*
 * XREFs of ?vSrcTranCopyS8D24Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400EEC3C
 * Callers:
 *     ?vSrcTranCopyS8D24@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400EEB20 (-vSrcTranCopyS8D24@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 * Callees:
 *     ?pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAUBLENDINFO@@H@Z @ 0x1400EF26C (-pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAUBLENDINFO@@H@Z.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall vSrcTranCopyS8D24Unsafe(
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
  __int64 v12; // rbx
  unsigned int v14; // edx
  unsigned int v15; // r14d
  const unsigned __int8 *v16; // r12
  unsigned __int8 *v17; // rsi
  unsigned int v18; // r15d
  char *v19; // r8
  const unsigned __int8 *v20; // r13
  unsigned __int8 *v21; // rdi
  unsigned __int8 *v22; // rax
  __int64 v23; // rcx
  unsigned __int8 *v24; // rdx
  int v25; // r14d
  unsigned int *v26; // rcx
  __int64 SessionState; // rax
  __int64 v28; // rbx
  __int64 v29; // r10
  int v30; // r11d
  int v31; // r8d
  int v32; // edx
  unsigned int v33; // [rsp+38h] [rbp-A0h] BYREF
  unsigned int v34; // [rsp+3Ch] [rbp-9Ch]
  int v35; // [rsp+40h] [rbp-98h] BYREF
  int v36; // [rsp+44h] [rbp-94h]
  int v37; // [rsp+48h] [rbp-90h]
  int v38; // [rsp+4Ch] [rbp-8Ch]
  int v39; // [rsp+50h] [rbp-88h]
  int v40; // [rsp+54h] [rbp-84h]
  unsigned int v41; // [rsp+58h] [rbp-80h]
  unsigned int v42; // [rsp+5Ch] [rbp-7Ch]
  unsigned int v43; // [rsp+60h] [rbp-78h]
  int v44; // [rsp+64h] [rbp-74h]
  int v45; // [rsp+68h] [rbp-70h]
  int v46; // [rsp+6Ch] [rbp-6Ch]
  __int64 v47; // [rsp+70h] [rbp-68h]
  __int64 v48; // [rsp+78h] [rbp-60h]
  unsigned __int8 *v49; // [rsp+80h] [rbp-58h]
  char *v50; // [rsp+88h] [rbp-50h]
  unsigned __int8 *v51; // [rsp+90h] [rbp-48h]
  const unsigned __int8 *v52; // [rsp+98h] [rbp-40h]

  v12 = a2;
  memset_0(&v35, 0, 0x40uLL);
  v14 = a9;
  v33 = a9 & 0xFFFFFF;
  a9 = 0;
  v15 = 3 * (a6 - a5);
  v34 = v15;
  v16 = &a1[v12];
  v17 = &a4[3 * a5];
  v18 = *v17 | (*(unsigned __int16 *)(v17 + 1) << 8);
  v19 = (char *)pvFillOpaqTableCT(4u, v14, v18, a11, (struct BLENDINFO *)&v35, 1);
  v50 = v19;
  while ( a8 )
  {
    v20 = v16;
    v52 = v16;
    v21 = v17;
    v22 = &v17[v15];
    v51 = v22;
    while ( v21 < v22 )
    {
      v23 = *v20;
      if ( (_BYTE)v23 )
      {
        v24 = v21 + 1;
        if ( (_BYTE)v23 == 114 )
        {
          v26 = &v33;
        }
        else
        {
          v49 = v21 + 1;
          v25 = *v21 | ((*v24 | (v21[2] << 8)) << 8);
          if ( v25 == v18 )
          {
            v26 = (unsigned int *)&v19[4 * v23];
          }
          else
          {
            SessionState = W32GetSessionState(v23, v24, v19);
            v28 = *v20;
            v29 = *(_QWORD *)(*(_QWORD *)(SessionState + 96) + 13456LL);
            v30 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((v25 & v41) << v35) >> v36) + v47);
            v31 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((v25 & v42) << v37) >> v38) + v47);
            v32 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((v25 & v43) << v39) >> v40) + v47);
            a9 = v41 & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v30
                                                                         + ((dword_14035EC88[*(unsigned __int8 *)(v29 + 4 * v28)]
                                                                           * (v44 - v30)
                                                                           + 0x80000) >> 20))
                                                          + v48) << v36) >> v35) | v42 & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v31 + ((dword_14035EC88[*(unsigned __int8 *)(v29 + 4 * v28 + 1)] * (v45 - v31) + 0x80000) >> 20)) + v48) << v38) >> v37) | v43 & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v32 + ((dword_14035EC88[*(unsigned __int8 *)(v29 + 4 * v28 + 2)] * (v46 - v32) + 0x80000) >> 20)) + v48) << v40) >> v39);
            v26 = &a9;
            v24 = v49;
            v19 = v50;
          }
        }
        *v21 = *(_BYTE *)v26;
        *v24 = *((_BYTE *)v26 + 1);
        v24[1] = *((_BYTE *)v26 + 2);
        v21 = v24 + 2;
        v22 = v51;
      }
      else
      {
        v21 += 3;
      }
      v52 = ++v20;
    }
    --a8;
    v16 += a3;
    v17 += a7;
    v15 = v34;
  }
}
