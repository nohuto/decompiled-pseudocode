/*
 * XREFs of MiCommitPageTablesForVad @ 0x140415350
 * Callers:
 *     MiSplitPrivatePage @ 0x14001E7D0 (MiSplitPrivatePage.c)
 *     MiSetProtectionOnSection @ 0x14005BC70 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x1400629D0 (MiCommitExistingVad.c)
 *     MiCloneReserveVadCommit @ 0x14009AA54 (MiCloneReserveVadCommit.c)
 *     MiInsertVadCharges @ 0x140415EF0 (MiInsertVadCharges.c)
 * Callees:
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiVadPureReserve @ 0x140061050 (MiVadPureReserve.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiGetProcessPartition @ 0x140063890 (MiGetProcessPartition.c)
 *     MiWriteDemandZeroPte @ 0x1400BAC24 (MiWriteDemandZeroPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiChargeFullProcessCommitment @ 0x14041AAC0 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiCommitPageTablesForVad(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned int v5; // esi
  unsigned int v6; // r8d
  unsigned __int64 v7; // r14
  unsigned int v8; // r12d
  unsigned __int64 v9; // r13
  unsigned int v10; // edi
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  __int64 PteAddress; // r15
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rbx
  __int64 *v16; // rsi
  int v17; // edx
  int v18; // edi
  int v19; // eax
  int v20; // esi
  int v21; // ebp
  unsigned int v22; // ebx
  unsigned int v23; // r10d
  unsigned int v24; // r9d
  unsigned int v25; // edx
  int v26; // r11d
  unsigned int i; // eax
  __int64 v28; // r8
  __int64 result; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  __int64 v32; // rax
  int *ProcessPartition; // rax
  unsigned __int64 v34; // r13
  unsigned __int64 v35; // rcx
  unsigned int v36; // [rsp+20h] [rbp-58h]
  __int64 v37; // [rsp+28h] [rbp-50h]
  unsigned __int64 v39; // [rsp+88h] [rbp+10h]
  unsigned int v40; // [rsp+88h] [rbp+10h]
  unsigned int v42; // [rsp+90h] [rbp+18h]
  unsigned int v43; // [rsp+98h] [rbp+20h]

  v39 = a2;
  v3 = a3;
  if ( *(_QWORD *)(a1 + 16) == -2LL )
  {
    if ( (unsigned int)MiVadPureReserve(a1) )
    {
      v32 = *(unsigned int *)(a1 + 52);
      LODWORD(v32) = v32 & 0x7FFFFFFF;
      if ( !(v32 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31)) )
        return 0LL;
      result = MiChargeFullProcessCommitment(
                 KeGetCurrentThread()->ApcState.Process,
                 v32 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31));
      if ( (int)result >= 0 )
        return 0LL;
      return result;
    }
    v3 = a3;
    a2 = v39;
  }
  v5 = a2 >> 21;
  v6 = v3 >> 21;
  v7 = 0LL;
  v8 = 0;
  v40 = v5;
  v43 = v5;
  v42 = v6;
  v36 = v6;
  do
  {
    v37 = 2 - v8;
    v9 = 0LL;
    v10 = 0;
    v11 = *(_QWORD *)(16 * v37 - 0xA7FEF7FBCE8LL);
    v12 = v11 + ((unsigned __int64)v6 >> 3);
    PteAddress = MiGetPteAddress(v11 + ((unsigned __int64)v5 >> 3));
    v14 = MiGetPteAddress(v12);
    do
    {
      v15 = PteAddress;
      while ( v15 <= v14 )
      {
        v16 = (__int64 *)MiGetPteAddress(v15);
        if ( !MI_READ_PTE_LOCK_FREE(v16) )
        {
          if ( !v10 )
          {
            v34 = v9 + 1;
            v35 = (unsigned __int64)(4096 - (unsigned int)(v15 & 0xFFF)) >> 3;
            if ( v35 > ((__int64)(v14 - v15) >> 3) + 1 )
              v35 = ((__int64)(v14 - v15) >> 3) + 1;
            v9 = v35 + v34;
            v15 += 8 * v35;
            continue;
          }
          MiWriteDemandZeroPte(v16);
        }
        if ( !MI_READ_PTE_LOCK_FREE((__int64 *)v15) )
        {
          if ( v10 )
            MiWriteDemandZeroPte((_QWORD *)v15);
          else
            ++v9;
        }
        v15 += 8LL;
      }
      if ( !v10 )
      {
        if ( v9 )
        {
          ProcessPartition = MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
          if ( !(unsigned int)MiChargeCommit((unsigned __int64)ProcessPartition, v9, 0LL) )
            goto LABEL_13;
        }
      }
      ++v10;
    }
    while ( v10 < 2 );
    v7 += v9;
    v5 = v43 >> 9;
    ++v8;
    v6 = v36 >> 9;
    v43 >>= 9;
    *(_DWORD *)(4 * v37 - 0xA7FEF7FBCC0LL) += v9;
    v36 >>= 9;
  }
  while ( v8 < 2 );
LABEL_13:
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process) + 771,
    v7);
  if ( v17 < 0 )
    return (unsigned int)v17;
  v18 = 0;
  v19 = *(_DWORD *)(a1 + 48);
  if ( (v19 & 0x8000) != 0 )
  {
    if ( (v19 & 7) != 5 )
      goto LABEL_16;
  }
  else if ( (*(_BYTE *)(a1 + 67) & 1) == 0 )
  {
    goto LABEL_16;
  }
  v18 = 1;
LABEL_16:
  v20 = 0;
  v21 = 0;
  while ( 1 )
  {
    v22 = 0;
    v23 = v40;
    v24 = 0;
    v25 = v42;
    do
    {
      v26 = 0;
      for ( i = v23; i <= v25; ++i )
      {
        if ( !_bittest(*(const signed __int32 **)(16 * (2 - v24 - 0xA7FEF7FBCFLL) + 8), i) )
        {
          ++v26;
          if ( v20 == 1 )
            _bittestandset(*(signed __int32 **)(16 * (2 - v24 - 0xA7FEF7FBCFLL) + 8), i);
          else
            v21 = 1;
        }
      }
      if ( !v18 || v24 )
        v22 += v26;
      v23 >>= 9;
      ++v24;
      v25 >>= 9;
    }
    while ( v24 < 3 );
    if ( v20 )
      break;
    v28 = v22;
    if ( !v18 && !(unsigned int)MiVadPureReserve(a1) )
    {
      v30 = *(unsigned int *)(a1 + 52);
      LODWORD(v30) = v30 & 0x7FFFFFFF;
      v31 = v30 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31);
      if ( v31 != 0x7FFFFFFFELL )
        v28 += v31;
    }
    if ( v28 )
    {
      result = MiChargeFullProcessCommitment(KeGetCurrentThread()->ApcState.Process, v28);
      if ( (int)result < 0 )
        return result;
    }
    if ( v21 != 1 )
      break;
    v20 = 1;
    MEMORY[0xFFFFF580108041F8] += v22;
  }
  return 0LL;
}
