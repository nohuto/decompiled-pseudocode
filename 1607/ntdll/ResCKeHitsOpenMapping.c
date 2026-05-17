/*
 * XREFs of ResCKeHitsOpenMapping @ 0x1801001B0
 * Callers:
 *     ResCKeOpenRuntimeView @ 0x18005A014 (ResCKeOpenRuntimeView.c)
 *     ResCKeCreateRuntimeView @ 0x1800FF07C (ResCKeCreateRuntimeView.c)
 * Callees:
 *     _ResCMapCMFModule @ 0x18005A1B0 (_ResCMapCMFModule.c)
 *     _ResUnmapViewOfFile @ 0x180104DDC (_ResUnmapViewOfFile.c)
 *     ResCHitsCreateAndPopulate @ 0x180105F14 (ResCHitsCreateAndPopulate.c)
 */

__int64 ResCKeHitsOpenMapping()
{
  __int64 result; // rax
  __int64 v1; // rbx
  __int64 v2; // rdi
  unsigned int v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  result = ResCMapCMFModule(320LL, 0xFFFFFFFFLL, (__int64)&v3, 0LL, 0LL);
  v1 = result;
  if ( result )
  {
    v2 = ResCHitsCreateAndPopulate(result, v3, 3LL);
    if ( !v2 )
      ResUnmapViewOfFile(v1);
    return v2;
  }
  return result;
}
