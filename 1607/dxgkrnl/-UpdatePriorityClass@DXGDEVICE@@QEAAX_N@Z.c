/*
 * XREFs of ?UpdatePriorityClass@DXGDEVICE@@QEAAX_N@Z @ 0x1C0096078
 * Callers:
 *     DXGDEVICE_UpdatePriorityClass @ 0x1C000D4F0 (DXGDEVICE_UpdatePriorityClass.c)
 * Callees:
 *     ?SetSchedulingPriority@DXGCONTEXT@@QEAAJH_N@Z @ 0x1C00A773C (-SetSchedulingPriority@DXGCONTEXT@@QEAAJH_N@Z.c)
 */

void __fastcall DXGDEVICE::UpdatePriorityClass(DXGDEVICE *this, bool a2)
{
  int *v2; // rdi
  int *i; // rbx

  v2 = (int *)((char *)this + 312);
  for ( i = (int *)*((_QWORD *)this + 39); i != v2 && i; i = *(int **)i )
    DXGCONTEXT::SetSchedulingPriority((DXGCONTEXT *)i, i[86], a2);
}
