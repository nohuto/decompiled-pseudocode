/*
 * XREFs of _ResCOpenMapping @ 0x1800F90A4
 * Callers:
 *     ResCRuntimeGetSegmentDataEx @ 0x1800F72E8 (ResCRuntimeGetSegmentDataEx.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 *     _ResCloseHandle @ 0x1800F914C (_ResCloseHandle.c)
 *     _ResMapViewOfFile @ 0x1800FA208 (_ResMapViewOfFile.c)
 *     _ResOpenFileMapping @ 0x1800FA2C8 (_ResOpenFileMapping.c)
 *     _ResUnmapViewOfFile @ 0x1800FA430 (_ResUnmapViewOfFile.c)
 *     ResCSegmentCreateAndPopulate @ 0x1800FB6F0 (ResCSegmentCreateAndPopulate.c)
 */

__int64 __fastcall ResCOpenMapping(__int64 a1, __int64 a2)
{
  void *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rax
  int v5; // r8d
  int v6; // r9d
  __int64 result; // rax

  v2 = 0LL;
  v3 = 0LL;
  if ( !a1 || !ResCSegmentCreateAndPopulate )
  {
    RtlSetLastWin32Error(87);
LABEL_8:
    if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      ResCloseHandle(v3);
    goto LABEL_10;
  }
  v4 = ResOpenFileMapping(4LL, a2, a1);
  v3 = v4;
  if ( !v4 )
    return 0LL;
  v2 = (void *)ResMapViewOfFile(v4, 4, v5, v6, 0LL);
  if ( !v2 )
    goto LABEL_8;
  ResCloseHandle(v3);
  result = ResCSegmentCreateAndPopulate(v2, 0LL, 9LL);
  if ( !result )
  {
LABEL_10:
    if ( v2 )
      ResUnmapViewOfFile(v2);
    return 0LL;
  }
  return result;
}
