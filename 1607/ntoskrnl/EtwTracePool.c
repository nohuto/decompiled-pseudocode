/*
 * XREFs of EtwTracePool @ 0x140159C2C
 * Callers:
 *     ExFreeLargePool @ 0x140010760 (ExFreeLargePool.c)
 *     ExpAllocateBigPool @ 0x140011650 (ExpAllocateBigPool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140012670 (ExpInsertPoolTrackerExpansion.c)
 *     ExAllocatePoolWithTagPriority @ 0x14007E290 (ExAllocatePoolWithTagPriority.c)
 *     ExpResizeBigPageTable @ 0x14009CF9C (ExpResizeBigPageTable.c)
 *     ExpInsertPoolTracker @ 0x1401230E0 (ExpInsertPoolTracker.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     InitializePagedPool @ 0x1407B47A0 (InitializePagedPool.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     EtwpLogKernelEvent @ 0x1400592C0 (EtwpLogKernelEvent.c)
 *     MmIsNonPagedPoolNx @ 0x140134120 (MmIsNonPagedPoolNx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExCheckSingleFilter @ 0x140159DFC (ExCheckSingleFilter.c)
 */

void __fastcall EtwTracePool(
        unsigned __int16 a1,
        __int16 a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  int v5; // ebx
  unsigned __int16 v8; // si
  unsigned int v9; // r15d
  int SessionId; // eax
  unsigned int v11; // ebx
  bool v12; // zf
  __int64 v13; // rcx
  __int64 v14; // rdi
  char *v15; // r8
  __int64 v16; // r9
  unsigned int *v17; // r10
  int v18; // r9d
  __int64 v19; // r10
  unsigned int v20; // r11d
  int v21; // [rsp+30h] [rbp-50h] BYREF
  _DWORD v22[2]; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v23; // [rsp+40h] [rbp-40h]
  unsigned __int64 v24; // [rsp+48h] [rbp-38h]
  _DWORD *v25; // [rsp+50h] [rbp-30h] BYREF
  int v26; // [rsp+58h] [rbp-28h]
  int v27; // [rsp+5Ch] [rbp-24h]
  int *v28; // [rsp+60h] [rbp-20h]
  int v29; // [rsp+68h] [rbp-18h]
  int v30; // [rsp+6Ch] [rbp-14h]

  v5 = a2 & 0x26D;
  v8 = a1;
  if ( a5 <= 0xFE0 )
  {
    if ( (BYTE4(PerfGlobalGroupMask) & 0x40) == 0 )
      return;
  }
  else
  {
    v5 |= 0x10000000u;
  }
  if ( a1 == 3618 && (v5 & 1) == 0 && MmIsNonPagedPoolNx(a4) )
    v5 |= 0x200u;
  v9 = 1;
  if ( (v5 & 0x20) != 0 )
  {
    SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
    v30 = 0;
    v9 = 2;
    v21 = SessionId;
    ++v8;
    v29 = 4;
    v28 = &v21;
  }
  v27 = 0;
  v22[0] = v5;
  v11 = EtwpActiveSystemLoggers;
  v12 = !_BitScanForward((unsigned int *)&v13, EtwpActiveSystemLoggers);
  v22[1] = a3;
  v23 = a5;
  v24 = a4;
  v25 = v22;
  v26 = 24;
  while ( !v12 )
  {
    v14 = (unsigned int)v13;
    v11 &= v11 - 1;
    v15 = (char *)&EtwpGroupMasks + 32 * (unsigned int)v13;
    if ( v15 && (*((_DWORD *)v15 + 1) & 0x40) != 0 && (v16 = 0LL, EtwpPoolTagFilter[10 * v13]) )
    {
      v17 = (unsigned int *)(0x140000000LL + 20 * v13 + 3133924);
      while ( !(unsigned int)ExCheckSingleFilter(a3, *v17, v15, v16) )
      {
        v16 = (unsigned int)(v18 + 1);
        v17 = (unsigned int *)(v19 + 4);
        if ( (unsigned int)v16 >= v20 )
          goto LABEL_17;
      }
    }
    else
    {
LABEL_17:
      if ( !v15 || (*((_DWORD *)v15 + 1) & 1) == 0 || a5 <= 0xFE0 )
        goto LABEL_21;
    }
    EtwpLogKernelEvent(
      (__int64)&v25,
      EtwpHostSiloState,
      (unsigned __int16)EtwpSystemLogger[2 * v14],
      v9,
      v8,
      0x1401B02u);
LABEL_21:
    v12 = !_BitScanForward((unsigned int *)&v13, v11);
  }
}
