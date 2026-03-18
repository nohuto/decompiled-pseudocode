/*
 * XREFs of ?SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@@Z @ 0x140143658
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x14014325C (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     MmStoreProbeAndLockPages @ 0x140145CAC (MmStoreProbeAndLockPages.c)
 */

__int64 __fastcall SmKmProbeAndLockAddress(unsigned __int64 a1, __int64 a2, struct _MDL *a3)
{
  __int64 result; // rax

  a3->ByteCount = a2;
  a3->Next = 0LL;
  a3->MdlFlags = 0;
  a3->ByteOffset = a1 & 0xFFF;
  a3->Size = 8 * ((((a1 & 0xFFF) + a2 + 4095) >> 12) + 6);
  a3->StartVa = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
  result = MmStoreProbeAndLockPages(a3);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
