/*
 * XREFs of RtlpHpTagQueryHeapsRemote @ 0x1800F7804
 * Callers:
 *     RtlpHpTagQueryTags @ 0x180081A60 (RtlpHpTagQueryTags.c)
 * Callees:
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A6920 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A6D60 (NtCreateSection.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800EA3FC (RtlpHeapPerformCrossProcessQuery.c)
 */

__int64 __fastcall RtlpHpTagQueryHeapsRemote(_OWORD *a1, SIZE_T CommitSize, HANDLE *a3)
{
  int v6; // edi
  _OWORD *v7; // rax
  void *v8; // rcx
  HANDLE v9; // r8
  bool v10; // cc
  PVOID v11; // rbx
  LARGE_INTEGER MaximumSize; // [rsp+50h] [rbp-19h] BYREF
  ULONG_PTR ViewSize; // [rsp+58h] [rbp-11h] BYREF
  HANDLE Buffer[10]; // [rsp+60h] [rbp-9h] BYREF
  PVOID BaseAddress; // [rsp+D8h] [rbp+6Fh] BYREF
  HANDLE SectionHandle; // [rsp+E8h] [rbp+7Fh] BYREF

  SectionHandle = 0LL;
  BaseAddress = 0LL;
  MaximumSize.QuadPart = (CommitSize + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  v6 = NtCreateSection(&SectionHandle, 0xF001Fu, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
  if ( v6 < 0 )
    goto LABEL_7;
  ViewSize = CommitSize;
  v6 = ZwMapViewOfSection(
         SectionHandle,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         0LL,
         CommitSize,
         0LL,
         &ViewSize,
         ViewUnmap,
         0,
         4u);
  if ( v6 < 0 )
    goto LABEL_7;
  v7 = BaseAddress;
  *(_OWORD *)BaseAddress = *a1;
  v7[1] = a1[1];
  v7[2] = a1[2];
  memset(Buffer, 0, sizeof(Buffer));
  v8 = (void *)*((_QWORD *)a1 + 1);
  Buffer[0] = SectionHandle;
  Buffer[1] = (HANDLE)MaximumSize.QuadPart;
  LODWORD(Buffer[3]) = 0x40000000;
  v6 = RtlpHeapPerformCrossProcessQuery(v8, Buffer);
  if ( v6 < 0 )
  {
LABEL_7:
    v11 = BaseAddress;
  }
  else
  {
    v9 = Buffer[4];
    v10 = Buffer[4] <= (HANDLE)CommitSize;
    *a3 = Buffer[4];
    v11 = BaseAddress;
    if ( v10 )
    {
      memmove(a1, BaseAddress, (size_t)v9);
      v6 = 0;
    }
    else
    {
      v6 = -1073741789;
    }
  }
  if ( v11 )
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v11);
  if ( SectionHandle )
    NtClose(SectionHandle);
  return (unsigned int)v6;
}
