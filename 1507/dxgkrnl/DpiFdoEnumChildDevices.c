/*
 * XREFs of DpiFdoEnumChildDevices @ 0x1C00D45E0
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C00C3E10 (DpiFdoStartAdapter.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C0004FC0 (IsInternalVideoOutput.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DpiAcpiExposeInfo @ 0x1C00D4360 (DpiAcpiExposeInfo.c)
 *     DpiAcpiGetAcpiChildName @ 0x1C00D4A5C (DpiAcpiGetAcpiChildName.c)
 *     DpiDxgkDdiQueryChildRelations @ 0x1C00D4D5C (DpiDxgkDdiQueryChildRelations.c)
 *     DpiFdoDestroyChildDevices @ 0x1C016735C (DpiFdoDestroyChildDevices.c)
 */

__int64 __fastcall DpiFdoEnumChildDevices(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r13
  __int64 v3; // r15
  unsigned int v4; // ebx
  _DWORD *PoolWithTag; // rax
  __int64 v6; // rcx
  unsigned int v7; // r12d
  _DWORD *v8; // rsi
  int ChildRelations; // eax
  __int64 v10; // rcx
  __int64 v11; // r14
  SIZE_T v12; // rbx
  PVOID v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rcx
  unsigned int v17; // r13d
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r15
  bool v23; // zf
  int v24; // ebx
  unsigned int v25; // ebx
  __int64 v26; // r15
  __int64 v27; // r12
  struct _KMUTANT *v28; // rcx
  unsigned int i; // ebp
  __int64 v30; // rbx
  int v32; // eax
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rcx
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  unsigned int v42; // [rsp+30h] [rbp-58h]
  __int64 v43; // [rsp+38h] [rbp-50h]
  char v45; // [rsp+98h] [rbp+10h]
  unsigned int v46; // [rsp+A0h] [rbp+18h]
  unsigned int v47; // [rsp+A8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 64);
  v2 = a1;
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v1 + 168));
  v3 = *(_QWORD *)(v1 + 40);
  v4 = 28 * (*(_DWORD *)(v1 + 1424) + 1);
  v43 = v3;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v4, 0x74727044u);
  v7 = 0;
  v8 = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v11) = -1073741801;
    v33 = (_QWORD *)WdLogNewEntry5_WdLowResource(v6);
    v33[4] = ExAllocatePoolWithTag;
    v33[3] = DpiFdoEnumChildDevices;
    v33[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v33);
