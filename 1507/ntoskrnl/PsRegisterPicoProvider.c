/*
 * XREFs of PsRegisterPicoProvider @ 0x1406C5800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsRegisterPicoProvider(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)a1 != 64LL || *a2 != 88LL )
    return 3221225476LL;
  result = 0LL;
  if ( PspPicoRegistrationDisabled )
    return 3221225865LL;
  PspPicoProviderRoutines = *(_OWORD *)a1;
  *(_OWORD *)&xmmword_14032C390 = *(_OWORD *)(a1 + 16);
  *(_OWORD *)&xmmword_14032C3A0 = *(_OWORD *)(a1 + 32);
  *(_OWORD *)&xmmword_14032C3B0 = *(_OWORD *)(a1 + 48);
  PspPicoProviderRanges = _mm_srli_si128(*(__m128i *)&xmmword_14032C3B0, 8).m128i_u64[0];
  a2[1] = PspCreatePicoProcess;
  a2[2] = PspCreatePicoThread;
  a2[3] = PspGetPicoProcessContext;
  a2[4] = PspGetPicoThreadContext;
  a2[5] = PspGetContextThreadInternal;
  a2[6] = PspSetContextThreadInternal;
  a2[7] = PspTerminateThreadByPointer;
  a2[8] = PsResumeThread;
  a2[9] = PopPoCoalescinCallback;
  a2[10] = PsSuspendThread;
  *a2 = 88LL;
  return result;
}
