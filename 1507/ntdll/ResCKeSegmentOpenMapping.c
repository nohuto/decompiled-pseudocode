/*
 * XREFs of ResCKeSegmentOpenMapping @ 0x1800F850C
 * Callers:
 *     ResCRuntimeGetSegmentDataEx @ 0x1800F7750 (ResCRuntimeGetSegmentDataEx.c)
 * Callees:
 *     _ResCMapCMFModule @ 0x18000EED8 (_ResCMapCMFModule.c)
 *     _ResUnmapViewOfFile @ 0x1800FAB18 (_ResUnmapViewOfFile.c)
 *     ResCSegmentCreateAndPopulate @ 0x1800FC3C0 (ResCSegmentCreateAndPopulate.c)
 */

PVOID __fastcall ResCKeSegmentOpenMapping(ULONG a1)
{
  PVOID result; // rax
  void *v2; // rdi
  __int64 v3; // rbx
  ULONG v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  result = ResCMapCMFModule(0x20u, a1, &v4, 0LL, 0LL);
  v2 = result;
  if ( result )
  {
    v3 = ResCSegmentCreateAndPopulate(result, v4, 1LL);
    if ( !v3 )
      ResUnmapViewOfFile(v2);
    return (PVOID)v3;
  }
  return result;
}
