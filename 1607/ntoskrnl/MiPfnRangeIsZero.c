/*
 * XREFs of MiPfnRangeIsZero @ 0x14013EC44
 * Callers:
 *     MiFreeUnusedPfnPages @ 0x14013E7A4 (MiFreeUnusedPfnPages.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140025B30 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiReleaseNonPagedResources @ 0x14013F08C (MiReleaseNonPagedResources.c)
 *     MiReturnPfnList @ 0x14013F0CC (MiReturnPfnList.c)
 *     MiDemoteLargePage @ 0x14013F184 (MiDemoteLargePage.c)
 *     MiReplicatePteChange @ 0x140148860 (MiReplicatePteChange.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1401E1924 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiPfnRangeIsZero(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r13d
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rbx
  __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  _KPROCESS *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  unsigned __int64 v15; // r12
  __int64 v16; // rdi
  __int64 v17; // r14
  __int64 v18; // rdx
  unsigned __int64 v19; // rsi
  __int64 v20; // r15
  _QWORD *v21; // rbx
  __int64 v22; // r10
  __int64 v23; // rbx
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v26; // r10d
  __int64 v27; // r11
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 ValidKernelPte; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v31; // [rsp+30h] [rbp-D8h]
  _QWORD *v32; // [rsp+38h] [rbp-D0h]
  __int64 v33; // [rsp+40h] [rbp-C8h]
  __int64 v34; // [rsp+48h] [rbp-C0h]
  _QWORD *v35; // [rsp+50h] [rbp-B8h]
  __int64 v36; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v37; // [rsp+60h] [rbp-A8h]
  int v38; // [rsp+68h] [rbp-A0h] BYREF
  __int16 v39; // [rsp+6Ch] [rbp-9Ch]
  __int64 v40; // [rsp+70h] [rbp-98h]
  __int64 v41; // [rsp+78h] [rbp-90h]
  __int64 v42; // [rsp+80h] [rbp-88h]
  _QWORD v43[4]; // [rsp+128h] [rbp+20h] BYREF

  v2 = 0;
  v40 = 20LL;
  memset(v43, 0, sizeof(v43));
  v3 = a2;
  v4 = a1;
  v38 = 0;
  v39 = 0;
  v41 = 0LL;
  v42 = 0LL;
  if ( a1 >= a2 )
    return;
  v5 = MmPfnDatabase + (MxPfnAllocation << 12);
  if ( (v5 & 0x1FFFFF) != 0 )
    v6 = ((v5 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  else
    v6 = 0LL;
  v7 = a1;
  while ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v7) )
  {
LABEL_9:
    v7 = (v7 + 0x200000) & 0xFFFFFFFFFFE00000uLL;
    if ( v7 >= v3 )
      goto LABEL_13;
  }
  if ( v11 + ((v7 >> 18) & 0x3FFFFFF8) != v6 )
  {
    if ( !(unsigned int)MiDemoteLargePage(v7, &v38) )
    {
      MiFlushTbList((__int64)&v38, v8, v9, v10);
      return;
    }
    goto LABEL_9;
  }
  v3 = v7 & 0xFFFFFFFFFFE00000uLL;
LABEL_13:
  if ( v4 >= v3 )
    return;
  MiFlushTbList((__int64)&v38, v8, v9, v10);
  v13 = 0LL;
  v32 = 0LL;
  v14 = 0LL;
  v33 = 0LL;
  v31 = 0LL;
  v15 = v3 - 1;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0x7FFFFFFFF8LL;
  while ( 2 )
  {
    v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v19 = v4;
    v37 = v4;
    v15 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( v4 > v15 )
      goto LABEL_32;
    v36 = v2 - 1;
    v20 = v31;
    v34 = 0LL;
    while ( 2 )
    {
      ValidKernelPte = MI_READ_PTE_LOCK_FREE(v19);
      v21 = (_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&ValidKernelPte) >> 12) & 0xFFFFFFFFFLL)
                     - 0x58000000000LL);
      v35 = v21;
      if ( !v2 )
      {
        ValidKernelPte = MiMakeValidKernelPte(*(__int64 *)((char *)&MiState[597] + v20), 1, v19);
        v23 = 48 * (v21[5] & 0xFFFFFFFFFLL) - 0x58000000000LL;
        MiLockPageAtDpcInline(v23);
        *(_QWORD *)(v23 + 24) ^= (*(_QWORD *)(v23 + 24) ^ (*(_QWORD *)(v23 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v24 = ValidKernelPte;
        v21 = v35;
        goto LABEL_24;
      }
      v13 = (__int64)((v19 << 25) - v22) >> 16;
      do
      {
        v25 = MI_READ_PTE_LOCK_FREE(v13);
        if ( v25 != v27 )
          break;
        v13 += 8LL;
        ++v26;
      }
      while ( v26 < 0x200 );
      if ( v26 == 512 )
      {
        v24 = MiMakeValidKernelPte(*(__int64 *)((char *)&MiState[597] + v20), 4, 0LL) & 0xFFFFFFFFFFFFFEBDuLL | 0x42;
LABEL_24:
        if ( qword_140327728 == (PVOID)qword_140327730 )
          v24 = 0LL;
        *(_QWORD *)((char *)v43 + v20) = v24;
        MI_INTERLOCKED_EXCHANGE_PTE(v19, v24);
        if ( v2 == 3 )
        {
          v17 = v19;
          if ( !v16 )
            v16 = v19;
        }
        ++v33;
        v28 = (v19 << 25) - v34;
        *v21 = v32;
        v32 = v21;
        MiInsertTbFlushEntry((__int64)&v38, v28 >> 16, 1LL, 0);
      }
      v19 += 8LL;
      if ( v19 <= v15 )
        continue;
      break;
    }
    v4 = v37;
    v14 = v31;
LABEL_32:
    MiFlushTbList((__int64)&v38, (_KPROCESS *)v18, v12, v13);
    v13 = 0LL;
    if ( *(_QWORD *)((char *)v43 + v14) || qword_140327728 == (PVOID)qword_140327730 )
    {
      v14 += 8LL;
      ++v2;
      v31 = v14;
      v18 = 0x7FFFFFFFF8LL;
      if ( v2 < 4 )
        continue;
    }
    break;
  }
  if ( v16 )
  {
    v29 = 3LL;
    do
    {
      v16 = v16 << 25 >> 16;
      v17 = v17 << 25 >> 16;
      --v29;
    }
    while ( v29 );
    MiReplicatePteChange(v16, v17);
  }
  MiReturnPfnList(v32, v18);
  MiReleaseNonPagedResources(MiSystemPartition, v33);
}
