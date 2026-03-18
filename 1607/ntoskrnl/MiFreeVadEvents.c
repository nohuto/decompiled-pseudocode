/*
 * XREFs of MiFreeVadEvents @ 0x1401E9280
 * Callers:
 *     MiDeletePartialCloneVad @ 0x14066313C (MiDeletePartialCloneVad.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeVadEvents(__int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *v2; // rbx

  v1 = *(_QWORD **)(a1 + 56);
  if ( v1 )
  {
    do
    {
      v2 = (_QWORD *)*v1;
      ExFreePoolWithTag(v1, 0);
      v1 = v2;
    }
    while ( v2 );
  }
}
