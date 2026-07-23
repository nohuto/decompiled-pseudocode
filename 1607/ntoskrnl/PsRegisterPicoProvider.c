/*
 * XREFs of PsRegisterPicoProvider @ 0x140681584
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsRegisterPicoProvider(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)a1 != 80LL || *a2 != 96LL )
    return 3221225476LL;
  if ( (*(_DWORD *)(a1 + 72) & 0xFFE00000) != 0 || (*(_DWORD *)(a1 + 76) & 0xFFE00000) != 0 )
    return 3221225485LL;
  result = 0LL;
  if ( PspPicoRegistrationDisabled )
    return 3221225865LL;
  PspPicoProviderRoutines = *(_OWORD *)a1;
  *(_OWORD *)&xmmword_1403013B0 = *(_OWORD *)(a1 + 16);
  *(_OWORD *)&xmmword_1403013C0 = *(_OWORD *)(a1 + 32);
  *(_OWORD *)&xmmword_1403013D0 = *(_OWORD *)(a1 + 48);
  *(_OWORD *)&xmmword_1403013E0 = *(_OWORD *)(a1 + 64);
  PspPicoProviderRanges = _mm_srli_si128(*(__m128i *)&xmmword_1403013D0, 8).m128i_u64[0];
  a2[1] = PspCreatePicoProcess;
  a2[2] = PspCreatePicoThread;
  a2[3] = PspGetPicoProcessContext;
  a2[4] = PspGetPicoThreadContext;
  a2[5] = PspGetContextThreadInternal;
  a2[6] = PspSetContextThreadInternal;
  a2[7] = PspTerminateThreadByPointer;
  a2[8] = PsResumeThread;
  a2[9] = PspSetPicoThreadDescriptorBase;
  a2[10] = PsSuspendThread;
  a2[11] = PspTerminatePicoProcess;
  *a2 = 96LL;
  return result;
}
