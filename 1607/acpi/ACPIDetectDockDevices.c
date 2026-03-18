/*
 * XREFs of ACPIDetectDockDevices @ 0x1C001EB70
 * Callers:
 *     ACPIRootIrpQueryBusRelations @ 0x1C00855D0 (ACPIRootIrpQueryBusRelations.c)
 * Callees:
 *     ACPIGet @ 0x1C00015D0 (ACPIGet.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0007348 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0012A70 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIExtListTestElement @ 0x1C001E5E0 (ACPIExtListTestElement.c)
 *     ACPIExtListEnumNext @ 0x1C001E9F0 (ACPIExtListEnumNext.c)
 *     ACPIExtListStartEnum @ 0x1C001EB18 (ACPIExtListStartEnum.c)
 *     ACPIExtListExitEnumEarly @ 0x1C0020908 (ACPIExtListExitEnumEarly.c)
 *     ACPIBuildPdo @ 0x1C0021478 (ACPIBuildPdo.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     ACPIExtListIsMemberOfRelation @ 0x1C004D98C (ACPIExtListIsMemberOfRelation.c)
 */

__int64 __fastcall ACPIDetectDockDevices(__int64 a1, PVOID *a2)
{
  char v2; // bl
  int v4; // r14d
  unsigned int *v5; // rsi
  unsigned int v6; // r15d
  __int64 i; // rax
  __int64 v8; // rdi
  bool v9; // zf
  __int64 v11; // rcx
  const char *v12; // rax
  const char *v13; // rdx
  __int64 v14; // rcx
  unsigned int *PoolWithTag; // rax
  unsigned int *v16; // r14
  unsigned int v17; // edi
  __int64 j; // rax
  __int64 v19; // r13
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned int v22; // ecx
  PVOID *v23; // r12
  __int64 v24; // r15
  __int64 v25; // r12
  NTSTATUS v26; // eax
  int v27; // edx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // [rsp+50h] [rbp-29h] BYREF
  __int64 v31; // [rsp+58h] [rbp-21h]
  KSPIN_LOCK *v32; // [rsp+60h] [rbp-19h]
  __int64 v33; // [rsp+78h] [rbp-1h]
  int v34; // [rsp+80h] [rbp+7h]
  unsigned int *v35; // [rsp+E0h] [rbp+67h]
  __int64 v37; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v38; // [rsp+F8h] [rbp+7Fh]

  v2 = 0;
  v35 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  if ( a2 && *a2 )
  {
    v6 = *(_DWORD *)*a2;
    v5 = (unsigned int *)*a2;
    v35 = (unsigned int *)*a2;
  }
  v31 = 0LL;
  v38 = a1 + 752;
  v30 = a1 + 752;
  v32 = &AcpiDeviceTreeLock;
  v33 = 768LL;
  v34 = 1;
  for ( i = ACPIExtListStartEnum((__int64)&v30); ; i = (__int64)ACPIExtListEnumNext((__int64)&v30) )
  {
    v8 = i;
    if ( !ACPIExtListTestElement((__int64)&v30, v4 >= 0) )
      break;
    if ( !v8 )
    {
      ACPIExtListExitEnumEarly(&v30);
      break;
    }
    if ( (*(_QWORD *)(v8 + 8) & 0x200000000000000LL) != 0 )
    {
      v37 = 0LL;
      v4 = ACPIGet((__int64 *)v8, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v37, 0LL);
      if ( (*(_QWORD *)(v8 + 8) & 0x2000000000002LL) == 0
        || (AcpiOverrideAttributes & 0x80000) != 0 && (*(_DWORD *)(v8 + 912) & 0x200000) != 0 )
      {
        if ( !*(_QWORD *)(v8 + 720) )
          v4 = ACPIBuildPdo(*(_QWORD *)(*(_QWORD *)(a1 + 720) + 8LL), v8, *(_QWORD *)(a1 + 720), 0LL);
        v11 = *(_QWORD *)(v8 + 720);
        if ( v11 )
        {
          if ( !(unsigned __int8)ACPIExtListIsMemberOfRelation(v11, v5) )
            ++v6;
        }
      }
    }
  }
  if ( v4 < 0 )
  {
    v12 = (const char *)qword_1C002C340;
    v13 = (const char *)qword_1C002C340;
    if ( v8 )
    {
      v14 = *(_QWORD *)(v8 + 8);
      v2 = v8;
      if ( (v14 & 0x200000000000LL) != 0 )
      {
        v12 = *(const char **)(v8 + 560);
        if ( (v14 & 0x400000000000LL) != 0 )
          v13 = *(const char **)(v8 + 568);
      }
    }
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x12u,
      0xAu,
      (__int64)&WPP_e4465e38b328316877facb043cb11b95_Traceguids,
      v4,
      v2,
      v12,
      v13);
    return (unsigned int)v4;
  }
  else
  {
    if ( v5 )
      v9 = v6 == *v5;
    else
      v9 = v6 == 0;
    if ( v9 )
      return 0LL;
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v6 + 8, 0x44706341u);
    v16 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8 * v6 + 8);
      if ( v5 )
      {
        memmove(v16 + 2, v5 + 2, 8LL * *v5);
        v17 = *v5;
      }
      else
      {
        v17 = 0;
      }
      v30 = v38;
      v32 = &AcpiDeviceTreeLock;
      v31 = 0LL;
      v33 = 768LL;
      v34 = 2;
      for ( j = ACPIExtListStartEnum((__int64)&v30); ; j = (__int64)ACPIExtListEnumNext((__int64)&v30) )
      {
        v19 = j;
        if ( !ACPIExtListTestElement((__int64)&v30, v6 > v17) )
          break;
        if ( v17 < v6 )
        {
          v20 = *(_QWORD *)(v19 + 8);
          if ( ((v20 & 0x2000000000002LL) == 0
             || (AcpiOverrideAttributes & 0x80000) != 0 && (*(_DWORD *)(v19 + 912) & 0x200000) != 0)
            && (v20 & 0x200000000000000LL) != 0
            && *(_QWORD *)(v19 + 720) )
          {
            v21 = v17++;
            *(_QWORD *)&v16[2 * v21 + 2] = *(_QWORD *)(v19 + 736);
          }
        }
      }
      *v16 = v17;
      if ( v35 )
        v22 = *v35;
      else
        v22 = 0;
      v23 = a2;
      if ( v22 < v17 )
      {
        v24 = 2LL * v22;
        v25 = v17 - v22;
        do
        {
          v26 = ObReferenceObjectByPointer(*(PVOID *)&v16[v24 + 2], 0, 0LL, 0);
          if ( v26 < 0 )
          {
            LOBYTE(v27) = 2;
            WPP_RECORDER_SF_qD(
              WPP_GLOBAL_Control->DeviceExtension,
              v27,
              21,
              11,
              (__int64)&WPP_e4465e38b328316877facb043cb11b95_Traceguids,
              *(_QWORD *)&v16[v24 + 2],
              v26);
            v28 = --*v16;
            v29 = *(_QWORD *)&v16[2 * v28 + 2];
            *(_QWORD *)&v16[2 * v28 + 2] = *(_QWORD *)&v16[v24 + 2];
            *(_QWORD *)&v16[v24 + 2] = v29;
          }
          v24 += 2LL;
          --v25;
        }
        while ( v25 );
        v23 = a2;
      }
      if ( v35 )
        ExFreePoolWithTag(*v23, 0);
      *v23 = v16;
      return 0LL;
    }
    return 3221225626LL;
  }
}
