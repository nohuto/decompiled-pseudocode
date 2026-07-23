/*
 * XREFs of MmStoreFreeVirtualMemory @ 0x140533000
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x14011E8F4 (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     MiFreeVadRange @ 0x140026E34 (MiFreeVadRange.c)
 *     MiObtainReferencedVad @ 0x14003DEA0 (MiObtainReferencedVad.c)
 *     MiUnlockPageTableRange @ 0x140125320 (MiUnlockPageTableRange.c)
 */

__int64 __fastcall MmStoreFreeVirtualMemory(unsigned __int64 a1)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  char v6; // [rsp+58h] [rbp+10h] BYREF
  int v7; // [rsp+60h] [rbp+18h] BYREF

  v2 = MiObtainReferencedVad(a1, &v7);
  v3 = *(unsigned int *)(v2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 32) << 32);
  v4 = *(unsigned int *)(v2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 33) << 32);
  MiUnlockPageTableRange(a1, (v4 << 12) | 0xFFF);
  v6 = 0;
  return MiFreeVadRange(v2, (int)&v6, v3, v4, (__int64)KeGetCurrentThread()->ApcState.Process);
}
