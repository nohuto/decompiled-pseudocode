/*
 * XREFs of bGetTextMetrics @ 0x1C0038CEC
 * Callers:
 *     GreGetTextMetricsW @ 0x1C0038C58 (GreGetTextMetricsW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bGetTextMetrics(struct RFONTOBJ *a1, struct DCOBJ *a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 result; // rax
  __int64 v6; // r10
  int v7; // edx

  v3 = *(_QWORD *)a1;
  result = 0LL;
  if ( *(_QWORD *)a1 )
  {
    v6 = *(_QWORD *)(v3 + 696);
    if ( v6 )
    {
      *(_OWORD *)a3 = *(_OWORD *)v6;
      *(_OWORD *)(a3 + 16) = *(_OWORD *)(v6 + 16);
      *(_OWORD *)(a3 + 32) = *(_OWORD *)(v6 + 32);
      *(_OWORD *)(a3 + 48) = *(_OWORD *)(v6 + 48);
      *(_DWORD *)(a3 + 64) = *(_DWORD *)(v6 + 64);
      v7 = *(_DWORD *)(*(_QWORD *)a2 + 2168LL);
      *(_BYTE *)(a3 + 53) = -((v7 & 0x20) != 0);
      *(_BYTE *)(a3 + 54) = -((v7 & 0x80u) != 0);
      *(_BYTE *)(a3 + 56) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 66LL);
      return 1LL;
    }
    else
    {
      return bIFIMetricsToTextMetricW(a1, a2, a3, *(struct _IFIMETRICS **)(*(_QWORD *)(v3 + 112) + 32LL));
    }
  }
  return result;
}
