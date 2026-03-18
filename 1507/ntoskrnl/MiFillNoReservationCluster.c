/*
 * XREFs of MiFillNoReservationCluster @ 0x14013A3CC
 * Callers:
 *     MiGatherPagefilePages @ 0x14013D12C (MiGatherPagefilePages.c)
 * Callees:
 *     MiReservePageFileSpace @ 0x1400DCF1C (MiReservePageFileSpace.c)
 *     MiReferencePageForModifiedWrite @ 0x1400E69AC (MiReferencePageForModifiedWrite.c)
 *     qsort @ 0x140172BB0 (qsort.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall MiFillNoReservationCluster(__int64 a1, _QWORD *a2, unsigned int a3)
{
  _QWORD *v5; // rbp
  unsigned int v6; // edi
  __int64 v7; // r12
  __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // r13
  unsigned int v10; // r15d
  int v11; // ecx
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned int v15; // r15d
  char v16; // [rsp+60h] [rbp+8h]
  char v18; // [rsp+78h] [rbp+20h]

  if ( !*(_DWORD *)(a1 + 1048)
    || (v5 = (_QWORD *)(a1 + 8 * (*(unsigned int *)(a1 + 1044) + 4 * (*(unsigned int *)(a1 + 1044) + 66LL))), !*v5) )
  {
    v5 = (_QWORD *)(a1 + 2048);
  }
  v6 = 0;
  v16 = 1;
  do
  {
    v7 = v5[2];
    if ( v7 == 0xFFFFFFFFFLL )
      break;
    v8 = 48 * v7 - 0x58000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v10 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v10);
      }
      while ( (*(_QWORD *)(v8 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) );
    }
    if ( v7 != v5[2] )
    {
      v14 = CurrentIrql;
      goto LABEL_21;
    }
    if ( *(_DWORD *)(a1 + 920) )
    {
      if ( (*(_QWORD *)(v8 + 40) & 0x200000000000000LL) != 0 )
      {
        v13 = *(_QWORD *)(v8 + 8);
        if ( v13 < 0 && *(_QWORD *)(a1 + 5504) > 0x80uLL )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(CurrentIrql);
          MiReservePageFileSpace(a1, v13 | 0x8000000000000000uLL, 0LL);
          LOBYTE(v14) = KeGetCurrentIrql();
          v18 = v14;
          __writecr8(2uLL);
          v15 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v15);
            }
            while ( (*(_QWORD *)(v8 + 24) & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) );
            LOBYTE(v14) = v18;
          }
          CurrentIrql = v14;
          if ( v7 != v5[2] )
          {
            v14 = (unsigned __int8)v14;
LABEL_21:
            _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v14);
            continue;
          }
        }
      }
    }
    v11 = MiReferencePageForModifiedWrite(48 * v7 - 0x58000000000LL, v16);
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    if ( !v11 )
      break;
    *a2++ = v7;
    v16 &= ~1u;
    ++v6;
    if ( v11 == 3 && v6 >= 0x10 )
      break;
  }
  while ( v6 < a3 );
  if ( v6 > 1 )
    qsort(&a2[-v6], v6, 8uLL, MiModifiedWriterNoReservationSort);
  return v6;
}
