/*
 * XREFs of MiUpdateSystemPdes @ 0x140210604
 * Callers:
 *     MiSyncSystemPdes @ 0x14006AE38 (MiSyncSystemPdes.c)
 *     MmInSwapProcess @ 0x140110ACC (MmInSwapProcess.c)
 * Callees:
 *     MiCopyTopLevelMappings @ 0x14006AE80 (MiCopyTopLevelMappings.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400E6520 (MiMapPageInHyperSpaceWorker.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiGetTopPteAddress @ 0x140225B6C (MiGetTopPteAddress.c)
 */

unsigned __int64 __fastcall MiUpdateSystemPdes(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  unsigned __int64 v4; // r14
  __int64 *v5; // r15
  __int64 v6; // rdi
  unsigned __int8 v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = ((unsigned int)MiGetTopPteAddress(0xFFFFF58010804000uLL) >> 3) & 0x1FF;
  v3 = MEMORY[0xFFFFF6FB7DBEDF68] ^ (MEMORY[0xFFFFF6FB7DBEDF68] ^ (*(_QWORD *)(a1 + 40) >> 12 << 12)) & 0xFFFFFFFFF000LL;
  v4 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(a1 + 40) >> 12, &v8);
  v5 = (__int64 *)(v4 + 8 * v2);
  v6 = *v5;
  MiCopyTopLevelMappings(a1, v4);
  *v5 = v6;
  if ( (unsigned __int64)(v5 + 0x12090482600LL) <= 0x7F8 )
    MiWritePteShadow(v5, v6);
  *(_QWORD *)(v4 + 3944) = v3;
  if ( v4 + 0x90482413F68LL <= 0x7F8 )
    MiWritePteShadow(v4 + 3944, v3);
  return MiUnmapPageInHyperSpaceWorker(v4, v8);
}
