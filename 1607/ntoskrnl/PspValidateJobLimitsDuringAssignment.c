/*
 * XREFs of PspValidateJobLimitsDuringAssignment @ 0x140469360
 * Callers:
 *     PspAddProcessToJobChain @ 0x140469188 (PspAddProcessToJobChain.c)
 * Callees:
 *     RtlInterlockedSetClearBits @ 0x140076D48 (RtlInterlockedSetClearBits.c)
 *     PspSendJobNotification @ 0x1400AA5A8 (PspSendJobNotification.c)
 *     PspCheckJobAccessState @ 0x1406804FC (PspCheckJobAccessState.c)
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
  if ( (v4 & 8) != 0 && (unsigned int)(*(_DWORD *)(a1 + 216) - *(_DWORD *)(a1 + 1228)) > *(_DWORD *)(a1 + 260) )
  {
    RtlInterlockedSetClearBits((volatile signed __int32 *)(a2 + 768), 2);
    if ( *(_QWORD *)(a1 + 456) && (*(_DWORD *)(a1 + 876) & 8) != 0 )
      PspSendJobNotification(a1, 3LL, 0, 1);
    return 3221225540LL;
  }
  if ( (v4 & 4) != 0 && *(_DWORD *)(a1 + 4) )
  {
    _InterlockedOr((volatile signed __int32 *)(a2 + 768), 2u);
    return 3221225540LL;
  }
  v5 = *(_DWORD *)(a1 + 1304);
  if ( (v5 & 1) != 0 && (*(_DWORD *)(a1 + 256) & 0x2000) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a2 + 768), 2u);
    return 3221225485LL;
  }
  else if ( (v5 & 0x80u) != 0 )
  {
    return 3221225738LL;
  }
  else
  {
    return (v5 & 0x20000000) != 0 ? 0xC00002FE : 0;
  }
}
