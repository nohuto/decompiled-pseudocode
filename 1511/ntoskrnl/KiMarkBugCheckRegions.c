/*
 * XREFs of KiMarkBugCheckRegions @ 0x14014DBFC
 * Callers:
 *     KeBugCheck2 @ 0x1401C4F98 (KeBugCheck2.c)
 * Callees:
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     IoAddTriageDumpDataBlock @ 0x1401417B4 (IoAddTriageDumpDataBlock.c)
 *     MmQueryApiSetSchema @ 0x1401429C8 (MmQueryApiSetSchema.c)
 *     MmIsAddressValid @ 0x1401D5648 (MmIsAddressValid.c)
 */

char __fastcall KiMarkBugCheckRegions(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char *v6; // rax
  __int64 v7; // r15
  unsigned int v8; // esi
  unsigned int i; // edi
  unsigned __int64 PteAddress; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rbp
  __int64 *v13; // rdi
  __int64 v14; // rsi
  int *v15; // rbx
  unsigned __int64 v16; // rbx
  unsigned int j; // edi
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // rbp
  void *v21; // rsi
  unsigned int k; // ebx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // rdi
  _QWORD v27[7]; // [rsp+20h] [rbp-38h] BYREF
  PVOID VirtualAddress; // [rsp+78h] [rbp+20h] BYREF

  if ( KdpBreakpointChangeCount )
    IoAddTriageDumpDataBlock((int)&KdpBreakpointChangeCount, 4);
  LOBYTE(v6) = qword_1402D4868;
  if ( qword_1402D4868 )
  {
    KiMismatchSummary = qword_1402D4868;
    LOBYTE(v6) = IoAddTriageDumpDataBlock((int)&KiMismatchSummary, 8);
  }
  if ( a4 == 257 )
  {
    LOBYTE(v6) = dword_1402D4860;
    if ( dword_1402D4860 )
    {
      v7 = qword_1402D4850;
      v8 = 0;
      do
      {
        LOBYTE(v6) = MmIsAddressValid((PVOID)((v7 + v8) & 0xFFFFFFFFFFFFF000uLL));
        if ( (_BYTE)v6 )
        {
          for ( i = 0; i < 4; ++i )
          {
            PteAddress = (v7 + v8) & 0xFFFFFFFFFFFFF000uLL;
            if ( i )
            {
              if ( i != 1 )
              {
                if ( i != 2 )
                  PteAddress = MiGetPteAddress(PteAddress);
                PteAddress = MiGetPteAddress(PteAddress);
              }
              v11 = MiGetPteAddress(PteAddress);
              v6 = (char *)MiGetPteAddress(v11);
              v12 = (__int64)v6;
            }
            else
            {
              v12 = MiGetPteAddress(PteAddress);
              v6 = (char *)MiGetPteAddress(v12);
              if ( *v6 < 0 )
                v12 = 0LL;
            }
            if ( v12 )
              LOBYTE(v6) = IoAddTriageDumpDataBlock(v12, 8);
          }
        }
        v8 += 4096;
      }
      while ( v8 < dword_1402D4860 );
      dword_1402D4860 = 4096;
    }
  }
  v13 = &qword_1402D4850;
  v14 = 2LL;
  v15 = &dword_1402D4860;
  do
  {
    if ( *v15 )
      LOBYTE(v6) = IoAddTriageDumpDataBlock(*v13, *v15);
    ++v15;
    ++v13;
    --v14;
  }
  while ( v14 );
  if ( a3 )
  {
    IoAddTriageDumpDataBlock(a3 & 0xFFFFF000, 4096);
    IoAddTriageDumpDataBlock((a3 & 0xFFFFF000) + 4096, 4096);
    v16 = a3 & 0xFFFFFFFFFFFFF000uLL;
    if ( MmIsAddressValid((PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL)) )
    {
      for ( j = 0; j < 4; ++j )
      {
        v18 = a3 & 0xFFFFFFFFFFFFF000uLL;
        if ( j )
        {
          if ( j != 1 )
          {
            if ( j != 2 )
              v18 = MiGetPteAddress(v16);
            v18 = MiGetPteAddress(v18);
          }
          v19 = MiGetPteAddress(v18);
          v20 = MiGetPteAddress(v19);
        }
        else
        {
          v20 = MiGetPteAddress(v16);
          if ( *(char *)MiGetPteAddress(v20) < 0 )
            v20 = 0LL;
        }
        if ( v20 )
          IoAddTriageDumpDataBlock(v20, 8);
      }
    }
    v21 = (void *)(((a3 & 0xFFFFFFFFFFFFF000uLL) + 4096) & 0xFFFFFFFFFFFFF000uLL);
    if ( MmIsAddressValid(v21) )
    {
      for ( k = 0; k < 4; ++k )
      {
        v23 = ((a3 & 0xFFFFFFFFFFFFF000uLL) + 4096) & 0xFFFFFFFFFFFFF000uLL;
        if ( k )
        {
          if ( k != 1 )
          {
            if ( k != 2 )
              v23 = MiGetPteAddress((unsigned __int64)v21);
            v23 = MiGetPteAddress(v23);
          }
          v24 = MiGetPteAddress(v23);
          v25 = MiGetPteAddress(v24);
        }
        else
        {
          v25 = MiGetPteAddress((unsigned __int64)v21);
          if ( *(char *)MiGetPteAddress(v25) < 0 )
            v25 = 0LL;
        }
        if ( v25 )
          IoAddTriageDumpDataBlock(v25, 8);
      }
    }
    if ( a3 == HvlpHypercallCodeVa )
      IoAddTriageDumpDataBlock((int)&HvlpHypercallCodeVa, 8);
    if ( a3 == HvlpVsmVtlCallVa )
      IoAddTriageDumpDataBlock((int)&HvlpVsmVtlCallVa, 8);
    MmQueryApiSetSchema(&VirtualAddress, v27);
    LOBYTE(v6) = MmIsAddressValid(VirtualAddress);
    if ( (_BYTE)v6 && a3 == *(_QWORD *)VirtualAddress )
      LOBYTE(v6) = IoAddTriageDumpDataBlock((int)VirtualAddress, 8);
  }
  if ( qword_1403821C0 )
    LOBYTE(v6) = IoAddTriageDumpDataBlock(qword_1403821C0, 1872);
  return (char)v6;
}
