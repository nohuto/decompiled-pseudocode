/*
 * XREFs of MiInitializePfnForOtherProcess @ 0x140021288
 * Callers:
 *     MiDuplicateCloneLeaf @ 0x14000155C (MiDuplicateCloneLeaf.c)
 *     MiInitializeSystemPageTable @ 0x140020B3C (MiInitializeSystemPageTable.c)
 *     MiMapPageFileHash @ 0x140116EA0 (MiMapPageFileHash.c)
 *     MiDemoteLargePage @ 0x14013F184 (MiDemoteLargePage.c)
 *     MiMakeOutswappedPageResident @ 0x1401DFC0C (MiMakeOutswappedPageResident.c)
 *     MmCreateProcessAddressSpace @ 0x14050921C (MmCreateProcessAddressSpace.c)
 *     MiMapNewSession @ 0x140536ED4 (MiMapNewSession.c)
 *     MiAllocateTopLevelPage @ 0x140656E44 (MiAllocateTopLevelPage.c)
 *     MiInitializeShadowPageTable @ 0x14065BA6C (MiInitializeShadowPageTable.c)
 *     MiInitializeBootProcess @ 0x1407B7300 (MiInitializeBootProcess.c)
 * Callees:
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiInitializePfnForOtherProcess(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v7; // rbx
  unsigned __int8 v8; // si
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // rbx

  v7 = 48 * a1 - 0x58000000000LL;
  if ( (a4 & 0x10) != 0 )
  {
    v8 = 17;
    MiLockPageAtDpcInline(v7);
  }
  else
  {
    v8 = MiLockPageInline(v7);
  }
  v11 = *(_QWORD *)(v7 + 24) & 0xF0FFFFFFFFFFFFFFuLL;
  *(_QWORD *)(v7 + 8) = a2;
  *(_QWORD *)(v7 + 24) = v11;
  *(_QWORD *)(v7 + 16) = MiMakeDemandZeroPte(4LL, v11, v9, v10);
  *(_WORD *)(v7 + 32) = 1;
  if ( a4 >= 0 )
  {
    result = 0xC000000000000001uLL;
    *(_QWORD *)(v7 + 24) = v12 & 0xC000000000000000uLL | 1;
  }
  else
  {
    result = v12 ^ (v12 ^ (v12 + 1)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(v7 + 24) = result;
  }
  *(_BYTE *)(v7 + 34) |= 0x10u;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v8 != 17 )
  {
    result = v8;
    __writecr8(v8);
  }
  if ( a3 != -1 )
  {
    *(_QWORD *)(v7 + 40) ^= (a3 ^ *(_QWORD *)(v7 + 40)) & 0xFFFFFFFFFLL;
    v14 = 48 * a3 - 0x58000000000LL;
    LOBYTE(result) = MiLockPageInline(v14);
    *(_QWORD *)(v14 + 24) ^= (*(_QWORD *)(v14 + 24) ^ (*(_QWORD *)(v14 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    result = (unsigned __int8)result;
    __writecr8((unsigned __int8)result);
  }
  return result;
}
