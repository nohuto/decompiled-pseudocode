/*
 * XREFs of StorPortGetUncachedExtension @ 0x1C0008CA0
 * Callers:
 *     StorPortGetUncachedExtensionVrfy @ 0x1C00562A0 (StorPortGetUncachedExtensionVrfy.c)
 * Callees:
 *     RaidDmaAllocateUncachedExtension @ 0x1C0008DDC (RaidDmaAllocateUncachedExtension.c)
 *     RaidInitializeDma @ 0x1C004D0B4 (RaidInitializeDma.c)
 *     RaidIsDmaInitialized @ 0x1C004FC3C (RaidIsDmaInitialized.c)
 */

__int64 __fastcall StorPortGetUncachedExtension(__int64 a1, __int64 a2, int a3)
{
  unsigned int v5; // ebp
  __int64 v6; // rbx
  __int64 v7; // rcx
  int UncachedExtension; // eax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  bool v16; // zf

  v5 = 0x80000000;
  v6 = **(_QWORD **)(a1 - 16);
  if ( v6 )
  {
    if ( *(_DWORD *)(v6 + 744) )
      return *(_QWORD *)(v6 + 728);
    if ( (unsigned __int8)RaidIsDmaInitialized(v6 + 696)
      || (int)RaidInitializeDma(v7, *(_QWORD *)(v6 + 32), v6 + 304) >= 0 )
    {
      if ( !a2 )
        goto LABEL_11;
      switch ( *(_BYTE *)(a2 + 144) )
      {
        case 2:
          v12 = -1LL;
          if ( *(_QWORD *)(v6 + 4368) < 0x100000000uLL )
            *(_QWORD *)(v6 + 4368) = -1LL;
          break;
        case 3:
          v12 = -1LL;
          if ( *(_QWORD *)(v6 + 4368) < 0x100000000uLL )
            *(_QWORD *)(v6 + 4368) = -1LL;
          *(_QWORD *)(v6 + 4384) = 0LL;
          goto LABEL_30;
        case 4:
          if ( *(_QWORD *)(v6 + 4368) < 0x100000000uLL )
            *(_QWORD *)(v6 + 4368) = -1LL;
          if ( HighestPhysicalAddress != -1 )
          {
            if ( (_DWORD)HighestPhysicalAddress )
            {
              if ( (unsigned __int64)HighestPhysicalAddress > 0x100000000LL
                && *(_QWORD *)(v6 + 4368) >= (HighestPhysicalAddress & 0xFFFFFFFF00000000uLL) )
              {
                v10 = (HighestPhysicalAddress & 0xFFFFFFFF00000000uLL) - 1;
                *(_QWORD *)(v6 + 4368) = v10;
                v11 = v10 & 0xFFFFFFFF00000000uLL;
                if ( *(_QWORD *)(v6 + 4376) > v11 )
                  *(_QWORD *)(v6 + 4376) = v11;
              }
            }
          }
          v12 = *(_QWORD *)(v6 + 4368);
          break;
        default:
          goto LABEL_9;
      }
      *(_QWORD *)(v6 + 4384) = 0x100000000LL;
LABEL_30:
      *(_QWORD *)(v6 + 4400) = v12;
LABEL_9:
      if ( (*(_DWORD *)(a2 + 220) & 4) != 0 )
        v5 = *(_DWORD *)(v6 + 4736);
LABEL_11:
      UncachedExtension = RaidDmaAllocateUncachedExtension(
                            (int)v6 + 696,
                            a3,
                            *(_QWORD *)(v6 + 4376),
                            *(_QWORD *)(v6 + 4368),
                            *(_QWORD *)(v6 + 4384),
                            *(_DWORD *)(v6 + 4360),
                            v5,
                            v6 + 728);
      if ( UncachedExtension >= 0 )
        goto LABEL_12;
      if ( v5 != 0x80000000 )
        UncachedExtension = RaidDmaAllocateUncachedExtension(
                              (int)v6 + 696,
                              a3,
                              *(_QWORD *)(v6 + 4376),
                              *(_QWORD *)(v6 + 4368),
                              *(_QWORD *)(v6 + 4384),
                              *(_DWORD *)(v6 + 4360),
                              0x80000000,
                              v6 + 728);
      if ( UncachedExtension >= 0 )
      {
LABEL_12:
        if ( *(_BYTE *)(a2 + 144) == 4 )
        {
          v13 = *(_QWORD *)(v6 + 736);
          v14 = v13 & 0xFFFFFFFF00000000uLL;
          v15 = v13 | 0xFFFFFFFF;
          v16 = *(_QWORD *)(v6 + 4376) == 0LL;
          *(_QWORD *)(v6 + 4392) = v13 & 0xFFFFFFFF00000000uLL;
          if ( !v16 )
            v14 = v13;
          *(_QWORD *)(v6 + 4400) = v15;
          *(_QWORD *)(v6 + 4376) = v14;
          *(_QWORD *)(v6 + 4368) = v15;
        }
        return *(_QWORD *)(v6 + 728);
      }
    }
  }
  return 0LL;
}
