/*
 * XREFs of MiCombineCandidate @ 0x140227894
 * Callers:
 *     MiCapturePfnVm @ 0x140227228 (MiCapturePfnVm.c)
 *     MiCombineAllPhysicalMemory @ 0x1402273C8 (MiCombineAllPhysicalMemory.c)
 *     MiCombineWorkingSet @ 0x140227B38 (MiCombineWorkingSet.c)
 *     MiCrcStillIntact @ 0x140229DF8 (MiCrcStillIntact.c)
 *     MiMapArbitraryPage @ 0x14022AC30 (MiMapArbitraryPage.c)
 *     MiRecheckCombineVm @ 0x14022AF38 (MiRecheckCombineVm.c)
 *     MiSharePages @ 0x14022B7E8 (MiSharePages.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiGetPagePrivilege @ 0x1400597B0 (MiGetPagePrivilege.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MI_IS_RESET_PTE @ 0x1402259E8 (MI_IS_RESET_PTE.c)
 *     MiInvalidPteConforms @ 0x140225BA4 (MiInvalidPteConforms.c)
 *     MiValidCombineProtection @ 0x14022C9D8 (MiValidCombineProtection.c)
 */

__int64 __fastcall MiCombineCandidate(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int16 *v4; // rax
  unsigned __int64 v5; // r8
  __int16 **v6; // r9
  unsigned __int8 v7; // cl
  __int64 PteShadow; // rbx
  int v9; // eax
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  char v15; // cl

  v2 = *(_QWORD *)(a2 + 8);
  v4 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a2 + 40)) >> 8) & 0x3FF);
  if ( v4 != *v6 && v6 != (__int16 **)&unk_14034EF18 )
    return 0LL;
  if ( (v5 & 0x200000000000000LL) != 0 )
    return 0LL;
  if ( !*(_QWORD *)a2 )
    return 0LL;
  v7 = *(_BYTE *)(a2 + 35);
  if ( (v7 & 8) != 0
    || v2 + 0x98000000000LL > 0x7FFFFFFFFFLL
    || (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) != 0
    || ((v5 >> 54) & 7) == 4
    || (v2 | 0x8000000000000000uLL) <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL)
                                     - 0x98000000000LL
    && (v2 | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL
    && ((v7 >> 5) & 1) != 0 )
  {
    return 0LL;
  }
  PteShadow = *(_QWORD *)(a2 + 16);
  if ( (unsigned __int64)(a2 + 0x90482413010LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(a2 + 16, *(_QWORD *)(a2 + 16));
  LOBYTE(v9) = MiInvalidPteConforms(PteShadow);
  if ( !v9 || !(unsigned int)MiValidCombineProtection((v10 >> 5) & 0x1F) || (unsigned int)MiGetPagePrivilege(a2, 0, 0LL) )
    return 0LL;
  v13 = (__int64)(v2 << 25) >> 16;
  if ( v2 > (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
  {
    if ( v13 + 0x400000000000LL > 0xF7FFFFFFFFFLL )
    {
      if ( v13 + 0x70000000000LL > 0x7FFFFFFFFFLL || v13 <= qword_14034EAF0 )
        return 0LL;
      v14 = 3LL;
    }
    else
    {
      v14 = 2LL;
    }
  }
  else
  {
    v14 = 1LL;
  }
  v15 = *(_BYTE *)(a2 + 34) & 7;
  if ( ((unsigned __int8)(v15 - 2) <= 1u && !*(_WORD *)(a2 + 32)
     || v15 == 6
     && (*(_QWORD *)(a2 + 40) & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL
     && *(_WORD *)(a2 + 32) == 1
     && (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1)
    && ((_DWORD)v14 != 1 || !MI_IS_RESET_PTE(PteShadow, v14, v11, v12)) )
  {
    return (unsigned int)v14;
  }
  return 0LL;
}
