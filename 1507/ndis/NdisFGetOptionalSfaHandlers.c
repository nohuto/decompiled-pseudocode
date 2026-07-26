/*
 * XREFs of NdisFGetOptionalSfaHandlers @ 0x1C0052D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisFGetOptionalSfaHandlers(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rax
  unsigned __int8 v5; // r10
  _QWORD *v6; // rcx

  v3 = 0;
  *a2 = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_BYTE *)(v4 + 100);
  if ( v5 <= 6u && (v5 != 6 || *(_BYTE *)(v4 + 101) < 0x32u) )
    return (unsigned int)-1073741637;
  v6 = *(_QWORD **)(*(_QWORD *)(a1 + 32) + 3816LL);
  if ( *(_WORD *)(a3 + 2) < 0x48u || *(_BYTE *)a3 != 0xBD || *(_BYTE *)(a3 + 1) != 1 )
    return (unsigned int)-1073741811;
  if ( v6[146] )
  {
    *a2 = v6[143];
    *(_QWORD *)(a3 + 8) = v6[143];
    *(_QWORD *)(a3 + 16) = v6[144];
    *(_QWORD *)(a3 + 24) = v6[145];
    *(_QWORD *)(a3 + 32) = v6[146];
    *(_QWORD *)(a3 + 40) = v6[147];
    *(_QWORD *)(a3 + 48) = v6[148];
    *(_QWORD *)(a3 + 56) = v6[149];
    *(_QWORD *)(a3 + 64) = v6[150];
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v3;
}
