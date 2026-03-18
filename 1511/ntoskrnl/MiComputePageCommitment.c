/*
 * XREFs of MiComputePageCommitment @ 0x1400D66E0
 * Callers:
 *     MiSetProtectionOnSection @ 0x14005BC70 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x1400614B0 (MiProtectPrivateMemory.c)
 *     MiCommitExistingVad @ 0x1400629D0 (MiCommitExistingVad.c)
 *     MiDeletePartialVad @ 0x1400D6084 (MiDeletePartialVad.c)
 * Callees:
 *     MiLocateCloneAddress @ 0x14001EDA8 (MiLocateCloneAddress.c)
 *     MiGetNextPageTable @ 0x14005F080 (MiGetNextPageTable.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400E61AC (MI_PROTO_FORMAT_COMBINED.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiComputePageCommitment(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  int v5; // edi
  _KPROCESS *Process; // r13
  unsigned __int64 NextPageTable; // rsi
  unsigned __int64 v8; // r12
  __int64 v9; // r14
  _QWORD *v10; // r15
  __int64 v11; // rbx
  unsigned __int64 v12; // rax
  int v13; // eax
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rdx
  __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  _QWORD *CloneAddress; // rax
  int v20; // [rsp+70h] [rbp+8h] BYREF
  __int64 v21; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int8 v22; // [rsp+88h] [rbp+20h]

  v22 = a4;
  v5 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  NextPageTable = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( *(int *)(a3 + 52) >= 0 )
  {
    v9 = 0LL;
  }
  else
  {
    v5 = 2;
    v9 = ((__int64)(v8 - NextPageTable) >> 3) + 1;
  }
  v10 = a5;
  if ( a5 )
    *a5 = 0LL;
  if ( NextPageTable <= v8 )
  {
LABEL_7:
    NextPageTable = MiGetNextPageTable(NextPageTable, v8, 0LL, a4, 4, &v20);
    if ( !NextPageTable )
      return v9;
    do
    {
      v21 = MI_READ_PTE_LOCK_FREE(NextPageTable);
      v11 = v21;
      if ( v21 )
      {
        v12 = MI_READ_PTE_LOCK_FREE(&v21);
        if ( (v12 & 0x3E0) != 0x200 || (v12 & 1) != 0 || (v12 & 0x400) != 0 && HIDWORD(v12) != 0xFFFFFFFF )
          v5 &= ~1u;
        else
          v5 |= 1u;
        if ( (v5 & 2) != 0 )
        {
          v13 = v5 & 1;
          if ( (v5 & 1) != 0 )
            --v9;
        }
        else
        {
          v13 = v5 & 1;
          if ( (v5 & 1) == 0 )
            ++v9;
        }
        if ( v10 )
        {
          v14 = MEMORY[0xFFFFF580108042B0];
          if ( MEMORY[0xFFFFF580108042B0] )
          {
            if ( !v13 )
            {
              if ( (v11 & 1) != 0 )
              {
                v15 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v21) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
                if ( (*(_QWORD *)(v15 + 40) & 0x200000000000000LL) == 0 )
                  goto LABEL_34;
                v16 = *(_QWORD *)(v15 + 8);
                if ( v16 >= 0 )
                  goto LABEL_34;
                v17 = v16 | 0x8000000000000000uLL;
              }
              else
              {
                if ( (v11 & 0x400) == 0 || HIDWORD(v11) == 0xFFFFFFFF || (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v11) )
                  goto LABEL_34;
                v17 = v11 >> 16;
              }
              CloneAddress = MiLocateCloneAddress((__int64)Process, v17);
              if ( CloneAddress && v14 > CloneAddress[9] )
                ++*v10;
            }
          }
        }
      }
LABEL_34:
      NextPageTable += 8LL;
      if ( (NextPageTable & 0xFFF) == 0 )
      {
        a4 = v22;
        if ( NextPageTable > v8 )
          return v9;
        goto LABEL_7;
      }
    }
    while ( NextPageTable <= v8 );
  }
  return v9;
}
