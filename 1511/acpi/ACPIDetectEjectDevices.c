/*
 * XREFs of ACPIDetectEjectDevices @ 0x1C00378E8
 * Callers:
 *     ACPIDockIrpQueryEjectRelations @ 0x1C007881C (ACPIDockIrpQueryEjectRelations.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C00796D0 (ACPIBusAndFilterIrpQueryEjectRelations.c)
 * Callees:
 *     ACPIExtListStartEnum @ 0x1C00154B0 (ACPIExtListStartEnum.c)
 *     ACPIExtListEnumNext @ 0x1C0015510 (ACPIExtListEnumNext.c)
 *     ACPIExtListTestElement @ 0x1C00169B8 (ACPIExtListTestElement.c)
 *     ACPIExtListExitEnumEarly @ 0x1C0018C8C (ACPIExtListExitEnumEarly.c)
 *     memmove @ 0x1C0024E80 (memmove.c)
 *     memset @ 0x1C00251C0 (memset.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C0035830 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIExtListIsMemberOfRelation @ 0x1C003B0DC (ACPIExtListIsMemberOfRelation.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C0067FBC (ACPIDetectCouldExtensionBeInRelation.c)
 */

__int64 __fastcall ACPIDetectEjectDevices(__int64 a1, PVOID *a2, _QWORD *a3)
{
  unsigned int *v4; // rsi
  unsigned int v5; // r14d
  __int64 v8; // r15
  __int64 i; // rax
  _QWORD *v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  PVOID *v13; // r13
  __int64 v14; // rcx
  bool v15; // zf
  unsigned int *PoolWithTag; // rax
  unsigned int *v17; // rdi
  unsigned int v19; // ebx
  __int64 j; // rax
  _QWORD *v21; // r15
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // rax
  unsigned int v26; // ecx
  __int64 v27; // r14
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // [rsp+30h] [rbp-40h] BYREF
  __int64 v32; // [rsp+38h] [rbp-38h]
  KSPIN_LOCK *v33; // [rsp+40h] [rbp-30h]
  __int64 v34; // [rsp+58h] [rbp-18h]
  int v35; // [rsp+60h] [rbp-10h]
  __int64 v36; // [rsp+B0h] [rbp+40h] BYREF
  PVOID *v37; // [rsp+B8h] [rbp+48h]

  v37 = a2;
  v4 = 0LL;
  v5 = 0;
  ACPIBuildMissingEjectionRelations();
  if ( a2 && *a2 )
  {
    v5 = *(_DWORD *)*a2;
    v4 = (unsigned int *)*a2;
  }
  v32 = 0LL;
  v8 = a1 + 776;
  v33 = &AcpiDeviceTreeLock;
  v31 = a1 + 776;
  v34 = 792LL;
  v35 = 1;
  for ( i = ACPIExtListStartEnum((__int64)&v31); ; i = (__int64)ACPIExtListEnumNext((__int64)&v31) )
  {
    v10 = (_QWORD *)i;
    if ( !ACPIExtListTestElement((__int64)&v31, 1) )
      break;
    if ( (*v10 & 0x2000000000002LL) == 0 )
    {
      if ( v10[91] )
      {
        v11 = ACPIDetectCouldExtensionBeInRelation((_DWORD)v10, (_DWORD)v4, 0, 0, (__int64)&v36);
        if ( !v36 && v11 >= 0 )
        {
          v12 = v10[91];
          if ( v12 )
          {
            if ( !(unsigned __int8)ACPIExtListIsMemberOfRelation(v12, v4) )
              ++v5;
          }
        }
      }
    }
  }
  v13 = v37;
  if ( a3 )
  {
    if ( (*a3 & 0x2000000000002LL) == 0 )
    {
      v14 = a3[91];
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
    v32 = 0LL;
    v33 = &AcpiDeviceTreeLock;
    v31 = v8;
    v34 = 792LL;
    v35 = 1;
    for ( j = ACPIExtListStartEnum((__int64)&v31); ; j = (__int64)ACPIExtListEnumNext((__int64)&v31) )
    {
      v21 = (_QWORD *)j;
      if ( !ACPIExtListTestElement((__int64)&v31, v5 > v19) )
        break;
      if ( !v21 )
      {
        ACPIExtListExitEnumEarly((__int64)&v31);
        break;
      }
      if ( (*v21 & 0x202000000000002LL) == 0
        && v21[91]
        && !(unsigned __int8)ACPIExtListIsMemberOfRelation(v21[91], v4)
        && v19 < v5 )
      {
        v23 = v19++;
        *(_QWORD *)&v17[2 * v23 + 2] = v22;
      }
    }
    if ( a3
      && (*a3 & 0x2000000000002LL) == 0
      && a3[91]
      && !(unsigned __int8)ACPIExtListIsMemberOfRelation(a3[91], v4)
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
        if ( ObReferenceObjectByPointer(*(PVOID *)&v17[v27 + 2], 0, 0LL, 0) < 0 )
        {
          v29 = --*v17;
          v30 = *(_QWORD *)&v17[2 * v29 + 2];
          *(_QWORD *)&v17[2 * v29 + 2] = *(_QWORD *)&v17[v27 + 2];
          *(_QWORD *)&v17[v27 + 2] = v30;
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
