/*
 * XREFs of MiInitializeTbFlushStamps @ 0x14004BACC
 * Callers:
 *     MiClearNonPagedPtes @ 0x140024520 (MiClearNonPagedPtes.c)
 *     MiDeleteSystemPagableVm @ 0x14004ACA0 (MiDeleteSystemPagableVm.c)
 *     MiReleasePtes @ 0x1400516D0 (MiReleasePtes.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1401EF3B8 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF658 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F25D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUpdatePageFileHighInPte @ 0x1401F2958 (MiUpdatePageFileHighInPte.c)
 */

__int64 __fastcall MiInitializeTbFlushStamps(__int64 a1)
{
  __int64 v1; // rax
  __int64 updated; // rax
  __int64 *v3; // r9
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = MI_READ_PTE_LOCK_FREE(a1);
  _InterlockedOr(v7, 0);
  updated = MiUpdatePageFileHighInPte(v1, (unsigned int)KiTbFlushTimeStamp);
  *v3 = updated;
  result = MiPteInShadowRange(v3, updated);
  if ( (_DWORD)result )
    return MiWritePteShadow(v6, v5);
  return result;
}
