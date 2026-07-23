/*
 * XREFs of SeSetSessionIdToken @ 0x14047991C
 * Callers:
 *     NtSetInformationToken @ 0x1404786A0 (NtSetInformationToken.c)
 *     SepCopyClientTokenAndSetSilo @ 0x14068D15C (SepCopyClientTokenAndSetSilo.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     MmGetSessionObjectById @ 0x1401EC804 (MmGetSessionObjectById.c)
 *     SepSetTokenLowboxNumber @ 0x140475934 (SepSetTokenLowboxNumber.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x14051AB98 (SepDereferenceLowBoxNumberEntry.c)
 *     SepSetTokenSessionById @ 0x140693194 (SepSetTokenSessionById.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall SeSetSessionIdToken(PACCESS_TOKEN Token, ULONG SessionId)
{
  __int64 v2; // r8
  NTSTATUS v3; // esi
  void *SessionObjectById; // rdi
  struct _KTHREAD *CurrentThread; // rax
  int v8; // r8d
  __int64 v9; // rdx
  signed __int32 v11[8]; // [rsp+0h] [rbp-38h] BYREF
  PVOID *p_Object; // [rsp+20h] [rbp-18h]
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  SessionObjectById = 0LL;
  Object = 0LL;
  if ( !SeTokenDoesNotTrackSessionObject )
    SessionObjectById = MmGetSessionObjectById(SessionId, *(__int64 *)&SessionId, v2);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
  _InterlockedOr(v11, 0);
  if ( *((_BYTE *)Token + 204) )
  {
    v3 = -1073741525;
  }
  else
  {
    if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 )
    {
      v9 = *((_QWORD *)Token + 135);
      if ( v9 )
      {
        SepDereferenceLowBoxNumberEntry(*((unsigned int *)Token + 30), v9);
        *((_QWORD *)Token + 135) = 0LL;
      }
    }
    if ( *((_DWORD *)Token + 30) != SessionId )
    {
      LOBYTE(v8) = 1;
      p_Object = &Object;
      SepSetTokenSessionById((_DWORD)Token, SessionId, v8, (__int64)SessionObjectById);
      SessionObjectById = 0LL;
    }
    if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 )
      v3 = SepSetTokenLowboxNumber((__int64)Token, *((_QWORD *)Token + 98));
  }
  _InterlockedOr(v11, 0);
  ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
  KeLeaveCriticalRegion();
  if ( SessionObjectById )
    ObfDereferenceObject(SessionObjectById);
  if ( Object )
    ObfDereferenceObject(Object);
  return v3;
}
