/*
 * XREFs of RtlpIsProtectedHeap @ 0x18006F90C
 * Callers:
 *     RtlSetHeapInformation @ 0x18006F7D0 (RtlSetHeapInformation.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x18006F860 (RtlpSetRequestedFrontEndHeap.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800D852C (RtlSetHeapDebuggingInformation.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlpIsProtectedHeap(__int64 a1)
{
  _WORD *v1; // rcx

  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    v1 = (_WORD *)(a1 + 36);
  else
    v1 = (_WORD *)(a1 + 208);
  return *v1 == 0xFFFF;
}
