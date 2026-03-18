/*
 * XREFs of Simulator_Post_Generic @ 0x1C0042F70
 * Callers:
 *     AMLIEvalNameSpaceObject @ 0x1C0001750 (AMLIEvalNameSpaceObject.c)
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     AMLIRegEventHandler @ 0x1C0004604 (AMLIRegEventHandler.c)
 *     AMLIAsyncEvalObject @ 0x1C0018430 (AMLIAsyncEvalObject.c)
 * Callees:
 *     Simulator_Free_Arguments @ 0x1C0042C40 (Simulator_Free_Arguments.c)
 *     Simulator_TestNotifyRet @ 0x1C004333C (Simulator_TestNotifyRet.c)
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
