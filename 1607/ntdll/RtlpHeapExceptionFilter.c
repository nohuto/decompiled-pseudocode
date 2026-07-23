/*
 * XREFs of RtlpHeapExceptionFilter @ 0x1800EC2D0
 * Callers:
 *     RtlpReAllocateHeap @ 0x1800211C0 (RtlpReAllocateHeap.c)
 *     RtlCreateHeap @ 0x18002BA10 (RtlCreateHeap.c)
 *     RtlValidateHeap @ 0x180076850 (RtlValidateHeap.c)
 *     RtlGetUserInfoHeap @ 0x18007AB40 (RtlGetUserInfoHeap.c)
 *     RtlpProbeUserBufferSafe @ 0x18007ADFC (RtlpProbeUserBufferSafe.c)
 *     RtlCompactHeap @ 0x1800909F0 (RtlCompactHeap.c)
 *     RtlpValidateLFHBlock @ 0x18009116C (RtlpValidateLFHBlock.c)
 *     RtlDebugAllocateHeap @ 0x1800917C4 (RtlDebugAllocateHeap.c)
 *     RtlDebugFreeHeap @ 0x180091B50 (RtlDebugFreeHeap.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     RtlpHeapFatalExceptionFilter @ 0x1800E3070 (RtlpHeapFatalExceptionFilter.c)
 *     RtlSetUserFlagsHeap @ 0x1800E94E0 (RtlSetUserFlagsHeap.c)
 *     RtlZeroHeap @ 0x1800EBD10 (RtlZeroHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F79F4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x1800F9FB4 (RtlpHpSegGetDescriptorValidateSafe.c)
 *     RtlDebugCompactHeap @ 0x1800FA14C (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x1800FA590 (RtlDebugCreateTagHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800FA794 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x1800FA938 (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800FAA84 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1800FAFE4 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x1800FB1B0 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x1800FB344 (RtlDebugSizeHeap.c)
 *     RtlDebugWalkHeap @ 0x1800FB4C8 (RtlDebugWalkHeap.c)
 *     RtlDebugZeroHeap @ 0x1800FB554 (RtlDebugZeroHeap.c)
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
  unk_18014F820 = *(_OWORD *)*(_QWORD *)a2;
  *((_OWORD *)&unk_18014F820 + 1) = v2[1];
  *((_OWORD *)&unk_18014F820 + 2) = v2[2];
  *((_OWORD *)&unk_18014F820 + 3) = v2[3];
  *((_OWORD *)&unk_18014F820 + 4) = v2[4];
  *((_OWORD *)&unk_18014F820 + 5) = v2[5];
  *((_OWORD *)&unk_18014F820 + 6) = v2[6];
  *((_OWORD *)&unk_18014F820 + 7) = v2[7];
  *((_OWORD *)&unk_18014F820 + 8) = v2[8];
  *((_QWORD *)&unk_18014F820 + 18) = *((_QWORD *)v2 + 18);
  v3 = &unk_18014F8C0;
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
