/*
 * XREFs of MmAllocateContiguousNodeMemory @ 0x14009A6A0
 * Callers:
 *     MmAllocateContiguousMemorySpecifyCacheNode @ 0x140131964 (MmAllocateContiguousMemorySpecifyCacheNode.c)
 *     HvlpAllocateOverlayPages @ 0x1401BFE1C (HvlpAllocateOverlayPages.c)
 *     IopInitializeInMemoryDumpData @ 0x1401C7484 (IopInitializeInMemoryDumpData.c)
 *     ViAllocateContiguousMemory @ 0x140708650 (ViAllocateContiguousMemory.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x14002B880 (MiMakeProtectionMask.c)
 *     MiAllocateContiguousMemory @ 0x14009A740 (MiAllocateContiguousMemory.c)
 */

__int64 __fastcall MmAllocateContiguousNodeMemory(int a1, __int64 a2, __int64 a3, __int16 a4, unsigned int a5, int a6)
{
  unsigned int ProtectionMask; // eax
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r11
  unsigned int v11; // r8d
  __int16 v12; // cx
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // r9
  unsigned int v16; // eax

  if ( (a4 & 0xFFF) != 0 )
    return 0LL;
  ProtectionMask = MiMakeProtectionMask(a5);
  v11 = ProtectionMask;
  if ( (v12 & 0x100) != 0 )
    return 0LL;
  if ( ProtectionMask == -1 )
    return 0LL;
  if ( (ProtectionMask & 5) != 4 )
    return 0LL;
  if ( (ProtectionMask & 2) != 0 )
  {
    v16 = ProtectionMask >> 3;
    if ( v16 == 1 || v16 == 3 && (v11 & 7) != 0 )
      return 0LL;
  }
  v13 = v10 >> 12;
  v14 = v8 >> 12;
  if ( v13 > qword_140326AD0 )
    v13 = qword_140326AD0;
  if ( v9 > v13 )
    return 0LL;
  else
    return MiAllocateContiguousMemory(a1, v9, v13, v14, v11, a6);
}
