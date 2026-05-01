/*
 * XREFs of ?RecvCallback@HostResources@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@Z @ 0x180018250
 * Callers:
 *     ?WorkerThreadThunk@RMExecServicesProvider@ExecutionModel@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180017AF0 (-WorkerThreadThunk@RMExecServicesProvider@ExecutionModel@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU.c)
 * Callees:
 *     ?OnPackageStateChanged@AppEnergyUsageManager@@UEAAXPEAGKPEAU_SID@@W4RPPackageState@@@Z @ 0x1800192C0 (-OnPackageStateChanged@AppEnergyUsageManager@@UEAAXPEAGKPEAU_SID@@W4RPPackageState@@@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::HostResources::RecvCallback(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rdi
  unsigned int v5; // r14d
  __int64 v6; // r15
  void (__fastcall *v7)(__int64, __int64, _QWORD, _QWORD, _DWORD); // r12
  char *v8; // rdx
  unsigned __int64 v9; // rcx
  char *v10; // rax

  v3 = *(_QWORD *)(a1 + 96);
  v5 = a3[10];
  v6 = *(_QWORD *)a3;
  v7 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v3 + 24LL);
  if ( (char *)v7 == (char *)AppEnergyUsageManager::OnPackageStateChanged )
    AppEnergyUsageManager::OnPackageStateChanged(v3, v6, v5, *((_QWORD *)a3 + 4), a3[11]);
  else
    v7(v3, v6, v5, *((_QWORD *)a3 + 4), a3[11]);
  v8 = *(char **)a3;
  v9 = -1LL;
  do
    ++v9;
  while ( *(_WORD *)&v8[2 * v9] );
  if ( v8 == (char *)(a3 + 4) )
    v10 = (char *)a3 + 30;
  else
    v10 = (char *)*((_QWORD *)a3 + 2);
  if ( v9 > (v10 - v8) >> 1 )
    __int2c();
  *((_QWORD *)a3 + 1) = &v8[2 * v9];
  return tlx::_delete<ExecutionModel::HostResources::HostResourcesWorkItem>(a3);
}
