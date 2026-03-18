/*
 * XREFs of DpiFdoEnumChildDevices @ 0x1C00D0530
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C00D1400 (DpiFdoStartAdapter.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C000A310 (IsInternalVideoOutput.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiAcpiExposeInfo @ 0x1C00CF980 (DpiAcpiExposeInfo.c)
 *     DpiAcpiGetAcpiChildName @ 0x1C00D09EC (DpiAcpiGetAcpiChildName.c)
 *     DpiDxgkDdiQueryChildRelations @ 0x1C00D0CEC (DpiDxgkDdiQueryChildRelations.c)
 *     DpiFdoDestroyChildDevices @ 0x1C016B958 (DpiFdoDestroyChildDevices.c)
 */

__int64 __fastcall DpiFdoEnumChildDevices(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r13
  __int64 v3; // r15
  unsigned int v4; // ebx
  _DWORD *PoolWithTag; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // r12d
  _DWORD *v11; // rsi
  int ChildRelations; // eax
  __int64 v13; // rcx
  __int64 v14; // r14
  SIZE_T v15; // rbx
  PVOID v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // rcx
  unsigned int v23; // r13d
  __int64 v24; // rdx
  __int64 v25; // rax
  char v26; // dl
  __int64 v27; // rax
  __int64 v28; // r15
  int v29; // ebx
  int v30; // ebx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // ebx
  char v35; // dl
  int v36; // r8d
  bool v37; // zf
  unsigned int v38; // r15d
  __int64 v39; // rbx
  __int64 v40; // r12
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  struct _KMUTANT *v44; // rcx
  unsigned int i; // ebp
  __int64 v46; // rbx
  unsigned int v48; // eax
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rcx
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  unsigned int v58; // [rsp+30h] [rbp-58h]
  __int64 v59; // [rsp+38h] [rbp-50h]
  char v61; // [rsp+98h] [rbp+10h]
  unsigned int v62; // [rsp+A0h] [rbp+18h]
  unsigned int v63; // [rsp+A8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 64);
  v2 = a1;
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v1 + 168));
  v3 = *(_QWORD *)(v1 + 40);
  v4 = 28 * (*(_DWORD *)(v1 + 1464) + 1);
  v59 = v3;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v4, 0x74727044u);
  v10 = 0;
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v14) = -1073741801;
    v49 = (_QWORD *)WdLogNewEntry5_WdLowResource(v7, v6, v8, v9);
    v49[4] = ExAllocatePoolWithTag;
    v49[3] = DpiFdoEnumChildDevices;
    v49[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v49);
