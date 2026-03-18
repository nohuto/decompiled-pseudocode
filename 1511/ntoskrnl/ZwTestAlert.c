/*
 * XREFs of ZwTestAlert @ 0x140153AE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS ZwTestAlert(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(v1, v0, v2);
}
