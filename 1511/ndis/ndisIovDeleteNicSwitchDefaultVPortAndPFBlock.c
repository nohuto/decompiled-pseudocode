/*
 * XREFs of ndisIovDeleteNicSwitchDefaultVPortAndPFBlock @ 0x1C0063F30
 * Callers:
 *     ndisIovDeleteDefaultNicSwitch @ 0x1C0013940 (ndisIovDeleteDefaultNicSwitch.c)
 *     ndisOidPostIovDeleteNicSwitch @ 0x1C0064DE0 (ndisOidPostIovDeleteNicSwitch.c)
 * Callees:
 *     ndisIovFindSwitchBySwitchId @ 0x1C00139E8 (ndisIovFindSwitchBySwitchId.c)
 *     ndisIovFindVPortByVPortId @ 0x1C0064364 (ndisIovFindVPortByVPortId.c)
 */

void __fastcall ndisIovDeleteNicSwitchDefaultVPortAndPFBlock(__int64 a1, unsigned int a2)
{
  __int64 *SwitchBySwitchId; // rax
  _DWORD *v4; // rdi
  _QWORD *VPortByVPortId; // rax
  __int64 v6; // r10
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // rdx
  __int64 v11; // r9
  _QWORD *v12; // r8

  SwitchBySwitchId = ndisIovFindSwitchBySwitchId(a1, a2);
  if ( SwitchBySwitchId )
  {
    v4 = (_DWORD *)SwitchBySwitchId[5];
    VPortByVPortId = (_QWORD *)ndisIovFindVPortByVPortId(a1, 0LL);
    v7 = *VPortByVPortId;
    v8 = (_QWORD *)VPortByVPortId[1];
    if ( *(_QWORD **)(*VPortByVPortId + 8LL) != VPortByVPortId || (_QWORD *)*v8 != VPortByVPortId )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    --*(_DWORD *)(a1 + 4800);
    *(_QWORD *)(a1 + 4744) = 0LL;
    v9 = VPortByVPortId[4];
    v10 = (_QWORD *)VPortByVPortId[5];
    if ( *(_QWORD **)(v9 + 8) != VPortByVPortId + 4 || (_QWORD *)*v10 != VPortByVPortId + 4 )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    --*(_DWORD *)(v6 + 48);
    v11 = VPortByVPortId[6];
    v12 = (_QWORD *)VPortByVPortId[7];
    if ( *(_QWORD **)(v11 + 8) != VPortByVPortId + 6 || (_QWORD *)*v12 != VPortByVPortId + 6 )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    --v4[7];
    ExFreePoolWithTag(VPortByVPortId, 0);
    ExFreePoolWithTag(v4, 0);
  }
}
