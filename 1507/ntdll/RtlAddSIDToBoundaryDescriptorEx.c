/*
 * XREFs of RtlAddSIDToBoundaryDescriptorEx @ 0x18005291C
 * Callers:
 *     RtlAddSIDToBoundaryDescriptor @ 0x180052D10 (RtlAddSIDToBoundaryDescriptor.c)
 *     RtlAddIntegrityLabelToBoundaryDescriptor @ 0x1800D1DF0 (RtlAddIntegrityLabelToBoundaryDescriptor.c)
 * Callees:
 *     RtlValidSid @ 0x180020320 (RtlValidSid.c)
 *     NtdllpFreeStringRoutine @ 0x18002A210 (NtdllpFreeStringRoutine.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlLengthRequiredSid @ 0x18004F340 (RtlLengthRequiredSid.c)
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x180052C28 (RtlEnumerateBoundaryDescriptorEntries.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

__int64 __fastcall RtlAddSIDToBoundaryDescriptorEx(__int64 a1, _BYTE *a2, char a3)
{
  int v6; // eax
  _DWORD *v7; // rbp
  unsigned int v8; // edi
  unsigned int v9; // eax
  void *Heap; // rax
  unsigned __int64 v11; // rsi
  __int64 v12; // rbx
  unsigned int v13; // eax
  int v14; // ebx
  __int64 result; // rax

  if ( !RtlValidSid(a2) )
    return 3221225485LL;
  v6 = RtlLengthRequiredSid((unsigned __int8)a2[1]);
  v7 = *(_DWORD **)a1;
  v8 = (v6 + 15) & 0xFFFFFFF8;
  v9 = v8 + *(_DWORD *)(*(_QWORD *)a1 + 8LL);
  if ( v9 < v8 )
    return 3221225843LL;
  Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v9);
  v11 = (unsigned __int64)Heap;
  if ( !Heap )
    return 3221225626LL;
  memmove(Heap, v7, (unsigned int)v7[2]);
  *(_DWORD *)(v11 + 8) = v8 + v7[2];
  *(_DWORD *)(v11 + 4) = v7[1] + 1;
  v12 = (unsigned int)v7[2];
  *(_DWORD *)(v12 + v11) = (a3 != 0) + 2;
  *(_DWORD *)(v12 + v11 + 4) = v8;
  v13 = RtlLengthRequiredSid((unsigned __int8)a2[1]);
  memmove((void *)(v11 + v12 + 8), a2, v13);
  v14 = RtlEnumerateBoundaryDescriptorEntries(v11);
  if ( v14 < 0 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11);
    return (unsigned int)v14;
  }
  else
  {
    NtdllpFreeStringRoutine((__int64)v7);
    result = 0LL;
    *(_QWORD *)a1 = v11;
  }
  return result;
}
