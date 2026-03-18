/*
 * XREFs of ?LogInformationToMinidump@VIDMM_GLOBAL@@QEAA_KK_KKPEAE0@Z @ 0x1C0089A94
 * Callers:
 *     VidMmLogInformationToMinidump @ 0x1C001D590 (VidMmLogInformationToMinidump.c)
 * Callees:
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?WriteSegmentInformationToMinidump@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K@Z @ 0x1C008D9B4 (-WriteSegmentInformationToMinidump@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K@Z.c)
 *     ?WriteDmaHistoryToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK2K@Z @ 0x1C0091AD4 (-WriteDmaHistoryToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK2K@Z.c)
 *     ?WritePagingHistoryToMinidump@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K@Z @ 0x1C00951F8 (-WritePagingHistoryToMinidump@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K@Z.c)
 */

unsigned __int64 __fastcall VIDMM_GLOBAL::LogInformationToMinidump(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int a4,
        struct _VIDMM_MINIDUMP_HEADER *a5,
        unsigned __int64 a6)
{
  unsigned __int8 *v11; // rdi
  __int64 v12; // rdx
  _OWORD *v13; // rcx
  _OWORD *v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  _OWORD *v17; // rcx
  __int64 v18; // rdx
  _OWORD *v19; // rax
  __int128 v20; // xmm1
  unsigned __int64 v21; // rax
  unsigned __int8 *v22; // rdi
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // rax

  if ( a6 < 0x468 )
    return 0LL;
  v11 = (unsigned __int8 *)a5 + 1128;
  memset(a5, 0, 0x468uLL);
  v12 = 6LL;
  *(_DWORD *)a5 = 1;
  v13 = &VIDMM_GLOBAL::_Config;
  *((_DWORD *)a5 + 1) = *((_DWORD *)this + 926);
  v14 = (_OWORD *)((char *)a5 + 8);
  do
  {
    *v14 = *v13;
    v14[1] = v13[1];
    v14[2] = v13[2];
    v14[3] = v13[3];
    v14[4] = v13[4];
    v14[5] = v13[5];
    v14[6] = v13[6];
    v14 += 8;
    v15 = v13[7];
    v13 += 8;
    *(v14 - 1) = v15;
    --v12;
  }
  while ( v12 );
  v16 = *v13;
  v17 = (_OWORD *)((char *)a5 + 792);
  v18 = 2LL;
  *v14 = v16;
  v19 = &gVidMmLowResourceAccumulated;
  do
  {
    *v17 = *v19;
    v17[1] = v19[1];
    v17[2] = v19[2];
    v17[3] = v19[3];
    v17[4] = v19[4];
    v17[5] = v19[5];
    v17[6] = v19[6];
    v17 += 8;
    v20 = v19[7];
    v19 += 8;
    *(v17 - 1) = v20;
    --v18;
  }
  while ( v18 );
  *v17 = *v19;
  v17[1] = v19[1];
  v17[2] = v19[2];
  v17[3] = v19[3];
  *((_DWORD *)v17 + 16) = *((_DWORD *)v19 + 16);
  v21 = VIDMM_GLOBAL::WriteSegmentInformationToMinidump(this, a5, v11, a6 - 1128);
  v22 = &v11[v21];
  v23 = a6 - 1128 - v21;
  v24 = 10240LL;
  if ( v23 < 0x2800 )
    v24 = a6 - 1128 - v21;
  v25 = VIDMM_GLOBAL::WritePagingHistoryToMinidump(this, a5, v22, v24);
  return a6
       - (v23
        - v25)
       + VIDMM_DMA_POOL::WriteDmaHistoryToMinidump(
           *((VIDMM_DMA_POOL **)this + 79),
           a5,
           &v22[v25],
           v23 - v25,
           a2,
           a3,
           a4);
}
