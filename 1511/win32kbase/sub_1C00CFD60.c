/*
 * XREFs of sub_1C00CFD60 @ 0x1C00CFD60
 * Callers:
 *     RtlUnicodeStringCatString @ 0x1C00CFC94 (RtlUnicodeStringCatString.c)
 *     RtlUnicodeStringCopyString @ 0x1C00CFD00 (RtlUnicodeStringCopyString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C00CFD60(unsigned __int16 *a1, _QWORD *a2, unsigned __int64 *a3, unsigned __int64 *a4)
{
  unsigned int v4; // r10d
  unsigned __int16 v7; // ax
  unsigned __int16 v8; // cx
  __int64 v9; // r8

  v4 = 0;
  *a2 = 0LL;
  *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  v7 = *a1;
  if ( (*a1 & 1) != 0 )
    return (unsigned int)-1073741811;
  v8 = a1[1];
  if ( (v8 & 1) != 0 )
    return (unsigned int)-1073741811;
  if ( v7 > v8 )
    return (unsigned int)-1073741811;
  if ( v8 == 0xFFFFLL )
    return (unsigned int)-1073741811;
  v9 = *((_QWORD *)a1 + 1);
  if ( !v9 && (v7 || v8) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    *a2 = v9;
    *a3 = (unsigned __int64)v8 >> 1;
    if ( a4 )
      *a4 = (unsigned __int64)v7 >> 1;
  }
  return v4;
}
