/*
 * XREFs of MmEnoughMemoryForWrite @ 0x140020790
 * Callers:
 *     CcCanIWriteStream @ 0x140020620 (CcCanIWriteStream.c)
 * Callees:
 *     MiLockSectionControlArea @ 0x14002144C (MiLockSectionControlArea.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 */

__int64 __fastcall MmEnoughMemoryForWrite(__int64 a1)
{
  __int64 v1; // r9
  bool v2; // bl
  int *v3; // r8
  unsigned __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  KIRQL v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  v9 = 17;
  v2 = 0;
  if ( a1 )
  {
    v6 = MiLockSectionControlArea(a1, 1LL, &v9);
    if ( !v6 )
      return 1LL;
    v3 = (int *)MiPartitionIdToPointer(*(_WORD *)(v6 + 60) & 0x3FF, v7, v8, v6);
  }
  else
  {
    v3 = MiSystemPartition;
  }
  if ( (_BYTE)dword_1403A9160 )
    v4 = 0x4000LL;
  else
    v4 = 450LL;
  if ( *((_QWORD *)v3 + 808) <= v4 )
  {
    if ( *((_QWORD *)v3 + 904) < (unsigned __int64)(*((_QWORD *)v3 + 918) + 800LL) )
      v2 = *((_QWORD *)v3 + 808) > 0x50uLL;
  }
  else
  {
    v2 = 1;
  }
  if ( v9 != 17 )
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 72), v9);
  return v2;
}
