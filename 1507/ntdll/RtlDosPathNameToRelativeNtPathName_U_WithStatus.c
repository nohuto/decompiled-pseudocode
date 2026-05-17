/*
 * XREFs of RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x180025B00
 * Callers:
 *     LdrpMapResourceFile @ 0x180054440 (LdrpMapResourceFile.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800CB40C (LdrpCnvrtShortToLongFileName.c)
 * Callees:
 *     RtlDosPathNameToRelativeNtPathName @ 0x180025B80 (RtlDosPathNameToRelativeNtPathName.c)
 */

__int64 __fastcall RtlDosPathNameToRelativeNtPathName_U_WithStatus(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  __int64 v6; // [rsp+20h] [rbp-38h]
  int v7; // [rsp+40h] [rbp-18h] BYREF
  __int64 v8; // [rsp+48h] [rbp-10h]

  v8 = a1;
  v7 = 0;
  if ( !a1 )
    goto LABEL_6;
  v4 = -1LL;
  do
    ++v4;
  while ( *(_WORD *)(a1 + 2 * v4) );
  if ( v4 <= 0x7FFE )
  {
    LOWORD(v7) = 2 * v4;
    HIWORD(v7) = 2 * v4 + 2;
LABEL_6:
    v6 = a2;
    LOBYTE(a2) = 1;
    return RtlDosPathNameToRelativeNtPathName(0, a2, (unsigned int)&v7, 0, v6, 0LL, a3, a4);
  }
  return 3221225734LL;
}
