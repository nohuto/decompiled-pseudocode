/*
 * XREFs of PerfSelectionLegacyPcc @ 0x1C0005300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PerfSelectionLegacyPcc(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned int *a6,
        _QWORD *a7)
{
  __int64 v7; // r10
  unsigned int v8; // r11d
  __int64 result; // rax

  v7 = qword_1C0009810;
  v8 = a2;
  if ( a2 < a3 )
    v8 = a3;
  if ( v8 > a4 )
    v8 = a4;
  *a7 = 100 - v8;
  result = v8;
  *a6 = v8 * *(_DWORD *)(v7 + 28) / 0x64;
  return result;
}
