/*
 * XREFs of VidSchiStartNodeYield @ 0x1C001A53C
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C00022F0 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiFindPriorityLevelToSchedule @ 0x1C0004900 (VidSchiFindPriorityLevelToSchedule.c)
 *     VidSchiScheduleCommandToRun @ 0x1C0004BB0 (VidSchiScheduleCommandToRun.c)
 * Callees:
 *     Template_p @ 0x1C0006E98 (Template_p.c)
 *     Template_pqxx @ 0x1C0010794 (Template_pqxx.c)
 */

NTSTATUS __fastcall VidSchiStartNodeYield(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // rax
  NTSTATUS result; // eax
  int v10; // [rsp+20h] [rbp-28h]

  v3 = *(_QWORD *)(a1 + 24);
  if ( !*(_QWORD *)(v3 + 152) )
  {
    ExSetTimer(*(_QWORD *)(v3 + 144), -9500LL, 9500LL, 0LL);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_p(v6, &EventYieldSetExpirationTimer, v7, *(_QWORD *)(v3 + 16));
  }
  v8 = 100LL * *(_QWORD *)(a1 + 2016);
  *(_QWORD *)(a1 + 2008) = a2;
  *(_QWORD *)(v3 + 152) = a2 + 10 * (v8 / *(unsigned int *)(v3 + 164));
  result = Microsoft_Windows_DxgKrnlEnableBits;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
  {
    v10 = *(unsigned __int16 *)(a1 + 4);
    return Template_pqxx(
             *(unsigned __int16 *)(a1 + 4),
             &EventYieldStartNode,
             10000000 * (*(_QWORD *)(v3 + 152) - a2) / a3,
             *(_QWORD *)(v3 + 16),
             v10,
             10000000LL * *(_QWORD *)(a1 + 2016) / a3,
             10000000 * (*(_QWORD *)(v3 + 152) - a2) / a3);
  }
  return result;
}
