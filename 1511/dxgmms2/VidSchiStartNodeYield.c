/*
 * XREFs of VidSchiStartNodeYield @ 0x1C0014268
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008E10 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiScheduleCommandToRun @ 0x1C000ADA0 (VidSchiScheduleCommandToRun.c)
 *     VidSchiFindPriorityLevelToSchedule @ 0x1C001473C (VidSchiFindPriorityLevelToSchedule.c)
 * Callees:
 *     Template_p @ 0x1C001CD38 (Template_p.c)
 *     Template_pqxx @ 0x1C001DFE4 (Template_pqxx.c)
 *     RtlULongLongMult @ 0x1C001F6B0 (RtlULongLongMult.c)
 */

__int64 __fastcall VidSchiStartNodeYield(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 result; // rax
  ULONGLONG v10; // r11
  char v11; // r9
  unsigned __int64 v12; // r10
  ULONGLONG v13; // r8
  ULONGLONG pullResult; // [rsp+60h] [rbp+8h] BYREF
  ULONGLONG v15; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v16; // [rsp+70h] [rbp+18h]

  v16 = a3;
  v3 = *(_QWORD **)(a1 + 24);
  if ( !v3[19] )
  {
    ExSetTimer(v3[18], -9500LL, 9500LL, 0LL);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_p(v6, &EventYieldSetExpirationTimer, v7, v3[2]);
  }
  v8 = 100LL * *(_QWORD *)(a1 + 1888);
  *(_QWORD *)(a1 + 1880) = a2;
  v3[19] = a2 + v8;
  result = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
  {
    RtlULongLongMult(v3[19] - a2, 0x989680uLL, &pullResult);
    if ( RtlULongLongMult(*(_QWORD *)(a1 + 1888), v10, &v15) >= 0 )
      v13 = v15 / v16;
    else
      v13 = 10000000 * (v12 / v16) + 10000000 * (v12 % v16) / v16;
    return Template_pqxx(
             *(unsigned __int16 *)(a1 + 4),
             (unsigned int)&EventYieldStartNode,
             v13,
             v3[2],
             *(_WORD *)(a1 + 4),
             v13,
             v11);
  }
  return result;
}
