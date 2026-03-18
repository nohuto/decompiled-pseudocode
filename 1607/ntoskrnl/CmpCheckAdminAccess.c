/*
 * XREFs of CmpCheckAdminAccess @ 0x140600994
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x1404D91F4 (CmpVEExecuteCreateLogic.c)
 *     CmpVEPerformOpenAccessCheck @ 0x1404DB888 (CmpVEPerformOpenAccessCheck.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140600020 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     SeAccessCheckFromState @ 0x14000C510 (SeAccessCheckFromState.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpBuildAdminInformation @ 0x14060049C (CmpBuildAdminInformation.c)
 */

__int64 __fastcall CmpCheckAdminAccess(ACCESS_MASK DesiredAccess, PSECURITY_DESCRIPTOR SecurityDescriptor, bool *a3)
{
  int v6; // ebx
  bool v7; // si
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-38h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+58h] [rbp-30h] BYREF
  PTOKEN_ACCESS_INFORMATION PrimaryTokenInformation[2]; // [rsp+60h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+A8h] [rbp+20h] BYREF

  Privileges = 0LL;
  v6 = CmpBuildAdminInformation(PrimaryTokenInformation);
  if ( v6 >= 0 )
  {
    v7 = SeAccessCheckFromState(
           SecurityDescriptor,
           PrimaryTokenInformation[0],
           0LL,
           DesiredAccess,
           0,
           &Privileges,
           (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
           1,
           &GrantedAccess,
           &AccessStatus) != 0;
    if ( Privileges )
      ExFreePoolWithTag(Privileges, 0);
    ExFreePoolWithTag(PrimaryTokenInformation[0], 0);
    *a3 = v7;
  }
  return (unsigned int)v6;
}
