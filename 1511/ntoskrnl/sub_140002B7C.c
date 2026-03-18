/*
 * XREFs of sub_140002B7C @ 0x140002B7C
 * Callers:
 *     RtlStringCchCopyNW @ 0x140002B28 (RtlStringCchCopyNW.c)
 *     RtlStringCbCopyNW @ 0x14011498C (RtlStringCbCopyNW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140002B7C(_WORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v7; // r10
  __int16 v8; // r9

  result = 0LL;
  if ( !a2 )
    goto LABEL_8;
  v7 = a4 - (_QWORD)a1;
  do
  {
    if ( !a5 )
      break;
    v8 = *(_WORD *)((char *)a1 + v7);
    if ( !v8 )
      break;
    *a1 = v8;
    --a5;
    ++a1;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
LABEL_8:
    --a1;
    result = 2147483653LL;
  }
  *a1 = 0;
  return result;
}
