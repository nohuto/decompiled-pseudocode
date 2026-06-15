/*
 * XREFs of PdcpAlpcReleaseResources @ 0x1800AA334
 * Callers:
 *     PdcPortOpen @ 0x180039C74 (PdcPortOpen.c)
 *     PdcPortClose @ 0x1800AA040 (PdcPortClose.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall PdcpAlpcReleaseResources(_QWORD *a1)
{
  void *v2; // rcx

  *(_DWORD *)a1 = 0;
  if ( a1[4] )
  {
    TpReleaseAlpcCompletion();
    a1[4] = 0LL;
  }
  v2 = (void *)a1[1];
  if ( v2 )
  {
    CloseHandle(v2);
    a1[1] = 0LL;
  }
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
