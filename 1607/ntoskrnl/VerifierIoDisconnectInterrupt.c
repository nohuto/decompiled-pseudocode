/*
 * XREFs of VerifierIoDisconnectInterrupt @ 0x1407055BC
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall VerifierIoDisconnectInterrupt(__int64 a1)
{
  void *v1; // rbx

  v1 = 0LL;
  if ( ViCtxInitializedIsrStateBlocks )
    v1 = *(void **)(a1 + 48);
  pXdvIoDisconnectInterrupt();
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
