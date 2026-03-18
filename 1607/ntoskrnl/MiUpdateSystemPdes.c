/*
 * XREFs of MiUpdateSystemPdes @ 0x1401E0EC4
 * Callers:
 *     MmInSwapProcess @ 0x140091564 (MmInSwapProcess.c)
 *     MiSyncSystemPdes @ 0x14010164C (MiSyncSystemPdes.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x140034990 (MiMapPageInHyperSpaceWorker.c)
 *     MiCopyTopLevelMappings @ 0x140101694 (MiCopyTopLevelMappings.c)
 *     MiGetTopPteAddress @ 0x14012A3F0 (MiGetTopPteAddress.c)
 *     MiPteInShadowRange @ 0x1401EF3B8 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF658 (MiWritePteShadow.c)
 */

unsigned __int64 __fastcall MiUpdateSystemPdes(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 *v5; // r15
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int8 v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = ((unsigned int)MiGetTopPteAddress(qword_140327F90 + 276840816) >> 3) & 0x1FF;
  v3 = MEMORY[0xFFFFF6FB7DBEDF68] ^ (MEMORY[0xFFFFF6FB7DBEDF68] ^ (*(_QWORD *)(a1 + 40) >> 12 << 12)) & 0xFFFFFFFFF000LL;
  v4 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(a1 + 40) >> 12, &v13, 0x80000000);
  v5 = (__int64 *)(v4 + 8 * v2);
  v6 = *v5;
  MiCopyTopLevelMappings(a1, v4);
  *v5 = v6;
  if ( (unsigned int)MiPteInShadowRange(v5, v7) )
    MiWritePteShadow(v9, v6);
  *(_QWORD *)(v4 + 3944) = v3;
  if ( (unsigned int)MiPteInShadowRange(v4 + 3944, v8) )
    MiWritePteShadow(v11, v3);
  LOBYTE(v10) = v13;
  return MiUnmapPageInHyperSpaceWorker(v4, v10);
}
