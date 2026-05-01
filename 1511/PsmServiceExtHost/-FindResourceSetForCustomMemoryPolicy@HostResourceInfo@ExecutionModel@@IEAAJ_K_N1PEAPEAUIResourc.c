/*
 * XREFs of ?FindResourceSetForCustomMemoryPolicy@HostResourceInfo@ExecutionModel@@IEAAJ_K_N1PEAPEAUIResourceSet@2@@Z @ 0x18004DC5C
 * Callers:
 *     ?HostTrySetCustomMemoryLimit@HostResourceInfo@ExecutionModel@@QEAAJ_KPEAH@Z @ 0x18004DD50 (-HostTrySetCustomMemoryLimit@HostResourceInfo@ExecutionModel@@QEAAJ_KPEAH@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800077D4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?HasSponsorHost@ApplicationPackageInfo@ExecutionModel@@QEBA_NXZ @ 0x18001BA88 (-HasSponsorHost@ApplicationPackageInfo@ExecutionModel@@QEBA_NXZ.c)
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18001FF6C (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ExecutionModel::HostResourceInfo::FindResourceSetForCustomMemoryPolicy(
        ExecutionModel::HostResourceInfo *this,
        struct IUnknown *a2,
        __int64 a3,
        __int64 a4,
        struct ExecutionModel::IResourceSet **a5)
{
  struct ExecutionModel::IResourceSet **v5; // rsi
  unsigned int v6; // ebx
  struct IUnknown *v8; // r11
  struct IUnknown *j; // rax
  struct IUnknownVtbl *lpVtbl; // rcx
  char *v11; // rdi
  char *i; // rax
  struct IUnknown *v14; // [rsp+38h] [rbp+10h] BYREF

  v5 = a5;
  v6 = 0;
  v14 = 0LL;
  v8 = 0LL;
  *a5 = 0LL;
  if ( a2 )
  {
    if ( *((_QWORD *)this + 16) == 1LL )
    {
      v11 = (char *)this + 112;
      for ( i = (char *)*((_QWORD *)this + 14); i != v11; i = *(char **)i )
      {
        if ( (*(_BYTE *)(*((_QWORD *)i + 2) + 144LL) & 4) != 0 )
        {
          if ( !ExecutionModel::ApplicationPackageInfo::HasSponsorHost(*((ExecutionModel::ApplicationPackageInfo **)this
                                                                       + 3)) )
            break;
          if ( *(_QWORD *)(*(_QWORD *)v11 + 16LL) )
          {
            a2 = *(struct IUnknown **)(*(_QWORD *)v11 + 16LL);
LABEL_16:
            ATL::AtlComPtrAssign(&v14, a2);
            v8 = v14;
          }
LABEL_17:
          *v5 = (struct ExecutionModel::IResourceSet *)v8;
          v14 = 0LL;
          goto LABEL_19;
        }
      }
    }
  }
  else
  {
    a2 = (struct IUnknown *)((char *)this + 112);
    for ( j = (struct IUnknown *)*((_QWORD *)this + 14); j != a2; j = (struct IUnknown *)j->lpVtbl )
    {
      lpVtbl = j[2].lpVtbl;
      if ( *((struct IUnknownVtbl **)this + 26) == lpVtbl )
      {
        a2 = (struct IUnknown *)j[2].lpVtbl;
        if ( !lpVtbl )
          goto LABEL_17;
        goto LABEL_16;
      }
    }
  }
  v6 = -2147467259;
LABEL_19:
  ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(
    (ExecutionModel::ResourceSetImpl **)&v14,
    (unsigned int)a2);
  return v6;
}
