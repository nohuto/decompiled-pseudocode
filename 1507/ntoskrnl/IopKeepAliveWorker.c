/*
 * XREFs of IopKeepAliveWorker @ 0x1401F76B8
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PspAdjustKeepAliveCountProcess @ 0x1406C00C8 (PspAdjustKeepAliveCountProcess.c)
 */

__int64 __fastcall IopKeepAliveWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // bp
  signed __int8 v5; // cf
  PVOID v6; // rbx
  int v7; // esi
  _QWORD *v8; // rcx
  PVOID *v9; // rax
  bool v10; // zf
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 v13; // rcx
  int v14; // eax
  unsigned __int8 v15; // bp
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(qword_14034BB50);
  }
  else
  {
    v5 = _interlockedbittestandset64((volatile signed __int32 *)qword_14034BB50, 0LL);
    if ( v5 )
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)qword_14034BB50);
  }
  qword_14034BB80 = (__int64)KeGetCurrentThread();
  while ( 1 )
  {
    v6 = qword_14034BB40;
    if ( qword_14034BB40 == &qword_14034BB40 )
      break;
    v7 = *((_DWORD *)qword_14034BB40 + 8);
    *((_DWORD *)qword_14034BB40 + 8) = 0;
    if ( v7 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(qword_14034BB50, retaddr);
      else
        _InterlockedAnd64(qword_14034BB50, 0LL);
      __writecr8(CurrentIrql);
      if ( v7 <= 0 )
      {
        if ( v7 != -1 )
        {
          v12 = (unsigned int)(-1 - v7);
          do
          {
            LOBYTE(a4) = *((_BYTE *)v6 + 18);
            PspAdjustKeepAliveCountProcess(*((_QWORD *)v6 + 3), 0xFFFFFFFFLL, *((_QWORD *)v6 + 5), a4);
            ObfDereferenceObjectWithTag(*((PVOID *)v6 + 3), 0x746C6644u);
            --v12;
          }
          while ( v12 );
        }
        LOBYTE(a4) = *((_BYTE *)v6 + 18);
        v13 = *((_QWORD *)v6 + 3);
        if ( (_BYTE)a4 )
          v14 = *(_DWORD *)(v13 + 1800) & 0x7FFFFFFF;
        else
          v14 = *(_DWORD *)(v13 + 1804);
        if ( v14 == 1 )
        {
          v15 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireSpinLockInstrumented(qword_14034BB50);
          }
          else
          {
            v5 = _interlockedbittestandset64((volatile signed __int32 *)qword_14034BB50, 0LL);
            if ( v5 )
              KxWaitForSpinLockAndAcquire((volatile signed __int32 *)qword_14034BB50);
          }
          if ( MEMORY[0xFFFFF78000000014] < *((_QWORD *)v6 + 6) )
          {
            --*((_DWORD *)v6 + 8);
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              KiReleaseSpinLockInstrumented(qword_14034BB50, retaddr);
            else
              _InterlockedAnd64(qword_14034BB50, 0LL);
            __writecr8(v15);
            KeDelayExecutionThread(0, 1u, (PLARGE_INTEGER)v6 + 6);
            goto LABEL_39;
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            KiReleaseSpinLockInstrumented(qword_14034BB50, retaddr);
          else
            _InterlockedAnd64(qword_14034BB50, 0LL);
          __writecr8(v15);
          LOBYTE(a4) = *((_BYTE *)v6 + 18);
          v13 = *((_QWORD *)v6 + 3);
        }
        PspAdjustKeepAliveCountProcess(v13, 0xFFFFFFFFLL, *((_QWORD *)v6 + 5), a4);
        ObfDereferenceObjectWithTag(*((PVOID *)v6 + 3), 0x746C6644u);
      }
      else
      {
        do
        {
          ObfReferenceObjectWithTag(*((PVOID *)v6 + 3), 0x746C6644u);
          LOBYTE(v11) = *((_BYTE *)v6 + 18);
          PspAdjustKeepAliveCountProcess(*((_QWORD *)v6 + 3), 1LL, *((_QWORD *)v6 + 5), v11);
          --v7;
        }
        while ( v7 );
      }
LABEL_39:
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(qword_14034BB50);
      }
      else
      {
        v5 = _interlockedbittestandset64((volatile signed __int32 *)qword_14034BB50, 0LL);
        if ( v5 )
          KxWaitForSpinLockAndAcquire((volatile signed __int32 *)qword_14034BB50);
      }
    }
    else
    {
      v8 = *(_QWORD **)v6;
      v9 = (PVOID *)*((_QWORD *)v6 + 1);
      if ( *(PVOID *)(*(_QWORD *)v6 + 8LL) != v6 || *v9 != v6 )
        __fastfail(3u);
      *v9 = v8;
      v8[1] = v9;
      v10 = *((_BYTE *)v6 + 17) == 1;
      *((_BYTE *)v6 + 16) = 0;
      if ( v10 )
        ExFreePoolWithTag(v6, 0);
    }
  }
  qword_14034BB80 = 0LL;
  byte_14034BB78 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(qword_14034BB50, retaddr);
  else
    _InterlockedAnd64(qword_14034BB50, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
