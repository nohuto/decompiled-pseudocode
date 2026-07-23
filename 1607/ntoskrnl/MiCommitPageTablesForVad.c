/*
 * XREFs of MiCommitPageTablesForVad @ 0x14042F900
 * Callers:
 *     MiCommitExistingVad @ 0x14002A7A0 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140043770 (MiSetProtectionOnSection.c)
 *     MiSplitPrivatePage @ 0x1400980C0 (MiSplitPrivatePage.c)
 *     MiCloneReserveVadCommit @ 0x14010A8B8 (MiCloneReserveVadCommit.c)
 *     MiInsertVadCharges @ 0x14042ED10 (MiInsertVadCharges.c)
 * Callees:
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MiVadPureReserve @ 0x14002B610 (MiVadPureReserve.c)
 *     MiGetProcessPartition @ 0x14002B670 (MiGetProcessPartition.c)
 *     MiWriteDemandZeroPte @ 0x14007BD20 (MiWriteDemandZeroPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiChargeFullProcessCommitment @ 0x14042F830 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiCommitPageTablesForVad(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v5; // r9
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned int v9; // r15d
  unsigned __int64 v10; // r12
  unsigned int v11; // edi
  __int64 PteAddress; // r14
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 *v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // edx
  int v24; // eax
  int v25; // edi
  __int64 v26; // r14
  int v27; // esi
  int v28; // ebp
  unsigned int v29; // ebx
  unsigned int v30; // r9d
  unsigned int v31; // r8d
  unsigned int v32; // edx
  int v33; // r11d
  unsigned int i; // eax
  unsigned __int64 v35; // r8
  __int64 result; // rax
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  int *ProcessPartition; // rax
  unsigned __int64 v41; // r12
  unsigned __int64 v42; // rcx
  __int64 v43; // [rsp+20h] [rbp-58h]
  __int64 v44; // [rsp+28h] [rbp-50h]
  unsigned int v45; // [rsp+80h] [rbp+8h]
  unsigned __int64 v46; // [rsp+88h] [rbp+10h]
  unsigned int v47; // [rsp+88h] [rbp+10h]
  unsigned __int64 v49; // [rsp+90h] [rbp+18h]
  unsigned int v50; // [rsp+98h] [rbp+20h]

  v46 = a2;
  v3 = a3;
  if ( *(_QWORD *)(a1 + 16) == -2LL )
  {
    if ( (unsigned int)MiVadPureReserve(a1) )
    {
      v39 = *(unsigned int *)(a1 + 52);
      LODWORD(v39) = v39 & 0x7FFFFFFF;
      if ( !(v39 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31)) )
        return 0LL;
      result = MiChargeFullProcessCommitment(
                 (ULONG_PTR)KeGetCurrentThread()->ApcState.Process,
                 v39 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31));
      if ( (int)result >= 0 )
        return 0LL;
      return result;
    }
    v3 = a3;
    a2 = v46;
  }
  v5 = qword_140327FD0 + 276840448;
  v6 = 0LL;
  v7 = a2 >> 21;
  v8 = (unsigned int)v7;
  v9 = 0;
  v47 = v7;
  v45 = v7;
  v49 = v3 >> 21;
  v50 = v3 >> 21;
  v43 = qword_140327FD0 + 276840448;
  do
  {
    v44 = 2 - v9;
    v10 = 0LL;
    v11 = 0;
    PteAddress = MiGetPteAddress(*(_QWORD *)(v5 + 16 * (v44 + 19)) + (v8 >> 3));
    v14 = MiGetPteAddress(v13);
    do
    {
      v15 = PteAddress;
      while ( v15 <= v14 )
      {
        v16 = MiGetPteAddress(v15);
        if ( !MI_READ_PTE_LOCK_FREE(v16) )
        {
          if ( !v11 )
          {
            v41 = v10 + 1;
            v42 = (unsigned __int64)(4096 - (unsigned int)(v15 & 0xFFF)) >> 3;
            if ( v42 > ((__int64)(v14 - v15) >> 3) + 1 )
              v42 = ((__int64)(v14 - v15) >> 3) + 1;
            v10 = v42 + v41;
            v15 += 8 * v42;
            continue;
          }
          MiWriteDemandZeroPte(v19, v17, v18, (__int64)v19);
        }
        if ( !MI_READ_PTE_LOCK_FREE(v15) )
        {
          if ( v11 )
            MiWriteDemandZeroPte((__int64 *)v15, v20, v21, v22);
          else
            ++v10;
        }
        v15 += 8LL;
      }
      if ( !v11 )
      {
        if ( v10 )
        {
          ProcessPartition = MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
          if ( !(unsigned int)MiChargeCommit((__int64)ProcessPartition, v10, 0) )
            goto LABEL_13;
        }
      }
      ++v11;
    }
    while ( v11 < 2 );
    v6 += v10;
    v5 = v43;
    ++v9;
    v8 = v45 >> 9;
    v45 >>= 9;
    *(_DWORD *)(v43 + 4 * v44 + 344) += v10;
    v50 >>= 9;
  }
  while ( v9 < 2 );
LABEL_13:
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process) + 923,
    v6);
  if ( v23 < 0 )
    return (unsigned int)v23;
  v24 = *(_DWORD *)(a1 + 48);
  v25 = 0;
  v26 = qword_140327FD0;
  if ( (v24 & 0x8000) != 0 )
  {
    if ( (v24 & 7) != 5 )
      goto LABEL_16;
  }
  else if ( (*(_BYTE *)(a1 + 67) & 1) == 0 )
  {
    goto LABEL_16;
  }
  v25 = 1;
LABEL_16:
  v27 = 0;
  v28 = 0;
  while ( 1 )
  {
    v29 = 0;
    v30 = v47;
    v31 = 0;
    v32 = v49;
    do
    {
      v33 = 0;
      for ( i = v30; i <= v32; ++i )
      {
        if ( !_bittest(*(const signed __int32 **)(v26 + 16LL * (2 - v31) + 276840752), i) )
        {
          ++v33;
          if ( v27 == 1 )
            _bittestandset(*(signed __int32 **)(v26 + 16LL * (2 - v31) + 276840752), i);
          else
            v28 = 1;
        }
      }
      if ( !v25 || v31 )
        v29 += v33;
      v30 >>= 9;
      ++v31;
      v32 >>= 9;
    }
    while ( v31 < 3 );
    if ( v27 )
      break;
    v35 = v29;
    if ( !v25 && !(unsigned int)MiVadPureReserve(a1) )
    {
      v37 = *(unsigned int *)(a1 + 52);
      LODWORD(v37) = v37 & 0x7FFFFFFF;
      v38 = v37 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31);
      if ( v38 != 0x7FFFFFFFELL )
        v35 += v38;
    }
    if ( v35 )
    {
      result = MiChargeFullProcessCommitment((ULONG_PTR)KeGetCurrentThread()->ApcState.Process, v35);
      if ( (int)result < 0 )
        return result;
    }
    if ( v28 != 1 )
      break;
    *(_DWORD *)(v26 + 276840448) += v29;
    v27 = 1;
  }
  return 0LL;
}
