/*
 * XREFs of EtwpAllocateTraceBufferPool @ 0x140493B04
 * Callers:
 *     EtwpStartLogger @ 0x14048F924 (EtwpStartLogger.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x140086EF8 (EtwpQueryUsedProcessorCount.c)
 *     EtwpAllocateFreeBuffers @ 0x140086F48 (EtwpAllocateFreeBuffers.c)
 *     EtwpGetSystemMaximumBufferCount @ 0x140493BB0 (EtwpGetSystemMaximumBufferCount.c)
 */

__int64 __fastcall EtwpAllocateTraceBufferPool(__int64 a1)
{
  unsigned int SystemMaximumBufferCount; // eax
  _DWORD *v2; // r10
  int v3; // r11d
  int v4; // r9d
  unsigned int v5; // r8d
  unsigned int v6; // ebx
  unsigned int v7; // ecx
  unsigned int v8; // edx
  unsigned int v9; // ecx
  unsigned int v11; // eax

  EtwpQueryUsedProcessorCount(a1);
  SystemMaximumBufferCount = EtwpGetSystemMaximumBufferCount();
  v4 = v2[3];
  v5 = 2 * v3;
  v6 = SystemMaximumBufferCount;
  if ( (v4 & 0x4000000) != 0 )
    v5 += 4;
  v7 = v5;
  if ( SystemMaximumBufferCount < v5 )
    v6 = v5;
  v8 = v6;
  if ( v2[59] > v5 )
    v7 = v2[59];
  if ( v7 < v6 )
    v8 = v7;
  if ( v2[56] > v5 )
    v5 = v2[56];
  if ( v5 < v6 )
    v6 = v5;
  v2[56] = v6;
  if ( v6 > v8 )
    v8 = v6;
  if ( (v4 & 0x400) != 0 )
    v8 = v6;
  v2[59] = v8;
  if ( (v4 & 0x40000) != 0 )
    return 0LL;
  v9 = v2[53];
  if ( v9 )
  {
    v11 = v8 - v3 - 1;
    if ( v9 > v11 )
      v2[53] = v11;
  }
  return (unsigned int)EtwpAllocateFreeBuffers((__int64)v2, v6) < v6 ? 0xC0000017 : 0;
}
