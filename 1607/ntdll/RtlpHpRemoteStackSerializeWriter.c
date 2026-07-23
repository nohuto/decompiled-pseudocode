/*
 * XREFs of RtlpHpRemoteStackSerializeWriter @ 0x1800EA600
 * Callers:
 *     <none>
 * Callees:
 *     ZwMapViewOfSection @ 0x1800A6920 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

NTSTATUS __fastcall RtlpHpRemoteStackSerializeWriter(void *Src, size_t Size, __int64 a3)
{
  size_t v4; // rdi
  ULONG_PTR *ViewSize; // rsi
  LARGE_INTEGER *SectionOffset; // r14
  PVOID *v8; // r15
  ULONG_PTR v9; // rcx
  ULONG_PTR v10; // rax
  SIZE_T CommitSize; // rcx
  NTSTATUS result; // eax

  *(_QWORD *)(a3 + 32) += Size;
  v4 = Size;
  if ( *(_DWORD *)(a3 + 28) != -1073741789 && Size )
  {
    ViewSize = (ULONG_PTR *)(a3 + 56);
    if ( Size + *(_QWORD *)(a3 + 72) <= *(_QWORD *)(a3 + 56) )
    {
LABEL_10:
      memmove((void *)(*(_QWORD *)(a3 + 72) + *(_QWORD *)(a3 + 48)), Src, v4);
      *(_QWORD *)(a3 + 72) += v4;
    }
    else
    {
      SectionOffset = (LARGE_INTEGER *)(a3 + 64);
      v8 = (PVOID *)(a3 + 48);
      while ( 1 )
      {
        memmove((char *)*v8 + *(_QWORD *)(a3 + 72), Src, *ViewSize - *(_QWORD *)(a3 + 72));
        v9 = *ViewSize;
        SectionOffset->QuadPart += *ViewSize;
        v4 += *(_QWORD *)(a3 + 72) - v9;
        if ( SectionOffset->QuadPart >= *(_QWORD *)(a3 + 8) )
          break;
        NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *v8);
        v10 = *(_QWORD *)(a3 + 8) - SectionOffset->QuadPart;
        *v8 = 0LL;
        CommitSize = *ViewSize;
        if ( *ViewSize >= v10 )
          CommitSize = *(_QWORD *)(a3 + 8) - SectionOffset->QuadPart;
        *ViewSize = CommitSize;
        result = ZwMapViewOfSection(
                   *(HANDLE *)a3,
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   v8,
                   0LL,
                   CommitSize,
                   SectionOffset,
                   ViewSize,
                   ViewUnmap,
                   0,
                   4u);
        if ( result < 0 )
          return result;
        *(_QWORD *)(a3 + 72) = 0LL;
        if ( v4 <= *ViewSize )
          goto LABEL_10;
      }
      *(_DWORD *)(a3 + 28) = -1073741789;
    }
  }
  return 0;
}
