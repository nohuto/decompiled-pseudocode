/*
 * XREFs of PipDeleteBindingIds @ 0x14062B1E0
 * Callers:
 *     PipConvertResolutionsToReservations @ 0x14062AFD4 (PipConvertResolutionsToReservations.c)
 *     PipDeleteDependencyNode @ 0x14062B21C (PipDeleteDependencyNode.c)
 * Callees:
 *     PipFreeBindingId @ 0x14062B2DC (PipFreeBindingId.c)
 */

void __fastcall PipDeleteBindingIds(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rcx
  _QWORD *v3; // rax

  v1 = (_QWORD *)(a1 + 56);
  while ( (_QWORD *)*v1 != v1 )
  {
    v2 = (_QWORD *)v1[1];
    v3 = (_QWORD *)v2[1];
    if ( (_QWORD *)*v2 != v1 || (_QWORD *)*v3 != v2 )
      __fastfail(3u);
    v1[1] = v3;
    *v3 = v1;
    PipFreeBindingId(v2);
  }
}
