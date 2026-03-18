/*
 * XREFs of ?VidSchiFindAllocationByDriverEngine@@YAPEAUVIDMM_ALLOC@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@II@Z @ 0x1C0012830
 * Callers:
 *     VidSchiSendToExecutionQueue @ 0x1C0001A80 (VidSchiSendToExecutionQueue.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C001A630 (VidSchiSubmitMmIoFlipCommand.c)
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
  int v7; // r11d
  int i; // r10d
  __int64 v9; // rdx
  __int64 v10; // rcx

  v3 = *((_DWORD *)a1 + 265);
  v4 = 0;
  v7 = 0;
  for ( i = 1; (v3 & i) == 0; i *= 2 )
  {
LABEL_5:
    if ( ++v7 > a2 )
      return 0LL;
  }
  v9 = *((_QWORD *)a1 + 142);
  v10 = 56LL * (unsigned int)(a3 + v4 * *(_DWORD *)(v9 + 4));
  if ( ((*(_DWORD *)(*(_QWORD *)(v10 + v9 + 16) + 32LL) >> 2) & 0x3F) != a2 )
  {
    ++v4;
    goto LABEL_5;
  }
  return *(struct VIDMM_ALLOC **)(v10 + v9 + 16);
}
