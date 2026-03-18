/*
 * XREFs of EtwpAcquireTokenAccessInformation @ 0x1404CF5BC
 * Callers:
 *     EtwpEnableGuid @ 0x1404CD4B0 (EtwpEnableGuid.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SeQueryInformationToken @ 0x1403FE580 (SeQueryInformationToken.c)
 *     PsReferencePrimaryToken @ 0x140412C90 (PsReferencePrimaryToken.c)
 */

__int64 __fastcall EtwpAcquireTokenAccessInformation(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx
  void *v5; // rcx
  PACCESS_TOKEN v6; // rbx
  unsigned int InformationToken; // esi

  v1 = (unsigned __int64 *)(a1 + 704);
  v3 = KeAbPreAcquire(a1 + 704, 0LL, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, v3, (ULONG_PTR)v1);
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  v5 = *(void **)(a1 + 792);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    *(_QWORD *)(a1 + 792) = 0LL;
  }
  v6 = PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
  InformationToken = SeQueryInformationToken(v6, TokenAccessInformation, (PVOID *)(a1 + 792));
  ObfDereferenceObject(v6);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v1);
  KeAbPostRelease((ULONG_PTR)v1);
  return InformationToken;
}
