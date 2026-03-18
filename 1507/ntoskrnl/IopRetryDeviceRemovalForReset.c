/*
 * XREFs of IopRetryDeviceRemovalForReset @ 0x14067D5BC
 * Callers:
 *     <none>
 * Callees:
 *     PipIsDevNodeEffectivelyRemoved @ 0x1401FB4A8 (PipIsDevNodeEffectivelyRemoved.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PpDevNodeUnlockTree @ 0x1404E1F18 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1404E20D8 (PpDevNodeLockTree.c)
 *     PnpSetTargetDeviceRemove @ 0x1405353A4 (PnpSetTargetDeviceRemove.c)
 */

void __fastcall IopRetryDeviceRemovalForReset(__int64 a1)
{
  __int64 *v1; // rsi
  __int64 v3; // rbx
  _QWORD *v4; // rbp
  __int64 v5; // rcx
  BOOL IsDevNodeEffectivelyRemoved; // r14d
  int v7; // eax

  v1 = (__int64 *)(a1 + 168);
  v3 = *(_QWORD *)(a1 + 168);
  v4 = *(_QWORD **)(v3 + 144);
  PpDevNodeLockTree(0);
  if ( v4 )
    v5 = *(_QWORD *)(v4[39] + 40LL);
  else
    v5 = 0LL;
  if ( v5 )
    IsDevNodeEffectivelyRemoved = PipIsDevNodeEffectivelyRemoved(v5);
  else
    IsDevNodeEffectivelyRemoved = 1;
  PpDevNodeUnlockTree(0);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 64), 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)v3, 0x4B706E50u);
  *v1 = 0LL;
  if ( IsDevNodeEffectivelyRemoved )
    v7 = -1073741823;
  else
    v7 = PnpSetTargetDeviceRemove(
           v4,
           0,
           1,
           0,
           1,
           54,
           0LL,
           (__int64)IopDeviceRemovalForResetComplete,
           a1,
           (_DWORD *)(a1 + 164),
           0LL,
           0LL,
           v1);
  if ( v7 < 0 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
