/*
 * XREFs of MiIsNextVaTrimCandidate @ 0x140016740
 * Callers:
 *     MiTrimWorkingSet @ 0x140015D90 (MiTrimWorkingSet.c)
 * Callees:
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiTryLocateWsle @ 0x140046710 (MiTryLocateWsle.c)
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiIsNextVaTrimCandidate(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 SharedWorkingSetList; // rbp
  unsigned int v7; // r9d
  __int64 v8; // r10
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r8
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r10
  __int64 v20; // r11
  __int64 v21; // r11
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // r8
  ULONG_PTR v27; // r10
  unsigned __int64 Wsle; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD *i; // rax
  __int64 v32; // [rsp+38h] [rbp+10h] BYREF

  SharedWorkingSetList = MiGetSharedWorkingSetList(a1);
  v8 = *(_QWORD *)(*(unsigned int *)(SharedWorkingSetList + 32) * *(_QWORD *)(v4 + 8 * v5 + 8)
                 + *(_QWORD *)(SharedWorkingSetList + 80));
  if ( (v8 & 0x800000000000LL) != 0 )
    v9 = v8 | 0xFFFF000000000000uLL;
  else
    v9 = v8 & 0xFFFFFFFFFFFFLL;
  v10 = v9 & 0xFFFFFFFFFFFFF000uLL;
  v11 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( ((v7 >> 7) & 1) != 0 )
  {
    v12 = v11 + 8;
    if ( v12 >= 0xFFFFF6FB7DBED000uLL && v12 <= 0xFFFFF6FB7DBEDFFFuLL || (v12 & 0xFFF) == 0 )
      return 0xFFFFFFFFFLL;
  }
  else
  {
    if ( v11 >= 0xFFFFF6FB7DBED000uLL && v11 <= 0xFFFFF6FB7DBEDFFFuLL || ((v10 >> 9) & 0xFF8) == 0 )
      return 0xFFFFFFFFFLL;
    v12 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
  }
  v14 = *(_QWORD *)v12;
  v32 = v14;
  if ( (v14 & 1) == 0
    || v12 == 0xFFFFF6FB7DBEDF68uLL
    || v10 >= 0xFFFFF68000000000uLL && v10 <= 0xFFFFF6FFFFFFFFFFuLL && (v14 & 0x80u) != 0LL )
  {
    return 0xFFFFFFFFFLL;
  }
  v15 = MI_READ_PTE_LOCK_FREE(&v32);
  if ( (unsigned int)MiIsPfnInline((v15 >> 12) & 0xFFFFFFFFFLL) )
  {
    v21 = 48 * v20 - 0x58000000000LL;
    if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    {
      v22 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v21 + 40)) >> 8) & 0x3FF, v16, v17, v18);
      v25 = MiPartitionIdToPointer(*(unsigned __int16 *)(a1 + 164), v23, v22, v24);
      if ( v25 != v26 )
        return 0LL;
    }
    if ( *(_QWORD *)v21 && (*(_BYTE *)(v21 + 35) & 8) == 0 )
    {
      v27 = (_DWORD)v18 ? v19 + 4096 : v19 - 4096;
      Wsle = MiTryLocateWsle(v27);
      v29 = Wsle;
      if ( Wsle != 0xFFFFFFFFFLL && Wsle >= *(_QWORD *)(SharedWorkingSetList + 8) )
      {
        v30 = 0LL;
        if ( !*a2 )
          return v29;
        for ( i = a2 + 2; *i != v29; ++i )
        {
          if ( ++v30 >= (unsigned __int64)(unsigned int)*a2 )
            return v29;
        }
      }
    }
  }
  return 0xFFFFFFFFFLL;
}
