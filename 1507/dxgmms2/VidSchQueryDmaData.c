/*
 * XREFs of VidSchQueryDmaData @ 0x1C007A864
 * Callers:
 *     ?WriteDmaHistoryToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK2K@Z @ 0x1C005AC14 (-WriteDmaHistoryToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK2K@Z.c)
 * Callees:
 *     VidSchiBlockDriverCallback @ 0x1C007A9F0 (VidSchiBlockDriverCallback.c)
 */

__int64 __fastcall VidSchQueryDmaData(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdi
  unsigned int v7; // r9d
  unsigned int v8; // r8d
  __int64 i; // rdx
  __int64 result; // rax
  __int64 v11; // rcx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0

  v6 = *(_QWORD *)(a1 + 8LL * a2 + 368);
  VidSchiBlockDriverCallback(a1);
  v7 = *(_DWORD *)(a1 + 2176);
  v8 = 0;
  if ( !v7 )
    return 3221225485LL;
  for ( i = v6 + 3212; *(_DWORD *)(i - 20) == 3 || a3 != *(_QWORD *)(i - 4); i += 224LL )
  {
    if ( ++v8 >= v7 )
      return 3221225485LL;
  }
  v11 = 224LL * v8;
  result = 0LL;
  v12 = *(_OWORD *)(v11 + v6 + 3232);
  *(_OWORD *)a4 = *(_OWORD *)(v11 + v6 + 3216);
  v13 = *(_OWORD *)(v11 + v6 + 3248);
  *(_OWORD *)(a4 + 16) = v12;
  v14 = *(_OWORD *)(v11 + v6 + 3264);
  *(_OWORD *)(a4 + 32) = v13;
  v15 = *(_OWORD *)(v11 + v6 + 3280);
  *(_OWORD *)(a4 + 48) = v14;
  *(_QWORD *)&v14 = *(_QWORD *)(v11 + v6 + 3296);
  *(_OWORD *)(a4 + 64) = v15;
  *(_QWORD *)(a4 + 80) = v14;
  return result;
}
