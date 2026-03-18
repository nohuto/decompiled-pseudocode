/*
 * XREFs of MiReturnProcessVads @ 0x140621E8C
 * Callers:
 *     MiInitializeUserNoAccess @ 0x14046232C (MiInitializeUserNoAccess.c)
 *     MmInitializeProcessAddressSpace @ 0x140462718 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall MiReturnProcessVads(_QWORD *P)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rdi
  void *v3; // rcx

  if ( P )
  {
    v1 = P;
    do
    {
      v2 = v1;
      v1 = (_QWORD *)*v1;
      v3 = (void *)v2[7];
      if ( v3 )
        ExFreePoolWithTag(v3, 0);
      ExFreePoolWithTag(v2, 0);
    }
    while ( v1 );
  }
}
