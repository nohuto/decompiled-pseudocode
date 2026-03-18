/*
 * XREFs of ACPIDeviceCompletePhase3Off @ 0x1C0049240
 * Callers:
 *     ACPIDevicePowerProcessPhase3 @ 0x1C0027690 (ACPIDevicePowerProcessPhase3.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0007348 (WPP_RECORDER_SF_qD.c)
 *     ACPIDeviceCompletePhase3Common @ 0x1C001034C (ACPIDeviceCompletePhase3Common.c)
 */

void __fastcall ACPIDeviceCompletePhase3Off(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  KIRQL v6; // si
  signed __int32 v7; // edx
  _QWORD *v8; // rdi
  _QWORD *i; // rax
  _QWORD *v10; // r9
  char v11; // dl
  __int64 v12; // r8
  _QWORD *v13; // rcx
  __int64 v14; // rax
  char v15; // [rsp+30h] [rbp-18h]

  v5 = a2;
  v15 = a2;
  LOBYTE(a2) = 4;
  WPP_RECORDER_SF_qD(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    10,
    15,
    (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
    a4,
    v15);
  v6 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  _InterlockedAnd64((volatile signed __int64 *)(a4 + 16), 0xFFFFFFFFFFFFF7FFuLL);
  if ( v5 < 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)(a4 + 16), 0x10000uLL);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 16), 0xFFFFFFFFFFFFFFEFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 16), 0xFFFFFFFFFFFEFFFFuLL);
  }
  _InterlockedAnd64((volatile signed __int64 *)(a4 + 16), 0xFFFFFFFFFFFFFFF7uLL);
  v7 = *(_DWORD *)(a4 + 68);
  --Phase3PendingOffWorkCount;
  ACPIDeviceCompletePhase3Common((volatile signed __int32 *)(a4 + 64), v7);
  v8 = (_QWORD *)(a4 + 48);
  for ( i = (_QWORD *)*v8; i != v8; i = (_QWORD *)v10[5] )
  {
    v10 = i - 5;
    v11 = 1;
    v12 = *(i - 1);
    v13 = *(_QWORD **)(v12 + 392);
    if ( v13 )
    {
      do
      {
        v14 = v13[1];
        v13 = (_QWORD *)*v13;
        if ( *(_DWORD *)(v14 + 24) )
          v11 = 0;
      }
      while ( v13 );
      if ( v11 )
        *(_QWORD *)(v12 + 912) |= 0x10000uLL;
    }
  }
  KeReleaseSpinLock(&AcpiPowerLock, v6);
}
