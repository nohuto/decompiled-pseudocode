/*
 * XREFs of RtlStringCopyWorkerW @ 0x180001644
 * Callers:
 *     punycode_encode @ 0x180053550 (punycode_encode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCopyWorkerW(_WORD *a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r11d
  __int64 v6; // r10
  __int64 v8; // rbx
  __int16 v9; // r9

  v5 = 0;
  v6 = 0LL;
  if ( !a2 )
    goto LABEL_10;
  v8 = a4 - (_QWORD)a1;
  do
  {
    if ( !a5 )
      break;
    v9 = *(_WORD *)((char *)a1 + v8);
    if ( !v9 )
      break;
    *a1 = v9;
    --a5;
    ++a1;
    ++v6;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
LABEL_10:
    --a1;
    v5 = -2147483643;
    --v6;
  }
  *a1 = 0;
  if ( a3 )
    *a3 = v6;
  return v5;
}
