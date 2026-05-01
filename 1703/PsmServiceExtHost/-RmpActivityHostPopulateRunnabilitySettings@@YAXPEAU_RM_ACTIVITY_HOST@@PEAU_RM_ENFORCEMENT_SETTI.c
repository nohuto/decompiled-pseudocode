/*
 * XREFs of ?RmpActivityHostPopulateRunnabilitySettings@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180005DE0
 * Callers:
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180005B60 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     RmpHandlePsmRetrieveHostMemoryLimit @ 0x180015204 (RmpHandlePsmRetrieveHostMemoryLimit.c)
 * Callees:
 *     ?RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180004C74 (-RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180004FC0 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ?RmpResourceSetGetExecutionSpeed@@YA?AW4_RM_EXECUTION_SPEED@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180005B1C (-RmpResourceSetGetExecutionSpeed@@YA-AW4_RM_EXECUTION_SPEED@@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x18001287C (-RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4.c)
 */

void __fastcall RmpActivityHostPopulateRunnabilitySettings(
        struct _RM_ACTIVITY_HOST *a1,
        struct _RM_ENFORCEMENT_SETTINGS *a2)
{
  int v4; // ecx
  __int64 v5; // r11
  _QWORD *v6; // rdx
  __int64 v7; // rdi
  unsigned __int64 v8; // r12
  int v9; // r15d
  int ExecutionSpeed; // ebp
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r14
  __int64 FirstResourceSet; // r10
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  char v18; // r13
  int v19; // r14d
  unsigned __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  int v24; // edx
  char v25; // al
  int v26; // eax
  __int64 v27; // rcx
  char v28; // al
  unsigned __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // [rsp+60h] [rbp+8h]
  __int64 v33; // [rsp+68h] [rbp+10h]

  v4 = 0;
  v5 = 1LL;
  v6 = (_QWORD *)((char *)a1 + 616);
  while ( 1 )
  {
    if ( ((1 << v4) & 2) != 0 && (_QWORD *)*v6 != v6 )
    {
      v7 = *v6 - 1368LL;
      if ( *v6 != 1368LL )
        break;
    }
    ++v4;
    v6 += 3;
    if ( v4 >= 2 )
    {
      v7 = 0LL;
      break;
    }
  }
  v8 = 0LL;
  v9 = 0;
  if ( *((_DWORD *)a1 + 14) || *((_DWORD *)a1 + 150) != 2 )
    ExecutionSpeed = 1;
  else
    ExecutionSpeed = -1;
  if ( !v7 )
  {
LABEL_59:
    v19 = v8;
    goto LABEL_33;
  }
  v11 = *(_QWORD *)(v7 + 1368);
  v12 = *(int *)(v7 + 1400);
  v13 = *(_QWORD *)(v7 + 1392);
  FirstResourceSet = 0LL;
  if ( v11 != v13 + 8 * (v12 + 2 * v12 + 77) )
    FirstResourceSet = v11 - 1368;
  if ( !FirstResourceSet )
  {
    v15 = (unsigned int)(v12 + 1);
    if ( (int)v15 < 2 )
    {
      while ( 1 )
      {
        if ( (((_DWORD)v5 << v15) & 2) != 0 )
        {
          FirstResourceSet = RmpActivityHostGetFirstResourceSet(v13, v15);
          if ( FirstResourceSet )
            break;
        }
        v15 = (unsigned int)(v15 + 1);
        if ( (int)v15 >= 2 )
          goto LABEL_15;
      }
    }
    else
    {
LABEL_15:
      FirstResourceSet = 0LL;
    }
  }
  v16 = *((_QWORD *)a2 + 4);
  v17 = 0xBE0883BCFD008LL;
  v18 = *((_BYTE *)a2 + 52);
  v19 = 100;
  do
  {
    v20 = *(_QWORD *)(v7 + 1504);
    if ( v20 )
    {
      if ( v20 < 0x64 )
        goto LABEL_20;
LABEL_19:
      v20 = 100LL;
      goto LABEL_20;
    }
    v29 = *(int *)(v7 + 1408);
    if ( (unsigned int)v29 > 0x33 || !_bittest64(&v17, v29) )
      goto LABEL_19;
    v20 = v5;
LABEL_20:
    v8 += v20;
    v21 = v9 + 1;
    if ( !*(_DWORD *)(v7 + 1456) )
      v21 = v9;
    v9 = v21;
    if ( *((_DWORD *)a1 + 14) == (_DWORD)v5 )
      *((_DWORD *)a2 + 11) = *(_DWORD *)(v7 + 1420);
    v22 = *(_QWORD *)(v7 + 1464) | v16;
    *((_QWORD *)a2 + 4) = v22;
    v23 = *(_DWORD *)(v7 + 1424);
    v24 = *(_DWORD *)(v7 + 1452) & 3;
    v33 = v22;
    if ( (v23 & 0x40) != 0 && (*(_DWORD *)(v7 + 1452) & 3) != 3 )
      v24 = 2;
    if ( (v23 & 0xEu) >= 8 && (v23 & 0x30u) >= 0x20 && v24 <= (unsigned int)v5 )
      v24 = v5;
    if ( ExecutionSpeed <= v24 )
      ExecutionSpeed = RmpResourceSetGetExecutionSpeed(v7);
    if ( (*(_BYTE *)(v7 + 1452) & 8) != 0 )
      v25 = 2;
    else
      v25 = 0;
    v7 = FirstResourceSet;
    v18 |= v25 & 2;
    *((_BYTE *)a2 + 52) = v18;
    if ( FirstResourceSet )
    {
      v30 = *(_QWORD *)(FirstResourceSet + 1368);
      v31 = *(int *)(FirstResourceSet + 1400);
      v32 = *(_QWORD *)(FirstResourceSet + 1392);
      FirstResourceSet = 0LL;
      if ( v30 != v32 + 24 * v31 + 616 )
        FirstResourceSet = v30 - 1368;
      if ( !FirstResourceSet )
        FirstResourceSet = RmpActivityHostEnumerateResourceSetGetFirst(v32, 2, (int)v31 + 1);
    }
    v16 = v33;
    v17 = 0xBE0883BCFD008LL;
  }
  while ( v7 );
  if ( v8 < 0x64 )
    goto LABEL_59;
LABEL_33:
  *((_DWORD *)a2 + 12) = v19;
  if ( v9 && v9 == (unsigned int)RmpActivityHostGetResourceSetCount(a1, 2) )
    *((_BYTE *)a2 + 52) |= v5;
  v26 = *((_DWORD *)a1 + 280);
  v27 = *((_QWORD *)a1 + 5);
  if ( ExecutionSpeed == -1 )
    ExecutionSpeed = v5;
  *((_DWORD *)a2 + 10) = ExecutionSpeed;
  if ( (v26 & 0x80u) != 0 || (*(_BYTE *)(v27 + 508) & 8) != 0 )
    v28 = 4;
  else
    v28 = 0;
  *((_BYTE *)a2 + 52) &= ~4u;
  *((_BYTE *)a2 + 52) |= v28;
  if ( (*((_WORD *)a1 + 560) & 0x400) == 0
    || (*((_BYTE *)a1 + 816) & 0x10) != 0
    || !*(_BYTE *)(*((_QWORD *)a1 + 5) + 208LL) )
  {
    LOBYTE(v5) = 0;
  }
  *((_BYTE *)a2 + 52) ^= (*((_BYTE *)a2 + 52) ^ (8 * v5)) & 8;
}
