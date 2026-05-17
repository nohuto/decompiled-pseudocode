/*
 * XREFs of RtlpHeapExceptionFilter @ 0x1800E3178
 * Callers:
 *     RtlpHpFreeWithExceptionProtection @ 0x180021080 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpReAllocateHeap @ 0x180023F60 (RtlpReAllocateHeap.c)
 *     RtlpHpAllocWithExceptionProtection @ 0x180025060 (RtlpHpAllocWithExceptionProtection.c)
 *     RtlCreateHeap @ 0x180055310 (RtlCreateHeap.c)
 *     RtlpHpReAllocWithExceptionProtection @ 0x18007119C (RtlpHpReAllocWithExceptionProtection.c)
 *     RtlGetUserInfoHeap @ 0x1800744C0 (RtlGetUserInfoHeap.c)
 *     RtlpProbeUserBufferSafe @ 0x180074788 (RtlpProbeUserBufferSafe.c)
 *     RtlValidateHeap @ 0x1800756A0 (RtlValidateHeap.c)
 *     RtlCompactHeap @ 0x18008DFD0 (RtlCompactHeap.c)
 *     RtlDebugAllocateHeap @ 0x180092580 (RtlDebugAllocateHeap.c)
 *     RtlDebugFreeHeap @ 0x180092900 (RtlDebugFreeHeap.c)
 *     RtlpValidateLFHBlock @ 0x1800951F4 (RtlpValidateLFHBlock.c)
 *     RtlpLogHeapFailure @ 0x1800A4B04 (RtlpLogHeapFailure.c)
 *     RtlSetUserFlagsHeap @ 0x1800E02C0 (RtlSetUserFlagsHeap.c)
 *     RtlZeroHeap @ 0x1800E2BC0 (RtlZeroHeap.c)
 *     RtlDebugCompactHeap @ 0x1800EEC28 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x1800EF078 (RtlDebugCreateTagHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800EF27C (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x1800EF428 (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800EF574 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1800EFAE4 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x1800EFCB8 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x1800EFE54 (RtlDebugSizeHeap.c)
 *     RtlDebugWalkHeap @ 0x1800EFFE4 (RtlDebugWalkHeap.c)
 *     RtlDebugZeroHeap @ 0x1800F0070 (RtlDebugZeroHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F09E4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x1800F29F4 (RtlpHpSegGetDescriptorValidateSafe.c)
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
  unk_180142420 = *(_OWORD *)*(_QWORD *)a2;
  *((_OWORD *)&unk_180142420 + 1) = v2[1];
  *((_OWORD *)&unk_180142420 + 2) = v2[2];
  *((_OWORD *)&unk_180142420 + 3) = v2[3];
  *((_OWORD *)&unk_180142420 + 4) = v2[4];
  *((_OWORD *)&unk_180142420 + 5) = v2[5];
  *((_OWORD *)&unk_180142420 + 6) = v2[6];
  *((_OWORD *)&unk_180142420 + 7) = v2[7];
  *((_OWORD *)&unk_180142420 + 8) = v2[8];
  *((_QWORD *)&unk_180142420 + 18) = *((_QWORD *)v2 + 18);
  v3 = &unk_1801424C0;
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
