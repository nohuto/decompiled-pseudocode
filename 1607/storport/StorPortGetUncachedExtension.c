/*
 * XREFs of StorPortGetUncachedExtension @ 0x1C000E9C0
 * Callers:
 *     StorPortGetUncachedExtensionVrfy @ 0x1C00622A0 (StorPortGetUncachedExtensionVrfy.c)
 * Callees:
 *     StorpUpdateUncachedExtensionAllocationRegion @ 0x1C002FBD4 (StorpUpdateUncachedExtensionAllocationRegion.c)
 *     RaidInitializeDma @ 0x1C00581F8 (RaidInitializeDma.c)
 *     StorAllocateContiguousMemory @ 0x1C00587CC (StorAllocateContiguousMemory.c)
 *     RaidIsDmaInitialized @ 0x1C005AAC8 (RaidIsDmaInitialized.c)
 */

__int64 __fastcall StorPortGetUncachedExtension(__int64 a1, __int64 a2, int a3)
{
  __int64 *v3; // rax
  unsigned int v4; // edi
  __int64 v7; // rbx
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r9
  int ContiguousMemory; // eax
  __int64 v15; // r9
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  bool v19; // zf
  unsigned int v20; // [rsp+70h] [rbp+8h] BYREF

  v3 = *(__int64 **)(a1 - 16);
  v4 = 0x80000000;
  v20 = 0x80000000;
  v7 = *v3;
  if ( !*v3 )
    return 0LL;
  if ( !*(_DWORD *)(v7 + 744) )
  {
    if ( !(unsigned __int8)RaidIsDmaInitialized(v7 + 696)
      && (int)RaidInitializeDma(v9, *(_QWORD *)(v7 + 32), v7 + 304) < 0 )
    {
      return 0LL;
    }
    if ( a2 )
    {
      if ( (*(_DWORD *)(a2 + 220) & 4) != 0 )
      {
        v4 = *(_DWORD *)(v7 + 4736);
        v20 = v4;
      }
      if ( *(_BYTE *)(a2 + 144) == 2 )
      {
        if ( *(_QWORD *)(v7 + 4368) < 0x100000000uLL )
          *(_QWORD *)(v7 + 4368) = -1LL;
        *(_QWORD *)(v7 + 4384) = 0x100000000LL;
      }
      else
      {
        if ( *(_BYTE *)(a2 + 144) != 3 )
        {
          if ( *(_BYTE *)(a2 + 144) == 4 )
          {
            if ( *(_QWORD *)(v7 + 4368) < 0x100000000uLL )
              *(_QWORD *)(v7 + 4368) = -1LL;
            if ( HighestPhysicalAddress != -1 )
            {
              if ( (_DWORD)HighestPhysicalAddress )
              {
                if ( (unsigned __int64)HighestPhysicalAddress > 0x100000000LL
                  && *(_QWORD *)(v7 + 4368) >= (HighestPhysicalAddress & 0xFFFFFFFF00000000uLL) )
                {
                  v10 = (HighestPhysicalAddress & 0xFFFFFFFF00000000uLL) - 1;
                  *(_QWORD *)(v7 + 4368) = v10;
                  v11 = v10 & 0xFFFFFFFF00000000uLL;
                  if ( *(_QWORD *)(v7 + 4376) > v11 )
                    *(_QWORD *)(v7 + 4376) = v11;
                }
              }
            }
            v12 = *(_QWORD *)(v7 + 4368);
            *(_QWORD *)(v7 + 4384) = 0x100000000LL;
            *(_QWORD *)(v7 + 4400) = v12;
            StorpUpdateUncachedExtensionAllocationRegion(v7, &v20, 0xFFFFFFFF00000000uLL);
            v4 = v20;
          }
          goto LABEL_28;
        }
        if ( *(_QWORD *)(v7 + 4368) < 0x100000000uLL )
          *(_QWORD *)(v7 + 4368) = -1LL;
        *(_QWORD *)(v7 + 4384) = 0LL;
      }
      *(_QWORD *)(v7 + 4400) = -1LL;
    }
LABEL_28:
    v13 = *(_QWORD *)(v7 + 4368);
    if ( v7 == -696 )
    {
      ContiguousMemory = -1073741811;
    }
    else
    {
      if ( !v13 )
      {
        LODWORD(v13) = -1;
        if ( *(_DWORD *)(v7 + 720) == 3 )
          LODWORD(v13) = -1;
      }
      ContiguousMemory = StorAllocateContiguousMemory(
                           *(_DWORD *)(v7 + 4360),
                           a3,
                           *(_QWORD *)(v7 + 4376),
                           v13,
                           *(_QWORD *)(v7 + 4384),
                           *(_DWORD *)(v7 + 4360),
                           v4,
                           v7 + 728);
      if ( ContiguousMemory >= 0 )
        goto LABEL_41;
    }
    if ( v4 != 0x80000000 )
    {
      v15 = *(_QWORD *)(v7 + 4368);
      if ( v7 == -696 )
        return 0LL;
      if ( !v15 )
      {
        LODWORD(v15) = -1;
        if ( *(_DWORD *)(v7 + 720) == 3 )
          LODWORD(v15) = -1;
      }
      ContiguousMemory = StorAllocateContiguousMemory(
                           *(_DWORD *)(v7 + 4360),
                           a3,
                           *(_QWORD *)(v7 + 4376),
                           v15,
                           *(_QWORD *)(v7 + 4384),
                           *(_DWORD *)(v7 + 4360),
                           0x80000000,
                           v7 + 728);
    }
    if ( ContiguousMemory >= 0 )
    {
LABEL_41:
      if ( *(_BYTE *)(a2 + 144) == 4 )
      {
        v16 = *(_QWORD *)(v7 + 736);
        v17 = v16 & 0xFFFFFFFF00000000uLL;
        v18 = v16 | 0xFFFFFFFF;
        v19 = *(_QWORD *)(v7 + 4376) == 0LL;
        *(_QWORD *)(v7 + 4392) = v16 & 0xFFFFFFFF00000000uLL;
        if ( !v19 )
          v17 = v16;
        *(_QWORD *)(v7 + 4400) = v18;
        *(_QWORD *)(v7 + 4376) = v17;
        *(_QWORD *)(v7 + 4368) = v18;
      }
      return *(_QWORD *)(v7 + 728);
    }
    return 0LL;
  }
  return *(_QWORD *)(v7 + 728);
}
