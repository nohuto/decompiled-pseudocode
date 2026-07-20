/*
 * XREFs of sub_140012E3C @ 0x140012E3C
 * Callers:
 *     sub_1400049C4 @ 0x1400049C4 (sub_1400049C4.c)
 *     sub_140012F08 @ 0x140012F08 (sub_140012F08.c)
 * Callees:
 *     <none>
 */

_DWORD *sub_140012E3C()
{
  _DWORD *v0; // rbx
  PVOID Heap; // rax

  v0 = 0LL;
  if ( qword_140020960 )
  {
    RtlAcquireSRWLockExclusive(&unk_140020968);
    if ( qword_140020960 )
    {
      --dword_140020958;
      v0 = (_DWORD *)qword_140020960;
      qword_140020960 = *(_QWORD *)qword_140020960;
    }
    RtlReleaseSRWLockExclusive(&unk_140020968);
    if ( v0 )
      goto LABEL_9;
  }
  Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), Flags + 0x80000, 0x10uLL);
  v0 = Heap;
  if ( Heap )
  {
    if ( NtCreateEvent((PHANDLE)Heap + 1, 0x100002u, 0LL, NotificationEvent, 0) < 0 )
    {
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v0);
      v0 = 0LL;
    }
    if ( v0 )
LABEL_9:
      *v0 = 0;
  }
  return v0;
}
