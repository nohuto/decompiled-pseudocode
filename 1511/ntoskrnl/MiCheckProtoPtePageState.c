/*
 * XREFs of MiCheckProtoPtePageState @ 0x14001103C
 * Callers:
 *     MmPurgeSection @ 0x1400107A0 (MmPurgeSection.c)
 *     MiFlushSectionInternal @ 0x140063C80 (MiFlushSectionInternal.c)
 *     MiIsSubsectionClean @ 0x1401D12F4 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x1401D1590 (MiPurgeSubsection.c)
 * Callees:
 *     MiLockOwnedProtoPage @ 0x1400111C0 (MiLockOwnedProtoPage.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiAddLockedPageCharge @ 0x1400AA108 (MiAddLockedPageCharge.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiCheckProtoPtePageState(ULONG_PTR BugCheckParameter1, unsigned __int8 *a2)
{
  ULONG_PTR v4; // r14
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // r9
  __int64 v8; // rdi
  unsigned __int8 v9; // al
  unsigned __int8 v10; // bp
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v4 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        v5 = MI_READ_PTE_LOCK_FREE(v4);
        v14 = v5;
        v6 = v5;
        if ( (v5 & 1) != 0 )
        {
          if ( (v5 & 0x200) != 0 )
            goto LABEL_16;
          v5 = MI_READ_PTE_LOCK_FREE(&v14);
        }
        else if ( (v5 & 0x400) != 0 || (v5 & 0x800) == 0 )
        {
          goto LABEL_16;
        }
      }
      while ( !(unsigned int)MI_IS_PFN((v5 >> 12) & 0xFFFFFFFFFLL) );
      v8 = 48 * v7 - 0x58000000000LL;
      v9 = MiLockPageInline(v8);
      *a2 = v9;
      v10 = v9;
      v11 = MI_READ_PTE_LOCK_FREE(v4);
      if ( v11 == v6 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v10);
    }
    if ( (v11 & 1) != 0 )
      break;
    if ( (*(_BYTE *)(v8 + 34) & 7u) < 6 )
      goto LABEL_15;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v10);
    MmAccessFault(2uLL, BugCheckParameter1);
  }
  if ( (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
  {
    MiAddLockedPageCharge(v8, 1LL);
    LOBYTE(v12) = *a2;
    MiLockOwnedProtoPage(v8, v12);
    return v8;
  }
LABEL_15:
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v10);
LABEL_16:
  *a2 = 17;
  return 0LL;
}
