/*
 * XREFs of ResCDirectoryGetSegmentName @ 0x1800F8230
 * Callers:
 *     ResCRuntimeGetSegmentDataEx @ 0x1800F7750 (ResCRuntimeGetSegmentDataEx.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 */

__int64 __fastcall ResCDirectoryGetSegmentName(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // rcx

  if ( a1 && (v2 = a1[3]) != 0 && (v3 = a1[5]) != 0 && (v4 = a1[4]) != 0 && a2 < *(_DWORD *)(v2 + 68) )
  {
    v5 = *(int *)(32LL * a2 + v4 + 20);
    if ( (int)v5 >= 0 && (unsigned int)v5 < *(_DWORD *)(v2 + 80) )
      return v3 + 2 * v5;
  }
  else
  {
    RtlSetLastWin32Error(87);
  }
  return 0LL;
}
