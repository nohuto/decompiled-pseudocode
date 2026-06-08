/*
 * XREFs of PepNotifyPerfConstraints @ 0x1C0006804
 * Callers:
 *     RegisterKernelPepPerf @ 0x1C001FF80 (RegisterKernelPepPerf.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x1C0021C20 (PepUpdatePerformanceConstraintWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PepNotifyPerfConstraints(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v3; // rcx
  __int64 result; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+34h] [rbp+Ch]

  v3 = *(_QWORD *)(a1 + 1048);
  v7 = 0;
  v8 = 0;
  result = PoFxProcessorNotification(v3, 12LL, &v7);
  if ( (int)result >= 0 )
  {
    *a2 = v7;
    *a3 = v8;
  }
  return result;
}
