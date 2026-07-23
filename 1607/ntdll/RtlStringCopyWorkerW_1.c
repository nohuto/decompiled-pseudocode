/*
 * XREFs of RtlStringCopyWorkerW_1 @ 0x1800E60C4
 * Callers:
 *     RtlStringCchCatW @ 0x1800E5FFC (RtlStringCchCatW.c)
 *     RtlStringCchCopyW @ 0x1800E607C (RtlStringCchCopyW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCopyWorkerW_1(_WORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // r10
  __int16 v7; // r9

  result = 0LL;
  if ( !a2 )
    goto LABEL_7;
  v5 = 2147483646LL;
  v6 = a4 - (_QWORD)a1;
  do
  {
    if ( !v5 )
      break;
    v7 = *(_WORD *)((char *)a1 + v6);
    if ( !v7 )
      break;
    *a1 = v7;
    --v5;
    ++a1;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
LABEL_7:
    --a1;
    result = 2147483653LL;
  }
  *a1 = 0;
  return result;
}
