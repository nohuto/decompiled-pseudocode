/*
 * XREFs of PpmIdleUpdateConcurrency @ 0x140169BE0
 * Callers:
 *     PpmIdleRemoveConcurrency @ 0x140169B58 (PpmIdleRemoveConcurrency.c)
 *     PpmIdleInstallConcurrency @ 0x140169BA0 (PpmIdleInstallConcurrency.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall PpmIdleUpdateConcurrency(__int64 a1, unsigned __int64 a2, char a3, char a4)
{
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 result; // rax
  __int16 v12; // [rsp+30h] [rbp-8h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  _disable();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(a1);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)a1);
  }
  v8 = *(_QWORD *)(a1 + 16);
  v9 = *(unsigned int *)(a1 + 12);
  if ( a2 > v8 )
  {
    *(_QWORD *)(a1 + 16) = a2;
    v10 = a2 - v8;
    if ( a4 )
    {
      *(_QWORD *)(a1 + 24) += v10;
      *(_QWORD *)(a1 + 8 * v9 + 32) += v10;
    }
  }
  result = (unsigned int)(v9 + 1);
  if ( a3 )
    result = (unsigned int)(v9 - 1);
  *(_DWORD *)(a1 + 12) = result;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    result = KiReleaseSpinLockInstrumented(a1, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)a1, 0LL);
  if ( (v12 & 0x200) != 0 )
    _enable();
  return result;
}
