/*
 * XREFs of ?CreateResourceManagerClientProxyInternal@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z @ 0x180004D5C
 * Callers:
 *     ?CreateResourceManagerClientProxy@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z @ 0x180004D50 (-CreateResourceManagerClientProxy@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z.c)
 * Callees:
 *     ??0ResourceManagerClientProxy@@IEAA@XZ @ 0x180004DEC (--0ResourceManagerClientProxy@@IEAA@XZ.c)
 *     ?Init@ResourceManagerClientProxy@@IEAAJPEBGH@Z @ 0x180004EB8 (-Init@ResourceManagerClientProxy@@IEAAJPEBGH@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180006558 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180006710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateResourceManagerClientProxyInternal(struct IResourceManager **a1)
{
  ResourceManagerClientProxy *v2; // rax
  const unsigned __int16 *v3; // rdx
  int v4; // r8d
  ResourceManagerClientProxy *v5; // rdi
  int v6; // ebx

  if ( a1 )
  {
    v2 = (ResourceManagerClientProxy *)operator new(0x5648uLL);
    if ( v2 )
      v5 = ResourceManagerClientProxy::ResourceManagerClientProxy(v2);
    else
      v5 = 0LL;
    if ( v5 )
    {
      v6 = ResourceManagerClientProxy::Init(v5, v3, v4);
      if ( v6 >= 0 )
      {
        *a1 = (struct IResourceManager *)v5;
        v5 = 0LL;
      }
      if ( v5 )
        (*(void (__fastcall **)(ResourceManagerClientProxy *, __int64))(*(_QWORD *)v5 + 120LL))(v5, 1LL);
      if ( v6 >= 0 )
        return 0;
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
  return (unsigned int)v6;
}
