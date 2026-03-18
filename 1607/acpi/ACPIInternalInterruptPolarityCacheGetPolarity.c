/*
 * XREFs of ACPIInternalInterruptPolarityCacheGetPolarity @ 0x1C00225D8
 * Callers:
 *     IrqArbAddAllocation @ 0x1C0089870 (IrqArbAddAllocation.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C008CB70 (IrqArbpFindSuitableRangeIsa.c)
 *     PnpiCmResourceToBiosExtendedIrq @ 0x1C00A0484 (PnpiCmResourceToBiosExtendedIrq.c)
 * Callees:
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x1C001E3E0 (ACPIInternalFindDeviceExtensionNoLock.c)
 *     WPP_RECORDER_SF_Dqqss @ 0x1C0050154 (WPP_RECORDER_SF_Dqqss.c)
 */

char __fastcall ACPIInternalInterruptPolarityCacheGetPolarity(__int64 a1, int a2, _DWORD *a3)
{
  char v3; // di
  KIRQL v7; // bp
  _QWORD *i; // rbx
  int v9; // r9d
  __int64 *j; // rax
  int v11; // edx
  __int64 v13; // rax
  __int64 *v14; // rdx
  __int64 *v15; // rcx
  int v16; // [rsp+20h] [rbp-38h]

  v3 = 0;
  if ( !gAcpiHonorBiosPolarities )
    return 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  for ( i = (_QWORD *)ACPIInternalFindDeviceExtensionNoLock(a1, RootDeviceExtension); i; i = (_QWORD *)i[93] )
  {
    for ( j = (__int64 *)i[83]; j != i + 83; j = (__int64 *)*j )
    {
      if ( a2 == *((_DWORD *)j + 4) )
      {
        v11 = *((_DWORD *)j + 5);
        if ( v11 != -1 )
        {
          *a3 = v11;
          v3 = 1;
        }
        goto LABEL_9;
      }
    }
    v13 = i[1];
    if ( (v13 & 0x20) != 0 )
    {
      v14 = qword_1C002C340;
      v15 = qword_1C002C340;
      if ( (v13 & 0x200000000000LL) != 0 )
      {
        v14 = (__int64 *)i[70];
        if ( (v13 & 0x400000000000LL) != 0 )
          v15 = (__int64 *)i[71];
      }
      WPP_RECORDER_SF_Dqqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v14,
        0,
        v9,
        v16,
        a2,
        (char)i,
        (char)i,
        (__int64)v14,
        (__int64)v15);
    }
  }
LABEL_9:
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
  return v3;
}
