/*
 * XREFs of MiCommitPageTablesForVad @ 0x1404BBCD0
 * Callers:
 *     MiCloneReserveVadCommit @ 0x14000158C (MiCloneReserveVadCommit.c)
 *     MiSplitPrivatePage @ 0x140008EC0 (MiSplitPrivatePage.c)
 *     MiCommitExistingVad @ 0x14008E680 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 *     MiInsertVadCharges @ 0x1404B8410 (MiInsertVadCharges.c)
 * Callees:
 *     MiWriteDemandZeroPte @ 0x14002B3E8 (MiWriteDemandZeroPte.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiVadPureReserve @ 0x14008F840 (MiVadPureReserve.c)
 *     MiGetProcessPartition @ 0x14008F8A0 (MiGetProcessPartition.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiChargeFullProcessCommitment @ 0x1404BBC10 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiCommitPageTablesForVad(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r10
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 result; // rax
  unsigned int v7; // r9d
  unsigned int v8; // r13d
  unsigned int v9; // r10d
  _QWORD *v10; // rax
  unsigned __int64 v11; // rbp
  unsigned int v12; // r14d
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rdi
  __int64 *v16; // rsi
  __int64 PteShadow; // rbx
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // rcx
  __int64 v20; // rbx
  __int16 *ProcessPartition; // rax
  __int16 *v22; // rax
  int v23; // edx
  unsigned __int64 v24; // r8
  int v25; // eax
  BOOL v26; // ebp
  int v27; // r11d
  int v28; // ebx
  unsigned int v29; // esi
  unsigned int v30; // edi
  unsigned int v31; // r10d
  unsigned int v32; // r9d
  int v33; // edx
  unsigned int v34; // eax
  __int64 i; // r8
  unsigned __int64 v36; // r8
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  unsigned int v39; // [rsp+20h] [rbp-68h]
  unsigned int v40; // [rsp+24h] [rbp-64h]
  __int64 v41; // [rsp+28h] [rbp-60h]
  unsigned __int64 v42; // [rsp+30h] [rbp-58h]
  __int64 v43; // [rsp+38h] [rbp-50h]
  unsigned int v45; // [rsp+98h] [rbp+10h]
  unsigned int v46; // [rsp+A0h] [rbp+18h]
  unsigned int v47; // [rsp+A8h] [rbp+20h]

  v3 = a2;
  if ( *(_QWORD *)(a1 + 16) == -2LL && (unsigned int)MiVadPureReserve(a1) )
  {
    v5 = *(unsigned int *)(v4 + 52);
    LODWORD(v5) = v5 & 0x7FFFFFFF;
    if ( !(v5 | ((unsigned __int64)*(unsigned __int8 *)(v4 + 34) << 31)) )
      return 0LL;
    result = MiChargeFullProcessCommitment(
               (ULONG_PTR)KeGetCurrentThread()->ApcState.Process,
               v5 | ((unsigned __int64)*(unsigned __int8 *)(v4 + 34) << 31));
    if ( (int)result >= 0 )
      return 0LL;
    return result;
  }
  v7 = v3 >> 21;
  v8 = 0;
  v45 = v7;
  v47 = v7;
  v9 = a3 >> 21;
  v40 = 0;
  v41 = 0LL;
  v46 = v9;
  v39 = v9;
  do
  {
    v43 = 2 - v8;
    v10 = (_QWORD *)(16 * (v43 - 0xA7FEF7FBD4LL));
    v11 = 0LL;
    v12 = 0;
    v13 = (((*v10 + ((unsigned __int64)v7 >> 3)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v42 = v13;
    v14 = (((*v10 + ((unsigned __int64)v9 >> 3)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    do
    {
      v15 = v13;
      if ( v13 <= v14 )
      {
        while ( 1 )
        {
          v16 = (__int64 *)(((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          PteShadow = *v16;
          if ( MiPteInShadowRange((__int64)v16) )
            PteShadow = MiReadPteShadow((__int64)v16, PteShadow);
          if ( PteShadow )
            goto LABEL_17;
          if ( v12 )
            break;
          v18 = v11 + 1;
          v19 = (unsigned __int64)(4096 - (unsigned int)(v15 & 0xFFF)) >> 3;
          if ( v19 > ((__int64)(v14 - v15) >> 3) + 1 )
            v19 = ((__int64)(v14 - v15) >> 3) + 1;
          v11 = v19 + v18;
          v15 += 8 * v19;
LABEL_24:
          if ( v15 > v14 )
          {
            v13 = v42;
            v8 = v40;
            goto LABEL_26;
          }
        }
        MiWriteDemandZeroPte(v16);
LABEL_17:
        v20 = *(_QWORD *)v15;
        if ( MiPteInShadowRange(v15) )
          v20 = MiReadPteShadow(v15, v20);
        if ( !v20 )
        {
          if ( v12 )
            MiWriteDemandZeroPte((__int64 *)v15);
          else
            ++v11;
        }
        v15 += 8LL;
        goto LABEL_24;
      }
LABEL_26:
      if ( !v12 )
      {
        if ( v11 )
        {
          ProcessPartition = MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
          if ( !(unsigned int)MiChargeCommit((__int64)ProcessPartition, v11, 0) )
            goto LABEL_31;
        }
      }
      ++v12;
    }
    while ( v12 < 2 );
    ++v8;
    v7 = v47 >> 9;
    v9 = v39 >> 9;
    v41 += v11;
    *(_DWORD *)(4 * v43 - 0xA7FEF7FBD18LL) += v11;
    v47 >>= 9;
    v39 >>= 9;
    v40 = v8;
  }
  while ( v8 < 2 );
LABEL_31:
  v22 = MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  _InterlockedExchangeAdd64((volatile signed __int64 *)v22 + 723, v24);
  if ( v23 < 0 )
    return (unsigned int)v23;
  v25 = *(_DWORD *)(a1 + 48);
  if ( (v25 & 0x8000) != 0 )
    v26 = (v25 & 7) == 5;
  else
    v26 = (*(_BYTE *)(a1 + 67) & 1) != 0;
  v27 = 0;
  v28 = 0;
  while ( 1 )
  {
    v29 = 0;
    v30 = v45;
    v31 = 0;
    v32 = v46;
    do
    {
      v33 = 0;
      v34 = v30;
      for ( i = 16LL * (2 - v31) - 0xA7FEF7FBD48LL; v34 <= v32; ++v34 )
      {
        if ( !_bittest(*(const signed __int32 **)(i + 8), v34) )
        {
          ++v33;
          if ( v27 == 1 )
            _bittestandset(*(signed __int32 **)(i + 8), v34);
          else
            v28 = 1;
        }
      }
      if ( !v26 || v31 )
        v29 += v33;
      v30 >>= 9;
      ++v31;
      v32 >>= 9;
    }
    while ( v31 < 3 );
    if ( v27 )
      break;
    v36 = v29;
    if ( !v26 && !(unsigned int)MiVadPureReserve(a1) )
    {
      v37 = *(unsigned int *)(a1 + 52);
      LODWORD(v37) = v37 & 0x7FFFFFFF;
      v38 = v37 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31);
      if ( v38 != 0x7FFFFFFFELL )
        v36 += v38;
    }
    if ( v36 )
    {
      result = MiChargeFullProcessCommitment((ULONG_PTR)KeGetCurrentThread()->ApcState.Process, v36);
      if ( (int)result < 0 )
        return result;
    }
    if ( v28 != 1 )
      break;
    v27 = 1;
    MEMORY[0xFFFFF580108041F8] += v29;
  }
  return 0LL;
}
