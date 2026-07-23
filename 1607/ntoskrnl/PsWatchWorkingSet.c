/*
 * XREFs of PsWatchWorkingSet @ 0x14020F038
 * Callers:
 *     KiPageFault @ 0x14016C840 (KiPageFault.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSignalGate @ 0x1400A6E1C (KeSignalGate.c)
 */

__int64 __fastcall PsWatchWorkingSet(int a1, signed __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  signed __int64 v4; // r11
  __int64 result; // rax
  __int64 v6; // r9
  char v7; // r10
  unsigned __int64 v8; // rdi
  signed __int32 v9; // ecx
  unsigned __int8 CurrentIrql; // si
  signed __int32 v11; // eax
  int v12; // ecx
  signed __int32 v13; // ett
  __int64 v14; // rax
  signed __int32 v15; // eax
  bool v16; // zf

  CurrentThread = KeGetCurrentThread();
  v4 = a2;
  result = (__int64)CurrentThread->ApcState.Process;
  v6 = *(_QWORD *)(result + 976);
  if ( v6 )
  {
    if ( a1 >= 276 )
    {
      v7 = 0;
      v8 = 0x8000000000000000uLL;
    }
    else
    {
      v7 = 1;
      v8 = 0x4000000000000000LL;
    }
    _m_prefetchw((const void *)v6);
    v9 = *(_DWORD *)v6;
    CurrentIrql = KeGetCurrentIrql();
    if ( !CurrentIrql )
      --CurrentThread->KernelApcDisable;
    if ( (v9 & 1) != 0 )
      goto LABEL_21;
    do
    {
      result = (unsigned __int16)v9 & 0xFFFE;
      if ( (unsigned int)result >= 0x800 )
        break;
      v11 = v9;
      v12 = ((unsigned __int16)v9 ^ (unsigned __int16)((v9 & 0xFFFE) + 2)) & 0xFFFE ^ v9;
      a2 = (v12 ^ ((v12 & 0xFFFF0000) + 0x10000)) & 0x7FFF0000;
      v13 = v11;
      result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)v6, a2 ^ v12, v11);
      v9 = result;
      if ( v13 == (_DWORD)result )
        break;
    }
    while ( (result & 1) == 0 );
    if ( (v9 & 1) != 0 || (result = (unsigned __int16)v9 & 0xFFFE, (unsigned int)result >= 0x800) )
    {
LABEL_21:
      _m_prefetchw((const void *)(v6 + 8));
      a2 = *(_QWORD *)(v6 + 8);
      if ( a2 != -1 )
      {
        do
        {
          result = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 8), a2 + 1, a2);
          v16 = a2 == result;
          a2 = result;
        }
        while ( !v16 && result != -1 );
      }
    }
    else
    {
      v14 = (unsigned __int16)v9 >> 1;
      *(_QWORD *)(v6 + 24 * v14 + 40) = v4;
      if ( v7 )
        a3 |= 1uLL;
      else
        a3 &= ~1uLL;
      *(_QWORD *)(v6 + 24 * v14 + 48) = a3;
      *(_QWORD *)(v6 + 24 * v14 + 56) = CurrentThread[1].KernelStack;
      v15 = _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFF0000);
      if ( (v15 & 1) != 0 && (v15 & 0x7FFF0000) == 0x10000 )
        KeSignalGate(v6 + 16, 0);
      result = (__int64)CurrentThread->WaitBlock[0].SparePtr;
      if ( result )
        _InterlockedOr64((volatile signed __int64 *)result, v8);
    }
    if ( !CurrentIrql )
      return KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, a2, a3, v6);
  }
  return result;
}