LABEL_45:
    if ( *(_QWORD *)(v1 + 1968) )
      DpiFdoDestroyChildDevices(v2);
    goto LABEL_34;
  }
  memset(PoolWithTag, 0, v4);
  ChildRelations = DpiDxgkDdiQueryChildRelations(v3, *(_QWORD *)(v1 + 48), v11, v4);
  v14 = ChildRelations;
  if ( ChildRelations < 0 )
  {
    v50 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v50[3] = DpiFdoEnumChildDevices;
    v50[4] = *(_QWORD *)(v3 + 200);
    v50[5] = v14;
    WdLogEvent5_WdError(v50);
    goto LABEL_33;
  }
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v1 + 1976), 1u);
  KeWaitForSingleObject((PVOID)(v1 + 2080), Executive, 0, 0, 0LL);
  v15 = (unsigned int)(184 * *(_DWORD *)(v1 + 1464) + 120);
  v16 = ExAllocatePoolWithTag((POOL_TYPE)512, v15, 0x74727044u);
  *(_QWORD *)(v1 + 1968) = v16;
  if ( !v16 )
  {
    LODWORD(v14) = -1073741801;
    v51 = (_QWORD *)WdLogNewEntry5_WdLowResource(v18, v17, v19, v20);
    v51[4] = ExAllocatePoolWithTag;
    v51[3] = DpiFdoEnumChildDevices;
    v51[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v51);
    goto LABEL_32;
  }
  memset(v16, 0, (unsigned int)v15);
  v21 = *(unsigned int *)(v1 + 1464);
  v63 = -1;
  v22 = 0xFFFFFFFFLL;
  *(_DWORD *)(v1 + 2136) = 0;
  v23 = 0;
  v58 = -1;
  *(_WORD *)(v1 + 1481) = 257;
  v24 = *(_QWORD *)(v1 + 1968) + 120 * (v21 + 1);
  *(_QWORD *)(v1 + 2144) = v24;
  v25 = v24 + 8 * v21;
  v26 = 0;
  *(_QWORD *)(v1 + 2152) = v25;
  *(_QWORD *)(v1 + 2160) = v25 + 8 * v21;
  v27 = 0xFFFFFFFFLL;
  v62 = -1;
  v61 = 0;
  if ( !(_DWORD)v21 )
    goto LABEL_17;
  do
  {
    v28 = 7LL * v10;
    if ( v11[v28 + 4] == 2 )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdError(v22);
      v52[3] = DpiFdoEnumChildDevices;
      v52[4] = 0LL;
      v52[5] = 0LL;
      WdLogEvent5_WdError(v52);
      v26 = v61;
      v11[v28 + 4] = 4;
    }
    if ( v11[v28] != 1 )
      goto LABEL_14;
    v29 = v11[v28 + 6];
    DXGGLOBAL::GetGlobal(v22);
    *(_BYTE *)(v1 + 1481) &= (v29 & 0xFF000000) == 0;
    v30 = v11[v28 + 6];
    DXGGLOBAL::GetGlobal(v31);
    *(_BYTE *)(v1 + 1482) &= (v30 & 0xF0000000) == 0;
    if ( *(_DWORD *)(v59 + 28) < 0x104Fu )
    {
      v11[v28 + 1] = -1;
      v34 = -1;
      v53 = WdLogNewEntry5_WdWarning(v22, 0LL, v32, v33);
      *(_QWORD *)(v53 + 32) = 0LL;
      *(_QWORD *)(v53 + 24) = DpiFdoEnumChildDevices;
      WdLogEvent5_WdWarning(v53);
    }
    else
    {
      v34 = v11[v28 + 1];
      if ( v34 < 0 )
      {
        v48 = -1;
        if ( (v34 & 0x7FFFFFFFu) <= 0xE )
          v48 = 0x80000000;
        v34 = v48;
      }
      v11[v28 + 1] = v34;
      if ( v34 == 15 )
      {
        ++v23;
        v58 = v11[v28 + 6];
        if ( v11[v28 + 4] != 4 )
          goto LABEL_68;
      }
    }
    if ( !IsInternalVideoOutput(v34) && v34 != 6 )
    {
      v26 = v61;
LABEL_14:
      v27 = v62;
      goto LABEL_15;
    }
    *(_BYTE *)(v1 + 2168) = 1;
    if ( *(_BYTE *)(v1 + 1088) == v35
      && *(_BYTE *)(v1 + 1090) == v35
      && (*(_BYTE *)(v1 + 1091) == v35 || *(_BYTE *)(v1 + 480) == v35) )
    {
      v22 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL);
      if ( *(_DWORD *)(v22 + 28) >= 0x4000u && *(_BYTE *)(v1 + 1476) == v35 )
        goto LABEL_68;
    }
    v27 = v62;
    if ( v62 == -1 )
    {
      v26 = v61;
      v27 = v10;
      v62 = v10;
      v63 = v34;
      goto LABEL_15;
    }
    v22 = v63;
    v26 = 1;
    v61 = 1;
    if ( v34 == v63 )
    {
LABEL_65:
      v11[v28 + 1] = -1;
      goto LABEL_15;
    }
    if ( v34 != v36 )
    {
      if ( v34 == 6 )
      {
        if ( v63 == v36 )
          goto LABEL_65;
      }
      else if ( v34 != 11 || v63 != 13 )
      {
        goto LABEL_65;
      }
    }
    v22 = 28LL * v62;
    v27 = v10;
    v62 = v10;
    v63 = v34;
    *(_DWORD *)((char *)v11 + v22 + 4) = -1;
LABEL_15:
    ++v10;
  }
  while ( v10 < *(_DWORD *)(v1 + 1464) );
  v22 = v58;
