/*
 * XREFs of SeSetSessionIdToken @ 0x140527E54
 * Callers:
 *     NtSetInformationToken @ 0x14046BEF8 (NtSetInformationToken.c)
 *     SepCopyClientTokenAndSetSilo @ 0x1406D0D40 (SepCopyClientTokenAndSetSilo.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140016968 (PsIsCurrentThreadInServerSilo.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     MmGetSessionObjectById @ 0x1402209E8 (MmGetSessionObjectById.c)
 *     MmIsSessionInCurrentServerSilo @ 0x140220A64 (MmIsSessionInCurrentServerSilo.c)
 *     SepSetTokenLowboxNumber @ 0x140411728 (SepSetTokenLowboxNumber.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140528180 (SepDereferenceLowBoxNumberEntry.c)
 *     SepSetTokenSessionById @ 0x1406D5BD8 (SepSetTokenSessionById.c)
 */

NTSTATUS __stdcall SeSetSessionIdToken(PACCESS_TOKEN Token, ULONG SessionId)
{
  NTSTATUS v3; // ebp
  void *SessionObjectById; // rsi
  bool IsCurrentThreadInServerSilo; // al
  const char *v7; // rdx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  struct _KTHREAD *v13; // rdx
  __int16 v14; // cx
  signed __int32 v15[8]; // [rsp+0h] [rbp-48h] BYREF
  PVOID *p_Object; // [rsp+20h] [rbp-28h]
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  Object = 0LL;
  SessionObjectById = 0LL;
  if ( !PsIsCurrentThreadInServerSilo() || MmIsSessionInCurrentServerSilo(SessionId) )
  {
    if ( !SeTokenDoesNotTrackSessionObject )
      SessionObjectById = MmGetSessionObjectById(SessionId);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
    _InterlockedOr(v15, 0);
    if ( *((_BYTE *)Token + 204) )
    {
      v3 = -1073741525;
    }
    else
    {
      if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 )
      {
        v12 = *((_QWORD *)Token + 135);
        if ( v12 )
        {
          SepDereferenceLowBoxNumberEntry(*((unsigned int *)Token + 30), v12);
          *((_QWORD *)Token + 135) = 0LL;
        }
      }
      if ( *((_DWORD *)Token + 30) != SessionId )
      {
        LOBYTE(v10) = 1;
        p_Object = &Object;
        SepSetTokenSessionById((_DWORD)Token, SessionId, v10, (__int64)SessionObjectById);
        SessionObjectById = 0LL;
      }
      if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 )
        v3 = SepSetTokenLowboxNumber((__int64)Token, *((_QWORD *)Token + 98), v10, v11);
    }
    _InterlockedOr(v15, 0);
    ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
    v13 = KeGetCurrentThread();
    v14 = v13->KernelApcDisable + 1;
    v13->KernelApcDisable = v14;
    if ( !v14
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
      && !v13->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( SessionObjectById )
      ObfDereferenceObject(SessionObjectById);
    if ( Object )
      ObfDereferenceObject(Object);
    return v3;
  }
  else
  {
    IsCurrentThreadInServerSilo = PsIsCurrentThreadInServerSilo();
    v7 = "Silo";
    if ( !IsCurrentThreadInServerSilo )
      v7 = "Infrastructure";
    DbgPrint("%s doing a Set Token Session Id outside of its range %d\n", v7, SessionId);
    return -1073741727;
  }
}
