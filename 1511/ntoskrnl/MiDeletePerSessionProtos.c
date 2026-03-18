/*
 * XREFs of MiDeletePerSessionProtos @ 0x1401E2DAC
 * Callers:
 *     MiDeleteSessionDriverProtos @ 0x14050BE0C (MiDeleteSessionDriverProtos.c)
 *     MiFreeSubsectionProtos @ 0x14062C3B4 (MiFreeSubsectionProtos.c)
 * Callees:
 *     MiDeleteLockedTransitionPte @ 0x140010C30 (MiDeleteLockedTransitionPte.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140065F30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockProtoPoolPage @ 0x14006A190 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 *     MiLockLeafPage @ 0x1400A2340 (MiLockLeafPage.c)
 *     MiClearPfnImageVerified @ 0x1400B5370 (MiClearPfnImageVerified.c)
 *     MiReleasePageFileSpace @ 0x1400E5464 (MiReleasePageFileSpace.c)
 *     KeSetPagePrivilege @ 0x1401C3384 (KeSetPagePrivilege.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiDeletePerSessionProtos(__int64 *a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // r14
  __int64 v3; // rax
  unsigned __int8 v4; // di
  __int64 v5; // rbp
  __int64 v6; // rsi
  unsigned __int64 v7; // r12
  __int64 v8; // r15
  unsigned __int64 v9; // rax
  __int64 v10; // r8
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int8 v13; // [rsp+60h] [rbp+8h] BYREF

  v1 = a1[4];
  v2 = 0LL;
  v3 = a1[3];
  v4 = 17;
  *((_QWORD *)&v12 + 1) = 0LL;
  v5 = *a1;
  *(_QWORD *)&v12 = *a1;
  v6 = *(unsigned int *)(v3 + 44);
  v13 = 17;
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
          v2 = MiLockProtoPoolPage(v1, &v13);
          if ( v2 )
            break;
          MmAccessFault(2uLL, v1, 0, 0LL);
        }
        v4 = v13;
      }
      v8 = MiLockLeafPage(v1, 0);
      v9 = MI_READ_PTE_LOCK_FREE((__int64 *)v1);
      if ( v8 )
      {
        if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x80000) != 0 && ((*(_QWORD *)(v8 + 40) >> 54) & 7) == 3 )
        {
          MiRemoveLockedPageChargeAndDecRef(v8);
          KeSetPagePrivilege((v8 + 0x58000000000LL) / 48, &v12, 16);
          MiClearPfnImageVerified(v8, 4u);
          v5 = v12;
        }
        LOBYTE(v10) = 17;
        if ( (unsigned int)MiDeleteLockedTransitionPte((_QWORD *)v1, v8, v10, 1) == 3 )
          --v6;
      }
      else
      {
        if ( !v9 )
          break;
        if ( (v9 & 0x400) == 0 && v9 != 768 )
          MiReleasePageFileSpace((__int64)MiSystemPartition, v9, 1);
      }
      v5 += 4096LL;
      v1 += 8LL;
      *(_QWORD *)&v12 = v5;
    }
    while ( v1 < v7 );
    if ( v4 != 17 )
      MiUnlockProtoPoolPage(v2, v4);
  }
  return v6;
}
