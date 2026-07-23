/*
 * XREFs of PipDeleteDependencyNode @ 0x14062B2D0
 * Callers:
 *     PipDereferenceDependencyNode @ 0x14056840C (PipDereferenceDependencyNode.c)
 *     PipCreateDependencyNode @ 0x140568418 (PipCreateDependencyNode.c)
 * Callees:
 *     PipDeleteBindingIds @ 0x14062B294 (PipDeleteBindingIds.c)
 */

void __fastcall PipDeleteDependencyNode(_QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rcx

  PipDeleteBindingIds((__int64)a1);
  v2 = *a1;
  v3 = (_QWORD *)a1[1];
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*v3 != a1 )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  v4 = a1[9];
  v5 = (_QWORD *)a1[10];
  if ( *(_QWORD **)(v4 + 8) != a1 + 9 || (_QWORD *)*v5 != a1 + 9 )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  ExFreePoolWithTag(a1, 0x53706E50u);
}
