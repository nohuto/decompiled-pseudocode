/*
 * XREFs of ExpScanGeneralLookasideList @ 0x1401032A0
 * Callers:
 *     KeBalanceSetManager @ 0x140165F30 (KeBalanceSetManager.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall ExpScanGeneralLookasideList(_QWORD *a1, volatile signed __int32 *a2)
{
  unsigned __int8 CurrentIrql; // si
  _QWORD *v5; // rcx
  int v6; // edx
  unsigned int v7; // r8d
  unsigned __int16 v8; // r10
  int v9; // r9d
  int v10; // r9d
  __int64 result; // rax
  unsigned int v12; // eax
  unsigned int v13; // edx
  void *retaddr; // [rsp+28h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(a2);
  }
  else if ( _interlockedbittestandset64(a2, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(a2);
  }
  v5 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 != a1 )
  {
    while ( 1 )
    {
      v6 = *((_DWORD *)v5 - 10) - *((_DWORD *)v5 + 5);
      *((_DWORD *)v5 + 5) = *((_DWORD *)v5 - 10);
      v7 = *((_DWORD *)v5 - 11) - *((_DWORD *)v5 + 4);
      v8 = *((_WORD *)v5 - 23);
      *((_DWORD *)v5 + 4) = *((_DWORD *)v5 - 11);
      if ( v8 != 0xFFFF )
        break;
LABEL_11:
      v5 = (_QWORD *)*v5;
      if ( v5 == a1 )
        goto LABEL_12;
    }
    v9 = *((unsigned __int16 *)v5 - 24);
    if ( v7 >= 0x4B )
    {
      v12 = 1000 * v6 / v7;
      if ( v12 >= 5 )
      {
        v13 = v12 * (v8 - v9) / 0x7D0 + 5;
        if ( v13 > 0x1E )
          v13 = 30;
        v10 = v13 + v9;
        if ( v10 > v8 )
          LOWORD(v10) = v8;
        goto LABEL_10;
      }
      v10 = v9 - 1;
    }
    else
    {
      v10 = v9 - 10;
    }
    if ( v10 < 4 )
      LOWORD(v10) = 4;
LABEL_10:
    *((_WORD *)v5 - 24) = v10;
    goto LABEL_11;
  }
LABEL_12:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(a2, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)a2, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
