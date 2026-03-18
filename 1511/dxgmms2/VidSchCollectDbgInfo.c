/*
 * XREFs of VidSchCollectDbgInfo @ 0x1C008C470
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C00168C0 (memmove.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?VidSchiGetVSyncState@@YA?AW4VIDSCH_VSYNC_STATE@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0022DB4 (-VidSchiGetVSyncState@@YA-AW4VIDSCH_VSYNC_STATE@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchiCaptureProcessName @ 0x1C0022DD4 (VidSchiCaptureProcessName.c)
 *     ?VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0023708 (-VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiGetNumHistoryLayersUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0023768 (-VidSchiGetNumHistoryLayersUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiGetNumOverlayPlanesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0023800 (-VidSchiGetNumOverlayPlanesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     VidSchQueryDmaHeader @ 0x1C008CC08 (VidSchQueryDmaHeader.c)
 */

__int64 __fastcall VidSchCollectDbgInfo(__int64 a1, unsigned int *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  unsigned int *v4; // rbx
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // r13
  __int64 v10; // r15
  _QWORD *v11; // r14
  size_t v12; // r8
  unsigned int v13; // r8d
  unsigned int v14; // r15d
  unsigned int v15; // r12d
  __int64 v16; // r11
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rcx
  unsigned int v21; // r13d
  char *v22; // r11
  char *v23; // r12
  char *v24; // rbx
  _DWORD *v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r9
  char *v28; // r8
  _DWORD *v29; // r10
  unsigned int v30; // r13d
  unsigned int v31; // r11d
  int v32; // ecx
  unsigned int v33; // r14d
  int v34; // eax
  __int64 v35; // r15
  int v36; // ecx
  unsigned int v37; // ebp
  unsigned int v38; // r11d
  __int64 v39; // r9
  bool v40; // zf
  int v41; // eax
  char v42; // dl
  int v43; // ecx
  __int64 v44; // rax
  __int64 v45; // rdx
  unsigned __int64 v46; // r8
  int v47; // ecx
  int v48; // edx
  unsigned int v49; // r8d
  __int64 v50; // rdx
  unsigned int *v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  unsigned int i; // r9d
  __int64 v55; // r8
  __int64 v56; // r10
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rax
  int v62; // [rsp+30h] [rbp-98h]
  __int64 v63; // [rsp+38h] [rbp-90h]
  unsigned int NumHistoryLayersUsed; // [rsp+40h] [rbp-88h]
  unsigned int NumOverlayPlanesUsed; // [rsp+44h] [rbp-84h]
  unsigned int NumFlipQueueEntriesUsed; // [rsp+48h] [rbp-80h]
  __int64 v67; // [rsp+50h] [rbp-78h]
  __int64 v68; // [rsp+50h] [rbp-78h]
  char *v69; // [rsp+60h] [rbp-68h]
  __int64 v70; // [rsp+68h] [rbp-60h]
  char *v71; // [rsp+70h] [rbp-58h]
  unsigned int v72; // [rsp+D0h] [rbp+8h]
  unsigned int v75; // [rsp+E8h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 1992LL);
  v7 = *(_DWORD *)(a1 + 16);
  v8 = *(_QWORD *)(v6 + 408);
  if ( v7 == 2 )
  {
    v9 = *(_QWORD *)(v8 + 2456);
    v10 = 16LL;
    v11 = (_QWORD *)(v9 + 512);
    do
    {
      VidSchQueryDmaHeader(v8, *(_QWORD *)(v8 + 2456), *v11, *((_DWORD *)v11 - 4) == 3, (__int64)(v11 - 4));
      v11 += 7;
      --v10;
    }
    while ( v10 );
    v12 = 912LL;
    if ( v3 < 0x390 )
      v12 = v3;
    memmove(v4, (const void *)(v9 + 448), v12);
  }
  else if ( v7 == 3 )
  {
    NumOverlayPlanesUsed = VidSchiGetNumOverlayPlanesUsed(*(struct _VIDSCH_GLOBAL **)(v6 + 408), *(_DWORD *)(a1 + 72));
    NumHistoryLayersUsed = VidSchiGetNumHistoryLayersUsed((struct _VIDSCH_GLOBAL *)v8, *(_DWORD *)(a1 + 72));
    NumFlipQueueEntriesUsed = VidSchiGetNumFlipQueueEntriesUsed((struct _VIDSCH_GLOBAL *)v8, *(_DWORD *)(a1 + 72));
    v13 = ((_DWORD)v4 + 163) & 0xFFFFFFF8;
    LODWORD(v67) = v13 - (_DWORD)v4;
    HIDWORD(v67) = ((280 * NumOverlayPlanesUsed + v13 + 7) & 0xFFFFFFF8) - (_DWORD)v4;
    v14 = ((((280 * NumOverlayPlanesUsed + v13 + 7) & 0xFFFFFFF8) + 40 * NumHistoryLayersUsed + 7) & 0xFFFFFFF8)
        - (_DWORD)v4;
    v15 = v14 + 48 * NumFlipQueueEntriesUsed;
    v16 = 4LL;
    v17 = v15;
    v70 = v15;
    if ( v3 >= v15 )
    {
      memset(v4, 0, v15);
      *v4 = v15;
      v4[1] = 2;
      v4[3] = VidSchiGetVSyncState(v8);
      v4[2] = *(_DWORD *)(a1 + 72);
      *((_QWORD *)v4 + 16) = v67;
      v4[34] = v14;
      v18 = v4[2];
      if ( (_DWORD)v18 != -1 && (unsigned int)v18 < *(_DWORD *)(v8 + 40) )
      {
        v19 = *(_QWORD *)(v8 + 8 * v18 + 2592);
        v68 = v19;
        if ( v19 )
        {
          v20 = *(_QWORD *)(v19 + 16);
          if ( v20 )
          {
            VidSchiCaptureProcessName(v20, (_BYTE *)v4 + 16);
            v21 = 0;
            v4[8] = *(_DWORD *)(v19 + 4);
            v22 = (char *)v4 + v4[32];
            v23 = (char *)v4 + v4[34];
            v71 = v22;
            v72 = 0;
            v75 = 0;
            v62 = 0;
            if ( *(_DWORD *)(v8 + 124) )
            {
              v24 = (char *)v4 + v4[33];
              do
              {
                v25 = *(_DWORD **)(v19 + 8LL * v21 + 24);
                if ( v25 )
                {
                  v26 = 280LL * v21;
                  v27 = 64LL;
                  v28 = &v22[v26 + 24];
                  v63 = 64LL;
                  v69 = v28;
                  v29 = v25 + 275;
                  *(_DWORD *)&v22[v26] = v21;
                  v30 = v72;
                  *(_DWORD *)&v22[v26 + 4] = v25[8];
                  *(_DWORD *)&v22[v26 + 8] = v25[9];
                  *(_DWORD *)&v22[v26 + 12] = v25[10];
                  *(_DWORD *)&v22[v26 + 16] = v25[11];
                  *(_DWORD *)&v22[v26 + 20] = v25[12];
                  v31 = v75;
                  do
                  {
                    if ( *v29 <= 0xCu && (v32 = 4673, _bittest(&v32, *v29)) )
                    {
                      *(_DWORD *)v28 = -1;
                    }
                    else
                    {
                      *(_DWORD *)v28 = v31;
                      v33 = 0;
                      v34 = v29[4];
                      if ( (v34 & 1) == 0 )
                      {
                        do
                        {
                          if ( v33 >= *(_DWORD *)(v8 + 52) )
                            break;
                          ++v33;
                        }
                        while ( !_bittest(&v34, v33) );
                      }
                      if ( v33 == *(_DWORD *)(v8 + 52) )
                        v33 = 0;
                      v35 = 6LL * v31;
                      *(_DWORD *)&v23[8 * v35] = v30;
                      v23[8 * v35 + 44] = **(_BYTE **)(v29 + 27);
                      v36 = **(_DWORD **)(v29 + 27);
                      v37 = (unsigned __int8)v36;
                      if ( (_BYTE)v36 )
                      {
                        v38 = v72;
                        do
                        {
                          v39 = *(_QWORD *)(v29 + 27);
                          v40 = !_BitScanForward((unsigned int *)&v41, v37);
                          v42 = -1;
                          if ( !v40 )
                            v42 = v41;
                          v43 = v42;
                          v44 = v38++;
                          v45 = 5 * v44;
                          v46 = (unsigned __int64)(v43 + v33 * *(_DWORD *)(v39 + 4)) << 6;
                          *(_QWORD *)&v24[8 * v45] = *(_QWORD *)(v46 + v39 + 32);
                          *(_OWORD *)&v24[8 * v45 + 8] = *(_OWORD *)(v46 + v39 + 40);
                          *(_OWORD *)&v24[8 * v45 + 24] = *(_OWORD *)(v46 + v39 + 56);
                          v37 &= ~(1 << v43);
                        }
                        while ( v37 );
                        v28 = v69;
                        v27 = v63;
                        v72 = v38;
                        v30 = v38;
                        v31 = v75;
                      }
                      *(_DWORD *)&v23[8 * v35 + 4] = *v29;
                      *(_DWORD *)&v23[8 * v35 + 8] = v29[1];
                      *(_DWORD *)&v23[8 * v35 + 44] ^= (*(_DWORD *)&v23[8 * v35 + 44] ^ (v29[2] << 8)) & 0xF00;
                      *(_DWORD *)&v23[8 * v35 + 12] = v29[4];
                      *(_QWORD *)&v23[8 * v35 + 16] = *(_QWORD *)(v29 + 9);
                      *(_QWORD *)&v23[8 * v35 + 24] = *(_QWORD *)(v29 + 11);
                      *(_DWORD *)&v23[8 * v35 + 36] = v29[15];
                      *(_DWORD *)&v23[8 * v35 + 44] ^= (*(_DWORD *)&v23[8 * v35 + 44] ^ (*((unsigned __int8 *)v29 + 12) << 16)) & 0x10000;
                      v23[8 * v35 + 40] = *((_BYTE *)v29 + 24);
                      v23[8 * v35 + 41] = *((_BYTE *)v29 + 28);
                      *(_DWORD *)&v23[8 * v35 + 44] ^= (*(_DWORD *)&v23[8 * v35 + 44] ^ (v29[16] << 8)) & 0x1000;
                      v47 = *(_DWORD *)&v23[8 * v35 + 44] ^ (*(_DWORD *)&v23[8 * v35 + 44] ^ (v29[16] << 8)) & 0x2000;
                      *(_DWORD *)&v23[8 * v35 + 44] = v47;
                      v48 = v47 ^ ((unsigned __int16)v47 ^ (unsigned __int16)((unsigned __int16)v29[16] << 7)) & 0x4000;
                      *(_DWORD *)&v23[8 * v35 + 44] = v48;
                      ++v31;
                      *(_DWORD *)&v23[8 * v35 + 44] = v48 ^ ((unsigned __int16)v48 ^ (unsigned __int16)((unsigned __int16)v29[16] << 7)) & 0x8000;
                      v75 = v31;
                    }
                    v28 += 4;
                    v29 += 290;
                    --v27;
                    v69 = v28;
                    v63 = v27;
                  }
                  while ( v27 );
                  v22 = v71;
                  v21 = v62;
                  v19 = v68;
                }
                v62 = ++v21;
              }
              while ( v21 < *(_DWORD *)(v8 + 124) );
              v4 = a2;
              v3 = a3;
            }
            v17 = v70;
          }
        }
      }
      v49 = 0;
      v4[14] = *(_DWORD *)(v8 + 1924);
      v4[15] = *(_DWORD *)(v8 + 40);
      v4[10] = *(_DWORD *)(v8 + 124);
      v4[11] = NumOverlayPlanesUsed;
      v4[12] = NumHistoryLayersUsed;
      v4[13] = NumFlipQueueEntriesUsed;
      for ( v4[9] = *(_DWORD *)(v8 + 52);
            v49 < *(_DWORD *)(v8 + 40);
            v4[v50 + 16] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 1984LL) + 136LL) + 1016 * v50 + 956) )
      {
        v50 = v49++;
      }
      v3 -= v17;
      v16 = 4LL;
      v4 = (unsigned int *)((char *)v4 + v17);
    }
    if ( v3 >= 0x40 )
    {
      v51 = v4;
      v52 = 4LL;
      v53 = ((unsigned __int8)*(_DWORD *)(v8 + 5064) - 1) & 3;
      do
      {
        *(_QWORD *)v51 = *(_QWORD *)(v8 + 8 * v53 + 5072);
        v51[2] = *(_DWORD *)(v8 + 4 * v53 + 5104);
        v53 = ((_BYTE)v53 - 1) & 3;
        v51 += 4;
        --v52;
      }
      while ( v52 );
      v3 -= 64LL;
      v4 += 16;
    }
    for ( i = 0; i < *(_DWORD *)(v8 + 40); ++i )
    {
      v55 = *(_QWORD *)(v8 + 8LL * i + 2592);
      if ( v3 >= 0x160 && v55 )
      {
        v56 = 4LL;
        v57 = ((unsigned __int8)*(_DWORD *)(v55 + 14772) - 1) & 3;
        do
        {
          *(_QWORD *)v4 = *(_QWORD *)(v55 + 8 * v57 + 14776);
          v58 = 10 * v57;
          v57 = ((_BYTE)v57 - 1) & 3;
          *(_OWORD *)(v4 + 2) = *(_OWORD *)(v55 + 8 * v58 + 14808);
          *(_OWORD *)(v4 + 6) = *(_OWORD *)(v55 + 8 * v58 + 14824);
          *(_OWORD *)(v4 + 10) = *(_OWORD *)(v55 + 8 * v58 + 14840);
          *(_OWORD *)(v4 + 14) = *(_OWORD *)(v55 + 8 * v58 + 14856);
          *(_OWORD *)(v4 + 18) = *(_OWORD *)(v55 + 8 * v58 + 14872);
          v4 += 22;
          --v56;
        }
        while ( v56 );
        v3 -= 352LL;
      }
    }
    if ( v3 >= 0x160 )
    {
      v59 = ((unsigned __int8)*(_DWORD *)(v8 + 4704) - 1) & 3;
      do
      {
        *(_QWORD *)v4 = *(_QWORD *)(v8 + 8 * v59 + 4712);
        v60 = 10 * v59;
        v4 += 22;
        v59 = ((_BYTE)v59 - 1) & 3;
        *((_OWORD *)v4 - 5) = *(_OWORD *)(v8 + 8 * v60 + 4744);
        *((_OWORD *)v4 - 4) = *(_OWORD *)(v8 + 8 * v60 + 4760);
        *((_OWORD *)v4 - 3) = *(_OWORD *)(v8 + 8 * v60 + 4776);
        *((_OWORD *)v4 - 2) = *(_OWORD *)(v8 + 8 * v60 + 4792);
        *((_OWORD *)v4 - 1) = *(_OWORD *)(v8 + 8 * v60 + 4808);
        --v16;
      }
      while ( v16 );
    }
  }
  return 0LL;
}
