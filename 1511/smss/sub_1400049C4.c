/*
 * XREFs of sub_1400049C4 @ 0x1400049C4
 * Callers:
 *     sub_140003E30 @ 0x140003E30 (sub_140003E30.c)
 *     sub_140012044 @ 0x140012044 (sub_140012044.c)
 * Callees:
 *     sub_140012E3C @ 0x140012E3C (sub_140012E3C.c)
 */

_DWORD *__fastcall sub_1400049C4(int a1)
{
  _DWORD *Heap; // rax
  _DWORD *v3; // rbx
  __int64 v5; // rax

  Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), Flags + 0x80000, 0x58uLL);
  v3 = Heap;
  if ( Heap )
  {
    if ( (a1 & 1) != 0 )
    {
      *((_QWORD *)Heap + 2) = 0LL;
LABEL_4:
      v3[1] = 0;
      v3[6] = -1;
      *((_QWORD *)v3 + 4) = 0LL;
      *((_QWORD *)v3 + 5) = 0LL;
      *v3 = 1;
      v3[2] = a1;
      *((_QWORD *)v3 + 6) = 0LL;
      *((_QWORD *)v3 + 7) = 0LL;
      return v3;
    }
    v5 = sub_140012E3C();
    *((_QWORD *)v3 + 2) = v5;
    if ( v5 )
      goto LABEL_4;
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v3);
  }
  return 0LL;
}
