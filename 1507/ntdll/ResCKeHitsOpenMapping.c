/*
 * XREFs of ResCKeHitsOpenMapping @ 0x1800F84A0
 * Callers:
 *     ResCKeOpenRuntimeView @ 0x18000ED34 (ResCKeOpenRuntimeView.c)
 *     ResCKeCreateRuntimeView @ 0x1800F7138 (ResCKeCreateRuntimeView.c)
 * Callees:
 *     _ResCMapCMFModule @ 0x18000EED8 (_ResCMapCMFModule.c)
 *     _ResUnmapViewOfFile @ 0x1800FAB18 (_ResUnmapViewOfFile.c)
 *     ResCHitsCreateAndPopulate @ 0x1800FC2AC (ResCHitsCreateAndPopulate.c)
 */

PVOID ResCKeHitsOpenMapping()
{
  PVOID result; // rax
  void *v1; // rbx
  __int64 v2; // rdi
  ULONG v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  result = ResCMapCMFModule(0x140u, 0xFFFFFFFF, &v3, 0LL, 0LL);
  v1 = result;
  if ( result )
  {
    v2 = ResCHitsCreateAndPopulate(result, v3, 3LL);
    if ( !v2 )
      ResUnmapViewOfFile(v1);
    return (PVOID)v2;
  }
  return result;
}
