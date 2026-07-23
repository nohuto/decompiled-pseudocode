/*
 * XREFs of PopPepUpdateConstraints @ 0x14012C8E4
 * Callers:
 *     PopPluginDevicePower @ 0x1400BFF6C (PopPluginDevicePower.c)
 *     PopPepDeviceDState @ 0x14012C810 (PopPepDeviceDState.c)
 *     PopPepDeviceWaitWake @ 0x14012C8A8 (PopPepDeviceWaitWake.c)
 * Callees:
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     PopPepCountReadyActivities @ 0x1400C0224 (PopPepCountReadyActivities.c)
 *     PopPepReleaseActivityLink @ 0x1400C0268 (PopPepReleaseActivityLink.c)
 *     PopPepRequestWork @ 0x1400C02C8 (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x1400C044C (PopPepPromoteActivities.c)
 *     PopPepCancelActivityRange @ 0x1400C0944 (PopPepCancelActivityRange.c)
 *     PopPepUpdateIdleState @ 0x1400C0A88 (PopPepUpdateIdleState.c)
 */

void __fastcall PopPepUpdateConstraints(__int64 a1, int a2, char a3)
{
  __int64 v4; // r14
  KIRQL v6; // al
  KIRQL v7; // r15
  unsigned int v8; // esi
  unsigned int i; // r12d
  __int64 v10; // rdi
  unsigned int ready; // eax
  unsigned int j; // edi
  __int64 v13; // rcx
  __int64 v14; // rax

  v4 = a2;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
  *(_BYTE *)(a1 + 125) = 1;
  v7 = v6;
  v8 = 0;
  for ( i = PopPepCountReadyActivities((unsigned int *)a1, 0LL, 3); v8 < *(_DWORD *)(a1 + 168); ++v8 )
  {
    v10 = 200LL * v8 + a1 + 176;
    if ( (*(_BYTE *)(v10 + 16) & 1) != 0 )
    {
      if ( a3 )
      {
        *(_DWORD *)(v10 + 4 * v4 + 152) = *(_DWORD *)(v10 + 188) - 1;
      }
      else
      {
        PopPepCancelActivityRange(v10 + 56, 1, 1, 1, (volatile signed __int32 *)(v10 + 104));
        *(_DWORD *)(v10 + 4 * v4 + 152) = 0;
        KeResetEvent((PRKEVENT)(v10 + 32));
      }
      PopPepUpdateIdleState(a1, v10, a3);
      v14 = *(_QWORD *)(v10 + 64);
      if ( !a3 )
      {
        if ( *(_DWORD *)v14 )
          *(_BYTE *)(v14 + 16) = 1;
        else
          KeSetEvent((PRKEVENT)(v10 + 32), 0, 0);
      }
    }
  }
  PopPepPromoteActivities(a1, 0LL, 3);
  ready = PopPepCountReadyActivities((unsigned int *)a1, 0LL, 3);
  PopPepRequestWork(i, ready);
  PopPepReleaseActivityLink(a1, 0LL, 1, v7);
  if ( !a3 )
  {
    for ( j = 0; j < *(_DWORD *)(a1 + 168); ++j )
    {
      v13 = 200LL * j;
      if ( (*(_BYTE *)(v13 + a1 + 192) & 1) != 0 )
        KeWaitForSingleObject((PVOID)(a1 + v13 + 208), Executive, 0, 0, 0LL);
    }
  }
}
