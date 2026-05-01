/*
 * XREFs of ?RecvCallback@ModernResourceEnforcer@@UEAAXW4RMExecServiceProviderCallbackType@2ExecutionModel@@PEAXJ@Z @ 0x180016420
 * Callers:
 *     ?WorkerThreadThunk@RMExecServicesProvider@ExecutionModel@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180009A90 (-WorkerThreadThunk@RMExecServicesProvider@ExecutionModel@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU.c)
 * Callees:
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000F8A0 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     ?HostStateNotification@ResourcePolicyEngine@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x180019570 (-HostStateNotification@ResourcePolicyEngine@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_.c)
 *     RmpFreeHeap @ 0x18001BBC0 (RmpFreeHeap.c)
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ModernResourceEnforcer::RecvCallback(__int64 a1, __int64 a2, unsigned int *a3)
{
  int v4; // ebp
  const struct _TlgProvider_t **v5; // r14
  const struct _TlgProvider_t *v6; // r15
  unsigned int v7; // edi
  unsigned int *v8; // r12
  unsigned __int64 *v9; // r13
  union _RM_SID *v10; // r8
  const wchar_t *v11; // r10
  unsigned int v12; // ecx
  unsigned int v13; // edx
  __int64 (__fastcall *v14)(const struct _TlgProvider_t *, const wchar_t *, union _RM_SID *, unsigned int, unsigned int *, unsigned __int64 *, unsigned int, unsigned int); // rsi
  unsigned int *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  _QWORD v18[3]; // [rsp+48h] [rbp-50h] BYREF

  v4 = 0;
  v5 = (const struct _TlgProvider_t **)v18;
  v18[0] = *(_QWORD *)(a1 + 56);
  v18[1] = *(_QWORD *)(a1 + 64);
  do
  {
    v6 = *v5;
    if ( *v5 )
    {
      if ( *a3 == 1 )
      {
        (*(void (__fastcall **)(const struct _TlgProvider_t *, _QWORD, unsigned int *, _QWORD, unsigned int, _QWORD))(*(_QWORD *)v6 + 24LL))(
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
          v8 = (unsigned int *)*((_QWORD *)a3 + 14);
          v9 = (unsigned __int64 *)*((_QWORD *)a3 + 15);
        }
        else
        {
          v8 = a3 + 28;
          v9 = (unsigned __int64 *)(a3 + 30);
        }
        v10 = (union _RM_SID *)(a3 + 10);
        v11 = (const wchar_t *)*((_QWORD *)a3 + 1);
        v12 = a3[33];
        v13 = a3[27];
        v14 = *(__int64 (__fastcall **)(const struct _TlgProvider_t *, const wchar_t *, union _RM_SID *, unsigned int, unsigned int *, unsigned __int64 *, unsigned int, unsigned int))(*(_QWORD *)v6 + 32LL);
        if ( (char *)v14 == (char *)ExecutionModel::ResourcePolicyEngine::HostStateNotification )
        {
          ExecutionModel::ResourcePolicyEngine::HostStateNotification(v6, v11, v10, v13, v8, v9, v7, v12);
        }
        else if ( v14 == ExecutionModel::ResourceManager::HostStateNotification )
        {
          ExecutionModel::ResourceManager::HostStateNotification(v6, v11, v10, v13, v8, v9, v7, v12);
        }
        else
        {
          v14(v6, *((const wchar_t **)a3 + 1), (union _RM_SID *)(a3 + 10), a3[27], v8, v9, v7, a3[33]);
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
