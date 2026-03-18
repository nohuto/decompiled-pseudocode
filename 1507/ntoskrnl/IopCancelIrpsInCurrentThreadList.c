/*
 * XREFs of IopCancelIrpsInCurrentThreadList @ 0x14007457C
 * Callers:
 *     IopCancelIrpsInThreadList @ 0x1404A8064 (IopCancelIrpsInThreadList.c)
 *     IopCancelIrpsInCurrentThreadListApcRoutine @ 0x1404A819C (IopCancelIrpsInCurrentThreadListApcRoutine.c)
 * Callees:
 *     IoCancelIrp @ 0x140073FAC (IoCancelIrp.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall IopCancelIrpsInCurrentThreadList(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  volatile signed __int32 *v5; // rbx
  unsigned int v8; // r15d
  unsigned __int8 CurrentIrql; // r12
  __int64 *i; // rsi
  int v12; // eax
  void *retaddr; // [rsp+58h] [rbp+0h]

  v5 = (volatile signed __int32 *)(a2 + 1832);
  v8 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(a2 + 1832);
  }
  else if ( _interlockedbittestandset64(v5, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(a2 + 1832);
  }
  for ( i = *(__int64 **)(a2 + 1632); (__int64 *)(a2 + 1632) != i; i = (__int64 *)*i )
  {
    if ( *((char *)i + 35) < *((char *)i + 34) + 2 )
    {
      if ( a4 )
      {
        if ( !a3 || i[5] == a3 )
        {
          v12 = *((_DWORD *)i - 4);
          if ( (v12 & 0x402) == 0 && ((v12 & 0x84) != 0 || (*((_BYTE *)i + 39) & 2) != 0) )
          {
LABEL_15:
            v8 = 1;
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              KiReleaseSpinLockInstrumented(v5, retaddr);
            else
              _InterlockedAnd64((volatile signed __int64 *)v5, 0LL);
            __writecr8(1uLL);
            IoCancelIrp((PIRP)(i - 4));
            __writecr8(2uLL);
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              KiAcquireSpinLockInstrumented(v5);
            }
            else if ( _interlockedbittestandset64(v5, 0LL) )
            {
              KxWaitForSpinLockAndAcquire(v5);
            }
          }
        }
      }
      else if ( (*(_DWORD *)(i - 2) & 2) == 0 && i[20] == a1 && (!a3 || i[5] == a3) )
      {
        goto LABEL_15;
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v5, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v5, 0LL);
  __writecr8(CurrentIrql);
  return v8;
}
