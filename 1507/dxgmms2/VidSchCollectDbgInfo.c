/*
 * XREFs of VidSchCollectDbgInfo @ 0x1C007A480
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiCaptureProcessName @ 0x1C0002004 (VidSchiCaptureProcessName.c)
 *     memmove @ 0x1C00081C0 (memmove.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ?VidSchiGetVSyncState@@YA?AW4VIDSCH_VSYNC_STATE@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C001DBC4 (-VidSchiGetVSyncState@@YA-AW4VIDSCH_VSYNC_STATE@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchQueryDmaHeader @ 0x1C007A938 (VidSchQueryDmaHeader.c)
 */

__int64 __fastcall VidSchCollectDbgInfo(__int64 a1, _DWORD *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  _DWORD *v4; // rbx
  int v6; // eax
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // r15
  _QWORD *v10; // r14
  size_t v11; // r8
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rcx
  _DWORD *v15; // rcx
  _QWORD *v16; // rdx
  _DWORD *v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r10
  _DWORD *v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 i; // r8
  __int64 v27; // r9
  __int64 v28; // r11
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax

  v3 = a3;
  v4 = a2;
  v6 = *(_DWORD *)(a1 + 16);
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 1984LL) + 384LL);
  if ( v6 == 2 )
  {
    v8 = *(_QWORD *)(v7 + 2496);
    v9 = 16LL;
    v10 = (_QWORD *)(v8 + 480);
    do
    {
      VidSchQueryDmaHeader(v7, *(_QWORD *)(v7 + 2496), *v10, *((_DWORD *)v10 - 4) == 3, (__int64)(v10 - 4));
      v10 += 7;
      --v9;
    }
    while ( v9 );
    v11 = 912LL;
    if ( v3 < 0x390 )
      v11 = v3;
    memmove(v4, (const void *)(v8 + 416), v11);
  }
  else if ( v6 == 3 )
  {
    if ( a3 >= 0x1080 )
    {
      memset(a2, 0, 0x1080uLL);
      *v4 = 4224;
      v4[2] = VidSchiGetVSyncState(v7);
      v12 = *(unsigned int *)(a1 + 72);
      v4[1] = v12;
      if ( (_DWORD)v12 != -1 && (unsigned int)v12 < *(_DWORD *)(v7 + 40) )
      {
        _mm_lfence();
        v13 = *(_QWORD *)(v7 + 8 * v12 + 2640);
        if ( v13 )
        {
          v14 = *(_QWORD *)(v13 + 8);
          if ( v14 )
          {
            VidSchiCaptureProcessName(v14, (_BYTE *)v4 + 12);
            v4[7] = *(_DWORD *)(v13 + 4);
            v15 = *(_DWORD **)(v13 + 16);
            if ( v15 )
            {
              v16 = v4 + 16;
              v4[8] = v15[8];
              v17 = v15 + 275;
              v18 = 64LL;
              v4[9] = v15[9];
              v4[10] = v15[10];
              v4[11] = v15[11];
              v4[12] = v15[12];
              do
              {
                v19 = *(_QWORD *)(v17 + 23);
                v20 = *v17;
                v17 += 286;
                *((_DWORD *)v16 - 2) = v20;
                *v16 = *(_QWORD *)(v19 + 32);
                v16 += 8;
                *((_DWORD *)v16 - 14) = (*(_DWORD *)(v19 + 68) >> 17) & 0x1F;
                *((_DWORD *)v16 - 13) = *(v17 - 285);
                *((_DWORD *)v16 - 12) = *(v17 - 284);
                *((_DWORD *)v16 - 11) = *(v17 - 282);
                *(v16 - 4) = *(_QWORD *)(v17 - 279);
                *(v16 - 3) = *(_QWORD *)(v17 - 277);
                *((_DWORD *)v16 - 4) = *(v17 - 275);
                *((_BYTE *)v16 - 12) = *((_BYTE *)v17 - 1132);
                *((_BYTE *)v16 - 11) = *((_BYTE *)v17 - 1124);
                *((_BYTE *)v16 - 10) = *((_BYTE *)v17 - 1120);
                --v18;
              }
              while ( v18 );
            }
          }
        }
      }
      v21 = 0LL;
      v4[1038] = *(_DWORD *)(v7 + 1972);
      for ( v4[1039] = *(_DWORD *)(v7 + 40); (unsigned int)v21 < *(_DWORD *)(v7 + 40); v21 = (unsigned int)(v21 + 1) )
        v4[v21 + 1040] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 1976LL) + 112LL)
                                   + 1008LL * (unsigned int)v21
                                   + 956);
      v3 -= 4224LL;
      v4 += 1056;
    }
    v22 = 4LL;
    if ( v3 >= 0x40 )
    {
      v23 = v4;
      v24 = 4LL;
      v25 = ((unsigned __int8)*(_DWORD *)(v7 + 5112) - 1) & 3;
      do
      {
        *(_QWORD *)v23 = *(_QWORD *)(v7 + 8 * v25 + 5120);
        v23[2] = *(_DWORD *)(v7 + 4 * v25 + 5152);
        v25 = ((_BYTE)v25 - 1) & 3;
        v23 += 4;
        --v24;
      }
      while ( v24 );
      v3 -= 64LL;
      v4 += 16;
    }
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v7 + 40); i = (unsigned int)(i + 1) )
    {
      v27 = *(_QWORD *)(v7 + 8 * i + 2640);
      if ( v3 >= 0x160 && v27 )
      {
        v28 = 4LL;
        v29 = ((unsigned __int8)*(_DWORD *)(v27 + 14740) - 1) & 3;
        do
        {
          *(_QWORD *)v4 = *(_QWORD *)(v27 + 8 * v29 + 14744);
          v30 = 10 * v29;
          v29 = ((_BYTE)v29 - 1) & 3;
          *(_OWORD *)(v4 + 2) = *(_OWORD *)(v27 + 8 * v30 + 14776);
          *(_OWORD *)(v4 + 6) = *(_OWORD *)(v27 + 8 * v30 + 14792);
          *(_OWORD *)(v4 + 10) = *(_OWORD *)(v27 + 8 * v30 + 14808);
          *(_OWORD *)(v4 + 14) = *(_OWORD *)(v27 + 8 * v30 + 14824);
          *(_OWORD *)(v4 + 18) = *(_OWORD *)(v27 + 8 * v30 + 14840);
          v4 += 22;
          --v28;
        }
        while ( v28 );
        v3 -= 352LL;
      }
    }
    if ( v3 >= 0x160 )
    {
      v31 = ((unsigned __int8)*(_DWORD *)(v7 + 4752) - 1) & 3;
      do
      {
        *(_QWORD *)v4 = *(_QWORD *)(v7 + 8 * v31 + 4760);
        v32 = 10 * v31;
        v4 += 22;
        v31 = ((_BYTE)v31 - 1) & 3;
        *((_OWORD *)v4 - 5) = *(_OWORD *)(v7 + 8 * v32 + 4792);
        *((_OWORD *)v4 - 4) = *(_OWORD *)(v7 + 8 * v32 + 4808);
        *((_OWORD *)v4 - 3) = *(_OWORD *)(v7 + 8 * v32 + 4824);
        *((_OWORD *)v4 - 2) = *(_OWORD *)(v7 + 8 * v32 + 4840);
        *((_OWORD *)v4 - 1) = *(_OWORD *)(v7 + 8 * v32 + 4856);
        --v22;
      }
      while ( v22 );
    }
  }
  return 0LL;
}
