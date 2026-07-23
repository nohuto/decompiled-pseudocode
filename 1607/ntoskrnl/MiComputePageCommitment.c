/*
 * XREFs of MiComputePageCommitment @ 0x140095B00
 * Callers:
 *     MiCommitExistingVad @ 0x14002A7A0 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140043770 (MiSetProtectionOnSection.c)
 *     MiDeletePartialVad @ 0x1400955C0 (MiDeletePartialVad.c)
 *     MiProtectPrivateMemory @ 0x1400DEEE0 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiGetNextPageTable @ 0x140043470 (MiGetNextPageTable.c)
 *     MiLocateCloneAddress @ 0x1400BB990 (MiLocateCloneAddress.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400BB9C0 (MI_PROTO_FORMAT_COMBINED.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x1401F2534 (MiIsPrototypePteVadLookup.c)
 */

__int64 __fastcall MiComputePageCommitment(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        _QWORD *a5)
{
  int v6; // ebx
  _KPROCESS *Process; // r14
  unsigned __int64 NextPageTable; // r10
  unsigned __int64 v9; // rbp
  __int64 v10; // rdi
  _QWORD *v11; // rsi
  __int64 v12; // r10
  __int64 v13; // rax
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 PrototypePteDirect; // rdx
  __int64 v19; // r9
  __int64 v20; // r9
  __int64 CloneAddress; // rax
  unsigned __int64 v22; // r11
  int v24; // [rsp+70h] [rbp+8h] BYREF
  __int64 v25; // [rsp+78h] [rbp+10h] BYREF

  v6 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  NextPageTable = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( *(int *)(a3 + 52) >= 0 )
  {
    v10 = 0LL;
  }
  else
  {
    v6 = 2;
    v10 = ((__int64)(v9 - NextPageTable) >> 3) + 1;
  }
  v11 = a5;
  if ( a5 )
    *a5 = 0LL;
  if ( NextPageTable <= v9 )
  {
LABEL_7:
    NextPageTable = MiGetNextPageTable(NextPageTable, v9, 0LL, a4, 4, &v24);
    if ( !NextPageTable )
      return v10;
    do
    {
      v25 = MI_READ_PTE_LOCK_FREE(NextPageTable);
      if ( v25 )
      {
        v13 = MI_READ_PTE_LOCK_FREE(&v25);
        if ( (v13 & 0x3E0) != 0x200
          || (v13 & 1) != 0
          || (v13 & 0x400) != 0 && !(unsigned int)MiIsPrototypePteVadLookup(v13) )
        {
          v6 &= ~1u;
        }
        else
        {
          v6 |= 1u;
        }
        if ( (v6 & 2) != 0 )
        {
          v15 = v6 & 1;
          if ( (v6 & 1) != 0 )
            --v10;
        }
        else
        {
          v15 = v6 & 1;
          if ( (v6 & 1) == 0 )
            ++v10;
        }
        if ( v11 && *(_QWORD *)(qword_140327FD0 + 276840632) && !v15 )
        {
          if ( (v14 & 1) != 0 )
          {
            v16 = MI_GET_PAGE_FRAME_FROM_PTE(&v25);
            if ( (*(_QWORD *)(48 * v16 - 0x58000000000LL + 40) & 0x200000000000000LL) == 0 )
              goto LABEL_34;
            v17 = *(_QWORD *)(48 * v16 - 0x58000000000LL + 8);
            if ( (v17 & 0x8000000000000000uLL) == 0 )
              goto LABEL_34;
            PrototypePteDirect = v17 | 0x8000000000000000uLL;
          }
          else
          {
            if ( (v14 & 0x400) == 0
              || (unsigned int)MiIsPrototypePteVadLookup(v14)
              || (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v19) )
            {
              goto LABEL_34;
            }
            PrototypePteDirect = MiGetPrototypePteDirect(v20);
          }
          CloneAddress = MiLocateCloneAddress(Process, PrototypePteDirect);
          if ( CloneAddress && v22 > *(_QWORD *)(CloneAddress + 72) )
            ++*v11;
        }
      }
LABEL_34:
      NextPageTable = v12 + 8;
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
