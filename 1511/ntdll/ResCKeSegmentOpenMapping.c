/*
 * XREFs of ResCKeSegmentOpenMapping @ 0x1800F8028
 * Callers:
 *     ResCRuntimeGetSegmentDataEx @ 0x1800F72E8 (ResCRuntimeGetSegmentDataEx.c)
 * Callees:
 *     _ResCMapCMFModule @ 0x180048A28 (_ResCMapCMFModule.c)
 *     _ResUnmapViewOfFile @ 0x1800FA430 (_ResUnmapViewOfFile.c)
 *     ResCSegmentCreateAndPopulate @ 0x1800FB6F0 (ResCSegmentCreateAndPopulate.c)
 */

__int64 __fastcall ResCKeSegmentOpenMapping(unsigned int a1)
{
  __int64 result; // rax
  __int64 v2; // rdi
  __int64 v3; // rbx
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  result = ResCMapCMFModule(32LL, a1, (__int64)&v4, 0LL, 0LL);
  v2 = result;
  if ( result )
  {
    v3 = ResCSegmentCreateAndPopulate(result, v4, 1LL);
    if ( !v3 )
      ResUnmapViewOfFile(v2);
    return v3;
  }
  return result;
}
