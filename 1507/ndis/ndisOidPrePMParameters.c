/*
 * XREFs of ndisOidPrePMParameters @ 0x1C00AC8B0
 * Callers:
 *     <none>
 * Callees:
 *     ndisPreSetPMParameters @ 0x1C00AC91C (ndisPreSetPMParameters.c)
 *     ndisPreQueryPMParameters @ 0x1C00CAB00 (ndisPreQueryPMParameters.c)
 */

char __fastcall ndisOidPrePMParameters(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r9
  __int64 v4; // r8
  char PMParameters; // al
  __int64 v7; // r8
  unsigned __int8 v8; // al
  __int64 v9; // rax
  unsigned __int8 v10; // r8

  v2 = *(_QWORD *)(a1 + 24);
  LOBYTE(a2) = 1;
  v3 = *(_QWORD *)(a1 + 32);
  if ( (!v2 || (v7 = *(_QWORD *)(v2 + 24), v8 = *(_BYTE *)(v7 + 56), v8 > 6u) || v8 == 6 && *(_BYTE *)(v7 + 57) >= 0x14u)
    && ((v4 = *(_QWORD *)(a1 + 8)) == 0
     || (*(_DWORD *)(v3 + 88) & 0x4000) != 0
     || (v9 = *(_QWORD *)(v4 + 16), v10 = *(_BYTE *)(v9 + 100), v10 > 6u)
     || v10 == 6 && *(_BYTE *)(v9 + 101) >= 0x14u) )
  {
    if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
      PMParameters = ndisPreSetPMParameters(a1, a2);
    else
      PMParameters = ndisPreQueryPMParameters(a1, a2);
    LOBYTE(a2) = PMParameters;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
  return a2;
}
