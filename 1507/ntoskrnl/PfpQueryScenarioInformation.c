/*
 * XREFs of PfpQueryScenarioInformation @ 0x140568774
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140431980 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     PfpScenCtxQueryScenarioInformation @ 0x1403EF9D0 (PfpScenCtxQueryScenarioInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PfpQueryScenarioInformation(__int64 a1, char a2, _DWORD *a3, __int64 a4)
{
  unsigned int v7; // ebx
  __int128 *v8; // rax
  ULONG64 v9; // rcx
  _OWORD *v10; // rax
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int128 v13; // [rsp+30h] [rbp-18h]

  if ( *(_DWORD *)(a1 + 24) == 32 )
  {
    v7 = 0;
    if ( a2 && (*(_QWORD *)(a1 + 16) & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = *(__int128 **)(a1 + 16);
    v12 = *v8;
    v13 = v8[1];
    if ( (_DWORD)v12 == 4 )
    {
      PfpScenCtxQueryScenarioInformation((ULONG_PTR)qword_1403534D0, (__int64)&v12, (__int64)a3, a4);
      if ( a2 )
      {
        v9 = *(_QWORD *)(a1 + 16);
        if ( (v9 & 7) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v9 >= MmUserProbeAddress )
          v9 = MmUserProbeAddress;
        *(_BYTE *)v9 = *(_BYTE *)v9;
        *(_BYTE *)(v9 + 31) = *(_BYTE *)(v9 + 31);
      }
      v10 = *(_OWORD **)(a1 + 16);
      *v10 = v12;
      v10[1] = v13;
      *a3 = 32;
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741306;
  }
  return v7;
}
