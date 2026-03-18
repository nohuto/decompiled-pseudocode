/*
 * XREFs of ?LogInformationToMinidump@VIDMM_GLOBAL@@QEAA_KK_KKPEAE0@Z @ 0x1C007B4BC
 * Callers:
 *     VidMmLogInformationToMinidump @ 0x1C001C6E0 (VidMmLogInformationToMinidump.c)
 * Callees:
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?WriteSegmentInformationToMinidump@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K@Z @ 0x1C007E438 (-WriteSegmentInformationToMinidump@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K@Z.c)
 *     ?WriteDmaHistoryToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK2K@Z @ 0x1C00808B4 (-WriteDmaHistoryToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK2K@Z.c)
 *     ?WritePagingHistoryToMinidump@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K@Z @ 0x1C0081C30 (-WritePagingHistoryToMinidump@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K@Z.c)
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
  _OWORD *v16; // rax
  __int64 v17; // rdx
  _OWORD *v18; // rcx
  __int128 v19; // xmm1
  unsigned __int64 v20; // rax
  unsigned __int8 *v21; // rdi
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rax

  if ( a6 < 0x458 )
    return 0LL;
  v11 = (unsigned __int8 *)a5 + 1112;
  memset(a5, 0, 0x458uLL);
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
  v16 = (_OWORD *)((char *)a5 + 776);
  v17 = 2LL;
  v18 = &gVidMmLowResourceAccumulated;
  do
  {
    *v16 = *v18;
    v16[1] = v18[1];
    v16[2] = v18[2];
    v16[3] = v18[3];
    v16[4] = v18[4];
    v16[5] = v18[5];
    v16[6] = v18[6];
    v16 += 8;
    v19 = v18[7];
    v18 += 8;
    *(v16 - 1) = v19;
    --v17;
  }
  while ( v17 );
  *v16 = *v18;
  v16[1] = v18[1];
  v16[2] = v18[2];
  v16[3] = v18[3];
  v20 = VIDMM_GLOBAL::WriteSegmentInformationToMinidump(this, a5, v11, a6 - 1112);
  v21 = &v11[v20];
  v22 = a6 - 1112 - v20;
  v23 = 10240LL;
  if ( v22 < 0x2800 )
    v23 = a6 - 1112 - v20;
  v24 = VIDMM_GLOBAL::WritePagingHistoryToMinidump(this, a5, v21, v23);
  return a6
       - (v22
        - v24)
       + VIDMM_DMA_POOL::WriteDmaHistoryToMinidump(
           *((VIDMM_DMA_POOL **)this + 79),
           a5,
           &v21[v24],
           v22 - v24,
           a2,
           a3,
           a4);
}
