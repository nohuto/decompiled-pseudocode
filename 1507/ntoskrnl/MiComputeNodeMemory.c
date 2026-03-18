/*
 * XREFs of MiComputeNodeMemory @ 0x14059AD7C
 * Callers:
 *     MiAddPhysicalMemory @ 0x1402123C8 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1406A1FE8 (MiRemovePhysicalMemory.c)
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void __fastcall MiComputeNodeMemory(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v5; // r12
  unsigned int v6; // r14d
  __int64 v7; // r13
  unsigned __int64 *v8; // rbx
  unsigned __int8 *v9; // rdx
  _QWORD *v10; // r8
  unsigned __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rdi
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  __int16 v17; // ax
  _QWORD v18[4]; // [rsp+28h] [rbp-50h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = qword_140353D38;
  v6 = 0;
  v7 = *(unsigned int *)qword_140353D38;
  if ( KeNumberNodes )
  {
    v8 = (unsigned __int64 *)(qword_140353D28 + 1304);
    do
    {
      memset(v18, 0, sizeof(v18));
      if ( (_DWORD)v7 )
      {
        v9 = (unsigned __int8 *)(16 * (v7 + 1) + 1 + v5);
        a4 = v7;
        v10 = (_QWORD *)(v5 + 24);
        do
        {
          if ( *(v9 - 1) == v6 )
            v18[*v9] += *v10;
          v10 += 2;
          v9 += 2;
          --a4;
        }
        while ( a4 );
      }
      v11 = 0LL;
      --CurrentThread->SpecialApcDisable;
      v12 = KeAbPreAcquire((ULONG_PTR)v8, 0LL, 0LL, a4);
      v14 = v12;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
        ExfAcquirePushLockExclusiveEx(v8, v12, (ULONG_PTR)v8, v13);
      if ( v14 )
        *(_BYTE *)(v14 + 26) |= 1u;
      if ( MmNumberOfChannels )
      {
        v15 = v18;
        v16 = (unsigned int)MmNumberOfChannels;
        do
        {
          v11 += *v15;
          *(_QWORD *)((char *)v15 + (_QWORD)v8 + 48LL - (_QWORD)&retaddr - 88) = *v15;
          ++v15;
          --v16;
        }
        while ( v16 );
      }
      *(v8 - 11) = v11;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v8);
      KeAbPostRelease((ULONG_PTR)v8);
      v17 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v17;
      if ( !v17
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      v8 += 167;
      ++v6;
    }
    while ( v6 < (unsigned __int16)KeNumberNodes );
  }
}
