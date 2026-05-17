/*
 * XREFs of RtlpHpSegHeapAllocate @ 0x180003BE8
 * Callers:
 *     RtlpHpSegHeapCreate @ 0x180003E6C (RtlpHpSegHeapCreate.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue64 @ 0x180035950 (RtlpHeapGenerateRandomValue64.c)
 *     ZwAllocateVirtualMemory @ 0x180093A80 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x180093AE0 (ZwFreeVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x1800EF668 (RtlpLogHeapCommit.c)
 */

volatile signed __int64 *__fastcall RtlpHpSegHeapAllocate(int a1, unsigned int a2)
{
  int v3; // ebx
  int v4; // ecx
  volatile signed __int64 *result; // rax
  __int64 v6; // [rsp+30h] [rbp-20h] BYREF
  volatile signed __int64 *v7; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 v8; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v9; // [rsp+48h] [rbp-8h] BYREF
  volatile signed __int64 *v10; // [rsp+70h] [rbp+20h] BYREF
  unsigned __int64 v11; // [rsp+78h] [rbp+28h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  if ( a2 > 0x40 )
    a2 = 64;
  v11 = 129 * (((a2 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + ((56LL * a2 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 8LL * a2) + 15968;
  v6 = (RtlpHeapGenerateRandomValue64() & 0x1F) << 16;
  v8 = v11 + v6;
  if ( v11 + v6 < v11 )
  {
    v6 = 0LL;
    v8 = v11;
  }
  v3 = a1 & 0x40000000;
  v4 = ZwAllocateVirtualMemory(-1LL, &v7, 0LL, &v8, 0x2000, v3 != 0 ? 64 : 4);
  if ( v4 < 0 )
  {
    result = 0LL;
    v10 = 0LL;
    goto LABEL_11;
  }
  v10 = v7;
  v11 = v8;
  if ( v6 )
  {
    ZwFreeVirtualMemory(-1LL, &v7, &v6, 0x8000LL);
    v11 = v8 - v6;
    v10 = (volatile signed __int64 *)((char *)v7 + v6);
  }
  v9 = 1520LL;
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v10, 0LL, &v9, 4096, v3 != 0 ? 64 : 4) >= 0 )
  {
    if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapCommit(v10, v10, v9, 11LL);
    _InterlockedExchangeAdd64(v10, v11 >> 12);
    _InterlockedExchangeAdd64(v10 + 1, v9 >> 12);
    *((_QWORD *)v10 + 19) = v10 + 190;
    *((_QWORD *)v10 + 20) = (char *)v10 + v9;
    *((_QWORD *)v10 + 21) = (char *)v10 + v11;
    v4 = 0;
    result = v10;
LABEL_11:
    if ( v4 >= 0 )
      return result;
    goto LABEL_17;
  }
  result = v10;
LABEL_17:
  if ( result )
  {
    v11 = 0LL;
    ZwFreeVirtualMemory(-1LL, &v10, &v11, 0x8000LL);
    return 0LL;
  }
  return result;
}
