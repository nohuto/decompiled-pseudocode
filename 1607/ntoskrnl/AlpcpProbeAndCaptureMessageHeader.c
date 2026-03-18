/*
 * XREFs of AlpcpProbeAndCaptureMessageHeader @ 0x1404B5B54
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x1404B26D4 (AlpcpProcessConnectionRequest.c)
 *     NtAlpcOpenSenderThread @ 0x1404B39B4 (NtAlpcOpenSenderThread.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1404B3C60 (AlpcpReplyLegacySynchronousRequest.c)
 *     NtAlpcOpenSenderProcess @ 0x1404B40CC (NtAlpcOpenSenderProcess.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1404B436C (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpAcceptConnectPort @ 0x1404B4A28 (AlpcpAcceptConnectPort.c)
 *     AlpcpCopyRequestData @ 0x140655200 (AlpcpCopyRequestData.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x14065571C (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpProbeAndCaptureMessageHeader(unsigned __int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int16 v4; // ax
  __m128i v5; // xmm0
  unsigned int v6; // ecx
  __int64 v7; // [rsp+10h] [rbp-18h]

  result = 0x7FFFFFFF0000LL;
  if ( (a3 & 0xC0000000) == 0x80000000 )
  {
    if ( a1 >= 0x7FFFFFFF0000LL )
      a1 = 0x7FFFFFFF0000LL;
    v7 = *(_QWORD *)(a1 + 16);
    v4 = _mm_cvtsi128_si32(*(__m128i *)a1);
    v5 = *(__m128i *)a1;
    v6 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)a1, 8));
    *(_WORD *)a2 = v4;
    *(_QWORD *)(a2 + 8) = v6;
    *(_WORD *)(a2 + 2) = v4 + 40;
    result = (unsigned int)v7;
    *(_QWORD *)(a2 + 16) = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v5, 12));
    *(_QWORD *)(a2 + 32) = HIDWORD(v7);
    *(_DWORD *)(a2 + 32) = HIDWORD(v7);
    *(_DWORD *)(a2 + 4) = _mm_cvtsi128_si32(_mm_srli_si128(v5, 4));
    *(_DWORD *)(a2 + 24) = v7;
  }
  else
  {
    if ( a1 >= 0x7FFFFFFF0000LL )
      a1 = 0x7FFFFFFF0000LL;
    *(_OWORD *)a2 = *(_OWORD *)a1;
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 16);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 32);
  }
  return result;
}