LABEL_17:
  if ( *(_QWORD *)(v1 + 1848) )
  {
    v37 = v23 == 1;
    if ( v23 <= 1 )
      goto LABEL_19;
LABEL_68:
    LODWORD(v14) = -1073741637;
    v54 = (_QWORD *)WdLogNewEntry5_WdError(v22);
    v54[3] = DpiFdoEnumChildDevices;
    v54[4] = 0LL;
    v54[5] = -1073741637LL;
    WdLogEvent5_WdError(v54);
LABEL_43:
    v2 = a1;
  }
  else
  {
    if ( v23 )
      goto LABEL_68;
    v37 = 0;
LABEL_19:
    if ( v37 )
      *(_DWORD *)(v1 + 1888) = v22;
    if ( (_DWORD)v27 != -1 )
    {
      v55 = 7 * v27;
      if ( v11[7 * v27 + 1] == 6 )
        v11[v55 + 1] = 0x80000000;
      if ( v26 )
      {
        v56 = (_QWORD *)WdLogNewEntry5_WdError(v55 * 4);
        v56[3] = DpiFdoEnumChildDevices;
        v56[4] = 0LL;
        v56[5] = 0LL;
        WdLogEvent5_WdError(v56);
        *(_DWORD *)(v1 + 1504) |= 1u;
      }
    }
    v38 = 0;
    if ( *(_DWORD *)(v1 + 1464) )
    {
      while ( 1 )
      {
        v39 = 120LL * v38;
        v40 = 7LL * v38;
        *(_DWORD *)(v39 + *(_QWORD *)(v1 + 1968)) = v11[v40];
        *(_OWORD *)(*(_QWORD *)(v1 + 1968) + v39 + 4) = *(_OWORD *)&v11[v40 + 1];
        *(_DWORD *)(*(_QWORD *)(v1 + 1968) + v39 + 20) = v11[v40 + 5];
        *(_DWORD *)(*(_QWORD *)(v1 + 1968) + v39 + 24) = v11[v40 + 6];
        *(_DWORD *)(*(_QWORD *)(v1 + 1968) + v39 + 52) = 1;
        KeInitializeEvent((PRKEVENT)(v39 + *(_QWORD *)(v1 + 1968) + 56LL), NotificationEvent, 0);
        KeInitializeEvent((PRKEVENT)(v39 + *(_QWORD *)(v1 + 1968) + 80LL), NotificationEvent, 1u);
        if ( v11[v40] == 1 )
        {
          *(_QWORD *)(*(_QWORD *)(v1 + 2144) + 8LL * *(unsigned int *)(v1 + 2136)) = v39 + *(_QWORD *)(v1 + 1968) + 56LL;
          *(_QWORD *)(*(_QWORD *)(v1 + 2152) + 8LL * (unsigned int)(*(_DWORD *)(v1 + 2136))++) = v39
                                                                                               + *(_QWORD *)(v1 + 1968)
                                                                                               + 80LL;
          if ( *(_BYTE *)(v1 + 1088) )
          {
            if ( *(_DWORD *)(v1 + 2136) == 1 || v38 == v62 )
              dword_1C0046FB4 = v11[v40 + 6];
          }
        }
        *(_QWORD *)(*(_QWORD *)(v1 + 1968) + v39 + 104) = ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x74727044u);
        v44 = *(struct _KMUTANT **)(*(_QWORD *)(v1 + 1968) + v39 + 104);
        if ( !v44 )
          break;
        KeInitializeMutex(v44, 0);
        if ( ++v38 >= *(_DWORD *)(v1 + 1464) )
          goto LABEL_29;
      }
      LODWORD(v14) = -1073741801;
      v57 = (_QWORD *)WdLogNewEntry5_WdLowResource(0LL, v41, v42, v43);
      v57[4] = ExAllocatePoolWithTag;
      v57[3] = DpiFdoEnumChildDevices;
      v57[5] = -1073741801LL;
      WdLogEvent5_WdLowResource(v57);
      goto LABEL_43;
    }
LABEL_29:
    if ( *(_BYTE *)(v1 + 1093) != 1 )
      goto LABEL_43;
    v2 = a1;
    DpiAcpiExposeInfo(a1);
    for ( i = 0;
          i < *(_DWORD *)(v1 + 1464);
          *(_QWORD *)(*(_QWORD *)(v1 + 1968) + v46 + 112) = DpiAcpiGetAcpiChildName(
                                                              v1,
                                                              *(unsigned int *)(*(_QWORD *)(v1 + 1968) + v46 + 20)) )
    {
      v46 = 120LL * i++;
    }
  }
LABEL_32:
  KeReleaseMutex((PRKMUTEX)(v1 + 2080), 0);
  ExReleaseResourceLite((PERESOURCE)(v1 + 1976));
  KeLeaveCriticalRegion();
LABEL_33:
  if ( (int)v14 < 0 )
    goto LABEL_45;
LABEL_34:
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)v14;
}
