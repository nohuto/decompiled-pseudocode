/*
 * XREFs of ?RmpPsmAppFamilyAddActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800084F4
 * Callers:
 *     RmpPsmAppFamilyTableAddActivityHost @ 0x180008494 (RmpPsmAppFamilyTableAddActivityHost.c)
 * Callees:
 *     RmpAllocateHeap @ 0x180007C10 (RmpAllocateHeap.c)
 */

__int64 __fastcall RmpPsmAppFamilyAddActivityHost(struct _RM_PSM_APP_FAMILY *a1, struct _RM_ACTIVITY_HOST *a2)
{
  unsigned int v2; // ebx
  _QWORD *Heap; // rax

  v2 = 0;
  if ( *((_QWORD *)a1 + 69) )
  {
    Heap = RmpAllocateHeap(0x10uLL);
    if ( Heap )
    {
      Heap[1] = 0LL;
      *Heap = a2;
      Heap[1] = *((_QWORD *)a1 + 70);
      *((_QWORD *)a1 + 70) = Heap + 1;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    *((_QWORD *)a1 + 69) = a2;
  }
  return v2;
}
