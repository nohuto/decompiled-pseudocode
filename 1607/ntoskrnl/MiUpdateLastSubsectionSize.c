/*
 * XREFs of MiUpdateLastSubsectionSize @ 0x1400FA798
 * Callers:
 *     MmExtendSection @ 0x14050494C (MmExtendSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiSubsectionRequiresCharge @ 0x1400FA744 (MiSubsectionRequiresCharge.c)
 *     MiGetSubsectionCharges @ 0x1401F4F24 (MiGetSubsectionCharges.c)
 *     MiReturnSubsectionCharges @ 0x1401F513C (MiReturnSubsectionCharges.c)
 */

__int64 __fastcall MiUpdateLastSubsectionSize(unsigned __int8 *a1, _QWORD *a2, unsigned int a3)
{
  __int64 *v3; // r15
  int v4; // edi
  __int64 v5; // rsi
  volatile LONG *v8; // rbp
  KIRQL v9; // r9
  int v10; // eax
  int v11; // ecx
  __int16 v12; // cx
  __int64 v13; // r9
  __int16 v14; // r8
  __int64 v15; // rax
  __int64 result; // rax
  __int64 v17; // rcx

  v3 = *(__int64 **)a1;
  v4 = 0;
  v5 = a3;
  v8 = (volatile LONG *)(*(_QWORD *)a1 + 72LL);
  while ( 1 )
  {
    v9 = ExAcquireSpinLockExclusive(v8);
    if ( !(_DWORD)v5 )
      break;
    v10 = MiSubsectionRequiresCharge(a1);
    if ( !v10 )
    {
      ExReleaseSpinLockExclusive(v8, v9);
      return 3221225556LL;
    }
    if ( v10 != 2 )
    {
      if ( v4 == 1 )
        v4 = 2;
LABEL_7:
      v11 = *((_DWORD *)a1 + 13) ^ (*((_DWORD *)a1 + 13) ^ (*((_DWORD *)a1 + 13) - v5)) & 0x7FFFFFFF;
      *((_DWORD *)a1 + 11) += v5;
      *((_DWORD *)a1 + 13) = v11;
      break;
    }
    if ( v4 )
      goto LABEL_7;
    ExReleaseSpinLockExclusive(v8, v9);
    result = MiGetSubsectionCharges(v17, v5);
    if ( (int)result < 0 )
      return result;
    v4 = 1;
  }
  v12 = *((_WORD *)a1 + 17) & 0xF;
  *((_DWORD *)a1 + 10) = (*a2 >> 12) - *((_DWORD *)a1 + 9);
  *((_WORD *)a1 + 17) = (16 * *(_WORD *)a2) | v12;
  ExReleaseSpinLockExclusive(v8, v9);
  if ( (_DWORD)v5 )
  {
    v13 = *v3;
    _InterlockedExchange64(
      (volatile __int64 *)(*v3 + 24),
      _InterlockedCompareExchange64((volatile signed __int64 *)(*v3 + 24), -1LL, -1LL) + (v5 << 12));
    v14 = *(_WORD *)(v13 + 12);
    v15 = *(unsigned int *)(v13 + 8);
    *(_DWORD *)(v13 + 8) = v5 + v15;
    *(_WORD *)(v13 + 12) = v14 ^ (v14 ^ ((v5 + (v15 | ((unsigned __int64)(v14 & 0x3FF) << 32))) >> 32)) & 0x3FF;
    if ( v4 == 2 )
      MiReturnSubsectionCharges(v5);
  }
  return 0LL;
}
