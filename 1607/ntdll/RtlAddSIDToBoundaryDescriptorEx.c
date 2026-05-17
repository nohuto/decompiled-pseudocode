/*
 * XREFs of RtlAddSIDToBoundaryDescriptorEx @ 0x18000B784
 * Callers:
 *     RtlAddSIDToBoundaryDescriptor @ 0x1800094D0 (RtlAddSIDToBoundaryDescriptor.c)
 *     RtlAddIntegrityLabelToBoundaryDescriptor @ 0x1800E2FA0 (RtlAddIntegrityLabelToBoundaryDescriptor.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800094E0 (NtdllpFreeStringRoutine.c)
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x180009500 (RtlEnumerateBoundaryDescriptorEntries.c)
 *     RtlLengthRequiredSid @ 0x18000BB10 (RtlLengthRequiredSid.c)
 *     RtlValidSid @ 0x180014F80 (RtlValidSid.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall RtlAddSIDToBoundaryDescriptorEx(__int64 a1, unsigned __int8 *a2, char a3)
{
  int v6; // eax
  _DWORD *v7; // rbp
  unsigned int v8; // edi
  unsigned int v9; // eax
  _DWORD *Heap; // rax
  _DWORD *v11; // rsi
  __int64 v12; // rbx
  unsigned int v13; // eax
  int v14; // ebx
  __int64 result; // rax

  if ( !(unsigned __int8)RtlValidSid(a2) )
    return 3221225485LL;
  v6 = RtlLengthRequiredSid(a2[1]);
  v7 = *(_DWORD **)a1;
  v8 = (v6 + 15) & 0xFFFFFFF8;
  v9 = v8 + *(_DWORD *)(*(_QWORD *)a1 + 8LL);
  if ( v9 < v8 )
    return 3221225843LL;
  Heap = (_DWORD *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, v9);
  v11 = Heap;
  if ( !Heap )
    return 3221225626LL;
  memmove(Heap, v7, (unsigned int)v7[2]);
  v11[2] = v8 + v7[2];
  v11[1] = v7[1] + 1;
  v12 = (unsigned int)v7[2];
  *(_DWORD *)((char *)v11 + v12) = (a3 != 0) + 2;
  *(_DWORD *)((char *)v11 + v12 + 4) = v8;
  v13 = RtlLengthRequiredSid(a2[1]);
  memmove((char *)v11 + v12 + 8, a2, v13);
  v14 = RtlEnumerateBoundaryDescriptorEntries(v11);
  if ( v14 < 0 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v11);
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
