/*
 * XREFs of ?CreateResourceManagerClientProxyInternal@@YAJPEBGHPEAUIRMExecServicesProvider@ExecutionModel@@PEAPEAUIResourceManager@2@@Z @ 0x1800086FC
 * Callers:
 *     ?CreateResourceManagerClientProxyInternal@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z @ 0x180008780 (-CreateResourceManagerClientProxyInternal@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z.c)
 * Callees:
 *     ?Init@ResourceManagerClientProxy@@IEAAJPEBGHPEAUIRMExecServicesProvider@ExecutionModel@@@Z @ 0x180007CB8 (-Init@ResourceManagerClientProxy@@IEAAJPEBGHPEAUIRMExecServicesProvider@ExecutionModel@@@Z.c)
 *     ??0ResourceManagerClientProxy@@IEAA@XZ @ 0x180007DDC (--0ResourceManagerClientProxy@@IEAA@XZ.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 */

__int64 __fastcall CreateResourceManagerClientProxyInternal(
        const unsigned __int16 *a1,
        __int64 a2,
        struct IUnknown *a3,
        struct IResourceManager **a4)
{
  ResourceManagerClientProxy *v6; // rax
  const unsigned __int16 *v7; // rdx
  __int64 v8; // r8
  ResourceManagerClientProxy *v9; // rdi
  int v10; // esi

  if ( a4 )
  {
    v6 = (ResourceManagerClientProxy *)malloc(0x5310uLL);
    if ( v6 )
      v9 = ResourceManagerClientProxy::ResourceManagerClientProxy(v6);
    else
      v9 = 0LL;
    if ( v9 )
    {
      v10 = ResourceManagerClientProxy::Init(v9, v7, v8, a3);
      if ( v10 >= 0 )
      {
        *a4 = (struct IResourceManager *)v9;
        v9 = 0LL;
      }
      if ( v9 )
        (*(void (__fastcall **)(ResourceManagerClientProxy *, __int64))(*(_QWORD *)v9 + 312LL))(v9, 1LL);
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v10;
}
