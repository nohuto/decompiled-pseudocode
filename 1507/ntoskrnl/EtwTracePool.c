/*
 * XREFs of EtwTracePool @ 0x14017E810
 * Callers:
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     ExpAllocateBigPool @ 0x140046030 (ExpAllocateBigPool.c)
 *     ExFreeLargePool @ 0x140046E10 (ExFreeLargePool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400FF2B0 (ExpInsertPoolTrackerExpansion.c)
 *     ExpResizeBigPageTable @ 0x140118C5C (ExpResizeBigPageTable.c)
 *     ExpInsertPoolTracker @ 0x140149414 (ExpInsertPoolTracker.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     InitializePagedPool @ 0x1407CA2BC (InitializePagedPool.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     EtwpLogKernelEvent @ 0x1400A57F0 (EtwpLogKernelEvent.c)
 *     MmIsNonPagedPoolNx @ 0x14015AFF0 (MmIsNonPagedPoolNx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     EtwpCheckPoolTagFilters @ 0x14025EE80 (EtwpCheckPoolTagFilters.c)
 */

unsigned __int64 __fastcall EtwTracePool(
        unsigned __int16 a1,
        __int16 a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  int v5; // ebx
  unsigned __int16 v8; // si
  unsigned __int64 result; // rax
  unsigned int v10; // r15d
  int SessionId; // eax
  unsigned int v12; // edi
  bool v13; // zf
  __int64 v14; // rcx
  __int64 v15; // r12
  char *v16; // rbx
  int v17; // [rsp+30h] [rbp-50h] BYREF
  _DWORD v18[2]; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+40h] [rbp-40h]
  unsigned __int64 v20; // [rsp+48h] [rbp-38h]
  _DWORD *v21; // [rsp+50h] [rbp-30h] BYREF
  int i; // [rsp+58h] [rbp-28h]
  int v23; // [rsp+5Ch] [rbp-24h]
  int *v24; // [rsp+60h] [rbp-20h]
  int v25; // [rsp+68h] [rbp-18h]
  int v26; // [rsp+6Ch] [rbp-14h]

  v5 = a2 & 0x26D;
  v8 = a1;
  if ( a5 <= 0xFE0 )
  {
    result = DWORD1(PerfGlobalGroupMask);
    if ( (BYTE4(PerfGlobalGroupMask) & 0x40) == 0 )
      return result;
  }
  else
  {
    v5 |= 0x10000000u;
  }
  if ( a1 == 3618 && (v5 & 1) == 0 && MmIsNonPagedPoolNx(a4) )
    v5 |= 0x200u;
  v10 = 1;
  if ( (v5 & 0x20) != 0 )
  {
    SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
    v26 = 0;
    v10 = 2;
    v17 = SessionId;
    ++v8;
    v25 = 4;
    v24 = &v17;
  }
  v23 = 0;
  result = (unsigned __int64)v18;
  v20 = a4;
  v12 = EtwpActiveSystemLoggers;
  v13 = !_BitScanForward((unsigned int *)&v14, EtwpActiveSystemLoggers);
  v18[0] = v5;
  v18[1] = a3;
  v19 = a5;
  v21 = v18;
  for ( i = 24; !v13; v13 = !_BitScanForward((unsigned int *)&v14, v12) )
  {
    v15 = (unsigned int)v14;
    v12 &= v12 - 1;
    result = 32LL * (unsigned int)v14;
    v16 = (char *)&EtwpGroupMasks + result;
    if ( !(_UNKNOWN *)((char *)&EtwpGroupMasks + result)
      || (result = *((unsigned int *)v16 + 1), (result & 0x40) == 0)
      || (result = EtwpCheckPoolTagFilters(v14, a3), !(_BYTE)result) )
    {
      if ( !v16 )
        continue;
      result = *((unsigned int *)v16 + 1);
      if ( (result & 1) == 0 || a5 <= 0xFE0 )
        continue;
    }
    result = EtwpLogKernelEvent((__int64)&v21, (unsigned __int16)EtwpSystemLogger[2 * v15], v10, v8, 20978434);
  }
  return result;
}
