/*
 * XREFs of ?CreatePartitionTable@PC_RAW@@QEAAJXZ @ 0x14023B850
 * Callers:
 *     ?PcCreatePartitionTable@@YAJPEAVPC_DISK@@PEAU_CREATE_DISK@@@Z @ 0x14023B4D4 (-PcCreatePartitionTable@@YAJPEAVPC_DISK@@PEAU_CREATE_DISK@@@Z.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ?WriteSectors@PC_DISK@@QEAAJK_KPEAX@Z @ 0x14023CBA0 (-WriteSectors@PC_DISK@@QEAAJK_KPEAX@Z.c)
 */

int __fastcall PC_RAW::CreatePartitionTable(PC_DISK **this)
{
  __int64 v2; // rbx
  int result; // eax

  v2 = *((_QWORD *)*this + 6);
  memset((void *)(v2 + 446), 0, 0x40uLL);
  *(_DWORD *)(v2 + 440) = 0;
  *(_WORD *)(v2 + 510) = 0;
  result = PC_DISK::WriteSectors(*this, 1u, 0LL, 0LL);
  if ( result >= 0 && *((_DWORD *)*this + 11) == 1 )
  {
    memset(*((void **)*this + 6), 0, 1 << *((_DWORD *)*this + 10));
    result = PC_DISK::WriteSectors(*this, 1u, 1uLL, 0LL);
    if ( result >= 0 )
      return PC_DISK::WriteSectors(*this, 1u, *((_QWORD *)*this + 4) - 1LL, 0LL);
  }
  return result;
}
