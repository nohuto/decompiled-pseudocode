/*
 * XREFs of WerpParseKeyName @ 0x1C0039510
 * Callers:
 *     WerKernelSubmitReport @ 0x1C0038AC8 (WerKernelSubmitReport.c)
 * Callees:
 *     WerpGetReverseCharPosition @ 0x1C00394E8 (WerpGetReverseCharPosition.c)
 */

__int64 __fastcall WerpParseKeyName(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6)
{
  _WORD *ReverseCharPosition; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // r9
  _DWORD *v12; // r11
  _WORD *v13; // rdx
  unsigned int v14; // r10d
  _WORD *v15; // rax
  _WORD *v16; // rax
  _QWORD *v17; // r9
  __int64 v18; // rdx

  if ( a1 && a2 && a3 && a4 && a5 && a6 )
  {
    ReverseCharPosition = WerpGetReverseCharPosition(a1, (_WORD *)(2LL * a2 + a1 - 2));
    v13 = ReverseCharPosition;
    if ( ReverseCharPosition )
    {
      v15 = ReverseCharPosition + 1;
      *v11 = v15;
      *v12 = (__int64)(v9 + v10 - (_QWORD)v15) >> 1;
      if ( (unsigned __int64)v13 > v9 )
      {
        v16 = WerpGetReverseCharPosition(v9, v13 - 1);
        if ( v16 )
        {
          v18 = *v17 - (_QWORD)(v16 + 1);
          *a3 = v16 + 1;
          *a4 = (v18 >> 1) - 1;
          return v14;
        }
        DbgPrintEx(
          0x96u,
          0,
          "WERLIVEKERNELREPORTING:%u: ERROR Could not find \\ in the keyname looking for Report Type\n",
          438LL);
      }
      else
      {
        DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR No report type can be detected\n", 428LL);
      }
    }
    else
    {
      DbgPrintEx(
        0x96u,
        0,
        "WERLIVEKERNELREPORTING:%u: ERROR Could not find \\ in the keyname looking for Reportid\n",
        414LL);
    }
    return (unsigned int)-1073741811;
  }
  return 3221225485LL;
}
