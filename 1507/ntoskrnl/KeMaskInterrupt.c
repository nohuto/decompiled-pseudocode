/*
 * XREFs of KeMaskInterrupt @ 0x14014B230
 * Callers:
 *     IopMaskInterrupt @ 0x14014AF08 (IopMaskInterrupt.c)
 *     KeDisconnectInterrupt @ 0x14014AF94 (KeDisconnectInterrupt.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400A48A0 (KiInsertQueueDpc.c)
 *     KeRemoveQueueDpcEx @ 0x14010C9A0 (KeRemoveQueueDpcEx.c)
 *     KeSetTargetProcessorDpcEx @ 0x140128F58 (KeSetTargetProcessorDpcEx.c)
 *     KiMaskInterruptInternal @ 0x14014B35C (KiMaskInterruptInternal.c)
 *     KiReleaseInterruptConnectLock @ 0x140155820 (KiReleaseInterruptConnectLock.c)
 *     KiAcquireInterruptConnectLock @ 0x140155830 (KiAcquireInterruptConnectLock.c)
 *     KiIsInterruptTypeSecondary @ 0x140155F14 (KiIsInterruptTypeSecondary.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KiMaskSecondaryInterruptInternal @ 0x1402038F4 (KiMaskSecondaryInterruptInternal.c)
 */

__int64 __fastcall KeMaskInterrupt(__int64 *a1, unsigned __int8 a2, __int64 a3, struct _KDPC *a4)
{
  char IsInterruptTypeSecondary; // al
  NTSTATUS v9; // ebx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r14
  char v13; // dl
  unsigned __int8 CurrentIrql; // r12
  unsigned __int8 v15; // cl
  __int64 v16; // r8
  __int64 v18; // rsi
  NTSTATUS v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // ecx
  unsigned __int8 v23[4]; // [rsp+30h] [rbp-30h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+34h] [rbp-2Ch] BYREF
  unsigned int v25; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v26[16]; // [rsp+40h] [rbp-20h] BYREF

  IsInterruptTypeSecondary = KiIsInterruptTypeSecondary(a3);
  v9 = 0;
  LOBYTE(v10) = 0;
  v11 = IsInterruptTypeSecondary != 0;
  v25 = 1;
  if ( a2 )
  {
    while ( 1 )
    {
      _m_prefetchw((const void *)(a1[(unsigned __int8)v10] + 104));
      if ( (_InterlockedOr((volatile signed __int32 *)&v25, v25) & 1) != 0 )
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
      v9 = KiMaskSecondaryInterruptInternal(*(unsigned int *)(*a1 + 88), (unsigned int)v12, v10);
      goto LABEL_12;
    }
    v13 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    LODWORD(v11) = KeGetPcr()->Prcb.Number;
    v15 = 0;
    v23[0] = CurrentIrql;
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
      v9 = KiMaskInterruptInternal(*(unsigned int *)(v16 + 88), (unsigned int)v12);
      v13 = 1;
    }
LABEL_11:
    __writecr8(CurrentIrql);
    if ( v13 )
      goto LABEL_12;
    v18 = *a1;
    if ( KeGetCurrentIrql() < 2u )
    {
      KiAcquireInterruptConnectLock(*(unsigned int *)(v18 + 96), v23, v26, v11);
      v19 = KiMaskInterruptInternal(*(unsigned int *)(v18 + 88), (unsigned int)v12);
      LOBYTE(v20) = v23[0];
      v9 = v19;
      KiReleaseInterruptConnectLock(v20, v26);
LABEL_12:
      if ( v9 == 296 )
        return 0;
      return (unsigned int)v9;
    }
    if ( a4 )
    {
      v21 = *(unsigned int *)(v18 + 96);
      if ( !(_DWORD)v21 )
      {
        ProcNumber = 0;
        goto LABEL_27;
      }
      if ( (unsigned int)v21 < 0x280 )
      {
        v22 = KiProcessorIndexToNumberMappingTable[v21];
        if ( v22 )
        {
          ProcNumber.Reserved = 0;
          ProcNumber.Group = v22 >> 6;
          ProcNumber.Number = v22 & 0x3F;
LABEL_27:
          KeRemoveQueueDpcEx((int *)a4, 0);
          a4->TargetInfoAsUlong = 275;
          a4->DeferredRoutine = (PKDEFERRED_ROUTINE)KiMaskInterruptDpc;
          a4->DeferredContext = 0LL;
          a4->DpcData = 0LL;
          a4->ProcessorHistory = 0LL;
          v9 = KeSetTargetProcessorDpcEx(a4, &ProcNumber);
          if ( v9 >= 0 )
            KiInsertQueueDpc((__int64)a4, *(unsigned int *)(v18 + 88), v12, 0LL, 0);
          goto LABEL_12;
        }
      }
    }
    return (unsigned int)-1073741811;
  }
  return 0LL;
}
