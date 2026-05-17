/*
 * XREFs of RtlGetDaclSecurityDescriptor @ 0x180076600
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800882F4 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlReplaceSidInSd @ 0x1800D7020 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetDaclSecurityDescriptor(__int64 a1, bool *a2, _QWORD *a3, bool *a4)
{
  bool v4; // zf
  __int64 v5; // rax

  if ( *(_BYTE *)a1 != 1 )
    return 3221225560LL;
  v4 = (*(_BYTE *)(a1 + 2) & 4) == 0;
  *a2 = (*(_BYTE *)(a1 + 2) & 4) != 0;
  if ( !v4 )
  {
    if ( (*(_BYTE *)(a1 + 2) & 4) != 0 )
    {
      if ( *(__int16 *)(a1 + 2) >= 0 )
      {
        v5 = *(_QWORD *)(a1 + 32);
      }
      else
      {
        v5 = 0LL;
        if ( *(_DWORD *)(a1 + 16) )
          v5 = a1 + *(unsigned int *)(a1 + 16);
      }
    }
    else
    {
      v5 = 0LL;
    }
    *a3 = v5;
    *a4 = (*(_BYTE *)(a1 + 2) & 8) != 0;
  }
  return 0LL;
}
