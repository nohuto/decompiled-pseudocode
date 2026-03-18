/*
 * XREFs of EtwpAcquireTokenAccessInformation @ 0x1405756A4
 * Callers:
 *     EtwpEnableGuid @ 0x14048E3D4 (EtwpEnableGuid.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PsReferencePrimaryToken @ 0x140418C20 (PsReferencePrimaryToken.c)
 *     SeQueryInformationToken @ 0x140439FF0 (SeQueryInformationToken.c)
 */

__int64 __fastcall EtwpAcquireTokenAccessInformation(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  _BYTE *v3; // rax
  _BYTE *v4; // rbx
  void *v5; // rcx
  PACCESS_TOKEN v6; // rbx
  unsigned int InformationToken; // esi

  v1 = (unsigned __int64 *)(a1 + 688);
  v3 = (_BYTE *)KeAbPreAcquire(a1 + 688, 0LL, 0);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, v3, (ULONG_PTR)v1);
  if ( v4 )
    v4[26] |= 1u;
  v5 = *(void **)(a1 + 776);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    *(_QWORD *)(a1 + 776) = 0LL;
  }
  v6 = PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
  InformationToken = SeQueryInformationToken(v6, TokenAccessInformation, (PVOID *)(a1 + 776));
  ObfDereferenceObject(v6);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v1);
  KeAbPostRelease((ULONG_PTR)v1);
  return InformationToken;
}
