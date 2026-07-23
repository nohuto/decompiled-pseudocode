/*
 * XREFs of RtlpExtendedHeapInformationWorkerCallback @ 0x1800E0DD0
 * Callers:
 *     <none>
 * Callees:
 *     ZwMapViewOfSection @ 0x1800A55C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A5600 (NtUnmapViewOfSection.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

NTSTATUS __fastcall RtlpExtendedHeapInformationWorkerCallback(_QWORD *Src, __int64 a2)
{
  unsigned __int64 v2; // rax
  NTSTATUS result; // eax
  ULONG_PTR *ViewSize; // rsi
  unsigned __int64 v7; // rcx
  PVOID *v8; // r14
  SIZE_T CommitSize; // rdx
  __int64 v10; // rax

  v2 = Src[1];
  if ( v2 > 0x10000 )
    return -1073741595;
  *(_QWORD *)(a2 + 32) += v2;
  if ( *(_DWORD *)(a2 + 28) == -1073741789 )
    return 0;
  ViewSize = (ULONG_PTR *)(a2 + 56);
  v7 = (*(_QWORD *)(a2 + 72) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  *(_QWORD *)(a2 + 72) = v7;
  if ( Src[1] + v7 <= *(_QWORD *)(a2 + 56) )
    goto LABEL_9;
  v8 = (PVOID *)(a2 + 48);
  NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *(PVOID *)(a2 + 48));
  CommitSize = *ViewSize;
  *(_QWORD *)(a2 + 64) += *ViewSize;
  v10 = *(_QWORD *)(a2 + 64);
  *v8 = 0LL;
  if ( v10 < *(_QWORD *)(a2 + 8) )
  {
    result = ZwMapViewOfSection(
               *(HANDLE *)a2,
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               v8,
               0LL,
               CommitSize,
               (PLARGE_INTEGER)(a2 + 64),
               ViewSize,
               ViewUnmap,
               0,
               4u);
    if ( result < 0 )
      return result;
    *(_QWORD *)(a2 + 72) = 0LL;
LABEL_9:
    memmove((void *)(*(_QWORD *)(a2 + 72) + *(_QWORD *)(a2 + 48)), Src, Src[1]);
    ++*(_DWORD *)(a2 + 40);
    *(_QWORD *)(a2 + 72) += Src[1];
    return 0;
  }
  *(_DWORD *)(a2 + 28) = -1073741789;
  return 0;
}