LABEL_45:
    if ( *(_QWORD *)(v1 + 1928) )
      DpiFdoDestroyChildDevices(v2);
    goto LABEL_38;
  }
  memset(PoolWithTag, 0, v4);
  ChildRelations = DpiDxgkDdiQueryChildRelations(v3, *(_QWORD *)(v1 + 48), v8, v4);
  v11 = ChildRelations;
  if ( ChildRelations < 0 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v34[3] = DpiFdoEnumChildDevices;
    v34[4] = *(_QWORD *)(v3 + 200);
    v34[5] = v11;
    WdLogEvent5_WdError(v34);
    goto LABEL_37;
  }
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v1 + 1936), 1u);
  KeWaitForSingleObject((PVOID)(v1 + 2040), Executive, 0, 0, 0LL);
  v12 = (unsigned int)(184 * *(_DWORD *)(v1 + 1424) + 120);
  v13 = ExAllocatePoolWithTag((POOL_TYPE)512, v12, 0x74727044u);
  *(_QWORD *)(v1 + 1928) = v13;
  if ( !v13 )
  {
    LODWORD(v11) = -1073741801;
    v35 = (_QWORD *)WdLogNewEntry5_WdLowResource(v14);
    v35[4] = ExAllocatePoolWithTag;
    v35[3] = DpiFdoEnumChildDevices;
    v35[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v35);
    goto LABEL_36;
  }
  memset(v13, 0, (unsigned int)v12);
  v15 = *(unsigned int *)(v1 + 1424);
  v47 = -1;
  v16 = 0xFFFFFFFFLL;
  *(_DWORD *)(v1 + 2096) = 0;
  v17 = 0;
  v42 = -1;
  v18 = 0x80000000LL;
  *(_BYTE *)(v1 + 1441) = 1;
  v20 = *(_QWORD *)(v1 + 1928) + 120 * (v15 + 1);
  *(_QWORD *)(v1 + 2104) = v20;
  v19 = v20 + 8 * v15;
  LOBYTE(v20) = 0;
  *(_QWORD *)(v1 + 2112) = v19;
  *(_QWORD *)(v1 + 2120) = v19 + 8 * v15;
  v21 = 0xFFFFFFFFLL;
  v46 = -1;
  v45 = 0;
  if ( !(_DWORD)v15 )
    goto LABEL_11;
  do
  {
    v22 = 7LL * v7;
    if ( v8[v22 + 4] == 2 )
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdError(v16);
      v36[3] = DpiFdoEnumChildDevices;
      v36[4] = 0LL;
      v36[5] = 0LL;
      WdLogEvent5_WdError(v36);
      LOBYTE(v20) = v45;
      v18 = 0x80000000LL;
      v8[v22 + 4] = 4;
    }
    if ( v8[v22] != 1 )
      goto LABEL_8;
    *(_BYTE *)(v1 + 1441) &= (v8[v22 + 6] & 0xF0000000) == 0;
    if ( *(_DWORD *)(v43 + 28) < 0x104Fu )
    {
      v8[v22 + 1] = -1;
      v24 = -1;
      v37 = WdLogNewEntry5_WdWarning(v16, v20, v15, v18);
      *(_QWORD *)(v37 + 32) = 0LL;
      *(_QWORD *)(v37 + 24) = DpiFdoEnumChildDevices;
      WdLogEvent5_WdWarning(v37);
    }
    else
    {
      v24 = v8[v22 + 1];
      if ( (v24 & (unsigned int)v18) != 0 )
      {
        v32 = -1;
        if ( (v24 & 0x7FFFFFFFu) <= 0xE )
          v32 = v18;
        v24 = v32;
      }
      v8[v22 + 1] = v24;
      if ( v24 == 15 )
      {
        ++v17;
        v42 = v8[v22 + 6];
        if ( v8[v22 + 4] != 4 )
          goto LABEL_68;
      }
    }
    if ( !IsInternalVideoOutput(v24) && v24 != 6 )
    {
      LOBYTE(v20) = v45;
LABEL_8:
      v21 = v46;
      goto LABEL_9;
    }
    v23 = *(_BYTE *)(v1 + 1056) == 0;
    *(_BYTE *)(v1 + 2128) = 1;
    if ( v23 && !*(_BYTE *)(v1 + 1057) && (!*(_BYTE *)(v1 + 1058) || !*(_BYTE *)(v1 + 448)) )
    {
      v16 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL);
      if ( *(_DWORD *)(v16 + 28) >= 0x4000u && !*(_BYTE *)(v1 + 1436) )
        goto LABEL_68;
    }
    v21 = v46;
    if ( v46 == -1 )
    {
      LOBYTE(v20) = v45;
      v21 = v7;
      v46 = v7;
      v47 = v24;
      goto LABEL_9;
    }
    v16 = v47;
    LOBYTE(v20) = 1;
    v45 = 1;
    if ( v24 == v47 )
    {
LABEL_65:
      v8[v22 + 1] = -1;
      goto LABEL_9;
    }
    if ( v24 != (_DWORD)v18 )
    {
      if ( v24 == 6 )
      {
        if ( v47 == (_DWORD)v18 )
          goto LABEL_65;
      }
      else if ( v24 != 11 || v47 != 13 )
      {
        goto LABEL_65;
      }
    }
    v16 = 28LL * v46;
    v21 = v7;
    v46 = v7;
    v47 = v24;
    *(_DWORD *)((char *)v8 + v16 + 4) = -1;
LABEL_9:
    ++v7;
  }
  while ( v7 < *(_DWORD *)(v1 + 1424) );
  v16 = v42;
