/*
 * XREFs of ACPIDetectEjectDevices @ 0x1C0048368
 * Callers:
 *     ACPIDockIrpQueryEjectRelations @ 0x1C00985E0 (ACPIDockIrpQueryEjectRelations.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C009A004 (ACPIBusAndFilterIrpQueryEjectRelations.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0007348 (WPP_RECORDER_SF_qD.c)
 *     ACPIExtListTestElement @ 0x1C001E5E0 (ACPIExtListTestElement.c)
 *     ACPIExtListEnumNext @ 0x1C001E9F0 (ACPIExtListEnumNext.c)
 *     ACPIExtListStartEnum @ 0x1C001EB18 (ACPIExtListStartEnum.c)
 *     ACPIExtListExitEnumEarly @ 0x1C0020908 (ACPIExtListExitEnumEarly.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C00444EC (ACPIBuildMissingEjectionRelations.c)
 *     ACPIExtListIsMemberOfRelation @ 0x1C004D98C (ACPIExtListIsMemberOfRelation.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C0086A04 (ACPIDetectCouldExtensionBeInRelation.c)
 */

__int64 __fastcall ACPIDetectEjectDevices(__int64 a1, PVOID *a2, __int64 a3)
{
  unsigned int *v4; // rdi
  unsigned int v5; // esi
  __int64 v8; // r15
  __int64 i; // rax
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  PVOID *v13; // r12
  __int64 v14; // rcx
  bool v15; // zf
  unsigned int *PoolWithTag; // rax
  unsigned int *v17; // r14
  unsigned int v19; // ebx
  __int64 j; // rax
  __int64 v21; // r15
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // rax
  unsigned int v26; // ecx
  __int64 v27; // rsi
  __int64 v28; // rbx
  NTSTATUS v29; // eax
  int v30; // edx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // [rsp+40h] [rbp-40h] BYREF
  __int64 v34; // [rsp+48h] [rbp-38h]
  KSPIN_LOCK *v35; // [rsp+50h] [rbp-30h]
  __int64 v36; // [rsp+68h] [rbp-18h]
  int v37; // [rsp+70h] [rbp-10h]
  __int64 v38; // [rsp+C0h] [rbp+40h] BYREF
  PVOID *v39; // [rsp+C8h] [rbp+48h]

  v39 = a2;
  v4 = 0LL;
  v5 = 0;
  ACPIBuildMissingEjectionRelations();
  if ( a2 && *a2 )
  {
    v5 = *(_DWORD *)*a2;
    v4 = (unsigned int *)*a2;
  }
  v34 = 0LL;
  v8 = a1 + 784;
  v35 = &AcpiDeviceTreeLock;
  v33 = a1 + 784;
  v36 = 800LL;
  v37 = 1;
  for ( i = ACPIExtListStartEnum((__int64)&v33); ; i = (__int64)ACPIExtListEnumNext((__int64)&v33) )
  {
    v10 = i;
    if ( !ACPIExtListTestElement((__int64)&v33, 1) )
      break;
    if ( (*(_QWORD *)(v10 + 8) & 0x2000000000002LL) == 0 )
    {
      if ( *(_QWORD *)(v10 + 736) )
      {
        v11 = ACPIDetectCouldExtensionBeInRelation(v10, (_DWORD)v4, 0, 0, (__int64)&v38);
        if ( !v38 && v11 >= 0 )
        {
          v12 = *(_QWORD *)(v10 + 736);
          if ( v12 )
          {
            if ( !(unsigned __int8)ACPIExtListIsMemberOfRelation(v12, v4) )
              ++v5;
          }
        }
      }
    }
  }
  v13 = v39;
  if ( a3 )
  {
    if ( (*(_QWORD *)(a3 + 8) & 0x2000000000002LL) == 0 )
    {
      v14 = *(_QWORD *)(a3 + 736);
      if ( v14 )
      {
        if ( !(unsigned __int8)ACPIExtListIsMemberOfRelation(v14, v4) )
          ++v5;
      }
    }
  }
  if ( v4 )
    v15 = v5 == *v4;
  else
    v15 = v5 == 0;
  if ( !v15 )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 8 * v5 + 8, 0x44706341u);
    v17 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memset(PoolWithTag, 0, 8 * v5 + 8);
    if ( v4 )
    {
      memmove(v17 + 2, v4 + 2, 8LL * *v4);
      v19 = *v4;
    }
    else
    {
      v19 = 0;
    }
    v34 = 0LL;
    v35 = &AcpiDeviceTreeLock;
    v33 = v8;
    v36 = 800LL;
    v37 = 1;
    for ( j = ACPIExtListStartEnum((__int64)&v33); ; j = (__int64)ACPIExtListEnumNext((__int64)&v33) )
    {
      v21 = j;
      if ( !ACPIExtListTestElement((__int64)&v33, v5 > v19) )
        break;
      if ( !v21 )
      {
        ACPIExtListExitEnumEarly((__int64)&v33);
        break;
      }
      if ( (*(_QWORD *)(v21 + 8) & 0x202000000000002LL) == 0
        && *(_QWORD *)(v21 + 736)
        && !(unsigned __int8)ACPIExtListIsMemberOfRelation(*(_QWORD *)(v21 + 736), v4)
        && v19 < v5 )
      {
        v23 = v19++;
        *(_QWORD *)&v17[2 * v23 + 2] = v22;
      }
    }
    if ( a3
      && (*(_QWORD *)(a3 + 8) & 0x2000000000002LL) == 0
      && *(_QWORD *)(a3 + 736)
      && !(unsigned __int8)ACPIExtListIsMemberOfRelation(*(_QWORD *)(a3 + 736), v4)
      && v19 < v5 )
    {
      v25 = v19++;
      *(_QWORD *)&v17[2 * v25 + 2] = v24;
    }
    *v17 = v19;
    if ( v4 )
      v26 = *v4;
    else
      v26 = 0;
    if ( v26 < v19 )
    {
      v27 = 2LL * v26;
      v28 = v19 - v26;
      do
      {
        v29 = ObReferenceObjectByPointer(*(PVOID *)&v17[v27 + 2], 0, 0LL, 0);
        if ( v29 < 0 )
        {
          LOBYTE(v30) = 2;
          WPP_RECORDER_SF_qD(
            WPP_GLOBAL_Control->DeviceExtension,
            v30,
            22,
            15,
            (__int64)&WPP_e4465e38b328316877facb043cb11b95_Traceguids,
            *(_QWORD *)&v17[v27 + 2],
            v29);
          v31 = --*v17;
          v32 = *(_QWORD *)&v17[2 * v31 + 2];
          *(_QWORD *)&v17[2 * v31 + 2] = *(_QWORD *)&v17[v27 + 2];
          *(_QWORD *)&v17[v27 + 2] = v32;
        }
        v27 += 2LL;
        --v28;
      }
      while ( v28 );
    }
    if ( v4 )
      ExFreePoolWithTag(*v13, 0);
    *v13 = v17;
  }
  return 0LL;
}
