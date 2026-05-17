/*
 * XREFs of ResCKeHitsOpenMapping @ 0x1800F7FBC
 * Callers:
 *     ResCKeOpenRuntimeView @ 0x180048884 (ResCKeOpenRuntimeView.c)
 *     ResCKeCreateRuntimeView @ 0x1800F6F24 (ResCKeCreateRuntimeView.c)
 * Callees:
 *     _ResCMapCMFModule @ 0x180048A28 (_ResCMapCMFModule.c)
 *     _ResUnmapViewOfFile @ 0x1800FA430 (_ResUnmapViewOfFile.c)
 *     ResCHitsCreateAndPopulate @ 0x1800FB60C (ResCHitsCreateAndPopulate.c)
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
