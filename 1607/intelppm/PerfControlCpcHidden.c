/*
 * XREFs of PerfControlCpcHidden @ 0x1C0004B30
 * Callers:
 *     <none>
 * Callees:
 *     PerformanceFromPercentage @ 0x1C0001540 (PerformanceFromPercentage.c)
 *     WriteGenAddrHidden @ 0x1C0004670 (WriteGenAddrHidden.c)
 */

void __fastcall PerfControlCpcHidden(
        _BYTE *a1,
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
  _BYTE *v13; // rdi
  unsigned int v14; // ecx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax

  v9 = a2;
  if ( a7 || a8 )
  {
    v12 = a1[93] == 0;
    v13 = (_BYTE *)*((_QWORD *)a1 + 13);
    *((_QWORD *)a1 + 6) = a2;
    if ( !v12 )
    {
      v14 = *(_DWORD *)(*(_QWORD *)a1 + 68LL);
      if ( a6 )
        v9 = 0LL;
      WriteGenAddrHidden(v14, v13 + 68, v9);
    }
    if ( a1[94] )
    {
      v15 = PerformanceFromPercentage((__int64)a1, a3);
      WriteGenAddrHidden(*(_DWORD *)(*(_QWORD *)a1 + 68LL), v13 + 80, v15);
    }
    if ( a1[95] )
    {
      v16 = PerformanceFromPercentage((__int64)a1, a4);
      WriteGenAddrHidden(*(_DWORD *)(*(_QWORD *)a1 + 68LL), v13 + 92, v16);
    }
    if ( a1[96] )
    {
      v17 = PerformanceFromPercentage((__int64)a1, a5);
      WriteGenAddrHidden(*(_DWORD *)(*(_QWORD *)a1 + 68LL), v13 + 104, v17);
    }
  }
}
