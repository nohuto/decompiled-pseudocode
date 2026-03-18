/*
 * XREFs of MiPfnRangeIsZero @ 0x140132700
 * Callers:
 *     MiFreeUnusedPfnPages @ 0x1401322A8 (MiFreeUnusedPfnPages.c)
 * Callees:
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiReleaseNonPagedResources @ 0x1400E9D1C (MiReleaseNonPagedResources.c)
 *     MiReturnPfnList @ 0x140132B4C (MiReturnPfnList.c)
 *     MiDemoteLargePage @ 0x140132C08 (MiDemoteLargePage.c)
 *     MiReplicatePteChange @ 0x14013F8C8 (MiReplicatePteChange.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1401D1940 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 */

void __fastcall MiPfnRangeIsZero(unsigned __int64 a1, _KPROCESS *a2)
{
  unsigned int v2; // r13d
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rbx
  __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  _BYTE *v8; // rcx
  __int64 v9; // rbx
  unsigned __int64 v10; // r12
  __int64 v11; // rdi
  __int64 v12; // r14
  __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  __int64 v15; // r15
  unsigned __int64 v16; // rbx
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned __int64 v21; // rax
  unsigned int v22; // r12d
  __int64 v23; // rbx
  __int64 v24; // r15
  __int64 v25; // r9
  bool v26; // zf
  _QWORD *v27; // rax
  __int64 v28; // rax
  unsigned __int64 ValidKernelPte; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v30; // [rsp+30h] [rbp-D8h]
  _QWORD *v31; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v32; // [rsp+40h] [rbp-C8h]
  __int64 v33; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v34; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v35; // [rsp+58h] [rbp-B0h]
  _QWORD *v36; // [rsp+60h] [rbp-A8h]
  int v37; // [rsp+68h] [rbp-A0h] BYREF
  __int16 v38; // [rsp+6Ch] [rbp-9Ch]
  __int64 v39; // [rsp+70h] [rbp-98h]
  __int64 v40; // [rsp+78h] [rbp-90h]
  __int64 v41; // [rsp+80h] [rbp-88h]
  _QWORD v42[4]; // [rsp+128h] [rbp+20h] BYREF

  v2 = 0;
  v39 = 20LL;
  memset(v42, 0, sizeof(v42));
  v3 = (unsigned __int64)a2;
  v4 = a1;
  v37 = 0;
  v38 = 0;
  v40 = 0LL;
  v41 = 0LL;
  if ( a1 >= (unsigned __int64)a2 )
    return;
  v5 = MmPfnDatabase + (MxPfnAllocation << 12);
  if ( (v5 & 0x1FFFFF) != 0 )
    v6 = ((v5 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  else
    v6 = 0LL;
  v7 = a1;
  while ( 1 )
  {
    if ( (*(_BYTE *)(8 * ((v7 >> 39) & 0x1FF) - 0x90482413000LL) & 1) != 0
      && (*(_BYTE *)(((v7 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) != 0 )
    {
      v8 = (_BYTE *)(((v7 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
      if ( (*v8 & 0x81) == 0x81 )
        break;
    }
LABEL_11:
    v7 = (v7 + 0x200000) & 0xFFFFFFFFFFE00000uLL;
    if ( v7 >= v3 )
      goto LABEL_15;
  }
  if ( v8 != (_BYTE *)v6 )
  {
    if ( !(unsigned int)MiDemoteLargePage(v7, &v37) )
    {
      MiFlushTbList((__int64)&v37, a2);
      return;
    }
    goto LABEL_11;
  }
  v3 = v7 & 0xFFFFFFFFFFE00000uLL;
LABEL_15:
  if ( v4 >= v3 )
    return;
  MiFlushTbList((__int64)&v37, a2);
  v31 = 0LL;
  v9 = 0LL;
  v30 = 0LL;
  v32 = 0LL;
  v10 = v3 - 1;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0x98000000000LL;
  while ( 2 )
  {
    v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v34 = v4;
    v35 = v10;
    v14 = v4;
    if ( v4 > v10 )
      goto LABEL_34;
    v15 = v30;
    v33 = v2 - 1;
    while ( 2 )
    {
      ValidKernelPte = MI_READ_PTE_LOCK_FREE(v14);
      v16 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&ValidKernelPte) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v36 = (_QWORD *)v16;
      if ( !v2 )
      {
        ValidKernelPte = MiMakeValidKernelPte(*(__int64 *)((char *)&MiState[545] + v15), 1, v14, v17);
        v18 = 48 * (*(_QWORD *)(v16 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        MiLockPageAtDpcInline(v18, v19, v20);
        *(_QWORD *)(v18 + 24) ^= (*(_QWORD *)(v18 + 24) ^ (*(_QWORD *)(v18 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v21 = ValidKernelPte;
        goto LABEL_26;
      }
      v22 = 0;
      v23 = (__int64)(v14 << 25) >> 16;
      v24 = v42[v33];
      do
      {
        if ( MI_READ_PTE_LOCK_FREE(v23) != v24 )
          break;
        v23 += 8LL;
        ++v22;
      }
      while ( v22 < 0x200 );
      v15 = v30;
      v26 = v22 == 512;
      v10 = v35;
      if ( v26 )
      {
        v21 = MiMakeValidKernelPte(*(__int64 *)((char *)&MiState[545] + v30), 4, 0LL, v25) & 0xFFFFFFFFFFFFFEBDuLL | 0x42;
LABEL_26:
        if ( qword_1402FF288[0] == qword_1402FF290 )
          v21 = 0LL;
        *(_QWORD *)((char *)v42 + v15) = v21;
        MI_INTERLOCKED_EXCHANGE_PTE(v14, v21);
        if ( v2 == 3 )
        {
          v12 = v14;
          if ( !v11 )
            v11 = v14;
        }
        v27 = v36;
        ++v32;
        *v36 = v31;
        v31 = v27;
        MiInsertTbFlushEntry((__int64)&v37, (__int64)(v14 << 25) >> 16, 1LL, 0);
      }
      v14 += 8LL;
      if ( v14 <= v10 )
        continue;
      break;
    }
    v4 = v34;
    v9 = v30;
LABEL_34:
    MiFlushTbList((__int64)&v37, (_KPROCESS *)v13);
    if ( *(_QWORD *)((char *)v42 + v9) || qword_1402FF288[0] == qword_1402FF290 )
    {
      v9 += 8LL;
      ++v2;
      v30 = v9;
      v13 = 0x98000000000LL;
      if ( v2 < 4 )
        continue;
    }
    break;
  }
  if ( v11 )
  {
    v28 = 3LL;
    do
    {
      v11 = v11 << 25 >> 16;
      v12 = v12 << 25 >> 16;
      --v28;
    }
    while ( v28 );
    MiReplicatePteChange(v11, v12);
  }
  MiReturnPfnList(v31, v13);
  MiReleaseNonPagedResources((__int64)MiSystemPartition, v32);
}
