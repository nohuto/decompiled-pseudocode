/*
 * XREFs of MiComputeOptimalZeroPath @ 0x1407C88D8
 * Callers:
 *     MiInitSystem @ 0x1407C8BD0 (MiInitSystem.c)
 * Callees:
 *     MiZeroPhysicalPage @ 0x1400793F0 (MiZeroPhysicalPage.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiChangePageAttribute @ 0x1400E5678 (MiChangePageAttribute.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 MiComputeOptimalZeroPath()
{
  unsigned int *v0; // rsi
  unsigned int v1; // ebx
  __int64 i; // rdi
  __int64 result; // rax
  __int64 v4; // r9
  unsigned int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // r14
  int *v8; // r12
  int v9; // esi
  unsigned __int64 v10; // r15
  __int64 v11; // r12
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rbx
  __int64 v14; // r9
  unsigned __int64 v15; // rax
  unsigned __int64 *v16; // rsi
  int *v17; // r12
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // r14
  unsigned __int64 v21; // rbx
  __int64 v22; // r9
  unsigned __int64 v23; // rax
  int v24; // edi
  __int64 v25; // r14
  __int64 v26; // rsi
  __int64 v27; // r14
  ULONG_PTR v28; // rbx
  unsigned __int8 CurrentIrql; // r13
  unsigned int v30; // edi
  __int64 v31; // rsi
  ULONG_PTR v32; // rdi
  unsigned __int8 v33; // r13
  unsigned int v34; // r14d
  signed __int32 v35[8]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v36; // [rsp+20h] [rbp-58h]
  int *v37; // [rsp+28h] [rbp-50h]
  unsigned __int64 *v38; // [rsp+30h] [rbp-48h]
  __int64 v39; // [rsp+38h] [rbp-40h]
  unsigned __int64 v40; // [rsp+48h] [rbp-30h]
  ULONG_PTR v41[5]; // [rsp+50h] [rbp-28h]
  int v42; // [rsp+C0h] [rbp+48h]
  unsigned int v43; // [rsp+C8h] [rbp+50h]
  int v44; // [rsp+D0h] [rbp+58h] BYREF
  int v45; // [rsp+D4h] [rbp+5Ch]
  __int64 v46; // [rsp+D8h] [rbp+60h]

  v44 = 0;
  v0 = (unsigned int *)&v44;
  v1 = 0;
  v45 = 2;
  for ( i = 0LL; ; ++i )
  {
    result = MiGetPage((__int64)MiSystemPartition, v1, 0);
    v41[i + 2] = result;
    if ( result == -1 )
      break;
    v5 = *v0;
    v6 = 48 * result - 0x58000000000LL;
    v41[i] = v6;
    if ( *(unsigned __int8 *)(v6 + 34) >> 6 != v5 )
      MiChangePageAttribute(v6, v5, 0LL, v4);
    ++v1;
    ++v0;
    if ( v1 >= 2 )
    {
      v7 = 0LL;
      v42 = 0;
      v8 = &v44;
      v36 = 0LL;
      v38 = (unsigned __int64 *)&unk_14034EBF0;
      v37 = &v44;
      do
      {
        v9 = *v8;
        v10 = 0LL;
        v11 = *(ULONG_PTR *)((char *)&v41[2] + v7);
        v43 = v9;
        v39 = v11;
        v12 = 3LL;
        do
        {
          v13 = __rdtsc();
          _InterlockedOr(v35, 0);
          MiZeroPhysicalPage(v11, 3, v9);
          _InterlockedOr(v35, 0);
          v15 = __rdtsc();
          v10 += (((unsigned __int64)HIDWORD(v15) << 32) | (unsigned int)v15) - v13;
          --v12;
        }
        while ( v12 );
        v16 = v38;
        v17 = v37;
        v18 = v39;
        v19 = *(ULONG_PTR *)((char *)v41 + v7);
        v46 = 3LL;
        v20 = v19;
        v40 = v10 / 3;
        do
        {
          v21 = __rdtsc();
          _InterlockedOr(v35, 0);
          MiChangePageAttribute(v20, 1u, 0LL, v14);
          MiZeroPhysicalPage(v18, 3, v43);
          MiChangePageAttribute(v20, v43, 0LL, v22);
          _InterlockedOr(v35, 0);
          v23 = __rdtsc();
          v12 += (((unsigned __int64)HIDWORD(v23) << 32) | (unsigned int)v23) - v21;
          --v46;
        }
        while ( v46 );
        v24 = v42;
        v25 = v36;
        if ( v12 / 3 < 9 * (v40 / 0xA) )
        {
          if ( v42 )
            MiFlags |= 0x4000u;
          else
            MiFlags |= 0x2000u;
        }
        *(v16 - 1) = v40;
        v7 = v25 + 8;
        *v16 = v12 / 3;
        ++v42;
        v8 = v17 + 1;
        v36 = v7;
        v37 = v8;
        v38 = v16 + 2;
      }
      while ( (unsigned int)(v24 + 1) < 2 );
      v26 = 0LL;
      v27 = 2LL;
      do
      {
        v28 = v41[v26];
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v30 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v30 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v30);
          }
          while ( (*(_QWORD *)(v28 + 24) & 0x8000000000000000uLL) != 0
               || _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) );
        }
        MiInsertPageInFreeOrZeroedList(v41[v26 + 2], 2);
        _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
        ++v26;
        result = 2LL;
        --v27;
      }
      while ( v27 );
      return result;
    }
  }
  if ( v1 )
  {
    v31 = v1;
    do
    {
      --v31;
      --v1;
      v32 = v41[v31];
      v33 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v34 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v34 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v34);
        }
        while ( (*(_QWORD *)(v32 + 24) & 0x8000000000000000uLL) != 0 );
      }
      MiInsertPageInFreeOrZeroedList(v41[v31 + 2], 2);
      _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      result = v33;
      __writecr8(v33);
    }
    while ( v1 );
  }
  return result;
}
