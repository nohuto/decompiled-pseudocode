/*
 * XREFs of PepNotifyPerfConstraints @ 0x1C00075C4
 * Callers:
 *     RegisterKernelPepPerf @ 0x1C0021340 (RegisterKernelPepPerf.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x1C0023940 (PepUpdatePerformanceConstraintWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PepNotifyPerfConstraints(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 1064);
  v7 = 0LL;
  result = PoFxProcessorNotification(v3, 12LL, &v7);
  if ( (int)result >= 0 )
  {
    *a2 = v7;
    *a3 = HIDWORD(v7);
  }
  return result;
}
