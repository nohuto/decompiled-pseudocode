/*
 * XREFs of ACPIDevicePowerProcessPhase4 @ 0x1C0028488
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C0011020 (ACPIDevicePowerDpc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000E748 (WPP_RECORDER_SF_.c)
 *     ACPIDeviceCompleteRequest @ 0x1C00109E0 (ACPIDeviceCompleteRequest.c)
 *     WPP_RECORDER_SF_qDqss @ 0x1C00471D8 (WPP_RECORDER_SF_qDqss.c)
 */

__int64 ACPIDevicePowerProcessPhase4()
{
  __int64 *v0; // rsi
  __int64 *v2; // rcx
  _QWORD *v3; // r14
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // r15
  PSLIST_ENTRY v7; // rbx
  PSLIST_ENTRY v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 *v11; // r8
  __int64 *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // [rsp+48h] [rbp-30h]

  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    4,
    10,
    69,
    (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v0 = (__int64 *)AcpiPowerNodeList;
  while ( v0 != &AcpiPowerNodeList )
  {
    v2 = v0;
    v0 = (__int64 *)*v0;
    if ( (v2[2] & 0x10000) != 0 )
    {
      if ( (__int64 *)AcpiPowerPhase0List == &AcpiPowerPhase0List
        && (__int64 *)AcpiPowerPhase1List == &AcpiPowerPhase1List
        && (__int64 *)AcpiPowerPhase2List == &AcpiPowerPhase2List )
      {
        _InterlockedAnd64(v2 + 2, 0xFFFFFFFFFFFEFFFFuLL);
      }
      v3 = v2 + 6;
      v4 = (_QWORD *)v2[6];
      while ( v4 != v3 )
      {
        v5 = v4 - 5;
        v4 = (_QWORD *)*v4;
        KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
        v6 = v5[4];
        v7 = AcpiPowerPhase4List;
        while ( v7 != (PSLIST_ENTRY)&AcpiPowerPhase4List )
        {
          v8 = v7;
          v7 = v7->Next;
          v9 = *((_QWORD *)&v8[2].Next + 1);
          if ( v9 == v6 )
          {
            LOBYTE(v10) = 0;
            v11 = qword_1C002C340;
            v12 = qword_1C002C340;
            if ( v9 )
            {
              v10 = *((_QWORD *)&v8[2].Next + 1);
              v13 = *(_QWORD *)(v9 + 8);
              if ( (v13 & 0x200000000000LL) != 0 )
              {
                v11 = *(__int64 **)(v10 + 560);
                if ( (v13 & 0x400000000000LL) != 0 )
                  v12 = *(__int64 **)(v10 + 568);
              }
            }
            v14 = (__int64)v12;
            LOBYTE(v12) = 4;
            WPP_RECORDER_SF_qDqss(
              WPP_GLOBAL_Control->DeviceExtension,
              (_DWORD)v12,
              10,
              70,
              (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
              (char)v8,
              33,
              v10,
              (__int64)v11,
              v14);
            LODWORD(v8[16].Next) = -1072431071;
            ACPIDeviceCompleteRequest(v8);
          }
        }
        KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
      }
    }
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  return 0LL;
}
