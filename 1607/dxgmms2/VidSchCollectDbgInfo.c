/*
 * XREFs of VidSchCollectDbgInfo @ 0x1C00A1E20
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0014B00 (memmove.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?VidSchiGetVSyncState@@YA?AW4VIDSCH_VSYNC_STATE@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0027324 (-VidSchiGetVSyncState@@YA-AW4VIDSCH_VSYNC_STATE@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchiCaptureProcessName @ 0x1C0027344 (VidSchiCaptureProcessName.c)
 *     ?VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0027F80 (-VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiGetNumHistoryLayersUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0027FE4 (-VidSchiGetNumHistoryLayersUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiGetNumOverlayPlanesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0028080 (-VidSchiGetNumOverlayPlanesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     VidSchQueryDmaHeader @ 0x1C00A2608 (VidSchQueryDmaHeader.c)
 */

__int64 __fastcall VidSchCollectDbgInfo(__int64 a1, unsigned int *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r14
  unsigned int *v4; // rbx
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // r13
  __int64 v10; // r12
  _QWORD *v11; // r15
  size_t v12; // r8
  unsigned int v13; // r8d
  unsigned int v14; // r12d
  unsigned int v15; // r13d
  __int64 v16; // r11
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // rcx
  unsigned int v20; // edx
  char *v21; // r15
  char *v22; // r8
  unsigned int v23; // r14d
  _DWORD *v24; // r11
  __int64 v25; // rax
  unsigned int v26; // r14d
  __int64 v27; // r10
  __int64 v28; // rcx
  char **v29; // r11
  char *v30; // r9
  unsigned int v31; // eax
  int v32; // ecx
  unsigned int v33; // r12d
  int v34; // eax
  __int64 v35; // r13
  int v36; // ecx
  unsigned int v37; // ebx
  unsigned int v38; // r14d
  char v39; // cl
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // r9
  char *v44; // r8
  __int64 v45; // rax
  int v46; // ecx
  int v47; // edx
  unsigned int v48; // r8d
  __int64 v49; // rdx
  unsigned int *v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  unsigned int i; // r9d
  __int64 v54; // r8
  __int64 v55; // r10
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rax
  int v61; // [rsp+30h] [rbp-A8h]
  int v62; // [rsp+34h] [rbp-A4h]
  unsigned int NumOverlayPlanesUsed; // [rsp+38h] [rbp-A0h]
  unsigned int NumHistoryLayersUsed; // [rsp+3Ch] [rbp-9Ch]
  unsigned int NumFlipQueueEntriesUsed; // [rsp+40h] [rbp-98h]
  __int64 v66; // [rsp+48h] [rbp-90h]
  __int64 v67; // [rsp+48h] [rbp-90h]
  char *v68; // [rsp+58h] [rbp-80h]
  __int64 v69; // [rsp+60h] [rbp-78h]
  char *v70; // [rsp+68h] [rbp-70h]
  char *v71; // [rsp+70h] [rbp-68h]
  char *v72; // [rsp+78h] [rbp-60h]
  __int64 v73; // [rsp+80h] [rbp-58h]
  unsigned int v74; // [rsp+E0h] [rbp+8h]
  unsigned int v77; // [rsp+F8h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 2136LL);
  v7 = *(_DWORD *)(a1 + 16);
  v8 = *(_QWORD *)(v6 + 384);
  if ( v7 == 2 )
  {
    v9 = *(_QWORD *)(v8 + 2816);
    v10 = 16LL;
    v11 = (_QWORD *)(v9 + 552);
    do
    {
      VidSchQueryDmaHeader(v8, *(_QWORD *)(v8 + 2816), *v11, *((_DWORD *)v11 - 4) == 3, (__int64)(v11 - 4));
      v11 += 7;
      --v10;
    }
    while ( v10 );
    v12 = 912LL;
    if ( v3 < 0x390 )
      v12 = v3;
    memmove(v4, (const void *)(v9 + 488), v12);
  }
  else if ( v7 == 3 )
  {
    NumOverlayPlanesUsed = VidSchiGetNumOverlayPlanesUsed(*(struct _VIDSCH_GLOBAL **)(v6 + 384), *(_DWORD *)(a1 + 80));
    NumHistoryLayersUsed = VidSchiGetNumHistoryLayersUsed((struct _VIDSCH_GLOBAL *)v8, *(_DWORD *)(a1 + 80));
    NumFlipQueueEntriesUsed = VidSchiGetNumFlipQueueEntriesUsed((struct _VIDSCH_GLOBAL *)v8, *(_DWORD *)(a1 + 80));
    v13 = ((_DWORD)v4 + 163) & 0xFFFFFFF8;
    LODWORD(v66) = v13 - (_DWORD)v4;
    HIDWORD(v66) = ((280 * NumOverlayPlanesUsed + v13 + 7) & 0xFFFFFFF8) - (_DWORD)v4;
    v14 = ((((280 * NumOverlayPlanesUsed + v13 + 7) & 0xFFFFFFF8) + 40 * NumHistoryLayersUsed + 7) & 0xFFFFFFF8)
        - (_DWORD)v4;
    v15 = v14 + 48 * NumFlipQueueEntriesUsed;
    v16 = 4LL;
    v73 = v15;
    if ( v3 >= v15 )
    {
      memset(v4, 0, v15);
      *v4 = v15;
      v4[1] = 2;
      v4[3] = VidSchiGetVSyncState(v8);
      v4[2] = *(_DWORD *)(a1 + 80);
      *((_QWORD *)v4 + 16) = v66;
      v4[34] = v14;
      v17 = v4[2];
      if ( (_DWORD)v17 != -1 && (unsigned int)v17 < *(_DWORD *)(v8 + 40) )
      {
        v18 = *(_QWORD *)(v8 + 8 * v17 + 2968);
        v67 = v18;
        if ( v18 )
        {
          v19 = *(_QWORD *)(v18 + 16);
          if ( v19 )
          {
            VidSchiCaptureProcessName(v19, (_BYTE *)v4 + 16);
            v20 = 0;
            v4[8] = *(_DWORD *)(v18 + 4);
            v21 = (char *)v4 + v4[32];
            v22 = (char *)v4 + v4[34];
            v72 = v21;
            v70 = (char *)v4 + v4[33];
            v71 = v22;
            v61 = 0;
            v74 = 0;
            v77 = 0;
            v62 = 0;
            if ( *(_DWORD *)(v8 + 128) )
            {
              v23 = 0;
              do
              {
                v24 = *(_DWORD **)(v18 + 8LL * v20 + 24);
                if ( v24 )
                {
                  v25 = v23;
                  v26 = v77;
                  v27 = 64LL;
                  v28 = 280 * v25;
                  v69 = 64LL;
                  *(_DWORD *)&v21[v28] = v20;
                  *(_DWORD *)&v21[v28 + 4] = v24[8];
                  *(_DWORD *)&v21[v28 + 8] = v24[9];
                  *(_DWORD *)&v21[v28 + 12] = v24[10];
                  *(_DWORD *)&v21[v28 + 16] = v24[11];
                  LODWORD(v25) = v24[13];
                  v29 = (char **)(v24 + 302);
                  v30 = &v21[v28 + 24];
                  *(_DWORD *)&v21[v28 + 20] = v25;
                  v68 = v30;
                  do
                  {
                    v31 = *((_DWORD *)v29 - 27);
                    if ( v31 <= 0xC && (v32 = 4673, _bittest(&v32, v31)) )
                    {
                      *(_DWORD *)v30 = -1;
                    }
                    else
                    {
                      *(_DWORD *)v30 = v26;
                      v33 = 0;
                      v34 = *((_DWORD *)v29 - 23);
                      if ( (v34 & 1) == 0 )
                      {
                        do
                        {
                          if ( v33 >= *(_DWORD *)(v8 + 56) )
                            break;
                          ++v33;
                        }
                        while ( !_bittest(&v34, v33) );
                      }
                      if ( v33 == *(_DWORD *)(v8 + 56) )
                        v33 = 0;
                      v35 = 6LL * v26;
                      *(_DWORD *)&v22[8 * v35] = v74;
                      v22[8 * v35 + 44] = **v29;
                      v36 = *(_DWORD *)*v29;
                      v37 = (unsigned __int8)v36;
                      if ( (_BYTE)v36 )
                      {
                        v38 = v74;
                        do
                        {
                          v39 = -1;
                          if ( _BitScanForward((unsigned int *)&v41, v37) )
                            v39 = v41;
                          v42 = v38++;
                          v43 = 5 * v42;
                          *(_QWORD *)&v70[8 * v43] = *(_QWORD *)&(*v29)[48 * v39
                                                                      + 40
                                                                      + 48 * v33 * *((_DWORD *)*v29 + 1)
                                                                      + *((_DWORD *)*v29 + 1)
                                                                      * ((8 * *((_DWORD *)*v29 + 2) + 167) & 0xFFFFFFF8)];
                          v44 = *v29;
                          v45 = v39 * ((8 * *((_DWORD *)*v29 + 2) + 167) & 0xFFFFFFF8);
                          *(_OWORD *)&v70[8 * v43 + 8] = *(_OWORD *)&(*v29)[v45 + 144];
                          *(_OWORD *)&v70[8 * v43 + 24] = *(_OWORD *)&v44[v45 + 160];
                          v37 &= ~(1 << v39);
                        }
                        while ( v37 );
                        v22 = v71;
                        v30 = v68;
                        v27 = v69;
                        v74 = v38;
                        v26 = v77;
                      }
                      *(_DWORD *)&v22[8 * v35 + 4] = *((_DWORD *)v29 - 27);
                      *(_DWORD *)&v22[8 * v35 + 8] = *((_DWORD *)v29 - 26);
                      *(_DWORD *)&v22[8 * v35 + 44] ^= (*(_DWORD *)&v22[8 * v35 + 44] ^ (*((_DWORD *)v29 - 25) << 8)) & 0xF00;
                      *(_DWORD *)&v22[8 * v35 + 12] = *((_DWORD *)v29 - 23);
                      *(_QWORD *)&v22[8 * v35 + 16] = *(v29 - 9);
                      *(_QWORD *)&v22[8 * v35 + 24] = *(v29 - 8);
                      *(_DWORD *)&v22[8 * v35 + 36] = *((_DWORD *)v29 - 12);
                      *(_DWORD *)&v22[8 * v35 + 44] ^= (*(_DWORD *)&v22[8 * v35 + 44] ^ (*((unsigned __int8 *)v29 - 96) << 16)) & 0x10000;
                      v22[8 * v35 + 40] = *((_BYTE *)v29 - 84);
                      v22[8 * v35 + 41] = *((_BYTE *)v29 - 80);
                      *(_DWORD *)&v22[8 * v35 + 44] ^= (*(_DWORD *)&v22[8 * v35 + 44] ^ (*((_DWORD *)v29 - 11) << 8)) & 0x1000;
                      v46 = *(_DWORD *)&v22[8 * v35 + 44] ^ (*(_DWORD *)&v22[8 * v35 + 44] ^ (*((_DWORD *)v29 - 11) << 8)) & 0x2000;
                      *(_DWORD *)&v22[8 * v35 + 44] = v46;
                      v47 = v46 ^ ((unsigned __int16)v46 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v29 - 11) << 7)) & 0x4000;
                      *(_DWORD *)&v22[8 * v35 + 44] = v47;
                      ++v26;
                      *(_DWORD *)&v22[8 * v35 + 44] = v47 ^ ((unsigned __int16)v47 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v29 - 11) << 7)) & 0x8000;
                      v77 = v26;
                    }
                    v30 += 4;
                    v29 += 153;
                    --v27;
                    v68 = v30;
                    v69 = v27;
                  }
                  while ( v27 );
                  v21 = v72;
                  v23 = v61 + 1;
                  v20 = v62;
                  v18 = v67;
                  ++v61;
                }
                v62 = ++v20;
              }
              while ( v20 < *(_DWORD *)(v8 + 128) );
              v4 = a2;
              v3 = a3;
            }
          }
        }
      }
      v48 = 0;
      v4[14] = *(_DWORD *)(v8 + 1956);
      v4[15] = *(_DWORD *)(v8 + 40);
      v4[10] = *(_DWORD *)(v8 + 128);
      v4[11] = NumOverlayPlanesUsed;
      v4[12] = NumHistoryLayersUsed;
      v4[13] = NumFlipQueueEntriesUsed;
      for ( v4[9] = *(_DWORD *)(v8 + 56);
            v48 < *(_DWORD *)(v8 + 40);
            v4[v49 + 16] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 2128LL) + 112LL) + 1016 * v49 + 964) )
      {
        v49 = v48++;
      }
      v3 -= v73;
      v16 = 4LL;
      v4 = (unsigned int *)((char *)v4 + v73);
    }
    if ( v3 >= 0x40 )
    {
      v50 = v4;
      v51 = 4LL;
      v52 = ((unsigned __int8)*(_DWORD *)(v8 + 5440) - 1) & 3;
      do
      {
        *(_QWORD *)v50 = *(_QWORD *)(v8 + 8 * v52 + 5448);
        v50[2] = *(_DWORD *)(v8 + 4 * v52 + 5480);
        v52 = ((_BYTE)v52 - 1) & 3;
        v50 += 4;
        --v51;
      }
      while ( v51 );
      v3 -= 64LL;
      v4 += 16;
    }
    for ( i = 0; i < *(_DWORD *)(v8 + 40); ++i )
    {
      v54 = *(_QWORD *)(v8 + 8LL * i + 2968);
      if ( v3 >= 0x160 && v54 )
      {
        v55 = 4LL;
        v56 = ((unsigned __int8)*(_DWORD *)(v54 + 18876) - 1) & 3;
        do
        {
          *(_QWORD *)v4 = *(_QWORD *)(v54 + 8 * v56 + 18880);
          v57 = 10 * v56;
          v56 = ((_BYTE)v56 - 1) & 3;
          *(_OWORD *)(v4 + 2) = *(_OWORD *)(v54 + 8 * v57 + 18912);
          *(_OWORD *)(v4 + 6) = *(_OWORD *)(v54 + 8 * v57 + 18928);
          *(_OWORD *)(v4 + 10) = *(_OWORD *)(v54 + 8 * v57 + 18944);
          *(_OWORD *)(v4 + 14) = *(_OWORD *)(v54 + 8 * v57 + 18960);
          *(_OWORD *)(v4 + 18) = *(_OWORD *)(v54 + 8 * v57 + 18976);
          v4 += 22;
          --v55;
        }
        while ( v55 );
        v3 -= 352LL;
      }
    }
    if ( v3 >= 0x160 )
    {
      v58 = ((unsigned __int8)*(_DWORD *)(v8 + 5080) - 1) & 3;
      do
      {
        *(_QWORD *)v4 = *(_QWORD *)(v8 + 8 * v58 + 5088);
        v59 = 10 * (v58 + 64);
        v4 += 22;
        v58 = ((_BYTE)v58 - 1) & 3;
        *((_OWORD *)v4 - 5) = *(_OWORD *)(v8 + 8 * v59);
        *((_OWORD *)v4 - 4) = *(_OWORD *)(v8 + 8 * v59 + 16);
        *((_OWORD *)v4 - 3) = *(_OWORD *)(v8 + 8 * v59 + 32);
        *((_OWORD *)v4 - 2) = *(_OWORD *)(v8 + 8 * v59 + 48);
        *((_OWORD *)v4 - 1) = *(_OWORD *)(v8 + 8 * v59 + 64);
        --v16;
      }
      while ( v16 );
    }
  }
  return 0LL;
}
