/*
 * XREFs of ?Release@ResourceSetServerProxy@@UEAAKXZ @ 0x18003A670
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18001FF6C (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall ResourceSetServerProxy::Release(ResourceSetServerProxy *this, unsigned int a2)
{
  unsigned __int32 v3; // edi

  v3 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( !v3 && this )
  {
    ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(
      (ExecutionModel::ResourceSetImpl **)this + 1,
      a2);
    operator delete(this);
  }
  return v3;
}
