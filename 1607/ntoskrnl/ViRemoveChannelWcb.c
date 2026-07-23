/*
 * XREFs of ViRemoveChannelWcb @ 0x140222B50
 * Callers:
 *     VfCancelAdapterChannel @ 0x140706DA0 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x1407070FC (VfFreeAdapterChannel.c)
 *     VfFreeMapRegisters @ 0x140707368 (VfFreeMapRegisters.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall ViRemoveChannelWcb(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  char v7; // r14
  KSPIN_LOCK *v9; // r15
  KIRQL v10; // al
  __int64 v11; // rdx
  __int64 i; // rbx
  __int64 v13; // rbx
  __int64 v14; // rdx
  _QWORD *v15; // rcx

  v3 = 0LL;
  v7 = 0;
  if ( a2 && a3 )
    return 0LL;
  v9 = (KSPIN_LOCK *)(a1 + 144);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 144));
  v11 = a1 + 128;
  for ( i = *(_QWORD *)(a1 + 128); ; i = *(_QWORD *)(v13 + 72) )
  {
    v13 = i - 72;
    if ( v11 == v13 + 72 )
      break;
    if ( a2 && (*(_QWORD *)(v13 + 96) == a2 || *(_QWORD *)(v13 + 88) == a2)
      || a3 && *(_QWORD *)(v13 + 40) == a3
      || *(_DWORD *)(v13 + 52) <= 1u )
    {
      v14 = *(_QWORD *)(v13 + 72);
      v15 = *(_QWORD **)(v13 + 80);
      if ( *(_QWORD *)(v14 + 8) != v13 + 72 || *v15 != v13 + 72 )
        __fastfail(3u);
      *v15 = v14;
      v7 = 1;
      *(_QWORD *)(v14 + 8) = v15;
      break;
    }
  }
  KeReleaseSpinLock(v9, v10);
  if ( v7 == 1 )
    return v13;
  return v3;
}
