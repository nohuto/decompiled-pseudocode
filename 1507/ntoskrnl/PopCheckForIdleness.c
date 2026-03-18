/*
 * XREFs of PopCheckForIdleness @ 0x1400D024C
 * Callers:
 *     <none>
 * Callees:
 *     PopGetPolicyWorker @ 0x1400D042C (PopGetPolicyWorker.c)
 *     PopDiagTraceIdleCheck @ 0x1400D0710 (PopDiagTraceIdleCheck.c)
 */

struct _KTHREAD *PopCheckForIdleness()
{
  int v0; // r14d
  unsigned __int8 CurrentIrql; // al
  __int64 v2; // rcx
  __int64 v3; // rbx
  unsigned int v4; // r11d
  unsigned __int64 v5; // rdi
  int v6; // r8d
  int v7; // r9d
  int v8; // esi
  unsigned __int16 i; // r10
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  signed int v12; // eax
  unsigned __int64 v13; // r8
  unsigned __int16 v14; // r9
  unsigned __int64 v15; // rdx
  __int64 v16; // rdx

  v0 = KeNumberProcessors_0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v2 = qword_14032E1D0;
  v3 = MEMORY[0xFFFFF78000000320];
  __writecr8(CurrentIrql);
  if ( dword_14032E1AC )
  {
    if ( byte_14032E1C9 )
    {
      v4 = v3 - v2;
      if ( (int)v3 - (int)v2 <= 0 )
      {
        byte_14032E1C9 = 0;
        goto LABEL_21;
      }
      v5 = qword_1403D15E8[0];
      v6 = 100;
      v7 = 100;
      v8 = 0;
      for ( i = 0; ; v5 = qword_1403D15E8[i] )
      {
        while ( v5 )
        {
          _BitScanForward64(&v10, v5);
          v5 &= ~(1LL << v10);
          v11 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * i + (unsigned __int8)v10]];
          v2 = *(_QWORD *)(v11 + 24);
          v12 = 100 * (*(_DWORD *)(v2 + 652) - *(_DWORD *)(v11 + 24028)) / v4;
          if ( v12 < v7 )
            v7 = v12;
          v8 += v12;
        }
        if ( ++i >= (unsigned int)LOWORD(KeActiveProcessors[0]) )
          break;
      }
      if ( v7 > 100 )
      {
        v7 = 100;
      }
      else if ( v7 < 0 )
      {
        v7 = 0;
      }
      if ( v8 / v0 <= 100 )
      {
        v6 = v8 / v0;
        if ( v8 / v0 < 0 )
          v6 = 0;
      }
      dword_14032E1A8 += PopIdleScanInterval;
      dword_14032E1A4 = v7;
      PopSIdle = v6;
      PopDiagTraceIdleCheck(v2, (unsigned int)v7);
    }
    v13 = qword_1403D15E8[0];
    v14 = 0;
    qword_14032E1D0 = v3;
    byte_14032E1C9 = 1;
    while ( 1 )
    {
      while ( v13 )
      {
        _BitScanForward64(&v15, v13);
        v13 &= ~(1LL << v15);
        v16 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v14 + (unsigned __int8)v15]];
        *(_DWORD *)(v16 + 24028) = *(_DWORD *)(*(_QWORD *)(v16 + 24) + 652LL);
      }
      if ( ++v14 >= (unsigned int)LOWORD(KeActiveProcessors[0]) )
        break;
      v13 = qword_1403D15E8[v14];
    }
  }
LABEL_21:
  PopGetPolicyWorker(8LL);
  return PopCheckForWork();
}
