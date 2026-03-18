/*
 * XREFs of SeSetSessionIdToken @ 0x1403C51A4
 * Callers:
 *     NtSetInformationToken @ 0x1403C45C8 (NtSetInformationToken.c)
 *     SepCopyClientTokenAndSetSilo @ 0x14064D8F4 (SepCopyClientTokenAndSetSilo.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140079E5C (PsIsCurrentThreadInServerSilo.c)
 *     DbgPrint @ 0x1400E696C (DbgPrint.c)
 *     MmGetSessionObjectById @ 0x1401DBD14 (MmGetSessionObjectById.c)
 *     MmIsSessionInCurrentServerSilo @ 0x1401DBD8C (MmIsSessionInCurrentServerSilo.c)
 *     SepSetTokenLowboxNumber @ 0x1403BED94 (SepSetTokenLowboxNumber.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1403C91FC (SepDereferenceLowBoxNumberEntry.c)
 *     SepSetTokenSessionById @ 0x140653D2C (SepSetTokenSessionById.c)
 */

NTSTATUS __stdcall SeSetSessionIdToken(PACCESS_TOKEN Token, ULONG SessionId)
{
  void *SessionObjectById; // rsi
  NTSTATUS v5; // ebp
  bool IsCurrentThreadInServerSilo; // al
  const char *v7; // rdx
  struct _KTHREAD *CurrentThread; // rax
  int v10; // r8d
  signed __int32 v11[8]; // [rsp+0h] [rbp-38h] BYREF
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  SessionObjectById = 0LL;
  Object = 0LL;
  v5 = 0;
  if ( !PsIsCurrentThreadInServerSilo() || MmIsSessionInCurrentServerSilo(SessionId) )
  {
    if ( !SeTokenDoesNotTrackSessionObject )
      SessionObjectById = MmGetSessionObjectById(SessionId);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
    _InterlockedOr(v11, 0);
    if ( *((_BYTE *)Token + 204) )
    {
      v5 = -1073741525;
    }
    else
    {
      if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 && *((_QWORD *)Token + 135) )
      {
        SepDereferenceLowBoxNumberEntry(*((unsigned int *)Token + 30));
        *((_QWORD *)Token + 135) = 0LL;
      }
      if ( *((_DWORD *)Token + 30) != SessionId )
      {
        LOBYTE(v10) = 1;
        SepSetTokenSessionById((_DWORD)Token, SessionId, v10, (_DWORD)SessionObjectById, (__int64)&Object);
        SessionObjectById = 0LL;
      }
      if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 )
        v5 = SepSetTokenLowboxNumber((__int64)Token, *((_QWORD *)Token + 98));
    }
    _InterlockedOr(v11, 0);
    ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
    KeLeaveCriticalRegion();
    if ( SessionObjectById )
      ObfDereferenceObject(SessionObjectById);
    if ( Object )
      ObfDereferenceObject(Object);
    return v5;
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
