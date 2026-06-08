/*
 * XREFs of PerfControlCpcHidden @ 0x1C0002CF0
 * Callers:
 *     <none>
 * Callees:
 *     PerformanceFromPercentage @ 0x1C0003158 (PerformanceFromPercentage.c)
 *     WriteGenAddrHidden @ 0x1C00060E0 (WriteGenAddrHidden.c)
 */

void __fastcall PerfControlCpcHidden(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        char a6,
        char a7,
        char a8)
{
  __int64 v9; // r8
  bool v12; // zf
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax

  v9 = a2;
  if ( a7 || a8 )
  {
    v12 = *(_BYTE *)(a1 + 93) == 0;
    v13 = *(_QWORD *)(a1 + 104);
    *(_QWORD *)(a1 + 48) = a2;
    if ( !v12 )
    {
      v14 = *(unsigned int *)(*(_QWORD *)a1 + 68LL);
      if ( a6 )
        v9 = 0LL;
      WriteGenAddrHidden(v14, v13 + 68, v9);
    }
    if ( *(_BYTE *)(a1 + 94) )
    {
      v15 = PerformanceFromPercentage(a1, a3);
      WriteGenAddrHidden(*(unsigned int *)(*(_QWORD *)a1 + 68LL), v13 + 80, v15);
    }
    if ( *(_BYTE *)(a1 + 95) )
    {
      v16 = PerformanceFromPercentage(a1, a4);
      WriteGenAddrHidden(*(unsigned int *)(*(_QWORD *)a1 + 68LL), v13 + 92, v16);
    }
    if ( *(_BYTE *)(a1 + 96) )
    {
      v17 = PerformanceFromPercentage(a1, a5);
      WriteGenAddrHidden(*(unsigned int *)(*(_QWORD *)a1 + 68LL), v13 + 104, v17);
    }
  }
}
