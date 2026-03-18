/*
 * XREFs of PpmCapturePerformanceDistribution @ 0x14023F734
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x140013958 (PopExecuteOnTargetProcessors.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PpmCapturePerformanceDistributionCallback @ 0x14023F908 (PpmCapturePerformanceDistributionCallback.c)
 */

__int64 __fastcall PpmCapturePerformanceDistribution(_DWORD *a1, unsigned int a2, int a3, __int64 a4, _DWORD *a5)
{
  int v5; // edi
  unsigned __int64 v6; // rsi
  int v9; // r15d
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r14
  unsigned __int8 CurrentIrql; // bl
  int v14; // eax
  unsigned int v15; // ecx
  char v16; // r8
  __int64 v17; // rcx
  __int64 result; // rax
  unsigned int v19; // eax
  _DWORD *v20; // [rsp+20h] [rbp-C1h] BYREF
  unsigned int v21; // [rsp+28h] [rbp-B9h]
  __int64 v22; // [rsp+2Ch] [rbp-B5h]
  int v23; // [rsp+34h] [rbp-ADh]
  _DWORD *v24; // [rsp+38h] [rbp-A9h]
  _DWORD v25[2]; // [rsp+40h] [rbp-A1h] BYREF
  _QWORD v26[21]; // [rsp+48h] [rbp-99h] BYREF

  v5 = *(unsigned __int16 *)(a4 + 8);
  v6 = *(_QWORD *)a4;
  v24 = a5;
  v9 = v5;
  v20 = a1;
  v23 = 0;
  v21 = a2;
  v22 = (unsigned int)(4 * a3 + 4);
  while ( 1 )
  {
    while ( v6 )
    {
      _BitScanForward64(&v10, v6);
      v9 = (unsigned __int16)v5;
      v6 &= ~(1LL << v10);
      v11 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * (unsigned __int16)v5 + (unsigned __int8)v10];
      if ( (unsigned int)v11 >= (unsigned int)KeNumberProcessors_0 )
      {
        v12 = 0LL;
      }
      else
      {
        _mm_lfence();
        v12 = KiProcessorBlock[v11];
      }
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v14 = PpmCapturePerformanceDistributionCallback(v12);
      __writecr8(CurrentIrql);
      if ( v14 < 0 )
      {
        v25[1] = 0;
        v25[0] = 1310721;
        memset(v26, 0, 0xA0uLL);
        v15 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v12 + 36)];
        v16 = v15 & 0x3F;
        v17 = v15 >> 6;
        if ( (_DWORD)v17 )
          LOWORD(v25[0]) = v17 + 1;
        v26[(unsigned int)v17] = v26[v17] | (1LL << v16);
        result = PopExecuteOnTargetProcessors(
                   (__int64)v25,
                   (__int64)PpmCapturePerformanceDistributionCallback,
                   (__int64)&v20,
                   0LL);
        if ( (int)result < 0 )
          return result;
      }
    }
    LOWORD(v5) = v5 + 1;
    if ( (unsigned __int16)v5 >= (unsigned int)(v9 + 1) )
      break;
    v6 = *(_QWORD *)(8LL * (unsigned __int16)v5 + 8);
  }
  v19 = v22;
  *v24 = v22;
  if ( v19 > a2 )
    return 3221225476LL;
  *v20 = a3;
  return 0LL;
}
