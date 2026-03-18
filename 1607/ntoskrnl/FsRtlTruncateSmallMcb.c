/*
 * XREFs of FsRtlTruncateSmallMcb @ 0x14023243C
 * Callers:
 *     KiInterruptThunk @ 0x140168F30 (KiInterruptThunk.c)
 * Callees:
 *     RtlpComputeEpilogueOffset @ 0x1401590FC (RtlpComputeEpilogueOffset.c)
 *     KiCustomAccessRoutine0 @ 0x140168E70 (KiCustomAccessRoutine0.c)
 */

__int64 __fastcall FsRtlTruncateSmallMcb(__int64 a1, unsigned int *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // [rsp+61h] [rbp-67h]
  __int64 v6; // [rsp+A9h] [rbp-1Fh]
  __int64 v7; // [rsp+B1h] [rbp-17h]

  result = ((__int64)a2 >> 47) + 1;
  if ( (__int64)a2 >> 47 != -1 && result != 1 )
  {
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    v7 = a3;
    v5 = __ROL8__(a2, a3);
    v6 = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    return KiCustomAccessRoutine0(a2);
  }
  return result;
}
