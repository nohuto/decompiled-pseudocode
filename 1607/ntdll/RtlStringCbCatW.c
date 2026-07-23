/*
 * XREFs of RtlStringCbCatW @ 0x18005777C
 * Callers:
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x1800576C8 (RtlpGetDynamicTimeZoneInfoHandle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCbCatW(_WORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  _WORD *v5; // r9
  __int64 v6; // r8
  _WORD *v7; // rax
  unsigned int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r10
  __int16 v12; // r9

  v4 = 256LL;
  v5 = a1;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  if ( v4 )
  {
    v6 = 256 - v4;
    v7 = &a1[256 - v4];
    v8 = 0;
    v9 = 256 - v6;
    if ( 256 == v6 )
      goto LABEL_13;
    v10 = 2147483646LL;
    v11 = a3 - (_QWORD)v7;
    do
    {
      if ( !v10 )
        break;
      v12 = *(_WORD *)((char *)v7 + v11);
      if ( !v12 )
        break;
      *v7 = v12;
      --v10;
      ++v7;
      --v9;
    }
    while ( v9 );
    if ( !v9 )
    {
LABEL_13:
      --v7;
      v8 = -2147483643;
    }
    *v7 = 0;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v8;
}
