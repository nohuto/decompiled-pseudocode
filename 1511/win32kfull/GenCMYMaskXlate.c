/*
 * XREFs of GenCMYMaskXlate @ 0x1C024F018
 * Callers:
 *     pDCIAdjClr @ 0x1C00BEF78 (pDCIAdjClr.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GenCMYMaskXlate(_BYTE *a1, int a2, int a3, int a4, int a5)
{
  int v5; // r14d
  int v6; // ebp
  int v8; // ecx
  int v10; // r13d
  int v11; // r10d
  int v12; // eax
  int v13; // r15d
  int v14; // esi
  int v15; // eax
  int v16; // r10d
  __int64 result; // rax
  int v18; // ebx
  int i; // r8d
  int v20; // r9d
  int v21; // edx
  char v22; // di
  int v23; // [rsp+0h] [rbp-48h]
  char v25; // [rsp+68h] [rbp+20h]

  v5 = a5 + 1;
  v6 = (a4 + 1) * (a5 + 1);
  v8 = 0;
  v10 = a3;
  v11 = (a4 + 1) * (a5 + 1) * (a3 + 1);
  v23 = v6;
  if ( (unsigned int)(v11 - 1) <= 0xFF && a2 )
  {
    if ( (v11 & 1) != 0 )
    {
      v12 = v11 / 2;
      ++v11;
      v13 = v12;
    }
    else
    {
      v13 = 512;
    }
    v14 = -v6;
    v15 = v11 - 1 + (256 - v11) / 2;
    v16 = 0;
    v25 = v15;
    LODWORD(result) = -v5;
    do
    {
      if ( v16 <= v10 )
        v14 += v6;
      v18 = result + v14 - 1;
      for ( i = 0; i <= 7; ++i )
      {
        if ( i <= a4 )
          v18 += v5;
        v20 = 0;
        v21 = v18;
        do
        {
          if ( v20 <= a5 )
            ++v21;
          v22 = v21;
          if ( v21 > v13 )
            v22 = v21 + 1;
          ++v20;
          *a1++ = v25 - v22;
        }
        while ( v20 <= 3 );
      }
      v6 = v23;
      ++v16;
      v10 = a3;
      result = (unsigned int)-v5;
    }
    while ( v16 <= 7 );
  }
  else
  {
    result = 256LL;
    do
      *a1++ = v8++;
    while ( v8 < 256 );
  }
  return result;
}
