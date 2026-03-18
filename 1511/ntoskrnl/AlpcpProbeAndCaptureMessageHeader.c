/*
 * XREFs of AlpcpProbeAndCaptureMessageHeader @ 0x14047E410
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x14047D9CC (AlpcpAcceptConnectPort.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140480230 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpProcessConnectionRequest @ 0x1404807A4 (AlpcpProcessConnectionRequest.c)
 *     NtAlpcOpenSenderProcess @ 0x140480FF8 (NtAlpcOpenSenderProcess.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1404812A0 (AlpcpReplyLegacySynchronousRequest.c)
 *     NtAlpcOpenSenderThread @ 0x1404B1A58 (NtAlpcOpenSenderThread.c)
 *     AlpcpCopyRequestData @ 0x14061FF58 (AlpcpCopyRequestData.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1406203B4 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpProbeAndCaptureMessageHeader(__m128i *a1, __int64 a2, int a3)
{
  __int16 v3; // ax
  __m128i v4; // xmm0
  unsigned int v5; // ecx
  __int64 result; // rax
  __int64 v7; // [rsp+10h] [rbp-18h]

  if ( (a3 & 0xC0000000) == 0x80000000 )
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (__m128i *)MmUserProbeAddress;
    v7 = a1[1].m128i_i64[0];
    v3 = _mm_cvtsi128_si32(*a1);
    v4 = *a1;
    v5 = _mm_cvtsi128_si32(_mm_srli_si128(*a1, 8));
    *(_WORD *)a2 = v3;
    *(_QWORD *)(a2 + 8) = v5;
    *(_WORD *)(a2 + 2) = v3 + 40;
    result = (unsigned int)v7;
    *(_QWORD *)(a2 + 16) = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v4, 12));
    *(_QWORD *)(a2 + 32) = HIDWORD(v7);
    *(_DWORD *)(a2 + 32) = HIDWORD(v7);
    *(_DWORD *)(a2 + 4) = _mm_cvtsi128_si32(_mm_srli_si128(v4, 4));
    *(_DWORD *)(a2 + 24) = v7;
  }
  else
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (__m128i *)MmUserProbeAddress;
    *(__m128i *)a2 = *a1;
    *(__m128i *)(a2 + 16) = a1[1];
    *(_QWORD *)(a2 + 32) = a1[2].m128i_i64[0];
  }
  return result;
}
