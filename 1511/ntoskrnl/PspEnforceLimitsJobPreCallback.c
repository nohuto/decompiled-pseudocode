/*
 * XREFs of PspEnforceLimitsJobPreCallback @ 0x1403EBA78
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     PspQueryRateControlHistory @ 0x1403EBB78 (PspQueryRateControlHistory.c)
 */

__int64 __fastcall PspEnforceLimitsJobPreCallback(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // edi
  int v6; // r12d
  int v7; // r15d
  __int64 v8; // r14
  __int64 v9; // rax
  int v10; // ebp

  v2 = 0;
  *(_DWORD *)(a1 + 1200) = PspEnforcementSequenceNumber;
  if ( (*(_DWORD *)(a1 + 856) & 6) != 0 || *(_DWORD *)(a1 + 876) || (*(_DWORD *)(a1 + 1296) & 0x800) != 0 )
  {
    v6 = (_DWORD)a2 + 44;
    *a2 = *(_QWORD *)(a1 + 784);
    v7 = 0;
    v8 = 60LL;
    a2[1] = *(_QWORD *)(a1 + 824);
    a2[2] = 0LL;
    do
    {
      v9 = *(_QWORD *)(a1 + 976);
      if ( !v9 || (v10 = *(_DWORD *)(v8 + v9)) == 0 )
        v10 = 1;
      PspQueryRateControlHistory(a1, v10, 0, v6, v7);
      *(_DWORD *)((char *)a2 + v8 - 28) = v10;
      ++v7;
      v8 += 4LL;
      v6 += 4;
    }
    while ( v7 < 3 );
  }
  else
  {
    memset((void *)(a1 + 1112), 0, 0x50uLL);
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1296), 0xFFBFFFFF);
    return (unsigned int)-1073741536;
  }
  return v2;
}
