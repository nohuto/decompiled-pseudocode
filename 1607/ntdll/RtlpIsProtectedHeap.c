/*
 * XREFs of RtlpIsProtectedHeap @ 0x18007E864
 * Callers:
 *     RtlSetHeapInformation @ 0x18007E6F0 (RtlSetHeapInformation.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x18007E7B8 (RtlpSetRequestedFrontEndHeap.c)
 *     RtlSetHeapDebuggingInformation @ 0x18008F840 (RtlSetHeapDebuggingInformation.c)
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
