/*
 * XREFs of PspJobIoRateQueryHistory @ 0x14020F6EC
 * Callers:
 *     PspQueryRateControlHistory @ 0x14046804C (PspQueryRateControlHistory.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall PspJobIoRateQueryHistory(__int64 a1, _QWORD *a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  volatile LONG *v9; // rsi
  KIRQL v10; // al
  int v11; // ecx
  KIRQL v12; // r9
  int v13; // r8d
  __int64 v14; // rax

  v4 = 0;
  if ( *(_QWORD *)(a1 + 1432) || *(_QWORD *)(a1 + 1456) )
  {
    v9 = (volatile LONG *)(a1 + 1448);
    v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1448));
    v11 = *(_DWORD *)(a1 + 1488);
    v12 = v10;
    if ( v11 )
    {
      v13 = *(_DWORD *)(a1 + 1480);
      v14 = *(_QWORD *)(a1 + 1472);
      *a4 = v13 - *(_DWORD *)(a1 + 1484);
      *a2 = v14;
      *a3 = v11;
      *(_DWORD *)(a1 + 1484) = v13;
    }
    else
    {
      v4 = -1073741275;
    }
    ExReleaseSpinLockExclusive(v9, v12);
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v4;
}
