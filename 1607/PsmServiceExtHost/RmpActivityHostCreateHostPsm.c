/*
 * XREFs of RmpActivityHostCreateHostPsm @ 0x180005F08
 * Callers:
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@PEAPEAUIResourceSet@2@@Z @ 0x18000FCB0 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 * Callees:
 *     ?RmpActivityHostCleanupTypeSpecificState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004F3C (-RmpActivityHostCleanupTypeSpecificState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     RmpActivityHostAllocateAndInitialize @ 0x180005064 (RmpActivityHostAllocateAndInitialize.c)
 *     RmpPsmAppFamilyTableAddActivityHost @ 0x18000554C (RmpPsmAppFamilyTableAddActivityHost.c)
 *     RmpActivityHostCompleteInitialization @ 0x1800060A4 (RmpActivityHostCompleteInitialization.c)
 *     RmpSystemReferenceHostWithPsm @ 0x1800183AC (RmpSystemReferenceHostWithPsm.c)
 *     ??2@YAPEAX_K@Z @ 0x18001FB10 (--2@YAPEAX_K@Z.c)
 *     RmpActivityHostAbortInitialization @ 0x18002EBF0 (RmpActivityHostAbortInitialization.c)
 */

__int64 __fastcall RmpActivityHostCreateHostPsm(__int64 a1, __int64 a2, struct _RM_ACTIVITY_HOST **a3)
{
  _OWORD *v4; // rsi
  int v6; // eax
  struct _RM_ACTIVITY_HOST *v7; // rbx
  int v8; // edi
  __int64 v9; // rax
  _OWORD *v10; // rcx
  __int128 v11; // xmm1
  struct _RM_ACTIVITY_HOST **v12; // rax
  struct _RM_ACTIVITY_HOST *v14; // [rsp+68h] [rbp+10h] BYREF

  v14 = 0LL;
  v4 = (_OWORD *)a2;
  v6 = RmpActivityHostAllocateAndInitialize(a1, 0, 0LL, 0LL, (__int64 *)(a2 + 544), *(_DWORD *)(a2 + 532), &v14);
  v7 = v14;
  v8 = v6;
  if ( v6 >= 0 )
  {
    v9 = 4LL;
    v10 = (_OWORD *)((char *)v14 + 56);
    do
    {
      *v10 = *v4;
      v10[1] = v4[1];
      v10[2] = v4[2];
      v10[3] = v4[3];
      v10[4] = v4[4];
      v10[5] = v4[5];
      v10[6] = v4[6];
      v10 += 8;
      v11 = v4[7];
      v4 += 8;
      *(v10 - 1) = v11;
      --v9;
    }
    while ( v9 );
    *v10 = *v4;
    v10[1] = v4[1];
    *((_QWORD *)v10 + 4) = *((_QWORD *)v4 + 4);
    v12 = (struct _RM_ACTIVITY_HOST **)operator new(8uLL);
    if ( v12 )
    {
      *v12 = v7;
      *((_QWORD *)v7 + 76) = v12;
      v8 = RmpPsmAppFamilyTableAddActivityHost(v7);
      if ( v8 >= 0 )
      {
        if ( (*(_DWORD *)(a1 + 1840) & 0x100) != 0
          || (v8 = RmpSystemReferenceHostWithPsm(v7, (char *)v7 + 728), v8 >= 0) )
        {
          RmpActivityHostCompleteInitialization(v7);
          *a3 = v7;
          v7 = 0LL;
          v8 = 0;
        }
      }
    }
    else
    {
      v8 = -1073741801;
    }
  }
  if ( v7 )
  {
    RmpActivityHostCleanupTypeSpecificState((HANDLE *)v7);
    RmpActivityHostAbortInitialization(v7);
  }
  return (unsigned int)v8;
}
