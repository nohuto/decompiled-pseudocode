/*
 * XREFs of DpiFdoEnumChildDevices @ 0x1C00F6D44
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C00E981C (DpiFdoStartAdapter.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C000B478 (IsInternalVideoOutput.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiAcpiGetAcpiChildName @ 0x1C00F72F4 (DpiAcpiGetAcpiChildName.c)
 *     DpiDxgkDdiQueryChildRelations @ 0x1C00F75E0 (DpiDxgkDdiQueryChildRelations.c)
 *     DpiAcpiExposeInfo @ 0x1C00F7A9C (DpiAcpiExposeInfo.c)
 *     DpiFdoDestroyChildDevices @ 0x1C01939E8 (DpiFdoDestroyChildDevices.c)
 */

__int64 __fastcall DpiFdoEnumChildDevices(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r15
  __int64 v3; // r14
  unsigned int v4; // ebx
  _DWORD *PoolWithTag; // rax
  __int64 v6; // rcx
  _DWORD *v7; // rsi
  int ChildRelations; // eax
  __int64 v9; // rcx
  __int64 v10; // rbp
  SIZE_T v11; // rbx
  PVOID v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // r13d
  unsigned int v17; // r12d
  unsigned int v18; // r15d
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // r14
  int v24; // ebx
  __int64 v25; // rcx
  int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // ebx
  bool v31; // zf
  unsigned int v32; // r14d
  __int64 v33; // rbx
  __int64 v34; // r15
  struct _KMUTANT *v35; // rcx
  unsigned int i; // r14d
  __int64 v37; // rbx
  unsigned int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // [rsp+30h] [rbp-58h]
  char v52; // [rsp+98h] [rbp+10h]
  unsigned int v53; // [rsp+A0h] [rbp+18h]
  int v54; // [rsp+A8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 64);
  v2 = a1;
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v1 + 168));
  v3 = *(_QWORD *)(v1 + 40);
  v4 = 28 * (*(_DWORD *)(v1 + 2544) + 1);
  v50 = v3;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v4, 0x74727044u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v10) = -1073741801;
    v40 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v40 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v40);
