/*
 * XREFs of ?CreateTerminalResourceSet@ResourceSetClientProxy@@UEBAJPEAPEAUIResourceSet@ExecutionModel@@@Z @ 0x1800139D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 *     ??0ResourceSetClientProxy@@QEAA@PEAXPEAVResourceManagerClientProxy@@@Z @ 0x1800123C0 (--0ResourceSetClientProxy@@QEAA@PEAXPEAVResourceManagerClientProxy@@@Z.c)
 *     ?AddProxyResourceSet@ResourceManagerClientProxy@@QEAAJKPEAVResourceSetClientProxy@@@Z @ 0x180013570 (-AddProxyResourceSet@ResourceManagerClientProxy@@QEAAJKPEAVResourceSetClientProxy@@@Z.c)
 *     ?Init@ResourceSetClientProxy@@QEAAJKW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallback@4@@Z @ 0x180014078 (-Init@ResourceSetClientProxy@@QEAAJKW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallb.c)
 */

__int64 __fastcall ResourceSetClientProxy::CreateTerminalResourceSet(
        ResourceSetClientProxy *this,
        struct ExecutionModel::IResourceSet **a2)
{
  ResourceSetClientProxy *v4; // rax
  struct ResourceSetClientProxy *v5; // rsi
  int Pointer; // ebx
  unsigned int v8; // [rsp+80h] [rbp+18h] BYREF
  struct ResourceSetClientProxy *v9; // [rsp+88h] [rbp+20h]

  v8 = 0;
  *a2 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 6) + 21184LL));
  v4 = (ResourceSetClientProxy *)malloc(0x60uLL);
  if ( v4 )
  {
    v5 = ResourceSetClientProxy::ResourceSetClientProxy(
           v4,
           *((void **)this + 2),
           *((struct ResourceManagerClientProxy **)this + 6));
    v9 = v5;
  }
  else
  {
    v5 = 0LL;
    v9 = 0LL;
  }
  if ( v5 )
  {
    Pointer = (unsigned int)NdrClientCall3(
                              (MIDL_STUBLESS_PROXY_INFO *)&stru_1800176B0,
                              0x10u,
                              0LL,
                              *((_QWORD *)this + 2),
                              *((_DWORD *)this + 6),
                              &v8).Pointer;
    if ( Pointer >= 0 )
    {
      Pointer = ResourceSetClientProxy::Init(v5, v8, *((unsigned int *)this + 7), 0LL);
      if ( Pointer >= 0 )
      {
        Pointer = ResourceManagerClientProxy::AddProxyResourceSet(*((ResourceManagerClientProxy **)this + 6), v8, v5);
        if ( Pointer >= 0 )
          *a2 = v5;
      }
    }
  }
  else
  {
    Pointer = -2147024882;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 6) + 21184LL));
  if ( Pointer < 0 && v5 )
    (*(void (__fastcall **)(struct ResourceSetClientProxy *))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)Pointer;
}
