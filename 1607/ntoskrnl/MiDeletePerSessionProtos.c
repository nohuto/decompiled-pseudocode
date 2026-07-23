/*
 * XREFs of MiDeletePerSessionProtos @ 0x1401F4CF8
 * Callers:
 *     MiDeleteSessionDriverProtos @ 0x140546890 (MiDeleteSessionDriverProtos.c)
 *     MiFreeSubsectionProtos @ 0x140662180 (MiFreeSubsectionProtos.c)
 * Callees:
 *     MiClearPfnImageVerified @ 0x14001D838 (MiClearPfnImageVerified.c)
 *     MiReleasePageFileSpace @ 0x140021DB8 (MiReleasePageFileSpace.c)
 *     MiLockLeafPage @ 0x14002E5D0 (MiLockLeafPage.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14004E2C0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockProtoPoolPage @ 0x14004E900 (MiLockProtoPoolPage.c)
 *     MiDeleteTransitionPte @ 0x1400B6F88 (MiDeleteTransitionPte.c)
 *     KeSetPagePrivilege @ 0x140147314 (KeSetPagePrivilege.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiDeletePerSessionProtos(__int64 *a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rsi
  __int64 v3; // rax
  unsigned __int8 v4; // di
  __int64 v5; // r14
  __int64 v6; // rbp
  unsigned __int64 v7; // r12
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 DemandZeroPte; // rax
  unsigned __int64 v13; // rdx
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int8 v16; // [rsp+60h] [rbp+8h] BYREF

  v1 = a1[4];
  v2 = 0LL;
  v3 = a1[3];
  v4 = 17;
  *((_QWORD *)&v15 + 1) = 0LL;
  v5 = *a1;
  *(_QWORD *)&v15 = *a1;
  v6 = *(unsigned int *)(v3 + 44);
  v16 = 17;
  v7 = v1 + 8 * v6;
  if ( v1 < v7 )
  {
    do
    {
      if ( (v1 & 0xFFF) == 0 || v4 == 17 )
      {
        if ( v4 != 17 )
          MiUnlockProtoPoolPage(v2, v4);
        while ( 1 )
        {
          v2 = MiLockProtoPoolPage(v1, &v16);
          if ( v2 )
            break;
          MmAccessFault(2uLL, v1, 0, 0LL);
        }
        v4 = v16;
      }
      v8 = MiLockLeafPage(v1, 0);
      v9 = MI_READ_PTE_LOCK_FREE(v1);
      if ( v8 )
      {
        if ( (MiFlags & 0x4000) != 0 && (MiFlags & 0x20000) != 0 && ((*(_QWORD *)(v8 + 40) >> 54) & 7) == 3 )
        {
          MiRemoveLockedPageChargeAndDecRef(v8, v9, v10, v11);
          KeSetPagePrivilege((v8 + 0x58000000000LL) / 48, &v15, 16);
          MiClearPfnImageVerified(v8, 4u);
          v5 = v15;
        }
        if ( (unsigned int)MiDeleteTransitionPte((__int64 *)v1, v8, 0x11u, 1) == 3 )
          --v6;
      }
      else
      {
        if ( !v9 )
          break;
        if ( (v9 & 0x400) == 0 )
        {
          DemandZeroPte = MiMakeDemandZeroPte(24);
          if ( v13 != DemandZeroPte )
            MiReleasePageFileSpace((struct _KEVENT *)MiSystemPartition, v13, 1LL);
        }
      }
      v5 += 4096LL;
      v1 += 8LL;
      *(_QWORD *)&v15 = v5;
    }
    while ( v1 < v7 );
    if ( v4 != 17 )
      MiUnlockProtoPoolPage(v2, v4);
  }
  return v6;
}
