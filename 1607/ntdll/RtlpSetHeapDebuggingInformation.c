/*
 * XREFs of RtlpSetHeapDebuggingInformation @ 0x18008F1D0
 * Callers:
 *     RtlSetHeapDebuggingInformation @ 0x18008F850 (RtlSetHeapDebuggingInformation.c)
 * Callees:
 *     RtlpActivateLowFragmentationHeap @ 0x180029A4C (RtlpActivateLowFragmentationHeap.c)
 *     RtlpGetHeapInterceptorIndex @ 0x18008F240 (RtlpGetHeapInterceptorIndex.c)
 *     RtlpCallInterceptRoutine @ 0x180090F54 (RtlpCallInterceptRoutine.c)
 *     RtlSetLFHDebuggingInformation @ 0x1800FBFB4 (RtlSetLFHDebuggingInformation.c)
 */

__int64 __fastcall RtlpSetHeapDebuggingInformation(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rsi
  __int64 (__fastcall *v5)(); // rcx
  __int64 v7; // rcx

  v2 = (_DWORD *)(a1 + 32);
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    v2 = (_DWORD *)(a1 + 144);
  if ( *(_DWORD *)(a2 + 16) )
  {
    if ( *v2 )
      RtlpCallInterceptRoutine(*v2, a1, 0, 7, 0LL);
    v5 = RtlpStackTraceDatabaseLogPrefix;
  }
  else
  {
    v5 = *(__int64 (__fastcall **)())a2;
    if ( !*(_QWORD *)a2 )
      goto LABEL_6;
  }
  *v2 = (unsigned __int16)RtlpGetHeapInterceptorIndex(v5);
LABEL_6:
  if ( *(_DWORD *)(a1 + 16) != -571548178 && *(_DWORD *)(a2 + 12) )
  {
    v7 = *(_BYTE *)(a1 + 386) == 2 ? *(_QWORD *)(a1 + 376) : 0LL;
    if ( v7
      || ((RtlpActivateLowFragmentationHeap(a1), *(_BYTE *)(a1 + 386) != 2) ? (v7 = 0LL) : (v7 = *(_QWORD *)(a1 + 376)),
          v7) )
    {
      RtlSetLFHDebuggingInformation(v7, a2);
    }
  }
  return 0LL;
}
