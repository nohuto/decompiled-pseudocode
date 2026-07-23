/*
 * XREFs of PopFxQueryCurrentComponentPerfState @ 0x140203278
 * Callers:
 *     PoFxQueryCurrentComponentPerfState @ 0x140202078 (PoFxQueryCurrentComponentPerfState.c)
 *     PopFxUpdateComponentPerfStateNominalChange @ 0x140203FF8 (PopFxUpdateComponentPerfStateNominalChange.c)
 * Callees:
 *     PopPluginQueryCurrentComponentPerfState @ 0x1402045D4 (PopPluginQueryCurrentComponentPerfState.c)
 */

_BYTE *__fastcall PopFxQueryCurrentComponentPerfState(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        _QWORD *a5,
        _BYTE *a6)
{
  __int64 v6; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  _BYTE *result; // rax
  unsigned int v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]

  v6 = *(_QWORD *)(a2 + 248);
  v11 = a3;
  v8 = *(_QWORD *)(v6 + 152) + 32LL * a3;
  if ( *(_BYTE *)(v6 + 73) && *(_QWORD *)(a1 + 64) )
  {
    PopPluginQueryCurrentComponentPerfState(a1, *(unsigned int *)(a2 + 16), &v11);
    v9 = (unsigned int)v12;
    if ( *(_DWORD *)(*(_QWORD *)v8 + 28LL) )
      v9 = v12;
    *a5 = v9;
    if ( *a5 != *(_QWORD *)(v8 + 8) )
    {
      *(_QWORD *)(v8 + 16) = MEMORY[0xFFFFF78000000008];
      *(_BYTE *)(v8 + 24) = a4;
      *(_QWORD *)(v8 + 8) = *a5;
      result = a6;
      if ( a6 )
        *a6 = 1;
      return result;
    }
  }
  else
  {
    *a5 = *(_QWORD *)(v8 + 8);
  }
  result = a6;
  if ( a6 )
    *a6 = 0;
  return result;
}
