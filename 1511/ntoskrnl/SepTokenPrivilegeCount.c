/*
 * XREFs of SepTokenPrivilegeCount @ 0x140004C10
 * Callers:
 *     SepGetTokenAccessInformationBufferSize @ 0x1403C1EE0 (SepGetTokenAccessInformationBufferSize.c)
 *     SeQueryInformationToken @ 0x1403FE580 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140431390 (NtQueryInformationToken.c)
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x1404B49E0 (SepRemoveDisabledGroupsAndPrivileges.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepTokenPrivilegeCount(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rcx

  v1 = *(_QWORD *)(a1 + 64);
  result = 0LL;
  v3 = 1LL;
  v4 = 18LL;
  do
  {
    if ( (v1 & v3) != 0 )
      result = (unsigned int)(result + 1);
    v5 = __ROL8__(v3, 1);
    if ( (v1 & v5) != 0 )
      result = (unsigned int)(result + 1);
    v3 = __ROL8__(v5, 1);
    --v4;
  }
  while ( v4 );
  return result;
}
