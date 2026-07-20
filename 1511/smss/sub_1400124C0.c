/*
 * XREFs of sub_1400124C0 @ 0x1400124C0
 * Callers:
 *     sub_140006D94 @ 0x140006D94 (sub_140006D94.c)
 *     sub_1400127F8 @ 0x1400127F8 (sub_1400127F8.c)
 *     sub_14001290C @ 0x14001290C (sub_14001290C.c)
 * Callees:
 *     memcpy @ 0x14000C480 (memcpy.c)
 *     memset @ 0x14000C48C (memset.c)
 */

__int64 __fastcall sub_1400124C0(const void **a1, void *a2, int a3)
{
  ULONG v4; // ebx
  _QWORD *Heap; // rax
  _QWORD *v8; // rdi
  unsigned int v9; // ebx
  unsigned int v10; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-28h] BYREF

  v4 = *(unsigned __int16 *)a1 + 26;
  Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), Flags, v4);
  v8 = Heap;
  if ( Heap )
  {
    memset(Heap, 0, v4);
    v8[1] = 0LL;
    *(_BYTE *)v8 = a3 != 0;
    v10 = *(unsigned __int16 *)a1;
    *((_DWORD *)v8 + 4) = v10;
    memcpy((char *)v8 + 20, a1[1], v10);
    v9 = NtSetInformationFile(a2, &IoStatusBlock, v8, v4, FileRenameInformation);
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v8);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v9;
}
