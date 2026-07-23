/*
 * XREFs of PpmCapturePerformanceDistributionCallback @ 0x14020A41C
 * Callers:
 *     PpmCapturePerformanceDistribution @ 0x14020A2E4 (PpmCapturePerformanceDistribution.c)
 * Callees:
 *     PpmSnapPerformanceAccumulation @ 0x1400D7430 (PpmSnapPerformanceAccumulation.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall PpmCapturePerformanceDistributionCallback(LARGE_INTEGER *a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // esi
  unsigned int v6; // ebp
  unsigned int v7; // r15d
  __int64 v8; // r14
  char v9; // cl
  unsigned __int64 v10; // rdx
  LARGE_INTEGER v12[10]; // [rsp+30h] [rbp-88h] BYREF

  v2 = *(_DWORD *)(a2 + 12);
  v3 = 0;
  if ( v2 + 7 >= v2 )
    v2 = (v2 + 7) & 0xFFFFFFF8;
  v6 = a1[3023].QuadPart != 0 ? 2 : 0;
  v7 = v2 + 16 * v6 + 8;
  if ( v7 > *(_DWORD *)(a2 + 8) )
    goto LABEL_11;
  v8 = *(_QWORD *)a2 + v2;
  if ( v6 < 2 )
  {
LABEL_10:
    *(_DWORD *)(*(_QWORD *)a2 + 4LL * (unsigned int)(*(_DWORD *)(a2 + 16))++ + 4) = v2;
    *(_DWORD *)v8 = KeGetPcr()->Prcb.Number;
    *(_DWORD *)(v8 + 4) = v6;
LABEL_11:
    *(_DWORD *)(a2 + 12) = v7;
    return v3;
  }
  memset(v12, 0, sizeof(v12));
  if ( PpmSnapPerformanceAccumulation(a1, 0, a1 != (LARGE_INTEGER *)KeGetCurrentPrcb(), 0, v12) )
  {
    v9 = PpmPerformanceDistributionShift;
    if ( a1[3003].LowPart == 3 )
      v9 = PpmHvPerformanceDistributionShift;
    v10 = (unsigned __int64)(255 * v12[1].QuadPart - v12[3].QuadPart) >> v9;
    *(_QWORD *)(v8 + 24) = (unsigned __int64)v12[3].QuadPart >> v9;
    *(_QWORD *)(v8 + 8) = v10;
    *(_BYTE *)(v8 + 16) = 0;
    *(_BYTE *)(v8 + 32) = -1;
    goto LABEL_10;
  }
  return (unsigned int)-1073741823;
}
