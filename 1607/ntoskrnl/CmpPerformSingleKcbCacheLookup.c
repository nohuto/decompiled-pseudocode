/*
 * XREFs of CmpPerformSingleKcbCacheLookup @ 0x140518740
 * Callers:
 *     CmpPerformCompleteKcbCacheLookup @ 0x140518418 (CmpPerformCompleteKcbCacheLookup.c)
 * Callees:
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14010BF00 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpGetComponentNameAtIndex @ 0x1404036B0 (CmpGetComponentNameAtIndex.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x140403838 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpLockKcbExclusive @ 0x140420F10 (CmpLockKcbExclusive.c)
 *     CmpFindKcbInHashEntryByName @ 0x140435B44 (CmpFindKcbInHashEntryByName.c)
 *     CmpUnlockHashEntry @ 0x140436D90 (CmpUnlockHashEntry.c)
 *     CmpUnlockKcb @ 0x1404374E0 (CmpUnlockKcb.c)
 *     CmpLockHashEntryShared @ 0x14051888C (CmpLockHashEntryShared.c)
 *     CmpGetComponentHashAtIndex @ 0x140518930 (CmpGetComponentHashAtIndex.c)
 *     CmpReferenceKeyControlBlock @ 0x140518944 (CmpReferenceKeyControlBlock.c)
 */

__int64 __fastcall CmpPerformSingleKcbCacheLookup(
        volatile signed __int32 *a1,
        ULONG_PTR a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 *a6,
        char *a7,
        _WORD *a8)
{
  unsigned int v8; // esi
  __int16 v10; // r12
  char v11; // di
  __int64 v14; // r14
  unsigned int v15; // ebx
  __int64 ComponentNameAtIndex; // rdi
  __int64 v17; // rcx
  __int64 KcbInHashEntryByName; // rax
  char *v19; // rdi
  char v21; // [rsp+20h] [rbp-38h]

  v8 = 0;
  v10 = 0;
  v21 = 0;
  v11 = 0;
  v14 = (__int64)a1;
  if ( CmpReferenceKeyControlBlockUnsafe(a1) )
  {
    v15 = *(_DWORD *)(v14 + 8);
    if ( a3 < a4 )
    {
      while ( 1 )
      {
        ComponentNameAtIndex = CmpGetComponentNameAtIndex(a5, a3);
        v15 = 37 * v15 + CmpGetComponentHashAtIndex(v17, a3);
        CmpLockHashEntryShared(a2);
        KcbInHashEntryByName = CmpFindKcbInHashEntryByName(a2, v15, v14, ComponentNameAtIndex);
        v19 = (char *)KcbInHashEntryByName;
        if ( !KcbInHashEntryByName )
          break;
        CmpLockKcbExclusive(KcbInHashEntryByName);
        if ( !(unsigned __int8)CmpReferenceKeyControlBlock(v19) )
        {
          CmpUnlockKcb(v19);
          break;
        }
        CmpUnlockKcb(v19);
        if ( a3 == a4 - 1 )
          v21 = 1;
        else
          CmpUnlockHashEntry(a2, v15);
        CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)v14);
        v14 = (__int64)v19;
        ++v10;
        if ( (v19[178] & 0x10) == 0 && ++a3 < a4 )
          continue;
        goto LABEL_11;
      }
      CmpUnlockHashEntry(a2, v15);
LABEL_11:
      v11 = v21;
    }
    *a6 = v14;
    *a7 = v11;
    *a8 = v10;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v8;
}
