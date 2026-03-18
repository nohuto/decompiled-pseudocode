/*
 * XREFs of ACPIDetectFilterDevices @ 0x1C000D120
 * Callers:
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C00806D0 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIRootIrpQueryDeviceRelations @ 0x1C0083BD0 (ACPIRootIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryBusRelations @ 0x1C00903EC (ACPIBusIrpQueryBusRelations.c)
 * Callees:
 *     ACPIGet @ 0x1C00015D0 (ACPIGet.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C000D7F4 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C000D860 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIDevicePowerFlushQueue @ 0x1C000E380 (ACPIDevicePowerFlushQueue.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0012A70 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIBuildFilter @ 0x1C0021A84 (ACPIBuildFilter.c)
 *     ACPIBuildMissingChildren @ 0x1C0044404 (ACPIBuildMissingChildren.c)
 *     AcpiQueryPciBusInterface @ 0x1C0084A2C (AcpiQueryPciBusInterface.c)
 *     ACPIFilterQueryBusD3ColdSupport @ 0x1C0084BE4 (ACPIFilterQueryBusD3ColdSupport.c)
 *     ACPIBuildFlushQueue @ 0x1C00868A0 (ACPIBuildFlushQueue.c)
 *     ACPIDetectFilterMatch @ 0x1C008697C (ACPIDetectFilterMatch.c)
 *     EnableDisableRegions @ 0x1C0086E6C (EnableDisableRegions.c)
 *     ACPIInternalIsPci @ 0x1C009047C (ACPIInternalIsPci.c)
 */

__int64 __fastcall ACPIDetectFilterDevices(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  __int64 v3; // rdi
  KIRQL v4; // bl
  __int64 v5; // rdx
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rdx
  _QWORD *v9; // r13
  KIRQL v10; // dl
  __int64 *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  char v15; // r8
  KIRQL v16; // al
  _QWORD *v17; // rbx
  __int64 *v18; // rbx
  KIRQL v19; // dl
  int v21; // eax
  ULONG_PTR v22; // rbx
  __int64 *v23; // rbp
  __int64 *v24; // rcx
  int v25; // r9d
  __int64 v26; // rcx
  __int64 *v27; // rbp
  __int64 *v28; // rax
  __int64 v29; // rax
  __int64 *v30; // rdx
  __int64 *v31; // rcx
  int v32; // r9d
  __int64 v33; // rax
  char v34; // [rsp+28h] [rbp-70h]
  char v35; // [rsp+30h] [rbp-68h]
  __int64 v36; // [rsp+38h] [rbp-60h]
  __int64 v37; // [rsp+38h] [rbp-60h]
  __int64 v38; // [rsp+40h] [rbp-58h]
  __int64 v41; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v42; // [rsp+B8h] [rbp+20h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v41 = 0LL;
  v3 = DeviceExtension;
  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( (*(_QWORD *)(v3 + 8) & 0x20000000000LL) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 8), 0xFFFFFDFFFFFFFFFFuLL);
    ACPIBuildMissingChildren(v3);
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v4);
  LOBYTE(v5) = 1;
  v6 = ACPIBuildFlushQueue(v3, v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = *(_QWORD *)(v3 + 8);
    v23 = qword_1C002C340;
    v24 = qword_1C002C340;
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v23 = *(__int64 **)(v3 + 560);
      if ( (v8 & 0x400000000000LL) != 0 )
        v24 = *(__int64 **)(v3 + 568);
    }
    v38 = (__int64)v24;
    v25 = 16;
    v36 = (__int64)v23;
    v35 = v3;
    v34 = v6;
    goto LABEL_30;
  }
  v7 = ACPIDevicePowerFlushQueue(v3);
  if ( v7 < 0 )
  {
    v26 = *(_QWORD *)(v3 + 8);
    v27 = qword_1C002C340;
    v28 = qword_1C002C340;
    if ( (v26 & 0x200000000000LL) != 0 )
    {
      v27 = *(__int64 **)(v3 + 560);
      if ( (v26 & 0x400000000000LL) != 0 )
        v28 = *(__int64 **)(v3 + 568);
    }
    v38 = (__int64)v28;
    v25 = 17;
    v36 = (__int64)v27;
    v35 = v3;
    v34 = v7;
LABEL_30:
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      22,
      v25,
      (__int64)&WPP_e4465e38b328316877facb043cb11b95_Traceguids,
      v34,
      v35,
      v36,
      v38);
    return (unsigned int)v7;
  }
  v9 = (_QWORD *)(v3 + 752);
  v10 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( (_QWORD *)*v9 == v9 )
  {
    v11 = 0LL;
  }
  else
  {
    v11 = (__int64 *)(*v9 - 768LL);
    ACPIInitReferenceDeviceExtension(v11);
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v10);
  if ( !v11 )
    goto LABEL_16;
  while ( 1 )
  {
    v42 = 0LL;
    if ( (int)ACPIGet(v11, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v42, 0LL) >= 0
      && (v11[1] & 0x2000000000002LL) == 0 )
    {
      v14 = ACPIDetectFilterMatch(v11, a2, &v41);
      v15 = v14;
      if ( v14 < 0 )
      {
        v33 = v11[1];
        v30 = qword_1C002C340;
        v31 = qword_1C002C340;
        if ( (v33 & 0x200000000000LL) != 0 )
        {
          v30 = (__int64 *)v11[70];
          if ( (v33 & 0x400000000000LL) != 0 )
            v31 = (__int64 *)v11[71];
        }
        v32 = 19;
        goto LABEL_42;
      }
      if ( !v41 )
        goto LABEL_12;
      v21 = ACPIBuildFilter(*(_QWORD *)(a1 + 8), v11);
      v15 = v21;
      if ( v21 < 0 )
      {
        v29 = v11[1];
        v30 = qword_1C002C340;
        v31 = qword_1C002C340;
        if ( (v29 & 0x200000000000LL) != 0 )
        {
          v30 = (__int64 *)v11[70];
          if ( (v29 & 0x400000000000LL) != 0 )
            v31 = (__int64 *)v11[71];
        }
        v32 = 18;
LABEL_42:
        v37 = (__int64)v30;
        LOBYTE(v30) = 2;
        WPP_RECORDER_SF_Lqss(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v30,
          22,
          v32,
          (__int64)&WPP_e4465e38b328316877facb043cb11b95_Traceguids,
          v15,
          (char)v11,
          v37,
          (__int64)v31);
        goto LABEL_12;
      }
      v22 = v11[90];
      if ( (int)AcpiQueryPciBusInterface(v22) >= 0 )
        ACPIInternalIsPci(v22);
      ACPIFilterQueryBusD3ColdSupport(v22);
    }
LABEL_12:
    v16 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v17 = (_QWORD *)v11[96];
    if ( v17 == v9 )
      break;
    v18 = v17 - 96;
    ACPIInitReferenceDeviceExtension(v18);
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v19);
    ACPIInitDereferenceDeviceExtensionUnlocked(v11);
    v11 = v18;
    if ( !v18 )
      goto LABEL_16;
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v16);
  ACPIInitDereferenceDeviceExtensionUnlocked(v11);
LABEL_16:
  if ( (*(_DWORD *)(v3 + 8) & 0x2000000) != 0 || (*(_DWORD *)(v3 + 912) & 0x8000LL) != 0 )
  {
    LOBYTE(v13) = (*(_DWORD *)(v3 + 912) & 0x8000LL) != 0;
    LOBYTE(v12) = 1;
    EnableDisableRegions(*(_QWORD *)(v3 + 712), v12, v13);
  }
  return 0LL;
}
