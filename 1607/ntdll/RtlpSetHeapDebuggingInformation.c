/*
 * XREFs of RtlpSetHeapDebuggingInformation @ 0x18008F1C0
 * Callers:
 *     RtlSetHeapDebuggingInformation @ 0x18008F840 (RtlSetHeapDebuggingInformation.c)
 * Callees:
 *     RtlpActivateLowFragmentationHeap @ 0x180029A3C (RtlpActivateLowFragmentationHeap.c)
 *     RtlpGetHeapInterceptorIndex @ 0x18008F230 (RtlpGetHeapInterceptorIndex.c)
 *     RtlpCallInterceptRoutine @ 0x180090F44 (RtlpCallInterceptRoutine.c)
 *     RtlSetLFHDebuggingInformation @ 0x1800FBFB4 (RtlSetLFHDebuggingInformation.c)
 */

__int64 __fastcall RtlpSetHeapDebuggingInformation(_DWORD *HeapHandle, __int64 a2)
{
  char *v2; // rsi
  __int64 (__fastcall *v5)(); // rcx
  __int64 v7; // rcx

  v2 = (char *)(HeapHandle + 8);
  if ( HeapHandle[4] != -571548178 )
    v2 = (char *)(HeapHandle + 36);
  if ( *(_DWORD *)(a2 + 16) )
  {
    if ( *(_DWORD *)v2 )
      RtlpCallInterceptRoutine(*(_DWORD *)v2, (_DWORD)HeapHandle, 0, 7, 0LL);
    v5 = RtlpStackTraceDatabaseLogPrefix;
  }
  else
  {
    v5 = *(__int64 (__fastcall **)())a2;
    if ( !*(_QWORD *)a2 )
      goto LABEL_6;
  }
  *(_DWORD *)v2 = (unsigned __int16)RtlpGetHeapInterceptorIndex(v5);
LABEL_6:
  if ( HeapHandle[4] != -571548178 && *(_DWORD *)(a2 + 12) )
  {
    v7 = *((_BYTE *)HeapHandle + 386) == 2 ? *((_QWORD *)HeapHandle + 47) : 0LL;
    if ( v7
      || ((RtlpActivateLowFragmentationHeap((PRTL_CRITICAL_SECTION *)HeapHandle), *((_BYTE *)HeapHandle + 386) != 2)
        ? (v7 = 0LL)
        : (v7 = *((_QWORD *)HeapHandle + 47)),
          v7) )
    {
      RtlSetLFHDebuggingInformation(v7, a2);
    }
  }
  return 0LL;
}
