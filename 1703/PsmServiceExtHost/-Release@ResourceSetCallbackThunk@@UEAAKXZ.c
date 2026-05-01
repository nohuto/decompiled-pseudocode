/*
 * XREFs of ?Release@ResourceSetCallbackThunk@@UEAAKXZ @ 0x1800041B0
 * Callers:
 *     RmCoreRpcSrvAcquireResourceSet @ 0x180004030 (RmCoreRpcSrvAcquireResourceSet.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180013364 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180020994 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall ResourceSetCallbackThunk::Release(ResourceSetCallbackThunk *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
    operator delete(this);
  return v1;
}
