/*
 * XREFs of MiComputePageCommitment @ 0x14010E9C0
 * Callers:
 *     MiProtectPrivateMemory @ 0x14005DD20 (MiProtectPrivateMemory.c)
 *     MiCommitExistingVad @ 0x14008E680 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 *     MiDeletePartialVad @ 0x1400F14D0 (MiDeletePartialVad.c)
 * Callees:
 *     MiGetNextPageTable @ 0x14003BAA0 (MiGetNextPageTable.c)
 *     MiLocateCloneAddress @ 0x140059A90 (MiLocateCloneAddress.c)
 *     MiIsPteDecommittedPage @ 0x14010ECB0 (MiIsPteDecommittedPage.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x140225BE8 (MiIsPrototypePteVadLookup.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiComputePageCommitment(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        _QWORD *a5)
{
  int v5; // ebx
  _KPROCESS *Process; // r12
  unsigned __int64 NextPageTable; // rdi
  unsigned __int64 v9; // r15
  __int64 v10; // rbp
  _QWORD *v11; // r14
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rax
  unsigned __int64 v16; // r9
  int v17; // eax
  unsigned __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int64 PrototypePteDirect; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *CloneAddress; // rax
  int v26; // [rsp+70h] [rbp+8h] BYREF
  __int64 v27; // [rsp+78h] [rbp+10h] BYREF

  v5 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  NextPageTable = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( *(int *)(a3 + 52) >= 0 )
  {
    v10 = 0LL;
  }
  else
  {
    v5 = 2;
    v10 = ((__int64)(v9 - NextPageTable) >> 3) + 1;
  }
  v11 = a5;
  if ( a5 )
    *a5 = 0LL;
  if ( NextPageTable <= v9 )
  {
LABEL_7:
    NextPageTable = MiGetNextPageTable(NextPageTable, v9, 0LL, a4, 1, &v26);
    if ( !NextPageTable )
      return v10;
    do
    {
      v14 = *(_QWORD *)NextPageTable;
      if ( NextPageTable + 0x90482413000LL <= 0x7F8
        && (unsigned int)MiPteHasShadow(v13, v12)
        && (v14 & 1) != 0
        && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
      {
        v13 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        v12 = *(_QWORD *)(v13 + 1520);
        if ( v12 )
        {
          v15 = *(_QWORD *)(v12 + 8 * ((NextPageTable >> 3) & 0x1FF));
          if ( (v15 & 0x20) != 0 )
            v14 |= 0x20uLL;
          if ( (v15 & 0x42) != 0 )
            v14 |= 0x42uLL;
        }
      }
      v27 = v14;
      if ( v14 )
      {
        v5 = (unsigned int)MiIsPteDecommittedPage(&v27) ? v5 | 1 : v5 & 0xFFFFFFFE;
        if ( (v5 & 2) != 0 )
        {
          v17 = v5 & 1;
          if ( (v5 & 1) != 0 )
            --v10;
        }
        else
        {
          v17 = v5 & 1;
          if ( (v5 & 1) == 0 )
            ++v10;
        }
        if ( v11 )
        {
          v13 = 0xFFFFF58010804258uLL;
          v18 = MEMORY[0xFFFFF58010804258];
          if ( MEMORY[0xFFFFF58010804258] )
          {
            if ( !v17 )
            {
              if ( (v16 & 1) == 0 )
              {
                if ( (v16 & 0x400) == 0 || (unsigned int)MiIsPrototypePteVadLookup(v16) || (v23 & 0x800) != 0 )
                  goto LABEL_50;
                PrototypePteDirect = MiGetPrototypePteDirect(v23, v12, v22, v23);
                goto LABEL_47;
              }
              if ( (unsigned __int64)&STACK[0x90482413078] <= 0x7F8
                && (unsigned int)MiPteHasShadow(0x90482413000LL, v12)
                && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
              {
                v19 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
                if ( v19 )
                {
                  v20 = *(_QWORD *)(v19 + 8 * (((unsigned __int64)&v27 >> 3) & 0x1FF));
                  if ( (v20 & 0x20) != 0 )
                    v16 |= 0x20uLL;
                  if ( (v20 & 0x42) != 0 )
                    v16 |= 0x42uLL;
                }
              }
              v13 = 0x200000000000000LL;
              v12 = 48 * ((v16 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
              if ( (*(_QWORD *)(v12 + 40) & 0x200000000000000LL) != 0 )
              {
                v12 = *(_QWORD *)(v12 + 8);
                if ( v12 < 0 )
                {
                  PrototypePteDirect = v12 | 0x8000000000000000uLL;
LABEL_47:
                  CloneAddress = MiLocateCloneAddress((__int64)Process, PrototypePteDirect);
                  if ( CloneAddress && v18 > CloneAddress[9] )
                    ++*v11;
                }
              }
            }
          }
        }
      }
LABEL_50:
      NextPageTable += 8LL;
      if ( (NextPageTable & 0xFFF) == 0 )
      {
        if ( NextPageTable > v9 )
          return v10;
        goto LABEL_7;
      }
    }
    while ( NextPageTable <= v9 );
  }
  return v10;
}
