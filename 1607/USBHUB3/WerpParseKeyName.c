/*
 * XREFs of WerpParseKeyName @ 0x1C0034130
 * Callers:
 *     WerKernelSubmitReport @ 0x1C0034780 (WerKernelSubmitReport.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WerpParseKeyName(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        _DWORD *a4,
        _QWORD *a5,
        _DWORD *a6)
{
  unsigned int v6; // r10d
  __int64 v8; // rdx
  _WORD *v9; // rcx
  _WORD *v10; // rax
  _WORD *v11; // rcx
  _WORD *v12; // rcx

  v6 = 0;
  if ( a2 && a3 && a4 && a5 && a6 )
  {
    v8 = 2LL * a2;
    v9 = (_WORD *)(v8 + a1 - 2);
    if ( v9 )
    {
      while ( (unsigned __int64)v9 >= a1 )
      {
        if ( *v9 == 92 )
          goto LABEL_8;
        --v9;
      }
    }
    else
    {
      v9 = 0LL;
LABEL_8:
      if ( v9 )
      {
        v10 = v9 + 1;
        *a5 = v9 + 1;
        *a6 = (__int64)(a1 + v8 - (_QWORD)(v9 + 1)) >> 1;
        if ( (unsigned __int64)v9 > a1 )
        {
          v11 = v9 - 1;
          if ( v11 )
          {
            while ( (unsigned __int64)v11 >= a1 )
            {
              if ( *v11 == 92 )
                goto LABEL_19;
              --v11;
            }
          }
          else
          {
            v11 = 0LL;
LABEL_19:
            if ( v11 )
            {
              v12 = v11 + 1;
              *a3 = v12;
              *a4 = v10 - v12 - 1;
              return v6;
            }
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
        return (unsigned int)-1073741811;
      }
    }
    DbgPrintEx(
      0x96u,
      0,
      "WERLIVEKERNELREPORTING:%u: ERROR Could not find \\ in the keyname looking for Reportid\n",
      414LL);
    return (unsigned int)-1073741811;
  }
  return 3221225485LL;
}
