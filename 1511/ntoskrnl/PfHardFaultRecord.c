/*
 * XREFs of PfHardFaultRecord @ 0x1400DE608
 * Callers:
 *     MiIssueHardFault @ 0x140039650 (MiIssueHardFault.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x1400DE680 (EtwGetKernelTraceTimestamp.c)
 */

__int64 __fastcall PfHardFaultRecord(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = a4;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a5 + 24);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a6 + 1584);
  *(_DWORD *)(a1 + 44) = a3;
  if ( (PerfGlobalGroupMask & 0x2000) != 0 )
  {
    EtwGetKernelTraceTimestamp(a1, 0x2000LL);
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  result = (unsigned int)dword_140317B14;
  if ( (dword_140317B14 & 1) != 0 )
  {
    result = MEMORY[0xFFFFF78000000320];
    *(_QWORD *)(a1 + 48) = MEMORY[0xFFFFF78000000320];
  }
  else
  {
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  return result;
}
