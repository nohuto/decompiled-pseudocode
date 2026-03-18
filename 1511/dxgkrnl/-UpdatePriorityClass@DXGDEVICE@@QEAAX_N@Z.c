/*
 * XREFs of ?UpdatePriorityClass@DXGDEVICE@@QEAAX_N@Z @ 0x1C013BDB0
 * Callers:
 *     DXGDEVICE_UpdatePriorityClass @ 0x1C000CE80 (DXGDEVICE_UpdatePriorityClass.c)
 * Callees:
 *     ?SetSchedulingPriority@DXGCONTEXT@@QEAAJH_N@Z @ 0x1C0137750 (-SetSchedulingPriority@DXGCONTEXT@@QEAAJH_N@Z.c)
 */

void __fastcall DXGDEVICE::UpdatePriorityClass(DXGDEVICE *this, unsigned __int8 a2)
{
  unsigned int *v2; // rdi
  unsigned int *i; // rbx

  v2 = (unsigned int *)((char *)this + 288);
  for ( i = (unsigned int *)*((_QWORD *)this + 36); i != v2 && i; i = *(unsigned int **)i )
    DXGCONTEXT::SetSchedulingPriority((DXGCONTEXT *)i, i[86], a2);
}
