/*
 * XREFs of DbgkCopyProcessDebugPort @ 0x14046ACD0
 * Callers:
 *     PspInsertProcess @ 0x14046A910 (PspInsertProcess.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PspCheckForInvalidAccessByProtection @ 0x140509FD0 (PspCheckForInvalidAccessByProtection.c)
 *     DbgkpMarkProcessPeb @ 0x140666EA8 (DbgkpMarkProcessPeb.c)
 */

__int64 __fastcall DbgkCopyProcessDebugPort(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        volatile signed __int32 *a3,
        _BYTE *a4)
{
  volatile signed __int32 *v5; // rbx
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned __int8 v13; // bp
  signed __int32 v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  NTSTATUS v19; // edi
  char v20; // r14
  __int64 v21; // rax
  __int64 v22; // rbp
  unsigned __int8 v23; // r15
  unsigned __int8 v24; // bp
  signed __int32 v25; // eax
  unsigned __int8 v26[8]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+28h] [rbp-B0h]
  __int64 v28; // [rsp+30h] [rbp-A8h]

  *(_QWORD *)(BugCheckParameter1 + 1056) = 0LL;
  v5 = a3;
  if ( a3 )
  {
    ObfReferenceObject((PVOID)a3);
  }
  else
  {
    if ( !*(_QWORD *)(a2 + 1056) )
      goto LABEL_3;
    v9 = KeAbPreAcquire((ULONG_PTR)&DbgkpProcessDebugPortMutex, 0LL, 0LL, (__int64)a4);
    v10 = v9;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&DbgkpProcessDebugPortMutex, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&DbgkpProcessDebugPortMutex, v9);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    qword_14034D468 = (__int64)KeGetCurrentThread();
    dword_14034D490 = CurrentIrql;
    v5 = *(volatile signed __int32 **)(a2 + 1056);
    if ( v5 )
    {
      if ( (*(_DWORD *)(a2 + 772) & 2) != 0 )
        v5 = 0LL;
      else
        ObfReferenceObject(*(PVOID *)(a2 + 1056));
    }
    qword_14034D468 = 0LL;
    v13 = dword_14034D490;
    v14 = _InterlockedCompareExchange((volatile signed __int32 *)&DbgkpProcessDebugPortMutex, 1, 0);
    if ( v14 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&DbgkpProcessDebugPortMutex, v14);
    __writecr8(v13);
    KeAbPostRelease((ULONG_PTR)&DbgkpProcessDebugPortMutex);
  }
  if ( !v5 )
    goto LABEL_3;
  LOBYTE(v15) = *(_BYTE *)(a2 + 1714);
  LOBYTE(v17) = *(_BYTE *)(BugCheckParameter1 + 1714);
  LOBYTE(v16) = KeGetCurrentThread()->PreviousMode;
  if ( (unsigned __int8)PspCheckForInvalidAccessByProtection(v16, v15, v17) )
  {
    v19 = -1073740014;
  }
  else if ( (v5[24] & 4) == 0 || *(_QWORD *)(BugCheckParameter1 + 1064) )
  {
    if ( !*(_QWORD *)(BugCheckParameter1 + 720)
      || (v27 = *(_QWORD *)(BugCheckParameter1 + 720), v28 = 1LL, v19 = HvlpEnterIumSecureMode(1u, 11, 0, v26), v19 >= 0) )
    {
      v20 = 0;
      v21 = KeAbPreAcquire((ULONG_PTR)(v5 + 6), 0LL, 0LL, v18);
      v22 = v21;
      v23 = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset(v5 + 6, 0) )
        ExpAcquireFastMutexContended((ULONG_PTR)(v5 + 6), v21);
      if ( v22 )
        *(_BYTE *)(v22 + 26) |= 1u;
      *((_QWORD *)v5 + 4) = KeGetCurrentThread();
      *((_DWORD *)v5 + 18) = v23;
      if ( (v5[24] & 1) != 0 )
        v20 = 1;
      else
        *(_QWORD *)(BugCheckParameter1 + 1056) = v5;
      *((_QWORD *)v5 + 4) = 0LL;
      v24 = *((_BYTE *)v5 + 72);
      v25 = _InterlockedCompareExchange(v5 + 6, 1, 0);
      if ( v25 )
        ExpReleaseFastMutexContended(v5 + 6, v25);
      __writecr8(v24);
      KeAbPostRelease((ULONG_PTR)(v5 + 6));
      if ( v20 )
      {
        ObfDereferenceObject((PVOID)v5);
        v5 = 0LL;
      }
      if ( v5 )
      {
        DbgkpMarkProcessPeb(BugCheckParameter1);
        *a4 = 1;
        return 0LL;
      }
LABEL_3:
      *a4 = 0;
      return 0LL;
    }
  }
  else
  {
    v19 = -1073741637;
  }
  ObfDereferenceObject((PVOID)v5);
  return (unsigned int)v19;
}
