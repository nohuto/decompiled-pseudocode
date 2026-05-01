/*
 * XREFs of ?CreateTerminalResourceSet@ResourceSetProxy@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z @ 0x180002960
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateInstance@ResourceSetProxy@ExecutionModel@@SAJPEAXPEAVResourcePolicyEngineProxy@2@PEAPEAV12@@Z @ 0x1800029EC (-CreateInstance@ResourceSetProxy@ExecutionModel@@SAJPEAXPEAVResourcePolicyEngineProxy@2@PEAPEAV1.c)
 *     ??$RpcCall@P6AJPEAX_KPEA_K@ZPEAX_KPEA_K@Shared@DevPlat@@YAJP6AJPEAX_KPEA_K@Z012@Z @ 0x180002A78 (--$RpcCall@P6AJPEAX_KPEA_K@ZPEAX_KPEA_K@Shared@DevPlat@@YAJP6AJPEAX_KPEA_K@Z012@Z.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 *     ?Init@ResourceSetProxy@ExecutionModel@@QEAAJ_KW4RmResourceSetType@@PEAUIResourceSetCallback@2@@Z @ 0x18000BF64 (-Init@ResourceSetProxy@ExecutionModel@@QEAAJ_KW4RmResourceSetType@@PEAUIResourceSetCallback@2@@Z.c)
 *     ?AddProxyResourceSet@ResourcePolicyEngineProxy@ExecutionModel@@QEAAJ_KPEAVResourceSetProxy@2@@Z @ 0x18000BFA0 (-AddProxyResourceSet@ResourcePolicyEngineProxy@ExecutionModel@@QEAAJ_KPEAVResourceSetProxy@2@@Z.c)
 *     ?Attach@?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAAXPEAUIResourceSet@ExecutionModel@@@Z @ 0x18000C384 (-Attach@-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAAXPEAUIResourceSet@ExecutionModel@@.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetProxy::CreateTerminalResourceSet(
        ExecutionModel::ResourceSetProxy *this,
        struct ExecutionModel::IResourceSet **a2)
{
  __int64 v2; // rbp
  struct ExecutionModel::ResourceSetProxy *v3; // rbx
  unsigned int v4; // r15d
  __int64 v6; // rsi
  __int64 v7; // rcx
  int v8; // esi
  struct ExecutionModel::IResourceSet *v10; // rax
  unsigned __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  struct ExecutionModel::ResourceSetProxy *v12; // [rsp+58h] [rbp+10h] BYREF
  struct ExecutionModel::ResourceSetProxy *v13; // [rsp+60h] [rbp+18h] BYREF

  v2 = *((_QWORD *)this + 6);
  v3 = 0LL;
  v4 = *((_DWORD *)this + 8);
  v6 = *((_QWORD *)this + 3);
  v12 = 0LL;
  v11 = 0LL;
  v13 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)(v2 + 144));
  *a2 = 0LL;
  v8 = DevPlat::Shared::RpcCall<long (*)(void *,unsigned __int64,unsigned __int64 *),void *,unsigned __int64,unsigned __int64 *>(
         v7,
         *(_QWORD *)(v2 + 16),
         v6,
         &v11);
  if ( v8 >= 0 )
  {
    v8 = ExecutionModel::ResourceSetProxy::CreateInstance(
           *(void **)(v2 + 16),
           (struct ExecutionModel::ResourcePolicyEngineProxy *)v2,
           &v12);
    if ( v8 >= 0 )
    {
      ATL::CComPtrBase<ExecutionModel::IResourceSet>::Attach(&v13, v12);
      v3 = v13;
      v8 = ExecutionModel::ResourceSetProxy::Init(v13, v11, v4, 0LL);
      if ( v8 >= 0 )
      {
        v8 = ExecutionModel::ResourcePolicyEngineProxy::AddProxyResourceSet(
               (ExecutionModel::ResourcePolicyEngineProxy *)v2,
               v11,
               v3);
        if ( v8 >= 0 )
        {
          v10 = v3;
          v3 = 0LL;
          *a2 = v10;
        }
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(v2 + 144));
  if ( v3 )
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSetProxy *))(*(_QWORD *)v3 + 16LL))(v3);
  return (unsigned int)v8;
}
