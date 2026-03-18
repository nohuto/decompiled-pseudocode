/*
 * XREFs of RtlStringCbCatW @ 0x1C00A4FF8
 * Callers:
 *     USBDInternal_BuildServicePath @ 0x1C00A51F4 (USBDInternal_BuildServicePath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCbCatW(unsigned __int16 *pszDest, unsigned __int64 cbDest, const wchar_t *a3)
{
  unsigned __int64 v3; // r10
  int v4; // r9d
  unsigned __int16 *v5; // r11
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  char *v8; // rcx
  unsigned __int64 v9; // r8
  __int64 v10; // r10
  signed __int64 v11; // rdx
  __int16 v12; // ax

  v3 = cbDest >> 1;
  v4 = 0;
  v5 = pszDest;
  if ( (cbDest >> 1) - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 >= 0 )
  {
    v6 = cbDest >> 1;
    v4 = 0;
    if ( v3 )
    {
      do
      {
        if ( !*pszDest )
          break;
        ++pszDest;
        --v6;
      }
      while ( v6 );
      if ( v6 )
      {
        v7 = v3 - v6;
        goto LABEL_11;
      }
    }
    v4 = -1073741811;
  }
  v7 = 0LL;
LABEL_11:
  if ( v4 >= 0 )
  {
    v8 = (char *)&v5[v7];
    v4 = 0;
    v9 = v3 - v7;
    if ( v3 == v7 )
      goto LABEL_18;
    v10 = 2147483646LL;
    v11 = (char *)L"\\Parameters" - v8;
    do
    {
      if ( !v10 )
        break;
      v12 = *(_WORD *)&v8[v11];
      if ( !v12 )
        break;
      *(_WORD *)v8 = v12;
      --v10;
      v8 += 2;
      --v9;
    }
    while ( v9 );
    if ( !v9 )
    {
LABEL_18:
      v8 -= 2;
      v4 = -2147483643;
    }
    *(_WORD *)v8 = 0;
  }
  return (unsigned int)v4;
}
