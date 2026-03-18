/*
 * XREFs of ?UpdatePriorityClass@DXGDEVICE@@QEAAXXZ @ 0x1C00D1518
 * Callers:
 *     DXGDEVICE_UpdatePriorityClass @ 0x1C000E660 (DXGDEVICE_UpdatePriorityClass.c)
 * Callees:
 *     ?SetSchedulingPriority@DXGCONTEXT@@QEAAJH@Z @ 0x1C0072C7C (-SetSchedulingPriority@DXGCONTEXT@@QEAAJH@Z.c)
 */

void __fastcall DXGDEVICE::UpdatePriorityClass(DXGDEVICE *this)
{
  unsigned int *v1; // rdi
  unsigned int *i; // rbx

  v1 = (unsigned int *)((char *)this + 288);
  for ( i = (unsigned int *)*((_QWORD *)this + 36); i != v1 && i; i = *(unsigned int **)i )
    DXGCONTEXT::SetSchedulingPriority((DXGCONTEXT *)i, i[86]);
}
