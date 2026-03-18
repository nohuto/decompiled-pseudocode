/*
 * XREFs of DpiTestProcessRegKey @ 0x1C01754E0
 * Callers:
 *     <none>
 * Callees:
 *     wcscmp_0 @ 0x1C0012080 (wcscmp_0.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 */

__int64 __fastcall DpiTestProcessRegKey(const wchar_t *a1, int a2, const void *a3, unsigned int a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  if ( wcscmp_0(a1, L"TestBrightnessLevels") || a2 != 3 )
    return 3221225659LL;
  if ( a4 < 2 )
  {
    v12 = WdLogNewEntry5_WdEvent(v8, v7, v9, v10);
    *(_QWORD *)(v12 + 24) = &DpiTestProcessRegKey;
    *(_QWORD *)(v12 + 32) = -1073741637LL;
    WdLogEvent5_WdEvent(v12);
    return 3221225659LL;
  }
  if ( a4 > 0x67 )
  {
    v13 = WdLogNewEntry5_WdEvent(v8, v7, v9, v10);
    *(_QWORD *)(v13 + 24) = &DpiTestProcessRegKey;
    *(_QWORD *)(v13 + 32) = -1073741637LL;
    WdLogEvent5_WdEvent(v13);
    a4 = 103;
  }
  memmove(&g_BrightnessLevels, a3, a4);
  g_Brightness = (unsigned __int8)g_BrightnessLevels;
  result = 0LL;
  g_NumBrightnessLevels = a4;
  return result;
}
