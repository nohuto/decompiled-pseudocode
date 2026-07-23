/*
 * XREFs of EtwpReleaseProviderTraitsReference @ 0x1404CED94
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x1404CDFEC (EtwpDeleteRegistrationObject.c)
 *     EtwUnregister @ 0x140558318 (EtwUnregister.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     RtlRbRemoveNode @ 0x1400F6290 (RtlRbRemoveNode.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpReleaseProviderTraitsReference(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  ULONG_PTR *v6; // rbx
  _RTL_RB_TREE *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned __int8 CurrentIrql; // r14
  unsigned __int8 v12; // si
  signed __int32 v13; // eax

  v4 = _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  if ( v4 )
  {
    if ( (*(_BYTE *)(a1 + 98) & 1) != 0 )
    {
      v6 = (ULONG_PTR *)&EtwpProviderTraitsKmMutex;
      v7 = (_RTL_RB_TREE *)&EtwpProviderTraitsKmTree;
    }
    else
    {
      v6 = &EtwpProviderTraitsUmMutex;
      v7 = &EtwpProviderTraitsUmTree;
    }
    v8 = KeAbPreAcquire((ULONG_PTR)v6, 0LL, 0LL, a4);
    v9 = v8;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)v6, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)v6, v8);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    v6[1] = (ULONG_PTR)KeGetCurrentThread();
    *((_DWORD *)v6 + 12) = CurrentIrql;
    if ( (*(_DWORD *)(v4 + 24))-- == 1 )
      RtlRbRemoveNode(v7, (PRTL_BALANCED_NODE)v4);
    else
      v4 = 0LL;
    v6[1] = 0LL;
    v12 = *((_BYTE *)v6 + 48);
    v13 = _InterlockedCompareExchange((volatile signed __int32 *)v6, 1, 0);
    if ( v13 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)v6, v13);
    __writecr8(v12);
    KeAbPostRelease((ULONG_PTR)v6);
    if ( v4 )
      ExFreePoolWithTag((PVOID)v4, 0);
  }
  return 0LL;
}
