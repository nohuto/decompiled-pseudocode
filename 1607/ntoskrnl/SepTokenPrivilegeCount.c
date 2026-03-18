/*
 * XREFs of SepTokenPrivilegeCount @ 0x14000EB70
 * Callers:
 *     NtQueryInformationToken @ 0x14040F810 (NtQueryInformationToken.c)
 *     SeQueryInformationToken @ 0x140439FF0 (SeQueryInformationToken.c)
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x14047CA94 (SepRemoveDisabledGroupsAndPrivileges.c)
 *     SepGetTokenAccessInformationBufferSize @ 0x1404A09D0 (SepGetTokenAccessInformationBufferSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepTokenPrivilegeCount(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx

  v1 = *(_QWORD *)(a1 + 64);
  result = 0LL;
  v3 = 1LL;
  v4 = 37LL;
  do
  {
    if ( (v1 & v3) != 0 )
      result = (unsigned int)(result + 1);
    v3 = __ROL8__(v3, 1);
    --v4;
  }
  while ( v4 );
  return result;
}
