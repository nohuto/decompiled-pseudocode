/*
 * XREFs of ?CreateRMExecServicesProvider@ExecutionModel@@YAJPEAPEAUIRMExecServicesProvider@1@@Z @ 0x180007FEC
 * Callers:
 *     ?CreateResourceManagerClientProxyInternal@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z @ 0x180008780 (-CreateResourceManagerClientProxyInternal@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z.c)
 * Callees:
 *     ?Init@RMExecServicesProvider@ExecutionModel@@AEAAJXZ @ 0x1800080E4 (-Init@RMExecServicesProvider@ExecutionModel@@AEAAJXZ.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::CreateRMExecServicesProvider(
        ExecutionModel *this,
        struct ExecutionModel::IRMExecServicesProvider **a2)
{
  ExecutionModel::RMExecServicesProvider *v3; // rax
  ExecutionModel::RMExecServicesProvider *v4; // rdi
  ExecutionModel::RMExecServicesProvider *v5; // rbx
  int v6; // esi

  v3 = (ExecutionModel::RMExecServicesProvider *)malloc(0x78uLL);
  v4 = v3;
  if ( v3 )
  {
    *((_QWORD *)v3 + 2) = 0LL;
    *((_DWORD *)v3 + 2) = 1;
    *(_QWORD *)v3 = &ExecutionModel::RMExecServicesProvider::`vftable';
    *((_WORD *)v3 + 12) = 0;
    *((_QWORD *)v3 + 9) = (char *)v3 + 72;
    *((_QWORD *)v3 + 10) = (char *)v3 + 72;
    *((_QWORD *)v3 + 11) = 0LL;
    *((_QWORD *)v3 + 12) = (char *)v3 + 96;
    *((_QWORD *)v3 + 13) = (char *)v3 + 96;
    *((_QWORD *)v3 + 14) = 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  v5 = v4;
  if ( v4 )
  {
    v6 = ExecutionModel::RMExecServicesProvider::Init(v4);
    if ( v6 >= 0 )
    {
      v5 = 0LL;
      *(_QWORD *)this = v4;
      v6 = 0;
    }
  }
  else
  {
    v6 = -2147024882;
  }
  if ( v5 )
    (*(void (__fastcall **)(ExecutionModel::RMExecServicesProvider *))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)v6;
}
