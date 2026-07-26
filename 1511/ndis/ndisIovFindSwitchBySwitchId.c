/*
 * XREFs of ndisIovFindSwitchBySwitchId @ 0x1C00139E8
 * Callers:
 *     ndisIovDeleteDefaultNicSwitch @ 0x1C0013940 (ndisIovDeleteDefaultNicSwitch.c)
 *     ndisIovDeleteNicSwitch @ 0x1C0063E90 (ndisIovDeleteNicSwitch.c)
 *     ndisIovDeleteNicSwitchDefaultVPortAndPFBlock @ 0x1C0063F30 (ndisIovDeleteNicSwitchDefaultVPortAndPFBlock.c)
 *     ndisOidPostIovNicSwitchParameters @ 0x1C0064EF0 (ndisOidPostIovNicSwitchParameters.c)
 *     ndisOidPreIovEnumVFs @ 0x1C0065470 (ndisOidPreIovEnumVFs.c)
 *     ndisOidPreIovEnumVPorts @ 0x1C0065770 (ndisOidPreIovEnumVPorts.c)
 *     ndisIovAllocateVF @ 0x1C00D2C68 (ndisIovAllocateVF.c)
 *     ndisIovCreateVPort @ 0x1C00D2E78 (ndisIovCreateVPort.c)
 *     ndisOidPreIovDeleteNicSwitch @ 0x1C00D3CB0 (ndisOidPreIovDeleteNicSwitch.c)
 *     ndisOidPreIovNicSwitchParameters @ 0x1C00D4250 (ndisOidPreIovNicSwitchParameters.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ndisIovFindSwitchBySwitchId(__int64 a1, unsigned int a2)
{
  __int64 *v3; // rdi
  KIRQL v5; // r8
  __int64 *v6; // rax
  unsigned int v8; // ecx

  v3 = 0LL;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  v6 = *(__int64 **)(a1 + 4760);
  *(_DWORD *)(a1 + 1856) = 2886331;
  while ( v6 != (__int64 *)(a1 + 4760) )
  {
    v8 = *((_DWORD *)v6 + 9);
    if ( v8 == a2 )
    {
      v3 = v6;
      break;
    }
    if ( v8 > a2 )
      break;
    v6 = (__int64 *)*v6;
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v5);
  return v3;
}
