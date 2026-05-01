/*
 * XREFs of ?SetCallback@ResourceEnforcer@ExecutionModel@@UEAAXPEAU_RM_SERVICE_GLOBALS@@PEAUIResourceEnforcerCallback@@@Z @ 0x180003A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ExecutionModel::ResourceEnforcer::SetCallback(
        ExecutionModel::ResourceEnforcer *this,
        struct _RM_SERVICE_GLOBALS *a2,
        struct IResourceEnforcerCallback *a3)
{
  __int128 v3; // [rsp+0h] [rbp-18h]

  *((_QWORD *)&v3 + 1) = a3;
  *(_QWORD *)&v3 = ExecutionModel::ResourceEnforcerCallback;
  *(_OWORD *)((char *)a2 + 56) = v3;
}
