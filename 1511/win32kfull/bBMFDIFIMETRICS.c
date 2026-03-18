/*
 * XREFs of bBMFDIFIMETRICS @ 0x1C011AB60
 * Callers:
 *     bConvertFontRes @ 0x1C01175F0 (bConvertFontRes.c)
 *     bBmfdLoadFont @ 0x1C011F62C (bBmfdLoadFont.c)
 *     bLoadNtFon @ 0x1C01509F8 (bLoadNtFon.c)
 * Callees:
 *     fsSelectionFlags @ 0x1C01182EC (fsSelectionFlags.c)
 *     bMappedViewStrlen @ 0x1C011FC50 (bMappedViewStrlen.c)
 */

__int64 __fastcall bBMFDIFIMETRICS(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, unsigned int *a5)
{
  unsigned int *v5; // rbx
  unsigned __int64 v8; // r8
  unsigned int v9; // r11d
  unsigned __int64 v10; // rax
  unsigned int v11; // r8d
  int v12; // r9d
  __int16 v13; // r10
  int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // eax

  v5 = a5;
  if ( a5 )
    *a5 = 0;
  v8 = a4[2];
  if ( !v8 )
    v8 = *a4
       + ((*(unsigned __int8 *)(*a4 + 108) << 24) | (unsigned __int64)(*(unsigned __int8 *)(*a4 + 105) | (*(unsigned __int16 *)(*a4 + 106) << 8)));
  if ( (unsigned int)bMappedViewStrlen(a1, a2, v8, &a5) )
  {
    if ( (unsigned int *)((char *)a5 + 2) >= a5 )
    {
      v10 = 2LL * (unsigned int)((_DWORD)a5 + 2);
      if ( v10 <= 0xFFFFFFFF && (int)v10 + 3 >= (unsigned int)v10 && (((_DWORD)v10 + 3) & 0xFFFFFFFC) < 0xFFFFFF40 )
      {
        v13 = fsSelectionFlags(*a4) & 0x21;
        if ( v13 )
        {
          if ( v13 == 32 || v13 == 1 )
          {
            v14 = 2;
          }
          else
          {
            v14 = 4;
            if ( v13 == 33 )
              v14 = 1;
          }
        }
        else
        {
          v14 = 4;
        }
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = 20 * v15;
          if ( 20 * (unsigned __int64)v15 > 0xFFFFFFFF )
            return v9;
          v17 = v16 + 12;
          if ( v16 >= 0xFFFFFFF4 || v11 + v17 < v11 )
            return v9;
          v11 += v17;
        }
        if ( v11 + 7 >= v11 )
        {
          v18 = (v11 + 7) & 0xFFFFFFF8;
          if ( a3 )
          {
            *(_DWORD *)(a3 + 20) = v12;
            *(_DWORD *)(a3 + 24) = v18;
          }
          if ( v5 )
            *v5 = v18;
          return 1;
        }
      }
    }
  }
  return v9;
}
