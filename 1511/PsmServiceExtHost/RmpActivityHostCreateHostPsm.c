/*
 * XREFs of RmpActivityHostCreateHostPsm @ 0x180007C50
 * Callers:
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180011420 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 * Callees:
 *     RmpActivityHostAllocateAndInitialize @ 0x1800078F4 (RmpActivityHostAllocateAndInitialize.c)
 *     RmpActivityHostCompleteInitialization @ 0x180007D98 (RmpActivityHostCompleteInitialization.c)
 *     RmpPsmAppFamilyTableAddActivityHost @ 0x180008494 (RmpPsmAppFamilyTableAddActivityHost.c)
 *     ?RmpActivityHostCleanupTypeSpecificState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180009380 (-RmpActivityHostCleanupTypeSpecificState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     RmpActivityHostAbortInitialization @ 0x180040ABC (RmpActivityHostAbortInitialization.c)
 */

__int64 __fastcall RmpActivityHostCreateHostPsm(_OWORD *a1, struct _RM_ACTIVITY_HOST **a2)
{
  int v4; // eax
  struct _RM_ACTIVITY_HOST *v5; // rbx
  int v6; // edi
  _OWORD *v7; // rdx
  __int64 v8; // rcx
  _OWORD *v9; // rax
  __int128 v10; // xmm1
  _QWORD *v11; // rax
  struct _RM_ACTIVITY_HOST *v13; // [rsp+40h] [rbp+18h] BYREF

  v13 = 0LL;
  v4 = RmpActivityHostAllocateAndInitialize(0LL, 0LL, &v13);
  v5 = v13;
  v6 = v4;
  if ( v4 >= 0 )
  {
    *((_DWORD *)v13 + 10) = 0;
    v7 = (_OWORD *)((char *)v5 + 48);
    v8 = 4LL;
    v9 = a1;
    do
    {
      *v7 = *v9;
      v7[1] = v9[1];
      v7[2] = v9[2];
      v7[3] = v9[3];
      v7[4] = v9[4];
      v7[5] = v9[5];
      v7[6] = v9[6];
      v7 += 8;
      v10 = v9[7];
      v9 += 8;
      *(v7 - 1) = v10;
      --v8;
    }
    while ( v8 );
    *v7 = *v9;
    v7[1] = v9[1];
    *((_QWORD *)v7 + 4) = *((_QWORD *)v9 + 4);
    v11 = malloc(0x40uLL);
    if ( v11 )
    {
      *v11 = v11;
      v11[1] = v11;
      v11[2] = 0LL;
      v11[3] = v11 + 3;
      v11[4] = v11 + 3;
      v11[5] = 0LL;
      *((_DWORD *)v11 + 12) = 0;
      v11[7] = 0LL;
      *((_QWORD *)v5 + 75) = v11;
      v6 = RmpPsmAppFamilyTableAddActivityHost(v5);
      if ( v6 >= 0 )
      {
        RmpActivityHostCompleteInitialization(v5);
        *a2 = v5;
        v5 = 0LL;
        v6 = 0;
      }
    }
    else
    {
      v6 = -1073741801;
    }
  }
  if ( v5 )
  {
    RmpActivityHostCleanupTypeSpecificState(v5);
    RmpActivityHostAbortInitialization(v5);
  }
  return (unsigned int)v6;
}
