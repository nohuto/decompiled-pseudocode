/*
 * XREFs of DpiInitializeInternal @ 0x1C000ECA8
 * Callers:
 *     DpiInitializeWin8 @ 0x1C000ECA0 (DpiInitializeWin8.c)
 *     DpiInitialize @ 0x1C0028610 (DpiInitialize.c)
 * Callees:
 *     DpiInitializeEx @ 0x1C00D9938 (DpiInitializeEx.c)
 */

__int64 __fastcall DpiInitializeInternal(void *a1, const UNICODE_STRING *a2, _QWORD *a3, char a4)
{
  _QWORD *v5; // rax

  if ( *(_DWORD *)a3 >= 0x104Eu
    && a3[1]
    && a3[2]
    && a3[3]
    && a3[4]
    && a3[5]
    && a3[6]
    && a3[7]
    && a3[8]
    && a3[9]
    && a3[10]
    && a3[11]
    && a3[13]
    && a3[14] )
  {
    return DpiInitializeEx(a1, a2, a3, a4);
  }
  v5 = (_QWORD *)WdLogNewEntry5_WdError(a1);
  v5[4] = 0LL;
  v5[3] = DpiInitialize;
  v5[5] = -1073741735LL;
  WdLogEvent5_WdError(v5);
  return 3221225561LL;
}
