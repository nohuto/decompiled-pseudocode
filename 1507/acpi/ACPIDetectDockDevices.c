/*
 * XREFs of ACPIDetectDockDevices @ 0x1C0016AE8
 * Callers:
 *     ACPIRootIrpQueryBusRelations @ 0x1C006AC18 (ACPIRootIrpQueryBusRelations.c)
 * Callees:
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     ACPIExtListStartEnum @ 0x1C0014580 (ACPIExtListStartEnum.c)
 *     ACPIExtListEnumNext @ 0x1C00145E0 (ACPIExtListEnumNext.c)
 *     ACPIExtListTestElement @ 0x1C00159B8 (ACPIExtListTestElement.c)
 *     ACPIExtListExitEnumEarly @ 0x1C0018DA8 (ACPIExtListExitEnumEarly.c)
 *     ACPIBuildPdo @ 0x1C00192F8 (ACPIBuildPdo.c)
 *     memmove @ 0x1C0023800 (memmove.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     ACPIExtListIsMemberOfRelation @ 0x1C003AD4C (ACPIExtListIsMemberOfRelation.c)
 */

__int64 __fastcall ACPIDetectDockDevices(__int64 a1, PVOID *a2)
{
  unsigned int *v2; // rsi
  int v3; // edi
  unsigned int v4; // r14d
  __int64 v6; // r13
  __int64 i; // rax
  __int64 v8; // rbx
  bool v9; // zf
  __int64 v11; // rcx
  unsigned int *PoolWithTag; // rax
  unsigned int *v13; // rbx
  unsigned int v14; // edi
  __int64 j; // rax
  __int64 v16; // r15
  __int64 v17; // rcx
  unsigned int v18; // ecx
  __int64 v19; // r14
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // [rsp+50h] [rbp-19h] BYREF
  __int64 v24; // [rsp+58h] [rbp-11h]
  KSPIN_LOCK *v25; // [rsp+60h] [rbp-9h]
  __int64 v26; // [rsp+78h] [rbp+Fh]
  int v27; // [rsp+80h] [rbp+17h]
  unsigned int *v28; // [rsp+D0h] [rbp+67h]
  __int64 v30; // [rsp+E0h] [rbp+77h] BYREF

  v2 = 0LL;
  v3 = 0;
  v4 = 0;
  v28 = 0LL;
  if ( a2 && *a2 )
  {
    v4 = *(_DWORD *)*a2;
    v2 = (unsigned int *)*a2;
    v28 = (unsigned int *)*a2;
  }
  v24 = 0LL;
  v6 = a1 + 744;
  v23 = a1 + 744;
  v25 = &AcpiDeviceTreeLock;
  v26 = 760LL;
  v27 = 1;
  for ( i = ACPIExtListStartEnum((__int64)&v23); ; i = (__int64)ACPIExtListEnumNext((__int64)&v23) )
  {
    v8 = i;
    if ( !ACPIExtListTestElement((__int64)&v23, v3 >= 0) )
      break;
    if ( !v8 )
    {
      ACPIExtListExitEnumEarly(&v23);
      break;
    }
    if ( (*(_QWORD *)v8 & 0x200000000000000LL) != 0 )
    {
      v30 = 0LL;
      v3 = ACPIGet((_QWORD *)v8, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v30, 0LL);
      if ( (*(_QWORD *)v8 & 0x2000000000002LL) == 0
        || (AcpiOverrideAttributes & 0x80000) != 0 && (*(_DWORD *)(v8 + 904) & 0x200000) != 0 )
      {
        if ( !*(_QWORD *)(v8 + 712) )
          v3 = ACPIBuildPdo(*(_QWORD *)(*(_QWORD *)(a1 + 712) + 8LL), v8, *(_QWORD *)(a1 + 712), 0LL);
        v11 = *(_QWORD *)(v8 + 712);
        if ( v11 )
        {
          if ( !(unsigned __int8)ACPIExtListIsMemberOfRelation(v11, v2) )
            ++v4;
        }
      }
    }
  }
  if ( v3 < 0 )
    return (unsigned int)v3;
  if ( v2 )
    v9 = v4 == *v2;
  else
    v9 = v4 == 0;
  if ( v9 )
    return 0LL;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v4 + 8, 0x44706341u);
  v13 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 8 * v4 + 8);
    if ( v2 )
    {
      memmove(v13 + 2, v2 + 2, 8LL * *v2);
      v14 = *v2;
    }
    else
    {
      v14 = 0;
    }
    v24 = 0LL;
    v25 = &AcpiDeviceTreeLock;
    v23 = v6;
    v26 = 760LL;
    v27 = 2;
    for ( j = ACPIExtListStartEnum((__int64)&v23); ; j = (__int64)ACPIExtListEnumNext((__int64)&v23) )
    {
      v16 = j;
      if ( !ACPIExtListTestElement((__int64)&v23, v4 > v14) )
        break;
      if ( v14 < v4
        && ((*(_QWORD *)v16 & 0x2000000000002LL) == 0
         || (AcpiOverrideAttributes & 0x80000) != 0 && (*(_DWORD *)(v16 + 904) & 0x200000) != 0)
        && (*(_QWORD *)v16 & 0x200000000000000LL) != 0
        && *(_QWORD *)(v16 + 712) )
      {
        v17 = v14++;
        *(_QWORD *)&v13[2 * v17 + 2] = *(_QWORD *)(v16 + 728);
      }
    }
    *v13 = v14;
    if ( v28 )
      v18 = *v28;
    else
      v18 = 0;
    if ( v18 < v14 )
    {
      v19 = 2LL * v18;
      v20 = v14 - v18;
      do
      {
        if ( ObReferenceObjectByPointer(*(PVOID *)&v13[v19 + 2], 0, 0LL, 0) < 0 )
        {
          v21 = --*v13;
          v22 = *(_QWORD *)&v13[2 * v21 + 2];
          *(_QWORD *)&v13[2 * v21 + 2] = *(_QWORD *)&v13[v19 + 2];
          *(_QWORD *)&v13[v19 + 2] = v22;
        }
        v19 += 2LL;
        --v20;
      }
      while ( v20 );
    }
    if ( v28 )
      ExFreePoolWithTag(*a2, 0);
    *a2 = v13;
    return 0LL;
  }
  return 3221225626LL;
}
