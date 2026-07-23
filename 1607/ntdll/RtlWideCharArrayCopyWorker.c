/*
 * XREFs of RtlWideCharArrayCopyWorker @ 0x18006CA34
 * Callers:
 *     RtlUnicodeStringCat @ 0x18006C91C (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringCopy @ 0x18006C9AC (RtlUnicodeStringCopy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlWideCharArrayCopyWorker(__int64 a1, __int64 a2, _QWORD *a3, _WORD *a4, __int64 a5)
{
  unsigned int v5; // r10d
  _WORD *v6; // r11
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r9

  v5 = 0;
  v6 = a4;
  v7 = 0LL;
  if ( !a2 )
  {
    v9 = a5;
LABEL_8:
    if ( v9 )
      v5 = -2147483643;
    goto LABEL_6;
  }
  v8 = a1 - (_QWORD)a4;
  v9 = a5;
  do
  {
    if ( !v9 )
      break;
    --v9;
    *(_WORD *)((char *)v6 + v8) = *v6;
    ++v7;
    ++v6;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
    goto LABEL_8;
LABEL_6:
  *a3 = v7;
  return v5;
}
