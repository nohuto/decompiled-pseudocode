/*
 * XREFs of VrpFreeKeyContext @ 0x140612F08
 * Callers:
 *     CmpCallCallBacks @ 0x140452A00 (CmpCallCallBacks.c)
 *     RegistryCallback @ 0x140464700 (RegistryCallback.c)
 *     VrpPostOpenOrCreate @ 0x140615588 (VrpPostOpenOrCreate.c)
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
