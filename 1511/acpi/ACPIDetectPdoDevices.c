/*
 * XREFs of ACPIDetectPdoDevices @ 0x1C0017A20
 * Callers:
 *     ACPIRootIrpQueryBusRelations @ 0x1C0068660 (ACPIRootIrpQueryBusRelations.c)
 *     ACPIBusIrpQueryBusRelations @ 0x1C0072D48 (ACPIBusIrpQueryBusRelations.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     ACPIDevicePowerFlushQueue @ 0x1C000A32C (ACPIDevicePowerFlushQueue.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C0016A14 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0017E60 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIBuildPdo @ 0x1C0019284 (ACPIBuildPdo.c)
 *     memmove @ 0x1C0024E80 (memmove.c)
 *     memset @ 0x1C00251C0 (memset.c)
 *     ACPIBuildMissingChildren @ 0x1C0035788 (ACPIBuildMissingChildren.c)
 *     ACPIBuildFlushQueue @ 0x1C006725C (ACPIBuildFlushQueue.c)
 *     ACPIDetectPdoMatch @ 0x1C0067D98 (ACPIDetectPdoMatch.c)
 */

__int64 __fastcall ACPIDetectPdoDevices(ULONG_PTR a1, PVOID *a2)
{
  ULONG_PTR v3; // rbp
  unsigned int *v4; // r15
  unsigned int v5; // esi
  __int64 DeviceExtension; // rdi
  KIRQL v7; // bl
  __int64 result; // rax
  _QWORD *v9; // r14
  KIRQL v10; // dl
  __int64 v11; // rbx
  KIRQL v12; // dl
  __int64 v13; // r13
  char v14; // r12
  __int64 v15; // r9
  KIRQL v16; // al
  _QWORD *v17; // rcx
  KIRQL v18; // dl
  char v19; // bp
  _QWORD *PoolWithTag; // rax
  __int64 v21; // r8
  unsigned int v22; // eax
  unsigned int v23; // ebp
  unsigned int *v24; // rax
  unsigned int *v25; // rbx
  unsigned int v26; // ebp
  KIRQL v27; // dl
  __int64 v28; // rcx
  _QWORD *v29; // rcx
  unsigned int v30; // esi
  __int64 v31; // r14
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 i; // rsi
  __int64 v38; // rdx
  __int64 v39; // rbp
  __int64 v40; // r14
  __int64 v41; // rbp
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v46; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a1;
  v4 = 0LL;
  v5 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( a2 && *a2 )
  {
    v5 = *(_DWORD *)*a2;
    v4 = (unsigned int *)*a2;
  }
  v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( (*(_QWORD *)DeviceExtension & 0x20000000000LL) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)DeviceExtension, 0xFFFFFDFFFFFFFFFFuLL);
    ACPIBuildMissingChildren(DeviceExtension);
  }
  if ( (*(_QWORD *)DeviceExtension & 0x40000000000LL) != 0 )
    _InterlockedAnd64((volatile signed __int64 *)DeviceExtension, 0xFFFFFBFFFFFFFFFFuLL);
  if ( (*(_DWORD *)(DeviceExtension + 904) & 0x200LL) != 0 )
    _InterlockedAnd64((volatile signed __int64 *)(DeviceExtension + 904), 0xFFFFFFFFFFFFFDFFuLL);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
  result = ACPIBuildFlushQueue(DeviceExtension);
  if ( (int)result < 0 )
    return result;
  result = ACPIDevicePowerFlushQueue(DeviceExtension);
  if ( (int)result < 0 )
    return result;
  v9 = (_QWORD *)(DeviceExtension + 744);
  v10 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( (_QWORD *)*v9 == v9 )
  {
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v10);
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
  v11 = *v9 - 760LL;
  ACPIInitReferenceDeviceExtension(v11);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v12);
  v13 = 0LL;
  v14 = 0;
  while ( 1 )
  {
    _InterlockedOr64((volatile signed __int64 *)v11, 0x100uLL);
    v46 = 0LL;
    if ( (int)ACPIGet((_QWORD *)v11, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v46, 0LL) < 0
      || (*(_QWORD *)v11 & 0x2000000000002LL) != 0
      && ((AcpiOverrideAttributes & 0x80000) == 0 || (*(_DWORD *)(v11 + 904) & 0x200000LL) == 0) )
    {
      goto LABEL_18;
    }
    if ( !(unsigned __int8)ACPIDetectPdoMatch(v11, v4) )
    {
      LOBYTE(v15) = (*(_BYTE *)DeviceExtension & 0x10) == 0;
      if ( (int)ACPIBuildPdo(*(_QWORD *)(v3 + 8), v11, *(_QWORD *)(DeviceExtension + 728), v15) < 0 )
        goto LABEL_18;
      ++v5;
      goto LABEL_26;
    }
    if ( (*(_BYTE *)v11 & 0x20) == 0 )
      goto LABEL_18;
    v21 = *(_QWORD *)(v11 + 712);
    if ( !v21 )
      goto LABEL_18;
    if ( v4 && (v34 = 0LL, *v4) )
    {
      while ( *(_QWORD *)&v4[2 * v34 + 2] != v21 )
      {
        v34 = (unsigned int)(v34 + 1);
        if ( (unsigned int)v34 >= *v4 )
          goto LABEL_36;
      }
      if ( (*(_DWORD *)(v11 + 904) & 0x20000000) != 0 )
      {
        --v5;
        goto LABEL_26;
      }
    }
    else
    {
LABEL_36:
      if ( (*(_DWORD *)(v11 + 904) & 0x20000000) == 0 )
      {
        ++v5;
        _InterlockedAnd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFEFFuLL);
LABEL_26:
        v14 = 1;
      }
    }
