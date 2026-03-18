/*
 * XREFs of MiInitializePfnForOtherProcess @ 0x140018484
 * Callers:
 *     MiInitializeSystemPageTable @ 0x140017F70 (MiInitializeSystemPageTable.c)
 *     MiDuplicateCloneLeaf @ 0x1400F3798 (MiDuplicateCloneLeaf.c)
 *     MiMapPageFileHash @ 0x140108CF0 (MiMapPageFileHash.c)
 *     MiDemoteLargePage @ 0x140132C08 (MiDemoteLargePage.c)
 *     MiMakeOutswappedPageResident @ 0x1401CFB54 (MiMakeOutswappedPageResident.c)
 *     MmCreateProcessAddressSpace @ 0x1403CB7AC (MmCreateProcessAddressSpace.c)
 *     MiMapNewSession @ 0x1404FFD90 (MiMapNewSession.c)
 *     MiAllocateTopLevelPage @ 0x140621CD4 (MiAllocateTopLevelPage.c)
 *     MiInitializeShadowPageTable @ 0x1406260E8 (MiInitializeShadowPageTable.c)
 *     MiInitializeBootProcess @ 0x14076CFE4 (MiInitializeBootProcess.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 */

__int64 __fastcall MiInitializePfnForOtherProcess(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // rbx
  unsigned __int8 v8; // si
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rbx

  v5 = 48 * a1 - 0x58000000000LL;
  if ( (a4 & 0x10) != 0 )
  {
    v8 = 17;
    MiLockPageAtDpcInline(v5);
  }
  else
  {
    v8 = MiLockPageInline(v5);
  }
  *(_QWORD *)(v5 + 8) = a2;
  *(_QWORD *)(v5 + 24) &= 0xF0FFFFFFFFFFFFFFuLL;
  v9 = *(_QWORD *)(v5 + 24);
  *(_QWORD *)(v5 + 16) = 128LL;
  *(_WORD *)(v5 + 32) = 1;
  if ( a4 < 0 )
  {
    result = v9 ^ (v9 ^ (v9 + 1)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(v5 + 24) = result;
  }
  else
  {
    result = 0xC000000000000001uLL;
    *(_QWORD *)(v5 + 24) = v9 & 0xC000000000000000uLL | 1;
  }
  *(_BYTE *)(v5 + 34) |= 0x10u;
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v8 != 17 )
  {
    result = v8;
    __writecr8(v8);
  }
  if ( a3 != -1 )
  {
    *(_QWORD *)(v5 + 40) ^= (*(_QWORD *)(v5 + 40) ^ a3) & 0xFFFFFFFFFLL;
    v11 = 48 * a3 - 0x58000000000LL;
    LOBYTE(result) = MiLockPageInline(v11);
    *(_QWORD *)(v11 + 24) ^= (*(_QWORD *)(v11 + 24) ^ (*(_QWORD *)(v11 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    result = (unsigned __int8)result;
    __writecr8((unsigned __int8)result);
  }
  return result;
}
