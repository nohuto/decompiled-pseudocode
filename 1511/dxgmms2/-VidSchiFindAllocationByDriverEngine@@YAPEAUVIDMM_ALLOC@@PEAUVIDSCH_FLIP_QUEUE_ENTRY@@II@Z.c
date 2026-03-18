/*
 * XREFs of ?VidSchiFindAllocationByDriverEngine@@YAPEAUVIDMM_ALLOC@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@II@Z @ 0x1C001EE10
 * Callers:
 *     VidSchiSendToExecutionQueue @ 0x1C00086D0 (VidSchiSendToExecutionQueue.c)
 * Callees:
 *     <none>
 */

struct VIDMM_ALLOC *__fastcall VidSchiFindAllocationByDriverEngine(
        struct VIDSCH_FLIP_QUEUE_ENTRY *a1,
        unsigned int a2,
        int a3)
{
  int v3; // esi
  int v4; // r9d
  int v6; // r11d
  int i; // r10d
  __int64 v8; // rcx

  v3 = *((_DWORD *)a1 + 265);
  v4 = 0;
  v6 = 0;
  for ( i = 1; (v3 & i) == 0; i *= 2 )
  {
LABEL_5:
    if ( ++v6 > a2 )
      return 0LL;
  }
  v8 = *((_QWORD *)a1 + 144);
  if ( ((*(_DWORD *)(*(_QWORD *)(((unsigned __int64)(unsigned int)(a3 + v4 * *(_DWORD *)(v8 + 4)) << 6) + v8 + 16) + 32LL) >> 2) & 0x3F) != a2 )
  {
    ++v4;
    goto LABEL_5;
  }
  return *(struct VIDMM_ALLOC **)(((unsigned __int64)(unsigned int)(a3 + v4 * *(_DWORD *)(v8 + 4)) << 6) + v8 + 16);
}
