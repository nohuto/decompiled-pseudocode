/*
 * XREFs of sub_140009C70 @ 0x140009C70
 * Callers:
 *     sub_140009BE0 @ 0x140009BE0 (sub_140009BE0.c)
 * Callees:
 *     <none>
 */

char sub_140009C70()
{
  unsigned int v0; // ebx
  int v1; // esi
  _DWORD *Heap; // rax
  _DWORD *v3; // rdi
  int v4; // ebp
  ULONG ReturnLength; // [rsp+50h] [rbp+8h] BYREF

  v0 = (dword_1400201F0 << 13) + 48;
  v1 = 0;
  while ( 1 )
  {
    Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v0);
    v3 = Heap;
    if ( !Heap )
      return (char)Heap;
    LODWORD(Heap) = NtQuerySystemInformation(SystemCallTimeInformation|0x80, Heap, v0, &ReturnLength);
    v4 = (int)Heap;
    if ( (int)Heap < 0 )
    {
      if ( (_DWORD)Heap != -1073741789 )
        goto LABEL_8;
      LOBYTE(Heap) = RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v3);
      v0 = ReturnLength;
      v3 = 0LL;
    }
    if ( (unsigned int)++v1 >= 2 )
    {
      if ( v4 >= 0 && v3[3] > 1u )
        LOBYTE(Heap) = NtUpdateWnfStateData(&unk_14001ABF8, 0LL, 0LL, 0LL, 0LL, 0, 0);
LABEL_8:
      if ( v3 )
        LOBYTE(Heap) = RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v3);
      return (char)Heap;
    }
  }
}
