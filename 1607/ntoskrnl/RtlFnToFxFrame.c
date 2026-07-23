/*
 * XREFs of RtlFnToFxFrame @ 0x1400F4F10
 * Callers:
 *     RtlpWow64CtxToAmd64 @ 0x1404FD838 (RtlpWow64CtxToAmd64.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RtlFnToFxFrame(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r10
  char v3; // r9
  __int64 v5; // rbx
  __int16 v6; // r11
  __int64 v7; // rdx
  __int16 v8; // ax
  __int16 result; // ax
  bool v10; // cl

  v2 = (_QWORD *)(a1 + 32);
  *(_WORD *)a1 = *(_WORD *)a2;
  v3 = 0;
  *(_WORD *)(a1 + 2) = *(_WORD *)(a2 + 4);
  v5 = 8LL;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 12);
  *(_WORD *)(a1 + 12) = *(_WORD *)(a2 + 16);
  *(_WORD *)(a1 + 6) = *(_WORD *)(a2 + 18);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 20);
  *(_WORD *)(a1 + 20) = *(_WORD *)(a2 + 24);
  v6 = *(_WORD *)(a2 + 8);
  v7 = a2 + 28;
  do
  {
    *v2 = *(_QWORD *)v7;
    v2 += 2;
    v8 = *(_WORD *)(v7 + 8);
    v7 += 10LL;
    *((_WORD *)v2 - 4) = v8;
    result = v6 & 0xC000;
    v10 = (v6 & 0xC000) != 0xC000;
    v6 *= 4;
    v3 = v10 + 2 * v3;
    --v5;
  }
  while ( v5 );
  *(_BYTE *)(a1 + 4) = v3;
  return result;
}
