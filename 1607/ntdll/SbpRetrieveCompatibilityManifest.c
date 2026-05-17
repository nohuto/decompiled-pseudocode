/*
 * XREFs of SbpRetrieveCompatibilityManifest @ 0x18002AF4C
 * Callers:
 *     SbpDetermineDllContext @ 0x18002E304 (SbpDetermineDllContext.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlQueryInformationActivationContext @ 0x18003DAF0 (RtlQueryInformationActivationContext.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 */

__int64 __fastcall SbpRetrieveCompatibilityManifest(void *a1, __int64 *a2, _QWORD *a3)
{
  struct _PEB *v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // rbp
  unsigned int v9; // r12d
  int v10; // ecx
  unsigned __int64 v11; // rsi
  __int64 Heap; // rdi
  unsigned __int64 v14; // [rsp+70h] [rbp+8h] BYREF

  v3 = NtCurrentPeb();
  v4 = 0;
  v5 = *a2;
  *a2 = 0LL;
  v9 = 2;
  if ( a1 != v3->ImageBaseAddress )
    v9 = 1073741826;
  v10 = RtlQueryInformationActivationContext(v9, a1, 0LL, 6LL, 0LL, 0LL, &v14);
  if ( (int)(v10 + 0x80000000) < 0 || v10 == -1073741789 )
  {
    v11 = v14;
    if ( v14 )
    {
      if ( v14 > *a3 )
      {
        v11 = v14;
        Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v14);
        if ( !Heap )
          return v4;
      }
      else
      {
        Heap = v5;
      }
      if ( (int)RtlQueryInformationActivationContext(v9, a1, 0LL, 6LL, Heap, v11, &v14) < 0 )
      {
        if ( Heap && Heap != v5 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
        return v4;
      }
      *a3 = v14;
      *a2 = Heap;
    }
    return 1;
  }
  return v4;
}
