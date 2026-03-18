/*
 * XREFs of MiFreeLargePageMemory @ 0x1400BDF60
 * Callers:
 *     MiDeleteSegmentPages @ 0x14000BB90 (MiDeleteSegmentPages.c)
 *     MiFreePagesFromMdl @ 0x140011298 (MiFreePagesFromMdl.c)
 *     MiReturnNonPagedPoolVa @ 0x1400B4000 (MiReturnNonPagedPoolVa.c)
 *     MiFreeContiguousPages @ 0x1400C1F6C (MiFreeContiguousPages.c)
 *     MiFreeLargePages @ 0x1401E1EA8 (MiFreeLargePages.c)
 *     MiReturnLargePages @ 0x1401E2488 (MiReturnLargePages.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x1400115F0 (MiPfnReferenceCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiClearPfnImageVerified @ 0x1400B5370 (MiClearPfnImageVerified.c)
 *     MiInsertLargePageInNodeList @ 0x1400C02B4 (MiInsertLargePageInNodeList.c)
 */

__int64 __fastcall MiFreeLargePageMemory(ULONG_PTR a1)
{
  ULONG_PTR v1; // r12
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  unsigned __int64 v5; // rbp
  ULONG_PTR v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  char v11; // cl
  char v12; // al
  unsigned __int64 v13; // r8
  char v14; // cl
  __int64 v15; // rax
  int v17; // [rsp+60h] [rbp+8h] BYREF
  __int64 CurrentIrql; // [rsp+68h] [rbp+10h]

  v1 = a1 + 511;
  v3 = 48 * (a1 + 511) - 0x58000000000LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = a1 + 511;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v7 = 0x4000000000000000LL;
  v8 = 0x7FFFFFFFFFFFFFFFLL;
  do
  {
    v17 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v17, v7, v8);
        while ( (*(_QWORD *)(v3 + 24) & 0x8000000000000000uLL) != 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) );
      v7 = 0x4000000000000000LL;
      v8 = 0x7FFFFFFFFFFFFFFFLL;
    }
    *(_QWORD *)(v3 + 40) &= ~0x200000000000000uLL;
    v9 = *(_QWORD *)(v3 + 40);
    if ( (*(_BYTE *)(v3 + 34) & 7) == 5 )
      ++*(_WORD *)(v3 + 32);
    v10 = *(_QWORD *)(v3 + 24);
    if ( (v10 & 0x4000000000000000LL) == 0 )
      *(_QWORD *)(v3 + 24) = v10 | 0x4000000000000000LL;
    if ( ((v9 >> 54) & 7) == 3 )
    {
      MiClearPfnImageVerified(v3, 0xCu);
      v7 = 0x4000000000000000LL;
      v8 = 0x7FFFFFFFFFFFFFFFLL;
    }
    if ( *(_WORD *)(v3 + 32) == 2
      && (v11 = *(_BYTE *)(v3 + 34), (v11 & 0xC0) == 0x40)
      && (v12 = *(_BYTE *)(v3 + 35), (v12 & 0x40) == 0) )
    {
      if ( !v5 )
      {
        v13 = *(_QWORD *)(v3 + 40);
        *(_QWORD *)(v3 + 24) &= 0xC000000000000000uLL;
        v14 = v11 & 0xEF;
        *(_BYTE *)(v3 + 35) = v12 & 0xF8;
        *(_WORD *)(v3 + 32) = 0;
        *(_BYTE *)(v3 + 34) = v14;
        if ( ((v13 >> 54) & 7) == 1 )
          *(_QWORD *)(v3 + 40) = v13 & 0xFE3FFFFFFFFFFFFFuLL;
        v15 = *(_QWORD *)(v3 + 40);
        *(_QWORD *)(v3 + 24) &= ~0x4000000000000000uLL;
        *(_QWORD *)(v3 + 8) = 0LL;
        *(_QWORD *)(v3 + 40) = v15 & 0xFFFFFFF000000000uLL | 0xFFFFFFFFELL;
        *(_BYTE *)(v3 + 34) = v14 & 0xF8 | 1;
        if ( v6 == a1 )
        {
          MiInsertLargePageInNodeList(v6, 512LL, 1LL, 0xFFFFFFFFELL);
          v4 = 512LL;
        }
        goto LABEL_17;
      }
    }
    else if ( !v5 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v5 = v3;
      v6 = v1;
      v3 = 48 * v1 - 0x58000000000LL;
      if ( v3 > v5 )
      {
        v7 = (v3 - v5 - 1) / 0x30 + 1;
        v4 += v7;
        do
        {
          MiLockPageAtDpcInline(v3, v7, v8);
          *(_QWORD *)(v3 + 40) &= 0xFFFFFFF000000000uLL;
          MiInsertPageInFreeOrZeroedList(v6, 2uLL);
          _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          --v6;
          v3 -= 48LL;
        }
        while ( v3 > v5 );
      }
      MiLockPageAtDpcInline(v3, v7, v8);
      v7 = 0x4000000000000000LL;
    }
    *(_QWORD *)(v3 + 24) &= 0xC000000000000000uLL;
    *(_WORD *)(v3 + 32) -= 2;
    if ( !*(_WORD *)(v3 + 32) )
    {
      MiPfnReferenceCountIsZero(v3, v6);
      ++v4;
LABEL_17:
      v7 = 0x4000000000000000LL;
      goto LABEL_18;
    }
    *(_BYTE *)(v3 + 34) |= 7u;
LABEL_18:
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v3 -= 48LL;
    --v6;
    v8 = 0x7FFFFFFFFFFFFFFFLL;
  }
  while ( v6 >= a1 );
  __writecr8((unsigned __int8)CurrentIrql);
  return v4;
}
