/*
 * XREFs of Simulator_Post_Generic @ 0x1C005A060
 * Callers:
 *     AMLIEvalNameSpaceObject @ 0x1C0001210 (AMLIEvalNameSpaceObject.c)
 *     ACPIGet @ 0x1C00015D0 (ACPIGet.c)
 *     AMLIAsyncEvalObject @ 0x1C0020244 (AMLIAsyncEvalObject.c)
 *     AMLIRegEventHandler @ 0x1C00228D4 (AMLIRegEventHandler.c)
 * Callees:
 *     Simulator_Free_Arguments @ 0x1C0059D00 (Simulator_Free_Arguments.c)
 *     Simulator_TestNotifyRet @ 0x1C005A42C (Simulator_TestNotifyRet.c)
 */

__int64 __fastcall Simulator_Post_Generic(PVOID *a1)
{
  PVOID v2; // rcx
  unsigned int v3; // edi

  if ( !a1 )
    return 3221225473LL;
  v2 = *a1;
  if ( !v2 )
    return 3221225473LL;
  v3 = Simulator_TestNotifyRet(v2);
  if ( (unsigned int)(*((_DWORD *)*a1 + 1) - 1) <= 2 )
    Simulator_Free_Arguments(*((_DWORD *)*a1 + 8), *((_QWORD *)*a1 + 5));
  if ( *a1 )
  {
    ExFreePoolWithTag(*a1, 0);
    *a1 = 0LL;
  }
  return v3;
}
