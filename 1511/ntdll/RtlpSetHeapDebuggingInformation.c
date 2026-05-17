/*
 * XREFs of RtlpSetHeapDebuggingInformation @ 0x1800E1980
 * Callers:
 *     RtlSetHeapDebuggingInformation @ 0x1800E01FC (RtlSetHeapDebuggingInformation.c)
 * Callees:
 *     RtlpActivateLowFragmentationHeap @ 0x180053028 (RtlpActivateLowFragmentationHeap.c)
 *     RtlpCallInterceptRoutine @ 0x18009524C (RtlpCallInterceptRoutine.c)
 *     RtlpGetHeapInterceptorIndex @ 0x1800F0D70 (RtlpGetHeapInterceptorIndex.c)
 *     RtlSetLFHDebuggingInformation @ 0x1800F24AC (RtlSetLFHDebuggingInformation.c)
 */

__int64 __fastcall RtlpSetHeapDebuggingInformation(__int64 a1, __int64 a2)
{
  int *v2; // rsi
  __int64 (__fastcall *v5)(); // rcx
  __int64 v6; // rcx

  v2 = (int *)(a1 + 32);
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    v2 = (int *)(a1 + 144);
  if ( *(_DWORD *)(a2 + 16) )
  {
    if ( *v2 )
      RtlpCallInterceptRoutine(*v2, a1, 0LL, 7);
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
  if ( *(_DWORD *)(a1 + 16) != -571548178 && *(_DWORD *)(a2 + 12) )
  {
    v6 = *(_BYTE *)(a1 + 378) == 2 ? *(_QWORD *)(a1 + 368) : 0LL;
    if ( v6
      || ((RtlpActivateLowFragmentationHeap(a1), *(_BYTE *)(a1 + 378) != 2) ? (v6 = 0LL) : (v6 = *(_QWORD *)(a1 + 368)),
          v6) )
    {
      RtlSetLFHDebuggingInformation(v6, a2);
    }
  }
  return 0LL;
}
