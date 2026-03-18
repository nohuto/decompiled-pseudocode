/*
 * XREFs of MmAllocateMappingAddress @ 0x1404E8208
 * Callers:
 *     SmFpPreAllocate @ 0x140142F28 (SmFpPreAllocate.c)
 *     HvlpInitializeHvCrashdump @ 0x1401B4B7C (HvlpInitializeHvCrashdump.c)
 *     PnprInitializeMappingReserve @ 0x1406104AC (PnprInitializeMappingReserve.c)
 *     VerifierMmAllocateMappingAddress @ 0x1406CF880 (VerifierMmAllocateMappingAddress.c)
 *     PspIumInitialize @ 0x1407722B8 (PspIumInitialize.c)
 * Callees:
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiInsertPteTracker @ 0x1401E09F8 (MiInsertPteTracker.c)
 */

PVOID __stdcall MmAllocateMappingAddress(SIZE_T NumberOfBytes, ULONG PoolTag)
{
  unsigned __int64 v2; // r8
  __int64 v3; // r14
  SIZE_T v4; // rbp
  _QWORD *v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r12
  __int64 v9; // rsi
  unsigned int v10; // r14d
  __int64 v11; // rdi
  _BYTE v12[24]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v13; // [rsp+48h] [rbp-50h]
  __int64 v14; // [rsp+50h] [rbp-48h]
  int v15; // [rsp+58h] [rbp-40h]
  int v16; // [rsp+5Ch] [rbp-3Ch]
  __int64 v17; // [rsp+60h] [rbp-38h]
  ULONG_PTR BugCheckParameter4; // [rsp+98h] [rbp+0h]

  v3 = PoolTag;
  v4 = (NumberOfBytes + 4095) >> 12;
  if ( !v4 )
    KeBugCheckEx(0xDAu, 0x100uLL, 0LL, PoolTag, BugCheckParameter4);
  if ( !PoolTag )
    return 0LL;
  v6 = (_QWORD *)MiReservePtes((__int64)&qword_1402FF7B0, (int)v4 + 2, v2);
  v7 = (__int64)v6;
  if ( !v6 )
    return 0LL;
  *v6 = (v4 + 2) << 28;
  if ( MiPteInShadowRange((__int64)v6) )
    MiWritePteShadow(v7, (v4 + 2) << 28);
  v8 = v3;
  *(_QWORD *)(v7 + 8) = v3 & 0xFFFFFFFFFFFFF01EuLL;
  if ( MiPteInShadowRange(v7 + 8) )
    MiWritePteShadow(v7 + 8, v3 & 0xFFFFFFFFFFFFF01EuLL);
  v9 = v7 + 16;
  v10 = 0;
  v11 = v9 << 25 >> 16;
  do
  {
    *(_QWORD *)v9 = 0LL;
    if ( MiPteInShadowRange(v9) )
      MiWritePteShadow(v9, 0LL);
    ++v10;
    v9 += 8LL;
  }
  while ( v10 < v4 );
  if ( (dword_1403810F0 & 1) != 0 )
  {
    v16 = 0;
    v17 = 0LL;
    v15 = (_DWORD)v4 << 12;
    v13 = v11;
    v14 = v8;
    MiInsertPteTracker((__int64)v12, 2, 0, 1);
  }
  return (PVOID)v11;
}
