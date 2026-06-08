/*
 * XREFs of PerfControlCpc @ 0x1C0004A70
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddr @ 0x1C0001380 (WriteGenAddr.c)
 *     PerformanceFromPercentage @ 0x1C0001540 (PerformanceFromPercentage.c)
 */

void __fastcall PerfControlCpc(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        char a6,
        char a7,
        char a8)
{
  bool v11; // zf
  _BYTE *v12; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax

  if ( a7 || a8 )
  {
    v11 = *(_BYTE *)(a1 + 93) == 0;
    v12 = *(_BYTE **)(a1 + 104);
    *(_QWORD *)(a1 + 48) = a2;
    if ( !v11 )
    {
      if ( a6 )
        a2 = 0LL;
      WriteGenAddr(v12 + 68, a2);
    }
    if ( *(_BYTE *)(a1 + 94) )
    {
      v13 = PerformanceFromPercentage(a1, a3);
      WriteGenAddr(v12 + 80, v13);
    }
    if ( *(_BYTE *)(a1 + 95) )
    {
      v14 = PerformanceFromPercentage(a1, a4);
      WriteGenAddr(v12 + 92, v14);
    }
    if ( *(_BYTE *)(a1 + 96) )
    {
      v15 = PerformanceFromPercentage(a1, a5);
      WriteGenAddr(v12 + 104, v15);
    }
  }
}
