/*
 * XREFs of RtlGetOwnerSecurityDescriptor @ 0x18006F790
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x18007FA84 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800BB3F0 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlReplaceSidInSd @ 0x1800CEA20 (RtlReplaceSidInSd.c)
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
