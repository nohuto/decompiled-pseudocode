/*
 * XREFs of NtRecoverResourceManager @ 0x1400010E8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtRecoverResourceManager(HANDLE ResourceManagerHandle)
{
  return __imp_NtRecoverResourceManager(ResourceManagerHandle);
}
