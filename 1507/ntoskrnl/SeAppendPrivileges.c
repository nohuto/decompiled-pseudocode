/*
 * XREFs of SeAppendPrivileges @ 0x14052D500
 * Callers:
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 *     ObpCreateHandle @ 0x140492D10 (ObpCreateHandle.c)
 *     CmpCheckKeyBodyAccess @ 0x1404C17F0 (CmpCheckKeyBodyAccess.c)
 *     ObpAdjustCreatorAccessState @ 0x1404D0C60 (ObpAdjustCreatorAccessState.c)
 *     ObCheckCreateObjectAccess @ 0x1404D0EC4 (ObCheckCreateObjectAccess.c)
 *     ObCheckObjectAccess @ 0x1404D3DC0 (ObCheckObjectAccess.c)
 *     ObpCheckTraverseAccess @ 0x1406ABF00 (ObpCheckTraverseAccess.c)
 *     CMFCheckAccess @ 0x1406FA4F4 (CMFCheckAccess.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SepConcatenatePrivileges @ 0x14052D564 (SepConcatenatePrivileges.c)
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
