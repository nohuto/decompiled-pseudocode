/*
 * XREFs of PspValidateJobLimitsDuringAssignment @ 0x14041B608
 * Callers:
 *     PspAddProcessToJobChain @ 0x14041B3E0 (PspAddProcessToJobChain.c)
 * Callees:
 *     RtlInterlockedSetClearBits @ 0x1400097E8 (RtlInterlockedSetClearBits.c)
 *     PspSendJobNotification @ 0x14013A2C4 (PspSendJobNotification.c)
 *     PspCheckJobAccessState @ 0x1406C4538 (PspCheckJobAccessState.c)
 */

__int64 __fastcall PspValidateJobLimitsDuringAssignment(__int64 a1, __int64 a2)
{
  int v4; // r8d
  int v5; // edx
  __int64 result; // rax

  if ( (*(_DWORD *)(a2 + 772) & 0x4000000) != 0 )
  {
    if ( *(_QWORD *)(a1 + 432) )
    {
      result = PspCheckJobAccessState();
      if ( (int)result < 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(a2 + 768), 2u);
        return result;
      }
    }
  }
  v4 = *(_DWORD *)(a1 + 256);
  if ( (v4 & 8) != 0 && (unsigned int)(*(_DWORD *)(a1 + 216) - *(_DWORD *)(a1 + 1196)) > *(_DWORD *)(a1 + 260) )
  {
    RtlInterlockedSetClearBits((volatile signed __int32 *)(a2 + 768), 2);
    if ( *(_QWORD *)(a1 + 456) && (*(_DWORD *)(a1 + 884) & 8) != 0 )
      PspSendJobNotification(a1, 3LL, 0, 1);
    return 3221225540LL;
  }
  if ( (v4 & 4) != 0 && *(_DWORD *)(a1 + 4) )
  {
    _InterlockedOr((volatile signed __int32 *)(a2 + 768), 2u);
    return 3221225540LL;
  }
  v5 = *(_DWORD *)(a1 + 1296);
  if ( (v5 & 1) == 0 || (*(_DWORD *)(a1 + 256) & 0x2000) == 0 )
    return (v5 & 0x80u) != 0 ? 0xC000010A : 0;
  _InterlockedOr((volatile signed __int32 *)(a2 + 768), 2u);
  return 3221225485LL;
}
