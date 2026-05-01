/*
 * XREFs of ?RecvCallback@ModernResourceEnforcer@@UEAAXW4RMExecServiceProviderCallbackType@2ExecutionModel@@PEAXJ@Z @ 0x18000B210
 * Callers:
 *     ?WorkerThreadThunk@RMExecServicesProvider@ExecutionModel@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180017AF0 (-WorkerThreadThunk@RMExecServicesProvider@ExecutionModel@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU.c)
 * Callees:
 *     RmpFreeHeap @ 0x18000A4A4 (RmpFreeHeap.c)
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x1800115F0 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     ?HostStateNotification@ResourcePolicyEngine@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x180017620 (-HostStateNotification@ResourcePolicyEngine@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ModernResourceEnforcer::RecvCallback(__int64 a1, __int64 a2, unsigned int *a3)
{
  int v4; // ebp
  _QWORD *v5; // r14
  __int64 v6; // r15
  unsigned int v7; // edi
  char *v8; // r12
  char *v9; // r13
  char *v10; // r8
  __int64 v11; // r10
  unsigned int v12; // ecx
  unsigned int v13; // edx
  void (__fastcall *v14)(__int64, _QWORD, unsigned int *, _QWORD, char *, char *, unsigned int, unsigned int); // rsi
  unsigned int *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  _QWORD v18[3]; // [rsp+48h] [rbp-50h] BYREF

  v4 = 0;
  v5 = v18;
  v18[0] = *(_QWORD *)(a1 + 56);
  v18[1] = *(_QWORD *)(a1 + 64);
  do
  {
    v6 = *v5;
    if ( *v5 )
    {
      if ( *a3 == 1 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, unsigned int *, _QWORD, unsigned int, _QWORD))(*(_QWORD *)v6 + 24LL))(
          *v5,
          *((_QWORD *)a3 + 1),
          a3 + 10,
          a3[27],
          a3[28],
          *((_QWORD *)a3 + 15));
      }
      else if ( *a3 == 2 )
      {
        v7 = a3[32];
        if ( v7 > 1 )
        {
          v8 = (char *)*((_QWORD *)a3 + 14);
          v9 = (char *)*((_QWORD *)a3 + 15);
        }
        else
        {
          v8 = (char *)(a3 + 28);
          v9 = (char *)(a3 + 30);
        }
        v10 = (char *)(a3 + 10);
        v11 = *((_QWORD *)a3 + 1);
        v12 = a3[33];
        v13 = a3[27];
        v14 = *(void (__fastcall **)(__int64, _QWORD, unsigned int *, _QWORD, char *, char *, unsigned int, unsigned int))(*(_QWORD *)v6 + 32LL);
        if ( (char *)v14 == (char *)ExecutionModel::ResourcePolicyEngine::HostStateNotification )
        {
          ExecutionModel::ResourcePolicyEngine::HostStateNotification(v6, v11, v10, v13, v8, v9, v7, v12);
        }
        else if ( (char *)v14 == (char *)ExecutionModel::ResourceManager::HostStateNotification )
        {
          ExecutionModel::ResourceManager::HostStateNotification(v6, v11, v10, v13, v8, v9, v7, v12);
        }
        else
        {
          v14(v6, *((_QWORD *)a3 + 1), a3 + 10, a3[27], v8, v9, v7, a3[33]);
        }
      }
    }
    ++v4;
    ++v5;
  }
  while ( (unsigned __int64)v4 < 2 );
  if ( a3 )
  {
    if ( a3[32] > 1 )
    {
      v16 = (void *)*((_QWORD *)a3 + 14);
      if ( v16 )
        RmpFreeHeap(v16);
      v17 = (void *)*((_QWORD *)a3 + 15);
      if ( v17 )
        RmpFreeHeap(v17);
    }
    v15 = (unsigned int *)*((_QWORD *)a3 + 1);
    if ( v15 != a3 + 6 )
      operator delete(v15);
    operator delete(a3);
  }
}
