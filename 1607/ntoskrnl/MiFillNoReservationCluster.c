/*
 * XREFs of MiFillNoReservationCluster @ 0x140123C70
 * Callers:
 *     MiGatherPagefilePages @ 0x1401199B4 (MiGatherPagefilePages.c)
 * Callees:
 *     MiReservePageFileSpace @ 0x14001E150 (MiReservePageFileSpace.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiReferencePageForModifiedWrite @ 0x1400FFD38 (MiReferencePageForModifiedWrite.c)
 *     qsort @ 0x14014E520 (qsort.c)
 */

__int64 __fastcall MiFillNoReservationCluster(__int64 a1, _QWORD *a2, unsigned int a3)
{
  _QWORD *v5; // rbp
  unsigned int v6; // edi
  char v7; // r13
  __int64 v8; // r15
  __int64 v9; // rbx
  unsigned __int8 v10; // r12
  int v11; // ecx
  __int64 v13; // rdx

  if ( !*(_DWORD *)(a1 + 1064)
    || (v5 = (_QWORD *)(a1 + 8 * (*(unsigned int *)(a1 + 1060) + 4 * (*(unsigned int *)(a1 + 1060) + 74LL))), !*v5) )
  {
    v5 = (_QWORD *)(a1 + 2304);
  }
  v6 = 0;
  v7 = 1;
  do
  {
    v8 = v5[2];
    if ( v8 == 0xFFFFFFFFFLL )
      break;
    v9 = 48 * v8 - 0x58000000000LL;
    v10 = MiLockPageInline(v9);
    if ( v8 == v5[2]
      && (!*(_DWORD *)(a1 + 948)
       || (*(_QWORD *)(v9 + 40) & 0x200000000000000LL) == 0
       || (v13 = *(_QWORD *)(v9 + 8), v13 >= 0)
       || *(_QWORD *)(a1 + 6464) <= 0xA0uLL
       || (_InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL),
           __writecr8(v10),
           MiReservePageFileSpace(a1, v13 | 0x8000000000000000uLL, 0LL),
           v10 = MiLockPageInline(48 * v8 - 0x58000000000LL),
           v8 == v5[2])) )
    {
      v11 = MiReferencePageForModifiedWrite(48 * v8 - 0x58000000000LL, v7);
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v10);
      if ( !v11 )
        break;
      *a2 = v8;
      ++v6;
      ++a2;
      v7 &= ~1u;
      if ( v11 == 3 && v6 >= 0x10 )
        break;
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v10);
    }
  }
  while ( v6 < a3 );
  if ( v6 > 1 )
    qsort(&a2[-v6], v6, 8uLL, (int (__cdecl *)(const void *, const void *))MiModifiedWriterNoReservationSort);
  return v6;
}
