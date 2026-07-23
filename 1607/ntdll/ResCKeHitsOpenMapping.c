/*
 * XREFs of ResCKeHitsOpenMapping @ 0x1801000E8
 * Callers:
 *     ResCKeOpenRuntimeView @ 0x18005A004 (ResCKeOpenRuntimeView.c)
 *     ResCKeCreateRuntimeView @ 0x1800FF07C (ResCKeCreateRuntimeView.c)
 * Callees:
 *     _ResCMapCMFModule @ 0x18005A1A0 (_ResCMapCMFModule.c)
 *     _ResUnmapViewOfFile @ 0x180104D1C (_ResUnmapViewOfFile.c)
 *     ResCHitsCreateAndPopulate @ 0x180105F1C (ResCHitsCreateAndPopulate.c)
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
