/*
 * XREFs of MmAllocateMappingAddress @ 0x14052C83C
 * Callers:
 *     SmFpPreAllocate @ 0x140148E48 (SmFpPreAllocate.c)
 *     HvlpInitializeHvCrashdump @ 0x1401C07CC (HvlpInitializeHvCrashdump.c)
 *     PnprInitializeMappingReserve @ 0x14064499C (PnprInitializeMappingReserve.c)
 *     EtwpSavePersistedLogger @ 0x1406AA39C (EtwpSavePersistedLogger.c)
 *     PspIumInitialize @ 0x1407AA3D0 (PspIumInitialize.c)
 * Callees:
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 *     MiInsertMappingNode @ 0x1401110D4 (MiInsertMappingNode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiInsertPteTracker @ 0x1401FC618 (MiInsertPteTracker.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

PVOID __stdcall MmAllocateMappingAddress(SIZE_T NumberOfBytes, ULONG PoolTag)
{
  __int64 v2; // r14
  SIZE_T v3; // rdi
  PVOID PoolWithTag; // rsi
  unsigned __int64 v5; // r8
  ULONG_PTR v6; // rax
  _QWORD *v7; // r9
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // r9
  int v12; // r10d
  _BYTE v13[16]; // [rsp+30h] [rbp-58h] BYREF
  SIZE_T v14; // [rsp+40h] [rbp-48h]
  __int64 v15; // [rsp+48h] [rbp-40h]
  __int64 v16; // [rsp+50h] [rbp-38h]
  int v17; // [rsp+5Ch] [rbp-2Ch]
  __int64 v18; // [rsp+60h] [rbp-28h]
  ULONG_PTR BugCheckParameter4; // [rsp+88h] [rbp+0h]

  v2 = PoolTag;
  v3 = (NumberOfBytes + 4095) >> 12;
  if ( !v3 )
    KeBugCheckEx(0xDAu, 0x100uLL, 0LL, PoolTag, BugCheckParameter4);
  if ( !PoolTag )
    return 0LL;
  if ( v3 >= 0x100000000LL )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x6D72694Du);
  if ( !PoolWithTag )
    return 0LL;
  v6 = MiReservePtes((__int64)&qword_1403278B0, (unsigned int)v3, v5);
  v7 = (_QWORD *)v6;
  if ( !v6 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return 0LL;
  }
  *((_QWORD *)PoolWithTag + 4) = v3;
  v9 = (__int64)(v6 << 25) >> 16;
  *((_QWORD *)PoolWithTag + 3) = v9;
  *((_DWORD *)PoolWithTag + 10) = v2;
  do
  {
    *v7 = 0LL;
    if ( MiPteInShadowRange((unsigned __int64)v7) )
      MiWritePteShadow(v10, 0LL);
    v7 = (_QWORD *)(v11 + 8);
  }
  while ( (unsigned int)(v12 + 1) < v3 );
  if ( (dword_1403A913C & 1) != 0 )
  {
    v17 = 0;
    v18 = 0LL;
    v15 = v9;
    v16 = v2;
    v14 = v3 << 12;
    MiInsertPteTracker((__int64)v13, 2, 0, 1);
  }
  MiInsertMappingNode((unsigned __int64)PoolWithTag);
  return (PVOID)v9;
}
