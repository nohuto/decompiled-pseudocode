/*
 * XREFs of PsWatchWorkingSet @ 0x1401F54A0
 * Callers:
 *     KiPageFault @ 0x140162040 (KiPageFault.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSignalGate @ 0x1400E9410 (KeSignalGate.c)
 */

__int64 __fastcall PsWatchWorkingSet(int a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 result; // rax
  __int64 v5; // r9
  char v6; // r10
  unsigned __int64 v7; // rdi
  signed __int32 v8; // ecx
  unsigned __int8 CurrentIrql; // si
  signed __int32 v10; // eax
  int v11; // ecx
  signed __int32 v12; // ett
  __int64 v13; // rax
  __int64 v14; // r8
  signed __int32 v15; // eax
  signed __int64 v16; // rdx
  bool v17; // zf

  CurrentThread = KeGetCurrentThread();
  result = (__int64)CurrentThread->ApcState.Process;
  v5 = *(_QWORD *)(result + 976);
  if ( v5 )
  {
    if ( a1 >= 276 )
    {
      v6 = 0;
      v7 = 0x8000000000000000uLL;
    }
    else
    {
      v6 = 1;
      v7 = 0x4000000000000000LL;
    }
    _m_prefetchw((const void *)v5);
    v8 = *(_DWORD *)v5;
    CurrentIrql = KeGetCurrentIrql();
    if ( !CurrentIrql )
      --CurrentThread->KernelApcDisable;
    if ( (v8 & 1) != 0 )
      goto LABEL_21;
    do
    {
      result = (unsigned __int16)v8 & 0xFFFE;
      if ( (unsigned int)result >= 0x800 )
        break;
      v10 = v8;
      v11 = ((unsigned __int16)v8 ^ (unsigned __int16)((v8 & 0xFFFE) + 2)) & 0xFFFE ^ v8;
      v12 = v10;
      result = (unsigned int)_InterlockedCompareExchange(
                               (volatile signed __int32 *)v5,
                               (v11 ^ ((v11 & 0xFFFF0000) + 0x10000)) & 0x7FFF0000 ^ v11,
                               v10);
      v8 = result;
      if ( v12 == (_DWORD)result )
        break;
    }
    while ( (result & 1) == 0 );
    if ( (v8 & 1) != 0 || (result = (unsigned __int16)v8 & 0xFFFE, (unsigned int)result >= 0x800) )
    {
LABEL_21:
      _m_prefetchw((const void *)(v5 + 8));
      v16 = *(_QWORD *)(v5 + 8);
      if ( v16 != -1 )
      {
        do
        {
          result = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 8), v16 + 1, v16);
          v17 = v16 == result;
          v16 = result;
        }
        while ( !v17 && result != -1 );
      }
    }
    else
    {
      v13 = (unsigned __int16)v8 >> 1;
      *(_QWORD *)(v5 + 24 * v13 + 40) = a2;
      if ( v6 )
        v14 = a3 | 1;
      else
        v14 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
      *(_QWORD *)(v5 + 24 * v13 + 48) = v14;
      *(_QWORD *)(v5 + 24 * v13 + 56) = CurrentThread[1].KernelStack;
      v15 = _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFF0000);
      if ( (v15 & 1) != 0 && (v15 & 0x7FFF0000) == 0x10000 )
        KeSignalGate(v5 + 16, 0LL, v14);
      result = (__int64)CurrentThread->WaitBlock[0].SparePtr;
      if ( result )
        _InterlockedOr64((volatile signed __int64 *)result, v7);
    }
    if ( !CurrentIrql )
      return KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
  return result;
}
