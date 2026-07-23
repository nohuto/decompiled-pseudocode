/*
 * XREFs of VrpFreeKeyContext @ 0x140612FBC
 * Callers:
 *     CmpCallCallBacks @ 0x1404518D0 (CmpCallCallBacks.c)
 *     RegistryCallback @ 0x1404635D0 (RegistryCallback.c)
 *     VrpPostOpenOrCreate @ 0x14061563C (VrpPostOpenOrCreate.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall VrpFreeKeyContext(__int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 24);
  if ( v1 )
    ExFreePoolWithTag(v1, 0x67655256u);
}
