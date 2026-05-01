/*
 * XREFs of ?Release@ResourcePolicyStoreProxy@ExecutionModel@@UEAAKXZ @ 0x180005C30
 * Callers:
 *     ?FreeResourcePolicyStoreClient@@YAXH@Z @ 0x180002A80 (-FreeResourcePolicyStoreClient@@YAXH@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180008208 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyStoreProxy::Release(ExecutionModel::ResourcePolicyStoreProxy *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
    operator delete(this);
  return v1;
}
