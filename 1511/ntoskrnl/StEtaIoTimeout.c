/*
 * XREFs of StEtaIoTimeout @ 0x140207B74
 * Callers:
 *     ?StNpLeafPageIn@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z @ 0x140206DC4 (-StNpLeafPageIn@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z.c)
 *     SmWdDPC @ 0x14020932C (SmWdDPC.c)
 *     SmWdProcessStore @ 0x140209578 (SmWdProcessStore.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall StEtaIoTimeout(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v6; // rcx
  LONGLONG v7; // r8
  unsigned __int64 result; // rax
  bool v9; // zf
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  KeQueryPerformanceCounter(&PerformanceFrequency);
  v6 = *(_QWORD *)(a1 + 16);
  v7 = PerformanceFrequency.QuadPart * (unsigned int)(a4 / 0xA);
  while ( 1 )
  {
    result = *(_QWORD *)(v6 + 8);
    if ( v7 / 1000000 > result )
      result = v7 / 1000000;
    v9 = *(_DWORD *)v6 == -1;
    *(_QWORD *)(v6 + 8) = result;
    if ( v9 )
      break;
    v6 += 32LL;
  }
  return result;
}