LABEL_11:
  if ( *(_QWORD *)(v1 + 1808) )
  {
    v23 = v17 == 1;
    if ( v17 > 1 )
      goto LABEL_68;
LABEL_21:
    if ( v23 )
      *(_DWORD *)(v1 + 1848) = v16;
    if ( (_DWORD)v21 != -1 )
    {
      v39 = 7 * v21;
      if ( v8[7 * v21 + 1] == 6 )
        v8[v39 + 1] = v18;
      if ( (_BYTE)v20 )
      {
        v40 = (_QWORD *)WdLogNewEntry5_WdError(v39 * 4);
        v40[3] = DpiFdoEnumChildDevices;
        v40[4] = 0LL;
        v40[5] = 0LL;
        WdLogEvent5_WdError(v40);
        *(_DWORD *)(v1 + 1464) |= 1u;
      }
    }
    v25 = 0;
    if ( *(_DWORD *)(v1 + 1424) )
    {
      while ( 1 )
      {
        v26 = 120LL * v25;
        v27 = 7LL * v25;
        *(_DWORD *)(v26 + *(_QWORD *)(v1 + 1928)) = v8[v27];
        *(_OWORD *)(*(_QWORD *)(v1 + 1928) + v26 + 4) = *(_OWORD *)&v8[v27 + 1];
        *(_DWORD *)(*(_QWORD *)(v1 + 1928) + v26 + 20) = v8[v27 + 5];
        *(_DWORD *)(*(_QWORD *)(v1 + 1928) + v26 + 24) = v8[v27 + 6];
        *(_DWORD *)(*(_QWORD *)(v1 + 1928) + v26 + 52) = 1;
        KeInitializeEvent((PRKEVENT)(v26 + *(_QWORD *)(v1 + 1928) + 56LL), NotificationEvent, 0);
        KeInitializeEvent((PRKEVENT)(v26 + *(_QWORD *)(v1 + 1928) + 80LL), NotificationEvent, 1u);
        if ( v8[v27] == 1 )
        {
          *(_QWORD *)(*(_QWORD *)(v1 + 2104) + 8LL * *(unsigned int *)(v1 + 2096)) = v26 + *(_QWORD *)(v1 + 1928) + 56LL;
          *(_QWORD *)(*(_QWORD *)(v1 + 2112) + 8LL * (unsigned int)(*(_DWORD *)(v1 + 2096))++) = v26
                                                                                               + *(_QWORD *)(v1 + 1928)
                                                                                               + 80LL;
          if ( *(_BYTE *)(v1 + 1056) )
          {
            if ( *(_DWORD *)(v1 + 2096) == 1 || v25 == v46 )
              dword_1C0046F34 = v8[v27 + 6];
          }
        }
        *(_QWORD *)(*(_QWORD *)(v1 + 1928) + v26 + 104) = ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x74727044u);
        v28 = *(struct _KMUTANT **)(*(_QWORD *)(v1 + 1928) + v26 + 104);
        if ( !v28 )
          break;
        KeInitializeMutex(v28, 0);
        if ( ++v25 >= *(_DWORD *)(v1 + 1424) )
          goto LABEL_28;
      }
      LODWORD(v11) = -1073741801;
      v41 = (_QWORD *)WdLogNewEntry5_WdLowResource(0LL);
      v41[4] = ExAllocatePoolWithTag;
      v41[3] = DpiFdoEnumChildDevices;
      v41[5] = -1073741801LL;
      WdLogEvent5_WdLowResource(v41);
      goto LABEL_29;
    }
LABEL_28:
    if ( *(_BYTE *)(v1 + 1060) != 1 )
      goto LABEL_29;
    v2 = a1;
    DpiAcpiExposeInfo(a1);
    for ( i = 0;
          i < *(_DWORD *)(v1 + 1424);
          *(_QWORD *)(*(_QWORD *)(v1 + 1928) + v30 + 112) = DpiAcpiGetAcpiChildName(
                                                              v1,
                                                              *(unsigned int *)(*(_QWORD *)(v1 + 1928) + v30 + 20)) )
    {
      v30 = 120LL * i++;
    }
  }
  else
  {
    if ( !v17 )
    {
      v23 = 0;
      goto LABEL_21;
    }
LABEL_68:
    LODWORD(v11) = -1073741637;
    v38 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v38[3] = DpiFdoEnumChildDevices;
    v38[4] = 0LL;
    v38[5] = -1073741637LL;
    WdLogEvent5_WdError(v38);
LABEL_29:
    v2 = a1;
  }
LABEL_36:
  KeReleaseMutex((PRKMUTEX)(v1 + 2040), 0);
  ExReleaseResourceLite((PERESOURCE)(v1 + 1936));
  KeLeaveCriticalRegion();
LABEL_37:
  if ( (int)v11 < 0 )
    goto LABEL_45;
LABEL_38:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)v11;
}
