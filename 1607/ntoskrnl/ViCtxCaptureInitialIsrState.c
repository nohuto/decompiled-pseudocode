/*
 * XREFs of ViCtxCaptureInitialIsrState @ 0x140719D1C
 * Callers:
 *     ViCtxIsr @ 0x140719FC4 (ViCtxIsr.c)
 *     ViCtxIsrMessageBased @ 0x14071A010 (ViCtxIsrMessageBased.c)
 * Callees:
 *     RtlXSave @ 0x140083D0C (RtlXSave.c)
 */

char *__fastcall ViCtxCaptureInitialIsrState(__int64 a1)
{
  int v1; // edx
  __int64 v2; // r8
  char *v3; // rbx
  unsigned __int64 v4; // rdx

  _InterlockedAdd(&ViCtxInterrupts, 1u);
  v1 = 0;
  while ( 1 )
  {
    v2 = ((unsigned __int8)_InterlockedExchangeAdd(&ViCtxHintIndex, 1u) + 1) & 0xF;
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)&ViCtxIsrStateBlocks + 20 * v2, 1, 0) )
      break;
    if ( (unsigned int)++v1 >= 0x10 )
    {
      v3 = 0LL;
      goto LABEL_6;
    }
  }
  v3 = (char *)&ViCtxIsrStateBlocks + 80 * v2;
LABEL_6:
  if ( v3 )
  {
    v4 = ViCtxXStateEnabledMask;
    v3[8] = KeGetCurrentIrql();
    if ( ((v4 & 0xFFFFFFFFFFFFFFFCuLL) != 0 || !*(_BYTE *)(a1 + 94)) && (*((_DWORD *)v3 + 1) & 1) != 0 )
    {
      RtlXSave(*((_DWORD **)v3 + 4), v4, v2);
      *((_DWORD *)v3 + 1) |= 2u;
    }
    _InterlockedAdd(&ViCtxInterruptsChecked, 1u);
  }
  return v3;
}
