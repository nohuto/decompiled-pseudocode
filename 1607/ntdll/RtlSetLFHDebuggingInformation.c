/*
 * XREFs of RtlSetLFHDebuggingInformation @ 0x1800FBFB4
 * Callers:
 *     RtlpSetHeapDebuggingInformation @ 0x18008F1C0 (RtlpSetHeapDebuggingInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSetLFHDebuggingInformation(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rcx
  __int64 v3; // r8
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r9

  v2 = (_BYTE *)(a1 + 679);
  v3 = 129LL;
  do
  {
    v4 = *(_QWORD *)(a2 + 24);
    if ( !v4 && !*(_QWORD *)(a2 + 32)
      || (v5 = *(unsigned __int16 *)(v2 - 3), v5 >= v4 >> 4) && v5 <= *(_QWORD *)(a2 + 32) >> 4 )
    {
      *v2 ^= (*v2 ^ (2 * *(_BYTE *)(a2 + 12))) & 6;
    }
    v2 += 4;
    --v3;
  }
  while ( v3 );
  return 0LL;
}