LABEL_44:
    if ( *(_QWORD *)(v1 + 3112) )
      DpiFdoDestroyChildDevices(v2);
    goto LABEL_33;
  }
  memset(PoolWithTag, 0, v4);
  ChildRelations = DpiDxgkDdiQueryChildRelations(v3, *(_QWORD *)(v1 + 48), v7, v4);
  v10 = ChildRelations;
  if ( ChildRelations < 0 )
  {
    v41 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v41 + 24) = *(_QWORD *)(v3 + 200);
    *(_QWORD *)(v41 + 32) = v10;
    WdLogEvent5_WdError(v41);
    goto LABEL_32;
  }
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v1 + 3120), 1u);
  KeWaitForSingleObject((PVOID)(v1 + 3224), Executive, 0, 0, 0LL);
  v11 = (unsigned int)(184 * *(_DWORD *)(v1 + 2544) + 120);
  v12 = ExAllocatePoolWithTag((POOL_TYPE)512, v11, 0x74727044u);
  *(_QWORD *)(v1 + 3112) = v12;
  if ( !v12 )
  {
    LODWORD(v10) = -1073741801;
    v42 = WdLogNewEntry5_WdLowResource(v13);
    *(_QWORD *)(v42 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v42);
    goto LABEL_31;
  }
  memset(v12, 0, (unsigned int)v11);
  v15 = *(unsigned int *)(v1 + 2544);
  v16 = -1;
  *(_DWORD *)(v1 + 3280) = 0;
  v17 = 0;
  v53 = -1;
  v18 = 0;
  *(_WORD *)(v1 + 2561) = 257;
  v19 = 0x80000000LL;
  v21 = *(_QWORD *)(v1 + 3112) + 120 * (v15 + 1);
  *(_QWORD *)(v1 + 3288) = v21;
  v20 = v21 + 8 * v15;
  LOBYTE(v21) = 0;
  *(_QWORD *)(v1 + 3296) = v20;
  *(_QWORD *)(v1 + 3304) = v20 + 8 * v15;
  v22 = -1;
  v52 = 0;
  v54 = -1;
  if ( !(_DWORD)v15 )
    goto LABEL_16;
  do
  {
    v23 = 7LL * v18;
    if ( v7[v23 + 4] == 2 )
    {
      v43 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v43 + 24) = 0LL;
      WdLogEvent5_WdError(v43);
      LOBYTE(v21) = v52;
      v7[v23 + 4] = 4;
    }
    if ( v7[v23] == 1 )
    {
      v24 = v7[v23 + 6];
      DXGGLOBAL::GetGlobal(v14);
      v25 = g_IsMobileCore != 0 ? -268435456 : -16777216;
      *(_BYTE *)(v1 + 2561) &= ((unsigned int)v25 & v24) == 0;
      v26 = v7[v23 + 6];
      DXGGLOBAL::GetGlobal(v25);
      *(_BYTE *)(v1 + 2562) &= (v26 & 0xF0000000) == 0;
      if ( *(_DWORD *)(v50 + 28) < 0x104Fu )
      {
        v7[v23 + 1] = -1;
        v30 = -1;
        v44 = WdLogNewEntry5_WdWarning(v14, v27, v28, v29);
        *(_QWORD *)(v44 + 24) = 0LL;
        WdLogEvent5_WdWarning(v44);
      }
      else
      {
        v30 = v7[v23 + 1];
        if ( v30 < 0 )
        {
          v39 = -1;
          if ( (v30 & 0x7FFFFFFFu) <= 0xE )
            v39 = 0x80000000;
          v30 = v39;
        }
        v7[v23 + 1] = v30;
        if ( v30 >= 15 && v30 <= 16 )
        {
          if ( v7[v23 + 4] != 4 )
            goto LABEL_54;
          if ( v30 == 15 )
          {
            ++v17;
            v54 = v7[v23 + 6];
          }
          else if ( !*(_BYTE *)(v1 + 1143) )
          {
            goto LABEL_54;
          }
        }
      }
      if ( !IsInternalVideoOutput(v30) && v30 != 6 )
        goto LABEL_13;
      v31 = *(_BYTE *)(v1 + 1136) == 0;
      *(_DWORD *)(v1 + 3312) = v7[v23 + 6];
      if ( v31 && !*(_BYTE *)(v1 + 1138) && (!*(_BYTE *)(v1 + 1139) || !*(_BYTE *)(v1 + 480)) )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL);
        if ( *(_DWORD *)(v14 + 28) >= 0x4000u && !*(_BYTE *)(v1 + 2556) )
          goto LABEL_54;
      }
      if ( v16 == -1 )
      {
        v16 = v18;
        v53 = v30;
LABEL_13:
        LOBYTE(v21) = v52;
        goto LABEL_14;
      }
      v14 = v53;
      LOBYTE(v21) = 1;
      v52 = 1;
      if ( v30 == v53 )
      {
LABEL_68:
        v7[v23 + 1] = -1;
        goto LABEL_14;
      }
      if ( v30 != (_DWORD)v15 )
      {
        if ( v30 == 6 )
        {
          if ( v53 == (_DWORD)v15 )
            goto LABEL_68;
        }
        else if ( v30 != 11 || v53 != 13 )
        {
          goto LABEL_68;
        }
      }
      v46 = v16;
      v16 = v18;
      v14 = 28 * v46;
      v53 = v30;
      v7[7 * v46 + 1] = -1;
    }
LABEL_14:
    ++v18;
  }
  while ( v18 < *(_DWORD *)(v1 + 2544) );
  v22 = v54;
  v19 = 0x80000000LL;
LABEL_16:
  if ( *(_QWORD *)(v1 + 2992) )
  {
    v31 = v17 == 1;
    if ( v17 <= 1 )
      goto LABEL_18;
LABEL_54:
    LODWORD(v10) = -1073741637;
    v45 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v45 + 24) = -1073741637LL;
    WdLogEvent5_WdError(v45);
