/*
 * XREFs of ACPIDeviceCompletePhase3Off @ 0x1C00385E0
 * Callers:
 *     ACPIDevicePowerProcessPhase3 @ 0x1C001CA64 (ACPIDevicePowerProcessPhase3.c)
 * Callees:
 *     ACPIDeviceCompletePhase3Common @ 0x1C00385A0 (ACPIDeviceCompletePhase3Common.c)
 */

void __fastcall ACPIDeviceCompletePhase3Off(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  KIRQL v6; // si
  signed __int32 v7; // edx
  _QWORD *v8; // rdi
  _QWORD *i; // rax
  _QWORD *v10; // r9
  char v11; // dl
  __int64 v12; // r8
  _QWORD *v13; // rcx
  __int64 v14; // rax

  v6 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  _InterlockedAnd64((volatile signed __int64 *)(a4 + 16), 0xFFFFFFFFFFFFF7FFuLL);
  if ( a2 < 0 )
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
    v13 = *(_QWORD **)(v12 + 384);
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
        *(_QWORD *)(v12 + 904) |= 0x10000uLL;
    }
  }
  KeReleaseSpinLock(&AcpiPowerLock, v6);
}
