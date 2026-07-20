/*
 * XREFs of SmpRandomizeDllList @ 0x140007500
 * Callers:
 *     SmpInitializeKnownDllsInternal @ 0x140007090 (SmpInitializeKnownDllsInternal.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall SmpRandomizeDllList(_QWORD *a1, _QWORD *a2, unsigned int *a3)
{
  unsigned int v6; // ecx
  rsize_t v7; // r14
  PVOID Heap; // rax
  void *v9; // rbp
  _QWORD *v10; // rbx
  _QWORD *j; // rdi
  ULONG v12; // eax
  NTSTATUS result; // eax
  _QWORD *i; // rax
  unsigned __int64 v15; // rax

  if ( (_QWORD *)*a1 == a1 )
  {
    *a2 = 0LL;
    result = 0;
    *a3 = 0;
    return result;
  }
  if ( !ProcessInformation )
  {
    v15 = __rdtsc();
    if ( (_DWORD)v15 )
    {
      ProcessInformation = v15;
    }
    else
    {
      result = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL);
      if ( result < 0 )
        return result;
    }
  }
  v6 = *a3;
  if ( !*a3 )
  {
    for ( i = (_QWORD *)*a1; i != a1; ++v6 )
      i = (_QWORD *)*i;
    *a3 = v6;
  }
  v7 = v6;
  Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, 16LL * v6);
  v9 = Heap;
  if ( !Heap )
    return -1073741670;
  v10 = (_QWORD *)*a1;
  for ( j = Heap; v10 != a1; v10 = (_QWORD *)*v10 )
  {
    v12 = RtlRandomEx(&ProcessInformation);
    j[1] = v10;
    *(_DWORD *)j = v12;
    j += 2;
  }
  qsort_s(v9, v7, 0x10uLL, SmpSortDllList, 0LL);
  result = 0;
  *a2 = v9;
  return result;
}
