/*
 * XREFs of RtlpHeapExceptionFilter @ 0x1800DD534
 * Callers:
 *     RtlCreateHeap @ 0x180005330 (RtlCreateHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x18002B170 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpReAllocateHeap @ 0x18002DC40 (RtlpReAllocateHeap.c)
 *     RtlpHpAllocWithExceptionProtection @ 0x1800300C0 (RtlpHpAllocWithExceptionProtection.c)
 *     RtlpValidateHeapInternal @ 0x180038748 (RtlpValidateHeapInternal.c)
 *     RtlpGetUserInfoHeapInternal @ 0x180057D00 (RtlpGetUserInfoHeapInternal.c)
 *     RtlpProbeUserBufferSafe @ 0x180057FF0 (RtlpProbeUserBufferSafe.c)
 *     RtlpHpReAllocWithExceptionProtection @ 0x18006A954 (RtlpHpReAllocWithExceptionProtection.c)
 *     RtlCompactHeap @ 0x180078DE0 (RtlCompactHeap.c)
 *     RtlpLogHeapFailure @ 0x180093344 (RtlpLogHeapFailure.c)
 *     RtlpSetUserFlagsHeapInternal @ 0x1800DA634 (RtlpSetUserFlagsHeapInternal.c)
 *     RtlZeroHeap @ 0x1800DCA00 (RtlZeroHeap.c)
 *     RtlDebugAllocateHeap @ 0x1800EBDCC (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x1800EC190 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x1800EC5E0 (RtlDebugCreateTagHeap.c)
 *     RtlDebugFreeHeap @ 0x1800EC7E4 (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800ECAF0 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x1800ECC9C (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800ECDE8 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1800ED358 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x1800ED52C (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x1800ED6C8 (RtlDebugSizeHeap.c)
 *     RtlDebugWalkHeap @ 0x1800ED858 (RtlDebugWalkHeap.c)
 *     RtlDebugZeroHeap @ 0x1800ED8E4 (RtlDebugZeroHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800EEA14 (RtlpAnalyzeHeapFailure.c)
 *     RtlpValidateLFHBlock @ 0x1800F0B70 (RtlpValidateLFHBlock.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x1800F13D0 (RtlpHpSegGetDescriptorValidateSafe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHeapExceptionFilter(int a1, __int64 a2)
{
  _OWORD *v2; // rax
  _OWORD *v3; // rcx
  _OWORD *v4; // rax
  __int64 v5; // rdx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int64 result; // rax

  if ( a1 == -1073741571 || a1 == -1073741420 || a1 == -1073741801 )
    return 0LL;
  v2 = *(_OWORD **)a2;
  unk_1801432F0 = *(_OWORD *)*(_QWORD *)a2;
  *((_OWORD *)&unk_1801432F0 + 1) = v2[1];
  *((_OWORD *)&unk_1801432F0 + 2) = v2[2];
  *((_OWORD *)&unk_1801432F0 + 3) = v2[3];
  *((_OWORD *)&unk_1801432F0 + 4) = v2[4];
  *((_OWORD *)&unk_1801432F0 + 5) = v2[5];
  *((_OWORD *)&unk_1801432F0 + 6) = v2[6];
  *((_OWORD *)&unk_1801432F0 + 7) = v2[7];
  *((_OWORD *)&unk_1801432F0 + 8) = v2[8];
  *((_QWORD *)&unk_1801432F0 + 18) = *((_QWORD *)v2 + 18);
  v3 = &unk_180143390;
  v4 = *(_OWORD **)(a2 + 8);
  v5 = 9LL;
  do
  {
    *v3 = *v4;
    v3[1] = v4[1];
    v3[2] = v4[2];
    v3[3] = v4[3];
    v3[4] = v4[4];
    v3[5] = v4[5];
    v3[6] = v4[6];
    v3 += 8;
    v6 = v4[7];
    v4 += 8;
    *(v3 - 1) = v6;
    --v5;
  }
  while ( v5 );
  *v3 = *v4;
  v3[1] = v4[1];
  v3[2] = v4[2];
  v3[3] = v4[3];
  v7 = v4[4];
  result = 1LL;
  v3[4] = v7;
  return result;
}
