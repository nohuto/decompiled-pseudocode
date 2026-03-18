/*
 * XREFs of ?VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0010F04
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C00098B0 (VidSchiScheduleCommandToRun.c)
 *     VidSchiCheckYieldExitCondition @ 0x1C0010EBC (VidSchiCheckYieldExitCondition.c)
 *     VidSchiFindPriorityLevelToSchedule @ 0x1C0024274 (VidSchiFindPriorityLevelToSchedule.c)
 * Callees:
 *     Template_pq @ 0x1C001E5A8 (Template_pq.c)
 */

void __fastcall VidSchiStopNodeYield(unsigned __int64 QuadPart, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // rdi
  unsigned int MostSignificantBit; // edx
  unsigned __int64 v7; // rtt
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)(QuadPart + 1920) = 0LL;
  v3 = QuadPart;
  v4 = *(_DWORD *)(QuadPart + 1692);
  v5 = *(_QWORD *)(QuadPart + 24);
  *(_BYTE *)(QuadPart + 1936) = 0;
  if ( v4 )
  {
    MostSignificantBit = RtlFindMostSignificantBit(v4);
    QuadPart = *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 1552) + 1560);
    if ( QuadPart )
    {
      if ( *(_DWORD *)(QuadPart + 396) < MostSignificantBit )
      {
        *(_QWORD *)(v3 + 136) = *(_QWORD *)(v3 + 96);
        QuadPart = KeQueryPerformanceCounter(&PerformanceFrequency).QuadPart;
        if ( is_mul_ok(QuadPart, 0x989680uLL) )
        {
          a3 = QuadPart * (unsigned __int128)0x989680uLL / (unsigned __int64)PerformanceFrequency.QuadPart;
        }
        else
        {
          v7 = QuadPart;
          QuadPart /= PerformanceFrequency.QuadPart;
          a3 = 10000000 * QuadPart + 10000000 * (v7 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
        }
        *(_QWORD *)(v3 + 128) = a3;
      }
    }
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_pq(QuadPart, &EventYieldStopNode, a3, *(_QWORD *)(v5 + 16), *(unsigned __int16 *)(v3 + 4));
}
