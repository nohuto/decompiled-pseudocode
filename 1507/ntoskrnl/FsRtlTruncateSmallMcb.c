/*
 * XREFs of FsRtlTruncateSmallMcb @ 0x140268988
 * Callers:
 *     KiInterruptThunk @ 0x14018D5C0 (KiInterruptThunk.c)
 * Callees:
 *     RtlpComputeEpilogueOffset @ 0x14017DD98 (RtlpComputeEpilogueOffset.c)
 *     KiCustomAccessRoutine0 @ 0x14018DB60 (KiCustomAccessRoutine0.c)
 */

__int64 __fastcall FsRtlTruncateSmallMcb(__int64 a1, unsigned int *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // [rsp+61h] [rbp-67h]
  __int64 v7; // [rsp+A9h] [rbp-1Fh]
  __int64 v8; // [rsp+B1h] [rbp-17h]

  result = ((__int64)a2 >> 47) + 1;
  if ( (__int64)a2 >> 47 != -1 && result != 1 )
  {
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    v8 = a3;
    v6 = __ROL8__(a2, a3);
    v7 = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    result = KiCustomAccessRoutine0(a2);
    v5 = __ROL8__(v7, v8);
    *(_QWORD *)(v5 + 32) = __ROR8__(v6, v8);
    *(_BYTE *)v5 = 19;
  }
  return result;
}
