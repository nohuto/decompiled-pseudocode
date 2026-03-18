/*
 * XREFs of VidSchiStartNodeYield @ 0x1C0011BA8
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0007F30 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiScheduleCommandToRun @ 0x1C00098B0 (VidSchiScheduleCommandToRun.c)
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C000B200 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     VidSchiFindPriorityLevelToSchedule @ 0x1C0024274 (VidSchiFindPriorityLevelToSchedule.c)
 * Callees:
 *     Template_p @ 0x1C001E0AC (Template_p.c)
 *     Template_pqxx @ 0x1C001FB3C (Template_pqxx.c)
 */

__int64 __fastcall VidSchiStartNodeYield(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 result; // rax
  unsigned __int64 v9; // rcx
  unsigned __int128 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r9

  v3 = *(_QWORD **)(a1 + 24);
  if ( !v3[20] )
  {
    ExSetTimer(v3[19], -9500LL, 9500LL, 0LL);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_p(v6, &EventYieldSetExpirationTimer);
  }
  v7 = 100LL * *(_QWORD *)(a1 + 1928);
  *(_QWORD *)(a1 + 1920) = a2;
  v3[20] = a2 + v7;
  result = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v9 = v3[20] - a2;
    v10 = v9 * (unsigned __int128)0x989680uLL;
    if ( is_mul_ok(v9, 0x989680uLL) )
    {
      v11 = a3;
      v12 = v10 / a3;
    }
    else
    {
      v11 = a3;
      LOBYTE(v12) = ((unsigned __int8)((v3[20] - a2) / a3) << 7) + 10000000 * ((v3[20] - a2) % a3) / a3;
    }
    v13 = *(_QWORD *)(a1 + 1928);
    if ( is_mul_ok(v13, 0x989680uLL) )
    {
      v14 = v13 * (unsigned __int128)0x989680uLL / v11;
    }
    else
    {
      v13 /= v11;
      v14 = 10000000 * v13 + 10000000 * (*(_QWORD *)(a1 + 1928) % v11) / v11;
    }
    return Template_pqxx(
             *(unsigned __int16 *)(a1 + 4),
             (unsigned int)&EventYieldStartNode,
             v13,
             v3[2],
             *(_WORD *)(a1 + 4),
             v14,
             v12);
  }
  return result;
}
