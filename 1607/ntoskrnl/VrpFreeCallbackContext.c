/*
 * XREFs of VrpFreeCallbackContext @ 0x140612EC4
 * Callers:
 *     VrpPostOpenOrCreate @ 0x140615588 (VrpPostOpenOrCreate.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall VrpFreeCallbackContext(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)a1[6];
  if ( v2 )
    ExFreePoolWithTag(v2, 0x67655256u);
  v3 = (void *)a1[2];
  if ( v3 )
    ExFreePoolWithTag(v3, 0x67655256u);
  ExFreePoolWithTag(a1, 0x67655256u);
}
