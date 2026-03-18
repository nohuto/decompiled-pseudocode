/*
 * XREFs of ACPIDetectPdoDevices @ 0x1C000D384
 * Callers:
 *     ACPIRootIrpQueryBusRelations @ 0x1C00855D0 (ACPIRootIrpQueryBusRelations.c)
 *     ACPIBusIrpQueryBusRelations @ 0x1C00903EC (ACPIBusIrpQueryBusRelations.c)
 * Callees:
 *     ACPIGet @ 0x1C00015D0 (ACPIGet.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0007348 (WPP_RECORDER_SF_qD.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C000D7F4 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C000D860 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIDevicePowerFlushQueue @ 0x1C000E380 (ACPIDevicePowerFlushQueue.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0012A70 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIBuildPdo @ 0x1C0021478 (ACPIBuildPdo.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     ACPIBuildMissingChildren @ 0x1C0044404 (ACPIBuildMissingChildren.c)
 *     ACPIBuildFlushQueue @ 0x1C00868A0 (ACPIBuildFlushQueue.c)
 *     ACPIDetectPdoMatch @ 0x1C008691C (ACPIDetectPdoMatch.c)
 */

__int64 __fastcall ACPIDetectPdoDevices(ULONG_PTR a1, PVOID *a2)
{
  __int64 v3; // r13
  unsigned int *v4; // r15
  unsigned int v5; // esi
  __int64 DeviceExtension; // rbx
  KIRQL v7; // di
  __int64 v8; // rdx
  int v9; // edi
  _QWORD *v10; // r14
  KIRQL v11; // dl
  __int64 v12; // rdi
  KIRQL v13; // dl
  char v14; // bp
  char v15; // r12
  __int64 v16; // r9
  KIRQL v17; // al
  _QWORD *v18; // rcx
  _QWORD *PoolWithTag; // rax
  __int64 v21; // r8
  unsigned int v22; // eax
  unsigned int v23; // ebp
  unsigned int *v24; // rax
  unsigned int *v25; // rdi
  unsigned int v26; // ebp
  KIRQL v27; // dl
  __int64 v28; // rcx
  __int64 v29; // rax
  _QWORD *v30; // rcx
  unsigned int v31; // esi
  __int64 v32; // r12
  NTSTATUS v33; // eax
  int v34; // edx
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // r9
  __int64 *v38; // rcx
  int v39; // edx
  __int64 *v40; // r8
  int v41; // r9d
  __int64 v42; // r9
  int v43; // ecx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 i; // rsi
  __int64 v47; // rbp
  __int64 v48; // r14
  __int64 v49; // rbp
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v54; // [rsp+A0h] [rbp+18h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( a2 && *a2 )
  {
    v5 = *(_DWORD *)*a2;
    v4 = (unsigned int *)*a2;
  }
  v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( (*(_QWORD *)(DeviceExtension + 8) & 0x20000000000LL) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(DeviceExtension + 8), 0xFFFFFDFFFFFFFFFFuLL);
    ACPIBuildMissingChildren(DeviceExtension);
  }
  if ( (*(_QWORD *)(DeviceExtension + 8) & 0x40000000000LL) != 0 )
    _InterlockedAnd64((volatile signed __int64 *)(DeviceExtension + 8), 0xFFFFFBFFFFFFFFFFuLL);
  if ( (*(_DWORD *)(DeviceExtension + 912) & 0x200LL) != 0 )
    _InterlockedAnd64((volatile signed __int64 *)(DeviceExtension + 912), 0xFFFFFFFFFFFFFDFFuLL);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
  LOBYTE(v8) = 1;
  v9 = ACPIBuildFlushQueue(DeviceExtension, v8);
  if ( v9 < 0 )
  {
    v37 = *(_QWORD *)(DeviceExtension + 8);
    v38 = qword_1C002C340;
    v39 = 0;
    v40 = qword_1C002C340;
    if ( (v37 & 0x200000000000LL) != 0 )
    {
      v38 = *(__int64 **)(DeviceExtension + 560);
      if ( (v37 & 0x400000000000LL) != 0 )
        v40 = *(__int64 **)(DeviceExtension + 568);
    }
    v41 = 20;
    goto LABEL_71;
  }
  v9 = ACPIDevicePowerFlushQueue(DeviceExtension);
  if ( v9 < 0 )
  {
    v42 = *(_QWORD *)(DeviceExtension + 8);
    v38 = qword_1C002C340;
    v39 = 0;
    v40 = qword_1C002C340;
    if ( (v42 & 0x200000000000LL) != 0 )
    {
      v38 = *(__int64 **)(DeviceExtension + 560);
      if ( (v42 & 0x400000000000LL) != 0 )
        v40 = *(__int64 **)(DeviceExtension + 568);
    }
    v41 = 21;
LABEL_71:
    LOBYTE(v39) = 2;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v39,
      10,
      v41,
      (__int64)&WPP_e4465e38b328316877facb043cb11b95_Traceguids,
      v9,
      DeviceExtension,
      (__int64)v38,
      (__int64)v40);
    return (unsigned int)v9;
  }
  v10 = (_QWORD *)(DeviceExtension + 752);
  v11 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( (_QWORD *)*v10 == v10 )
  {
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v11);
    if ( v4 )
      return 0LL;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x44706341u);
    if ( PoolWithTag )
    {
      *a2 = PoolWithTag;
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      *(_DWORD *)PoolWithTag = 0;
      return 0LL;
    }
    return 3221225626LL;
  }
  v12 = *v10 - 768LL;
  ACPIInitReferenceDeviceExtension(v12);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v13);
  v14 = 0;
  v15 = 0;
  while ( 1 )
  {
    _InterlockedOr64((volatile signed __int64 *)(v12 + 8), 0x100uLL);
    v54 = 0LL;
    if ( (int)ACPIGet((__int64 *)v12, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v54, 0LL) >= 0
      && ((*(_QWORD *)(v12 + 8) & 0x2000000000002LL) == 0
       || (AcpiOverrideAttributes & 0x80000) != 0 && (*(_DWORD *)(v12 + 912) & 0x200000LL) != 0) )
    {
      if ( !(unsigned __int8)ACPIDetectPdoMatch(v12, v4) )
      {
        LOBYTE(v16) = (*(_BYTE *)(DeviceExtension + 8) & 0x10) == 0;
        if ( (int)ACPIBuildPdo(*(_QWORD *)(a1 + 8), v12, *(_QWORD *)(DeviceExtension + 736), v16) < 0 )
          goto LABEL_18;
        ++v5;
        goto LABEL_27;
      }
      if ( (*(_BYTE *)(v12 + 8) & 0x20) != 0 )
      {
        v21 = *(_QWORD *)(v12 + 720);
        if ( v21 )
        {
          if ( v4 && (v43 = 0, *v4) )
          {
            while ( *(_QWORD *)&v4[2 * v43 + 2] != v21 )
            {
              if ( ++v43 >= *v4 )
                goto LABEL_36;
            }
            if ( (*(_DWORD *)(v12 + 912) & 0x20000000) != 0 )
            {
              --v5;
              goto LABEL_27;
            }
          }
          else
          {
LABEL_36:
            if ( (*(_DWORD *)(v12 + 912) & 0x20000000) == 0 )
            {
              ++v5;
              _InterlockedAnd64((volatile signed __int64 *)(v12 + 8), 0xFFFFFFFFFFFFFEFFuLL);
LABEL_27:
              v15 = 1;
            }
          }
        }
      }
    }
LABEL_18:
    v17 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v18 = *(_QWORD **)(v12 + 768);
    if ( v18 == v10 )
    {
      v14 = 1;
    }
    else
    {
      v3 = (__int64)(v18 - 96);
      if ( *((_DWORD *)v18 - 21) )
        _InterlockedIncrement((volatile signed __int32 *)(v3 + 684));
    }
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v17);
    ACPIInitDereferenceDeviceExtensionUnlocked((PVOID)v12);
    if ( v14 )
      break;
    v12 = v3;
    v14 = 0;
  }
  if ( !v15 )
    return 0LL;
  v22 = 16;
  if ( v5 )
    v22 = 8 * v5 + 8;
  v23 = v22;
  v24 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v22, 0x44706341u);
  v25 = v24;
  if ( !v24 )
    return 3221225626LL;
  memset(v24, 0, v23);
  if ( v4 )
  {
    memmove(v25 + 2, v4 + 2, 8LL * *v4);
    v26 = *v4;
  }
  else
  {
    v26 = 0;
  }
  v27 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( (_QWORD *)*v10 == v10 )
  {
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v27);
    ExFreePoolWithTag(v25, 0);
  }
  else
  {
    v28 = *v10 - 768LL;
    if ( *v10 != 768LL )
    {
      do
      {
        v29 = *(_QWORD *)(v28 + 8);
        if ( (v29 & 0x20) != 0 )
        {
          v35 = *(_QWORD *)(v28 + 720);
          if ( v35 )
          {
            if ( ((v29 & 0x2000000000002LL) == 0
               || (AcpiOverrideAttributes & 0x80000) != 0 && (*(_DWORD *)(v28 + 912) & 0x200000) != 0)
              && (*(_DWORD *)(v28 + 912) & 0x20000000) == 0 )
            {
              if ( v26 >= v5 )
                break;
              v36 = v26++;
              *(_QWORD *)&v25[2 * v36 + 2] = v35;
              _InterlockedAnd64((volatile signed __int64 *)(v28 + 8), 0xFFFFFFFFFFFFFEFFuLL);
            }
          }
        }
        if ( v5 == v26 )
          break;
        v30 = *(_QWORD **)(v28 + 768);
        if ( v30 == v10 )
          break;
        v28 = (__int64)(v30 - 96);
      }
      while ( v28 );
    }
    *v25 = v26;
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v27);
    if ( v4 )
      v31 = *v4;
    else
      v31 = 0;
    for ( ; v31 < v26; ++v31 )
    {
      v32 = v31;
      v33 = ObReferenceObjectByPointer(*(PVOID *)&v25[2 * v31 + 2], 0, 0LL, 0);
      if ( v33 < 0 )
      {
        LOBYTE(v34) = 2;
        WPP_RECORDER_SF_qD(
          WPP_GLOBAL_Control->DeviceExtension,
          v34,
          22,
          22,
          (__int64)&WPP_e4465e38b328316877facb043cb11b95_Traceguids,
          *(_QWORD *)&v25[2 * v31 + 2],
          v33);
        --*v25;
        --v31;
        v44 = *v25;
        --v26;
        v45 = *(_QWORD *)&v25[2 * v44 + 2];
        *(_QWORD *)&v25[2 * v44 + 2] = *(_QWORD *)&v25[2 * v32 + 2];
        *(_QWORD *)&v25[2 * v32 + 2] = v45;
      }
    }
    if ( (*(_QWORD *)(DeviceExtension + 8) & 0x2000000000LL) != 0 )
    {
      for ( i = 0LL; (unsigned int)i < *v25; i = (unsigned int)(i + 1) )
      {
        v47 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v25[2 * i + 2] + 64LL) + 8LL);
        if ( (v47 & 0x12000000000LL) != 0 && (v47 & 0x40000000000000LL) != 0 )
          IoDuplicateDependency(*(_QWORD *)(DeviceExtension + 720));
        if ( (v47 & 0x3000000000LL) != 0 )
        {
          v48 = 0LL;
          if ( *v25 )
          {
            v49 = v47 & 0x1000000000LL;
            do
            {
              v50 = *(_QWORD *)&v25[2 * v48 + 2];
              v51 = 0x10000000000LL;
              if ( v49 )
                v51 = 0x12000000000LL;
              if ( (_DWORD)v48 != (_DWORD)i
                && (*(_QWORD *)(*(_QWORD *)(v50 + 64) + 8LL) & v51) != 0
                && (*(_QWORD *)(*(_QWORD *)(v50 + 64) + 8LL) & 0x40000000000000LL) != 0 )
              {
                IoSetDependency(*(_QWORD *)&v25[2 * i + 2], v50, 2LL);
              }
              v48 = (unsigned int)(v48 + 1);
            }
            while ( (unsigned int)v48 < *v25 );
          }
        }
      }
    }
    if ( v4 )
      ExFreePoolWithTag(*a2, 0);
    *a2 = v25;
  }
  return 0LL;
}
