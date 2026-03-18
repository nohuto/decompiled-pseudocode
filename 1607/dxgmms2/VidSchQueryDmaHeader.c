/*
 * XREFs of VidSchQueryDmaHeader @ 0x1C00A2608
 * Callers:
 *     VidSchCollectDbgInfo @ 0x1C00A1E20 (VidSchCollectDbgInfo.c)
 * Callees:
 *     VidSchiBlockDriverCallback @ 0x1C00A26DC (VidSchiBlockDriverCallback.c)
 */

__int64 __fastcall VidSchQueryDmaHeader(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v8; // r10d
  unsigned int v9; // edx
  __int64 v10; // r8
  __int64 v12; // rdx

  VidSchiBlockDriverCallback(a1);
  v8 = *(_DWORD *)(a1 + 2420);
  v9 = 0;
  if ( !v8 )
    return 3221225485LL;
  v10 = a2 + 2904;
  while ( !a4 )
  {
    if ( *(_DWORD *)v10 != 3 )
      goto LABEL_7;
LABEL_8:
    ++v9;
    v10 += 224LL;
    if ( v9 >= v8 )
      return 3221225485LL;
  }
  if ( *(_DWORD *)v10 != 3 )
    goto LABEL_8;
LABEL_7:
  if ( a3 != *(_QWORD *)(v10 + 16) )
    goto LABEL_8;
  v12 = 224LL * v9;
  *(_DWORD *)a5 = *(_DWORD *)(v12 + a2 + 2888);
  *(_QWORD *)(a5 + 8) = *(_QWORD *)(v12 + a2 + 2896);
  *(_DWORD *)(a5 + 16) = *(_DWORD *)(v12 + a2 + 2904);
  *(_DWORD *)(a5 + 20) = *(_DWORD *)(v12 + a2 + 2908);
  *(_DWORD *)(a5 + 24) = *(_DWORD *)(v12 + a2 + 2912);
  *(_QWORD *)(a5 + 32) = *(_QWORD *)(v12 + a2 + 2920);
  return 0LL;
}
