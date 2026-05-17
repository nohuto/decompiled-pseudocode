/*
 * XREFs of RtlGetSaclSecurityDescriptor @ 0x18007D6E0
 * Callers:
 *     RtlReplaceSidInSd @ 0x1800DF950 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetSaclSecurityDescriptor(__int64 a1, bool *a2, _QWORD *a3, bool *a4)
{
  bool v4; // zf
  __int64 v5; // rax

  if ( *(_BYTE *)a1 != 1 )
    return 3221225560LL;
  v4 = (*(_BYTE *)(a1 + 2) & 0x10) == 0;
  *a2 = (*(_BYTE *)(a1 + 2) & 0x10) != 0;
  if ( !v4 )
  {
    if ( (*(_BYTE *)(a1 + 2) & 0x10) != 0 )
    {
      if ( *(__int16 *)(a1 + 2) >= 0 )
      {
        v5 = *(_QWORD *)(a1 + 24);
      }
      else
      {
        v5 = 0LL;
        if ( *(_DWORD *)(a1 + 12) )
          v5 = a1 + *(unsigned int *)(a1 + 12);
      }
    }
    else
    {
      v5 = 0LL;
    }
    *a3 = v5;
    *a4 = (*(_BYTE *)(a1 + 2) & 0x20) != 0;
  }
  return 0LL;
}
