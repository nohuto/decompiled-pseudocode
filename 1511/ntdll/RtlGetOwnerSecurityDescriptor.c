/*
 * XREFs of RtlGetOwnerSecurityDescriptor @ 0x18007AF00
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800882F4 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800C8110 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlReplaceSidInSd @ 0x1800D7020 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetOwnerSecurityDescriptor(__int64 a1, _QWORD *a2, _BYTE *a3)
{
  __int64 v3; // rax

  if ( *(_BYTE *)a1 != 1 )
    return 3221225560LL;
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v3 = *(_QWORD *)(a1 + 8);
  }
  else
  {
    v3 = 0LL;
    if ( *(_DWORD *)(a1 + 4) )
      v3 = a1 + *(unsigned int *)(a1 + 4);
  }
  *a2 = v3;
  *a3 = *(_BYTE *)(a1 + 2) & 1;
  return 0LL;
}
