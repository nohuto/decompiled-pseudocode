/*
 * XREFs of VidSchRestartAdapter @ 0x1C0079260
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiAcceptDriverCallback @ 0x1C004497C (VidSchiAcceptDriverCallback.c)
 *     VidSchResetFlipQueueTimeout @ 0x1C00763F8 (VidSchResetFlipQueueTimeout.c)
 *     VidSchResetGPUTimeout @ 0x1C0076434 (VidSchResetGPUTimeout.c)
 */

__int64 __fastcall VidSchRestartAdapter(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx

  v1 = 0;
  *(_QWORD *)(a1 + 2488) = 0LL;
  *(_DWORD *)(a1 + 2480) = 0;
  *(_QWORD *)(a1 + 328) = 0LL;
  for ( *(_QWORD *)(a1 + 336) = 0LL; v1 < *(_DWORD *)(a1 + 56); *(_QWORD *)(*(_QWORD *)(a1 + 8 * v2 + 368) + 40LL) = 0LL )
    v2 = v1++;
  *(_QWORD *)(a1 + 2496) = 0LL;
  VidSchResetFlipQueueTimeout(a1);
  VidSchResetGPUTimeout(v3);
  VidSchiAcceptDriverCallback(v4);
  return 0LL;
}