LABEL_42:
    v2 = a1;
  }
  else
  {
    if ( v17 )
      goto LABEL_54;
    v31 = 0;
LABEL_18:
    if ( v31 )
      *(_DWORD *)(v1 + 3032) = v22;
    if ( v16 != -1 )
    {
      v47 = 7LL * v16;
      if ( v7[v47 + 1] == 6 )
        v7[v47 + 1] = 0x80000000;
      if ( (_BYTE)v21 )
      {
        v48 = WdLogNewEntry5_WdError(v47 * 4);
        *(_QWORD *)(v48 + 24) = 0LL;
        WdLogEvent5_WdError(v48);
        *(_DWORD *)(v1 + 2584) |= 1u;
      }
    }
    v32 = 0;
    if ( *(_DWORD *)(v1 + 2544) )
    {
      while ( 1 )
      {
        v33 = 120LL * v32;
        v34 = 7LL * v32;
        *(_DWORD *)(v33 + *(_QWORD *)(v1 + 3112)) = v7[v34];
        *(_OWORD *)(*(_QWORD *)(v1 + 3112) + v33 + 4) = *(_OWORD *)&v7[v34 + 1];
        *(_DWORD *)(*(_QWORD *)(v1 + 3112) + v33 + 20) = v7[v34 + 5];
        *(_DWORD *)(*(_QWORD *)(v1 + 3112) + v33 + 24) = v7[v34 + 6];
        *(_DWORD *)(*(_QWORD *)(v1 + 3112) + v33 + 52) = 1;
        KeInitializeEvent((PRKEVENT)(v33 + *(_QWORD *)(v1 + 3112) + 56LL), NotificationEvent, 0);
        KeInitializeEvent((PRKEVENT)(v33 + *(_QWORD *)(v1 + 3112) + 80LL), NotificationEvent, 1u);
        if ( v7[v34] == 1 )
        {
          *(_QWORD *)(*(_QWORD *)(v1 + 3288) + 8LL * *(unsigned int *)(v1 + 3280)) = v33 + *(_QWORD *)(v1 + 3112) + 56LL;
          *(_QWORD *)(*(_QWORD *)(v1 + 3296) + 8LL * (unsigned int)(*(_DWORD *)(v1 + 3280))++) = v33
                                                                                               + *(_QWORD *)(v1 + 3112)
                                                                                               + 80LL;
          if ( *(_BYTE *)(v1 + 1136) )
          {
            if ( *(_DWORD *)(v1 + 3280) == 1 || v32 == v16 )
              dword_1C0057174 = v7[v34 + 6];
          }
        }
        *(_QWORD *)(*(_QWORD *)(v1 + 3112) + v33 + 104) = ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x74727044u);
        v35 = *(struct _KMUTANT **)(*(_QWORD *)(v1 + 3112) + v33 + 104);
        if ( !v35 )
          break;
        KeInitializeMutex(v35, 0);
        if ( ++v32 >= *(_DWORD *)(v1 + 2544) )
          goto LABEL_28;
      }
      LODWORD(v10) = -1073741801;
      v49 = WdLogNewEntry5_WdLowResource(0LL);
      *(_QWORD *)(v49 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v49);
      goto LABEL_42;
    }
LABEL_28:
    if ( *(_BYTE *)(v1 + 1141) != 1 )
      goto LABEL_42;
    v2 = a1;
    DpiAcpiExposeInfo(a1, v21, v15, v19);
    for ( i = 0;
          i < *(_DWORD *)(v1 + 2544);
          *(_QWORD *)(*(_QWORD *)(v1 + 3112) + v37 + 112) = DpiAcpiGetAcpiChildName(
                                                              v1,
                                                              *(unsigned int *)(*(_QWORD *)(v1 + 3112) + v37 + 20)) )
    {
      v37 = 120LL * i++;
    }
  }
LABEL_31:
  KeReleaseMutex((PRKMUTEX)(v1 + 3224), 0);
  ExReleaseResourceLite((PERESOURCE)(v1 + 3120));
  KeLeaveCriticalRegion();
LABEL_32:
  if ( (int)v10 < 0 )
    goto LABEL_44;
LABEL_33:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)v10;
}
