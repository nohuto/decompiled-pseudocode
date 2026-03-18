/*
 * XREFs of MiLogSectionCreate @ 0x1406A2DF4
 * Callers:
 *     MiSegmentDelete @ 0x1404B2AE4 (MiSegmentDelete.c)
 *     MiCreateSection @ 0x1404B3940 (MiCreateSection.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiLogPerfMemoryRangeEvent @ 0x140214958 (MiLogPerfMemoryRangeEvent.c)
 *     MiInitPerfMemoryFlags @ 0x140220484 (MiInitPerfMemoryFlags.c)
 */

void *__fastcall MiLogSectionCreate(__int64 *a1, int a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rsi
  void *result; // rax
  unsigned int inited; // eax
  _QWORD v7[2]; // [rsp+30h] [rbp-30h] BYREF
  int v8; // [rsp+40h] [rbp-20h]
  _QWORD *v9; // [rsp+48h] [rbp-18h] BYREF
  int v10; // [rsp+50h] [rbp-10h]
  int v11; // [rsp+54h] [rbp-Ch]

  v2 = *a1;
  v11 = 0;
  v10 = 24;
  v3 = *(_QWORD *)(v2 + 64);
  v4 = *(unsigned int *)(v2 + 8);
  v7[0] = v3;
  v7[1] = v3 + 8 * v4;
  if ( a2 == 1 )
  {
    v8 = *(_DWORD *)(*(_QWORD *)(v2 + 48) + 744LL);
    v9 = v7;
    result = EtwTraceKernelEvent((int)&v9, 1, 0x20400001u, 0x249u, 4200706);
    if ( (*(_WORD *)(v2 + 12) & 0x1000) != 0 )
    {
      result = (void *)DWORD1(PerfGlobalGroupMask);
      if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      {
        inited = MiInitPerfMemoryFlags(1, 2);
        return MiLogPerfMemoryRangeEvent(v3, 0LL, inited, (unsigned int)v4);
      }
    }
  }
  else
  {
    v8 = -1;
    v9 = v7;
    return EtwTraceKernelEvent((int)&v9, 1, 0x20400001u, 0x24Fu, 20977922);
  }
  return result;
}
