/*
 * XREFs of ?LsaCollisionResult@@YA_NW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z @ 0x180001A48
 * Callers:
 *     ?AddSidMappingToLsa@@YAJPEAU_UNICODE_STRING@@0PEAXPEAW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z @ 0x180001B0C (-AddSidMappingToLsa@@YAJPEAU_UNICODE_STRING@@0PEAXPEAW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z.c)
 *     ?MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ @ 0x180001C10 (-MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall LsaCollisionResult(int a1)
{
  return (unsigned int)(a1 - 2) <= 1;
}
