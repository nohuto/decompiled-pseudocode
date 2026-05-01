/*
 * XREFs of ?RmpPsmAppFamilyAddActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800055B0
 * Callers:
 *     RmpPsmAppFamilyTableAddActivityHost @ 0x18000554C (RmpPsmAppFamilyTableAddActivityHost.c)
 * Callees:
 *     RmpActivityHostIsPple @ 0x18000564C (RmpActivityHostIsPple.c)
 */

__int64 __fastcall RmpPsmAppFamilyAddActivityHost(struct _RM_PSM_APP_FAMILY *a1, struct _RM_ACTIVITY_HOST *a2)
{
  unsigned int v2; // ebx
  _QWORD *Heap; // rax

  v2 = 0;
  if ( *((_QWORD *)a1 + 69) )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x10uLL);
    if ( !Heap )
      return (unsigned int)-1073741801;
    Heap[1] = 0LL;
    *Heap = a2;
    Heap[1] = *((_QWORD *)a1 + 70);
    *((_QWORD *)a1 + 70) = Heap + 1;
  }
  else
  {
    *((_QWORD *)a1 + 69) = a2;
  }
  if ( (unsigned __int8)RmpActivityHostIsPple(a2) )
    *((_QWORD *)a1 + 71) = a2;
  return v2;
}
