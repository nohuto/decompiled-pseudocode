/*
 * XREFs of EtwpReleaseProviderTraitsReference @ 0x140438D8C
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x140435A20 (EtwpDeleteRegistrationObject.c)
 *     EtwUnregister @ 0x1404D02C4 (EtwUnregister.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     RtlRbRemoveNode @ 0x1400339F0 (RtlRbRemoveNode.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpReleaseProviderTraitsReference(__int64 a1)
{
  __int64 v1; // rbx
  struct _FAST_MUTEX *v3; // rdi
  _RTL_RB_TREE *v4; // rsi

  v1 = _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  if ( v1 )
  {
    if ( (*(_BYTE *)(a1 + 98) & 1) != 0 )
    {
      v3 = &EtwpProviderTraitsKmMutex;
      v4 = (_RTL_RB_TREE *)&EtwpProviderTraitsKmTree;
    }
    else
    {
      v3 = &EtwpProviderTraitsUmMutex;
      v4 = &EtwpProviderTraitsUmTree;
    }
    ExAcquireFastMutex(v3);
    if ( (*(_DWORD *)(v1 + 24))-- == 1 )
      RtlRbRemoveNode(v4, (PRTL_BALANCED_NODE)v1);
    else
      v1 = 0LL;
    KeReleaseGuardedMutex(v3);
    if ( v1 )
      ExFreePoolWithTag((PVOID)v1, 0);
  }
  return 0LL;
}
