/*
 * XREFs of MmAllocateMappingAddress @ 0x1405622E0
 * Callers:
 *     SmFpPreAllocate @ 0x140170E0C (SmFpPreAllocate.c)
 *     HvlpInitializeHvCrashdump @ 0x1401EFA5C (HvlpInitializeHvCrashdump.c)
 *     PnprInitializeMappingReserve @ 0x140690220 (PnprInitializeMappingReserve.c)
 *     VerifierMmAllocateMappingAddress @ 0x14075334C (VerifierMmAllocateMappingAddress.c)
 *     PspIumInitialize @ 0x1407E8D88 (PspIumInitialize.c)
 * Callees:
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakeLinkedListPte @ 0x140225C20 (MiMakeLinkedListPte.c)
 *     MiInsertPteTracker @ 0x140226BDC (MiInsertPteTracker.c)
 */

PVOID __stdcall MmAllocateMappingAddress(SIZE_T NumberOfBytes, ULONG PoolTag)
{
  unsigned __int64 v2; // r8
  __int64 v3; // r14
  SIZE_T v4; // rbp
  __int64 *v6; // rsi
  __int64 LinkedListPte; // rax
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  unsigned int v13; // r14d
  __int64 v14; // rdi
  char v15[24]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v16; // [rsp+48h] [rbp-50h]
  __int64 v17; // [rsp+50h] [rbp-48h]
  int v18; // [rsp+58h] [rbp-40h]
  int v19; // [rsp+5Ch] [rbp-3Ch]
  __int64 v20; // [rsp+60h] [rbp-38h]
  ULONG_PTR BugCheckParameter4; // [rsp+98h] [rbp+0h]

  v3 = PoolTag;
  v4 = (NumberOfBytes + 4095) >> 12;
  if ( !v4 )
    KeBugCheckEx(0xDAu, 0x100uLL, 0LL, PoolTag, BugCheckParameter4);
  if ( !PoolTag )
    return 0LL;
  v6 = MiReservePtes((__int64)&qword_14034FC70, (int)v4 + 2, v2);
  if ( !v6 )
    return 0LL;
  LinkedListPte = MiMakeLinkedListPte(v4 + 2);
  *v6 = LinkedListPte;
  v8 = LinkedListPte;
  if ( MiPteInShadowRange((__int64)v6) )
    MiWritePteShadow((__int64)v6, v8);
  v9 = v3;
  v10 = MiMakeLinkedListPte(v3);
  v6[1] = v10;
  v11 = v10;
  if ( MiPteInShadowRange((__int64)(v6 + 1)) )
    MiWritePteShadow((__int64)(v6 + 1), v11);
  v12 = (__int64)(v6 + 2);
  v13 = 0;
  v14 = v12 << 25 >> 16;
  do
  {
    *(_QWORD *)v12 = 0LL;
    if ( MiPteInShadowRange(v12) )
      MiWritePteShadow(v12, 0LL);
    ++v13;
    v12 += 8LL;
  }
  while ( v13 < v4 );
  if ( (dword_1403D00E0 & 1) != 0 )
  {
    v19 = 0;
    v20 = 0LL;
    v18 = (_DWORD)v4 << 12;
    v16 = v14;
    v17 = v9;
    MiInsertPteTracker((__int64)v15, 2, 0, 1);
  }
  return (PVOID)v14;
}
