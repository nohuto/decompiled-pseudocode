/*
 * XREFs of EtwpAllocateTraceBufferPool @ 0x1404CABF0
 * Callers:
 *     EtwpStartLogger @ 0x1404CB420 (EtwpStartLogger.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x14009CFC8 (EtwpQueryUsedProcessorCount.c)
 *     EtwpAllocateFreeBuffers @ 0x1400F485C (EtwpAllocateFreeBuffers.c)
 *     EtwpGetSystemMaximumBufferCount @ 0x1404CB394 (EtwpGetSystemMaximumBufferCount.c)
 */

__int64 __fastcall EtwpAllocateTraceBufferPool(__int64 a1)
{
  unsigned int SystemMaximumBufferCount; // eax
  _DWORD *v2; // r10
  int v3; // r11d
  unsigned int v4; // r8d
  unsigned int v5; // ebx
  unsigned int v6; // edx
  unsigned int v7; // r9d
  int v8; // eax
  bool v9; // zf
  unsigned int v10; // ecx
  unsigned int v12; // eax

  EtwpQueryUsedProcessorCount(a1);
  SystemMaximumBufferCount = EtwpGetSystemMaximumBufferCount();
  v4 = 2 * v3;
  v5 = SystemMaximumBufferCount;
  v6 = 2 * v3;
  if ( SystemMaximumBufferCount < 2 * v3 )
    v5 = 2 * v3;
  v7 = v5;
  if ( v2[63] > v4 )
    v6 = v2[63];
  if ( v6 < v5 )
    v7 = v6;
  if ( v2[60] > v4 )
    v4 = v2[60];
  v8 = v2[3];
  if ( v4 < v5 )
    v5 = v4;
  v2[60] = v5;
  if ( v5 > v7 )
    v7 = v5;
  if ( (v8 & 0x400) != 0 )
    v7 = v5;
  v9 = (v2[3] & 0x40000) == 0;
  v2[63] = v7;
  if ( !v9 )
    return 0LL;
  v10 = v2[57];
  if ( v10 )
  {
    v12 = v7 - v3 - 1;
    if ( v10 > v12 )
      v2[57] = v12;
  }
  return (unsigned int)EtwpAllocateFreeBuffers((__int64)v2, v5) < v5 ? 0xC0000017 : 0;
}
