/*
 * XREFs of RtlpSetHeapDebuggingInformation @ 0x1800DA550
 * Callers:
 *     RtlSetHeapDebuggingInformation @ 0x1800D852C (RtlSetHeapDebuggingInformation.c)
 * Callees:
 *     RtlpActivateLowFragmentationHeap @ 0x180004B5C (RtlpActivateLowFragmentationHeap.c)
 *     RtlpCallInterceptRoutine @ 0x1800D8A44 (RtlpCallInterceptRoutine.c)
 *     RtlpGetHeapInterceptorIndex @ 0x1800EEDA0 (RtlpGetHeapInterceptorIndex.c)
 *     RtlSetLFHDebuggingInformation @ 0x1800F064C (RtlSetLFHDebuggingInformation.c)
 */

__int64 __fastcall RtlpSetHeapDebuggingInformation(_DWORD *HeapHandle, __int64 a2)
{
  int *v2; // rsi
  __int64 (__fastcall *v5)(); // rcx
  __int64 v6; // rcx

  v2 = HeapHandle + 8;
  if ( HeapHandle[4] != -571548178 )
    v2 = HeapHandle + 36;
  if ( *(_DWORD *)(a2 + 16) )
  {
    if ( *v2 )
      RtlpCallInterceptRoutine(*v2, (__int64)HeapHandle, 0LL, 7u, 0LL);
    v5 = RtlpStackTraceDatabaseLogPrefix;
  }
  else
  {
    v5 = *(__int64 (__fastcall **)())a2;
    if ( !*(_QWORD *)a2 )
      goto LABEL_9;
  }
  *v2 = (unsigned __int16)RtlpGetHeapInterceptorIndex(v5);
LABEL_9:
  if ( HeapHandle[4] != -571548178 && *(_DWORD *)(a2 + 12) )
  {
    v6 = *((_BYTE *)HeapHandle + 378) == 2 ? *((_QWORD *)HeapHandle + 46) : 0LL;
    if ( v6
      || ((RtlpActivateLowFragmentationHeap((PRTL_CRITICAL_SECTION *)HeapHandle), *((_BYTE *)HeapHandle + 378) != 2)
        ? (v6 = 0LL)
        : (v6 = *((_QWORD *)HeapHandle + 46)),
          v6) )
    {
      RtlSetLFHDebuggingInformation(v6, a2);
    }
  }
  return 0LL;
}
