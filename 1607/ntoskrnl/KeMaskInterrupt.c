/*
 * XREFs of KeMaskInterrupt @ 0x140124610
 * Callers:
 *     IopMaskInterrupt @ 0x140124340 (IopMaskInterrupt.c)
 *     KeDisconnectInterrupt @ 0x1401243CC (KeDisconnectInterrupt.c)
 * Callees:
 *     KeGetProcessorNumberFromIndex @ 0x140071E68 (KeGetProcessorNumberFromIndex.c)
 *     KeRemoveQueueDpcEx @ 0x140087618 (KeRemoveQueueDpcEx.c)
 *     KeSetTargetProcessorDpcEx @ 0x1400B0C04 (KeSetTargetProcessorDpcEx.c)
 *     KiInsertQueueDpc @ 0x1400D6160 (KiInsertQueueDpc.c)
 *     KiMaskInterruptInternal @ 0x14012472C (KiMaskInterruptInternal.c)
 *     KiReleaseInterruptConnectLock @ 0x14012D81C (KiReleaseInterruptConnectLock.c)
 *     KiAcquireInterruptConnectLock @ 0x14012D82C (KiAcquireInterruptConnectLock.c)
 *     KiIsInterruptTypeSecondary @ 0x14012DE50 (KiIsInterruptTypeSecondary.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KiMaskSecondaryInterruptInternal @ 0x1401D5BFC (KiMaskSecondaryInterruptInternal.c)
 */

__int64 __fastcall KeMaskInterrupt(__int64 *a1, unsigned __int8 a2, __int64 a3, struct _KDPC *a4)
{
  char IsInterruptTypeSecondary; // al
  NTSTATUS ProcessorNumberFromIndex; // ebx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbp
  char v13; // dl
  unsigned __int8 CurrentIrql; // r15
  unsigned __int8 v15; // cl
  __int64 v16; // r8
  __int64 v18; // rsi
  NTSTATUS v19; // eax
  __int64 v20; // rcx
  unsigned __int8 v21[4]; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v22; // [rsp+34h] [rbp-64h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v24[16]; // [rsp+40h] [rbp-58h] BYREF

  IsInterruptTypeSecondary = KiIsInterruptTypeSecondary(a3);
  ProcessorNumberFromIndex = 0;
  LOBYTE(v10) = 0;
  v11 = IsInterruptTypeSecondary != 0;
  v22 = 1;
  if ( a2 )
  {
    while ( 1 )
    {
      _m_prefetchw((const void *)(a1[(unsigned __int8)v10] + 104));
      if ( (_InterlockedOr((volatile signed __int32 *)&v22, v22) & 1) != 0 )
        break;
      LOBYTE(v10) = v10 + 1;
      if ( (unsigned __int8)v10 >= a2 )
        goto LABEL_4;
    }
    return (unsigned int)-2147483611;
  }
LABEL_4:
  if ( !*(_DWORD *)(a3 + 8) )
  {
    v12 = *(unsigned int *)(a3 + 64);
    if ( (_DWORD)v11 == 1 )
    {
      ProcessorNumberFromIndex = KiMaskSecondaryInterruptInternal(*(unsigned int *)(*a1 + 88), (unsigned int)v12, v10);
    }
    else
    {
      v13 = 0;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      LODWORD(v11) = KeGetPcr()->Prcb.Number;
      v15 = 0;
      v21[0] = CurrentIrql;
      if ( a2 )
      {
        while ( 1 )
        {
          v16 = a1[v15];
          if ( *(_DWORD *)(v16 + 96) == (_DWORD)v11 )
            break;
          if ( ++v15 >= a2 )
            goto LABEL_11;
        }
        ProcessorNumberFromIndex = KiMaskInterruptInternal(*(unsigned int *)(v16 + 88), (unsigned int)v12);
        v13 = 1;
      }
LABEL_11:
      __writecr8(CurrentIrql);
      if ( !v13 )
      {
        v18 = *a1;
        if ( KeGetCurrentIrql() >= 2u )
        {
          if ( !a4 )
            return (unsigned int)-1073741811;
          ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(*(_DWORD *)(v18 + 96), &ProcNumber);
          if ( ProcessorNumberFromIndex >= 0 )
          {
            KeRemoveQueueDpcEx((int *)a4, 0);
            a4->TargetInfoAsUlong = 275;
            a4->DeferredRoutine = (PKDEFERRED_ROUTINE)KiMaskInterruptDpc;
            a4->DeferredContext = 0LL;
            a4->DpcData = 0LL;
            a4->ProcessorHistory = 0LL;
            ProcessorNumberFromIndex = KeSetTargetProcessorDpcEx(a4, &ProcNumber);
            if ( ProcessorNumberFromIndex >= 0 )
              KiInsertQueueDpc((ULONG_PTR)a4, *(unsigned int *)(v18 + 88), v12, 0LL, 0);
          }
        }
        else
        {
          KiAcquireInterruptConnectLock(*(unsigned int *)(v18 + 96), v21, v24, v11);
          v19 = KiMaskInterruptInternal(*(unsigned int *)(v18 + 88), (unsigned int)v12);
          LOBYTE(v20) = v21[0];
          ProcessorNumberFromIndex = v19;
          KiReleaseInterruptConnectLock(v20, v24);
        }
      }
    }
    if ( ProcessorNumberFromIndex == 296 )
      return 0;
    return (unsigned int)ProcessorNumberFromIndex;
  }
  return 0LL;
}
