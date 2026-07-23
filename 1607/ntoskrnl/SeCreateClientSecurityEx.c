/*
 * XREFs of SeCreateClientSecurityEx @ 0x14040E110
 * Callers:
 *     AlpcpGetEffectiveTokenMessage @ 0x1403FDD8C (AlpcpGetEffectiveTokenMessage.c)
 *     AlpcpExposeTokenAttribute @ 0x140449560 (AlpcpExposeTokenAttribute.c)
 *     AlpcpImpersonateMessage @ 0x1404F1060 (AlpcpImpersonateMessage.c)
 * Callees:
 *     SepReconcileTrustSidWithProcessProtection @ 0x14000E370 (SepReconcileTrustSidWithProcessProtection.c)
 *     ObFastReferenceObject @ 0x14000F2E0 (ObFastReferenceObject.c)
 *     PsGetCurrentServerSilo @ 0x1400131A0 (PsGetCurrentServerSilo.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     PsIsHostSilo @ 0x140079FE8 (PsIsHostSilo.c)
 *     PspUnlockProcessShared @ 0x1400C7AE4 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x1400C7B28 (PspLockProcessShared.c)
 *     ObFastReferenceObjectLocked @ 0x1400CF3D4 (ObFastReferenceObjectLocked.c)
 *     PsReferenceImpersonationTokenEx @ 0x140410FE0 (PsReferenceImpersonationTokenEx.c)
 *     SepCreateClientSecurityEx @ 0x140411140 (SepCreateClientSecurityEx.c)
 *     SepUpdateSiloInClientSecurity @ 0x14069271C (SepUpdateSiloInClientSecurity.c)
 */

__int64 __fastcall SeCreateClientSecurityEx(__int64 a1, int a2, unsigned __int8 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 Process; // rsi
  __int64 *v10; // rdi
  int v11; // r14d
  char v12; // r15
  __int64 result; // rax
  unsigned int v14; // esi
  __int64 CurrentServerSilo; // rbx
  unsigned int v16; // ebx
  char v17; // [rsp+60h] [rbp-38h] BYREF
  char v18; // [rsp+61h] [rbp-37h] BYREF
  char v19; // [rsp+62h] [rbp-36h] BYREF
  int v20; // [rsp+64h] [rbp-34h] BYREF
  __int64 v21; // [rsp+68h] [rbp-30h] BYREF
  char v22; // [rsp+A0h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v17 = 0;
  v21 = 0LL;
  if ( (struct _KTHREAD *)a1 == CurrentThread )
    Process = (__int64)CurrentThread->ApcState.Process;
  else
    Process = *(_QWORD *)(a1 + 544);
  v10 = (__int64 *)PsReferenceImpersonationTokenEx(
                     a1,
                     0,
                     (unsigned int)&v19,
                     (unsigned int)&v18,
                     (__int64)&v20,
                     (__int64)&v22);
  if ( v10 )
  {
    v12 = v18;
    v11 = 2;
  }
  else
  {
    v10 = (__int64 *)ObFastReferenceObject((signed __int64 *)(Process + 856));
    if ( !v10 )
    {
      PspLockProcessShared(Process, (__int64)CurrentThread);
      v10 = (__int64 *)ObFastReferenceObjectLocked((_QWORD *)(Process + 856));
      PspUnlockProcessShared(Process, (__int64)CurrentThread);
    }
    v11 = 1;
    v22 = *(_BYTE *)(Process + 1738);
    v12 = 0;
  }
  SepReconcileTrustSidWithProcessProtection(v10[138], (__int64)&v22, &v17, &v21);
  result = SepCreateClientSecurityEx((_DWORD)v10, a2, a3, v11, v12, v20, 1, a1, v17, v21, a4);
  v14 = result;
  if ( (int)result < 0 || !*(_BYTE *)(a4 + 8) )
  {
    ObfDereferenceObject(v10);
    return v14;
  }
  if ( *(PEPROCESS *)(a1 + 544) != PsInitialSystemProcess )
    return result;
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( PsIsHostSilo(CurrentServerSilo) )
    return v14;
  result = SepUpdateSiloInClientSecurity(a4, CurrentServerSilo);
  v16 = result;
  if ( (int)result < 0 )
  {
    ObfDereferenceObject(v10);
    return v16;
  }
  return result;
}
