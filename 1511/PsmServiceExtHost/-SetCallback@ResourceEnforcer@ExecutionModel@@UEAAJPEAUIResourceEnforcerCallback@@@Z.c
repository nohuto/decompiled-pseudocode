/*
 * XREFs of ?SetCallback@ResourceEnforcer@ExecutionModel@@UEAAJPEAUIResourceEnforcerCallback@@@Z @ 0x180020820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourceEnforcer::SetCallback(
        ExecutionModel::ResourceEnforcer *this,
        struct IResourceEnforcerCallback *a2)
{
  __int128 v3; // [rsp+0h] [rbp-18h]

  *((_QWORD *)&v3 + 1) = a2;
  *(_QWORD *)&v3 = ExecutionModel::ResourceEnforcerCallback;
  *((_OWORD *)RmSvcGlobals + 4) = v3;
  return 0LL;
}
