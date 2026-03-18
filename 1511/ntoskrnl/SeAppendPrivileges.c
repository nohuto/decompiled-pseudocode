/*
 * XREFs of SeAppendPrivileges @ 0x1404A3E30
 * Callers:
 *     IopCreateSecurityCheck @ 0x1400EA430 (IopCreateSecurityCheck.c)
 *     CmpCheckKeyBodyAccess @ 0x1404033B0 (CmpCheckKeyBodyAccess.c)
 *     ObpCreateHandle @ 0x14040CFA0 (ObpCreateHandle.c)
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 *     ObCheckCreateObjectAccess @ 0x14046E3E0 (ObCheckCreateObjectAccess.c)
 *     ObCheckObjectAccess @ 0x140470650 (ObCheckObjectAccess.c)
 *     ObpAdjustCreatorAccessState @ 0x1404A95A0 (ObpAdjustCreatorAccessState.c)
 *     ObpCheckTraverseAccess @ 0x14062E1F0 (ObpCheckTraverseAccess.c)
 *     CMFCheckAccess @ 0x140675D24 (CMFCheckAccess.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SepConcatenatePrivileges @ 0x1404A3E94 (SepConcatenatePrivileges.c)
 */

NTSTATUS __stdcall SeAppendPrivileges(PACCESS_STATE AccessState, PPRIVILEGE_SET Privileges)
{
  PVOID *AuxData; // rdi
  ULONG PrivilegeCount; // r8d
  int v6; // r10d
  unsigned int v8; // ebx
  int v9; // edx
  int v10; // ecx
  PVOID PoolWithTag; // rsi
  _DWORD *v12; // rdx
  __int64 v13; // rdx

  AuxData = (PVOID *)AccessState->AuxData;
  PrivilegeCount = Privileges->PrivilegeCount;
  v6 = *(_DWORD *)*AuxData;
  if ( Privileges->PrivilegeCount + v6 <= 3 )
  {
    SepConcatenatePrivileges(*AuxData, Privileges, Privileges);
    return 0;
  }
  v8 = 8;
  if ( PrivilegeCount )
    v9 = 12 * (PrivilegeCount - 1) + 20;
  else
    v9 = 8;
  if ( *AuxData )
  {
    if ( v6 )
      v10 = 12 * (v6 - 1) + 20;
    else
      v10 = 8;
  }
  else
  {
    v10 = 0;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v10 + v9), 0x72506553u);
  if ( PoolWithTag )
  {
    v12 = *AuxData;
    if ( *AuxData )
    {
      if ( *v12 )
        v8 = 12 * (*v12 - 1) + 20;
    }
    else
    {
      v8 = 0;
    }
    memmove(PoolWithTag, v12, v8);
    SepConcatenatePrivileges(PoolWithTag, v13, Privileges);
    if ( AccessState->PrivilegesAllocated )
      ExFreePoolWithTag(*AuxData, 0);
    *AuxData = PoolWithTag;
    AccessState->PrivilegesAllocated = 1;
    return 0;
  }
  return -1073741670;
}
