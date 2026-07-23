/*
 * XREFs of MiExpandPartitionIds @ 0x140660498
 * Callers:
 *     MiAllocatePartitionId @ 0x140659A1C (MiAllocatePartitionId.c)
 * Callees:
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MiReleasePtes @ 0x140051250 (MiReleasePtes.c)
 *     RtlClearAllBits @ 0x1400829DC (RtlClearAllBits.c)
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 *     MiMakeZeroedPageTables @ 0x140100034 (MiMakeZeroedPageTables.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiExpandPartitionIds(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 *v3; // rcx
  PRTL_BITMAP v4; // rax
  unsigned int v5; // edi
  int v6; // esi
  _RTL_BITMAP *PoolWithTag; // rax
  _RTL_BITMAP *v8; // rbx
  ULONG_PTR v10; // rax
  unsigned __int64 v11; // rdi
  __int64 PteAddress; // rbp
  unsigned __int64 SizeOfBitMap; // r8

  v3 = (__int64 *)qword_140327038;
  v4 = qword_140327018;
  if ( (__int64 *)qword_140327038 == &qword_140327030 )
    v5 = 512;
  else
    v5 = qword_140327018->SizeOfBitMap + 512;
  if ( v5 <= qword_140327018->SizeOfBitMap || v5 > 0x400 )
  {
    v6 = 0;
    v8 = 0LL;
  }
  else
  {
    v6 = 0;
    PoolWithTag = (_RTL_BITMAP *)ExAllocatePoolWithTag(
                                   NonPagedPoolNx,
                                   8 * (((v5 & 0x3F) != 0) + (v5 >> 6)) + 16,
                                   0x20206D4Du);
    v8 = PoolWithTag;
    if ( !PoolWithTag )
      return 0LL;
    PoolWithTag->SizeOfBitMap = v5;
    PoolWithTag->Buffer = &PoolWithTag[1].SizeOfBitMap;
    v3 = (__int64 *)qword_140327038;
    v4 = qword_140327018;
  }
  if ( !v8 )
    return 0LL;
  if ( v3 == &qword_140327030 )
  {
    v10 = MiReservePtes((__int64)&qword_1403278B0, 2uLL, a3);
    if ( !v10 )
      goto LABEL_14;
    v11 = (__int64)(v10 << 25) >> 16;
    if ( !v11 )
      goto LABEL_14;
  }
  else
  {
    v11 = (unsigned __int64)&v3[v4->SizeOfBitMap];
  }
  PteAddress = MiGetPteAddress(v11);
  if ( !(unsigned int)MiMakeZeroedPageTables(PteAddress, PteAddress, 33, 9u) )
  {
    if ( (__int64 *)qword_140327038 == &qword_140327030 )
      MiReleasePtes((__int64)&qword_1403278B0, PteAddress, 1u);
LABEL_14:
    ExFreePoolWithTag(v8, 0);
    return 0LL;
  }
  memset((void *)v11, 0, 0x1000uLL);
  if ( (__int64 *)qword_140327038 == &qword_140327030 )
  {
    *(_QWORD *)v11 = *(_QWORD *)qword_140327038;
    qword_140327038 = v11;
  }
  RtlClearAllBits(v8);
  SizeOfBitMap = qword_140327018->SizeOfBitMap;
  LOBYTE(v6) = (SizeOfBitMap & 0x3F) != 0;
  memmove(v8->Buffer, qword_140327018->Buffer, 8 * (v6 + (SizeOfBitMap >> 6)));
  if ( v8->SizeOfBitMap > 0x3FF )
    v8->Buffer[31] |= 0x80000000;
  if ( v8->SizeOfBitMap > 0x3FE )
    v8->Buffer[31] |= 0x40000000u;
  if ( qword_140327018 != (PRTL_BITMAP)&dword_140327020 )
    ExFreePoolWithTag(qword_140327018, 0);
  qword_140327018 = v8;
  return 1LL;
}
