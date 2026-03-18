/*
 * XREFs of ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x1C00103C0
 * Callers:
 *     <none>
 * Callees:
 *     FreeData @ 0x1C00036A4 (FreeData.c)
 *     ACPIDevicePowerEnumerateAssociatedPowerNodes @ 0x1C0010254 (ACPIDevicePowerEnumerateAssociatedPowerNodes.c)
 *     ACPIPowerScheduleDpc @ 0x1C0010384 (ACPIPowerScheduleDpc.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C00107C8 (WPP_RECORDER_SF_qqss.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase1DeviceSubPhase4(__int64 a1)
{
  __int64 v1; // rdi
  __int64 *v2; // rax
  _QWORD *v3; // rbx
  char v5; // r8
  __int64 *v6; // rdx
  __int64 v7; // rcx
  KIRQL v8; // bl
  KIRQL v9; // bl
  __int64 v11; // [rsp+40h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 40);
  v2 = qword_1C002C340;
  v3 = (_QWORD *)(a1 + 216);
  v5 = 0;
  v6 = qword_1C002C340;
  if ( v1 )
  {
    v7 = *(_QWORD *)(v1 + 8);
    v5 = v1;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v2 = *(__int64 **)(v1 + 560);
      if ( (v7 & 0x400000000000LL) != 0 )
        v6 = *(__int64 **)(v1 + 568);
    }
  }
  v11 = (__int64)v6;
  LOBYTE(v6) = 4;
  WPP_RECORDER_SF_qqss(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)v6,
    10,
    60,
    (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
    a1,
    v5,
    (__int64)v2,
    v11);
  dword_1C0074698 = 0;
  byte_1C007469C = 0;
  FreeData(v3);
  memset(v3, 0, 0x28uLL);
  v8 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  ACPIDevicePowerEnumerateAssociatedPowerNodes(
    a1,
    (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))ACPIDevicePowerProcessPhase1DeviceSubPhase4EnumPowerNodes,
    a1);
  *(_DWORD *)(v1 + 496) = *(_DWORD *)(a1 + 104);
  *(_DWORD *)(a1 + 108) = *(_DWORD *)(v1 + 336);
  *(_DWORD *)(v1 + 336) = 0;
  KeReleaseSpinLock(&AcpiPowerLock, v8);
  _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 208), 0, 1);
  v9 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
  ACPIPowerScheduleDpc();
  KeReleaseSpinLock(&AcpiPowerQueueLock, v9);
  return 0LL;
}
