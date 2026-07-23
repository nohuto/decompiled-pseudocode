/*
 * XREFs of RtlStringCopyWorkerW_0 @ 0x1800D1CB0
 * Callers:
 *     RtlStringCchCopyExW @ 0x1800D1BDC (RtlStringCchCopyExW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCopyWorkerW_0(_WORD *a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned int v4; // r11d
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 v7; // rbx
  __int16 v8; // r9

  v4 = 0;
  v5 = 0LL;
  if ( !a2 )
    goto LABEL_7;
  v6 = 2147483646LL;
  v7 = a4 - (_QWORD)a1;
  do
  {
    if ( !v6 )
      break;
    v8 = *(_WORD *)((char *)a1 + v7);
    if ( !v8 )
      break;
    *a1 = v8;
    --v6;
    ++a1;
    ++v5;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
LABEL_7:
    --a1;
    v4 = -2147483643;
    --v5;
  }
  *a1 = 0;
  if ( a3 )
    *a3 = v5;
  return v4;
}
