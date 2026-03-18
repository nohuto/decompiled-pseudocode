/*
 * XREFs of PipDeleteBindingIds @ 0x140601194
 * Callers:
 *     PipConvertResolutionsToReservations @ 0x140600F88 (PipConvertResolutionsToReservations.c)
 *     PipDeleteDependencyNode @ 0x1406011D0 (PipDeleteDependencyNode.c)
 * Callees:
 *     PipFreeBindingId @ 0x140601290 (PipFreeBindingId.c)
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