LABEL_18:
    v16 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v17 = *(_QWORD **)(v11 + 760);
    v18 = v16;
    if ( v17 == v9 )
    {
      v19 = 1;
    }
    else
    {
      v13 = (__int64)(v17 - 95);
      ACPIInitReferenceDeviceExtension((__int64)(v17 - 95));
      v19 = 0;
    }
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v18);
    ACPIInitDereferenceDeviceExtensionUnlocked((PVOID)v11);
    if ( v19 )
      break;
    v3 = a1;
    v11 = v13;
  }
  if ( !v14 )
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
  if ( (_QWORD *)*v9 == v9 )
  {
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v27);
    ExFreePoolWithTag(v25, 0);
  }
  else
  {
    v28 = *v9 - 760LL;
    if ( *v9 != 760LL )
    {
      do
      {
        if ( (*(_QWORD *)v28 & 0x20) != 0 )
        {
          v32 = *(_QWORD *)(v28 + 712);
          if ( v32 )
          {
            if ( ((*(_QWORD *)v28 & 0x2000000000002LL) == 0
               || (AcpiOverrideAttributes & 0x80000) != 0 && (*(_DWORD *)(v28 + 904) & 0x200000) != 0)
              && (*(_DWORD *)(v28 + 904) & 0x20000000) == 0 )
            {
              if ( v26 >= v5 )
                break;
              v33 = v26++;
              *(_QWORD *)&v25[2 * v33 + 2] = v32;
              _InterlockedAnd64((volatile signed __int64 *)v28, 0xFFFFFFFFFFFFFEFFuLL);
            }
          }
        }
        if ( v5 == v26 )
          break;
        v29 = *(_QWORD **)(v28 + 760);
        if ( v29 == v9 )
          break;
        v28 = (__int64)(v29 - 95);
      }
      while ( v28 );
    }
    *v25 = v26;
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v27);
    if ( v4 )
      v30 = *v4;
    else
      v30 = 0;
    while ( v30 < v26 )
    {
      v31 = v30;
      if ( ObReferenceObjectByPointer(*(PVOID *)&v25[2 * v30 + 2], 0, 0LL, 0) < 0 )
      {
        --*v25;
        --v30;
        v35 = *v25;
        --v26;
        v36 = *(_QWORD *)&v25[2 * v35 + 2];
        *(_QWORD *)&v25[2 * v35 + 2] = *(_QWORD *)&v25[2 * v31 + 2];
        *(_QWORD *)&v25[2 * v31 + 2] = v36;
      }
      ++v30;
    }
    if ( (*(_QWORD *)DeviceExtension & 0x2000000000LL) != 0 )
    {
      for ( i = 0LL; (unsigned int)i < *v25; i = (unsigned int)(i + 1) )
      {
        v38 = *(_QWORD *)&v25[2 * i + 2];
        v39 = **(_QWORD **)(v38 + 64);
        if ( (v39 & 0x12000000000LL) != 0 && (v39 & 0x40000000000000LL) != 0 )
          IoDuplicateDependency(*(_QWORD *)(DeviceExtension + 712), v38, 0x12000000000LL);
        if ( (v39 & 0x3000000000LL) != 0 )
        {
          v40 = 0LL;
          if ( *v25 )
          {
            v41 = v39 & 0x1000000000LL;
            do
            {
              v42 = *(_QWORD *)&v25[2 * v40 + 2];
              v43 = 0x10000000000LL;
              if ( v41 )
                v43 = 0x12000000000LL;
              if ( (_DWORD)v40 != (_DWORD)i
                && (**(_QWORD **)(v42 + 64) & v43) != 0
                && (**(_QWORD **)(v42 + 64) & 0x40000000000000LL) != 0 )
              {
                IoSetDependency(*(_QWORD *)&v25[2 * i + 2], v42, 2LL);
              }
              v40 = (unsigned int)(v40 + 1);
            }
            while ( (unsigned int)v40 < *v25 );
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
