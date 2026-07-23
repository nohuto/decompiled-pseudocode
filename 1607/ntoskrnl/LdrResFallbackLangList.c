/*
 * XREFs of LdrResFallbackLangList @ 0x1404FF484
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1400F5198 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     LdrpGetParentLangId @ 0x140213A60 (LdrpGetParentLangId.c)
 */

__int64 __fastcall LdrResFallbackLangList(__int64 a1, __int64 a2, __int16 a3, char a4, unsigned __int16 *a5)
{
  unsigned __int16 *v5; // rdi
  unsigned int v6; // ebx
  __int16 v9; // cx
  int v10; // esi
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v18; // edx
  __int64 v19; // r8
  unsigned int v20; // r9d
  __int64 v21; // [rsp+58h] [rbp+38h] BYREF

  v21 = a2;
  v5 = a5;
  v6 = 0;
  if ( !a5 )
    return (unsigned int)-1073741811;
  v9 = v21;
  *a5 = 0;
  v10 = 0;
  *((_BYTE *)v5 + 516) = 0;
  while ( 1 )
  {
    v11 = v10++;
    if ( !v11 )
    {
      v9 = a3;
      v18 = 1;
      goto LABEL_14;
    }
    v12 = v11 - 1;
    if ( !v12 )
      break;
    v13 = v12 - 1;
    if ( !v13 )
    {
      if ( PsMachineUILanguageId )
      {
        v9 = PsMachineUILanguageId;
        LOWORD(v21) = PsMachineUILanguageId;
      }
      else
      {
        v9 = -4370;
        LOWORD(v21) = -4370;
      }
      v18 = 5;
      goto LABEL_15;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      if ( *(_WORD *)((char *)&NlsMbCodePageTag + 3) )
      {
        v9 = *(_WORD *)((char *)&NlsMbCodePageTag + 3);
        LOWORD(v21) = *(_WORD *)((char *)&NlsMbCodePageTag + 3);
      }
      else
      {
        v9 = -4370;
        LOWORD(v21) = -4370;
      }
      v18 = 6;
      goto LABEL_15;
    }
    v15 = v14 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        if ( v16 != 1 )
          return v6;
        v9 = 4660;
        v18 = 9;
        LOWORD(v21) = 4660;
      }
      else
      {
        v9 = 1033;
        v18 = 8;
        LOWORD(v21) = 1033;
      }
      goto LABEL_16;
    }
    v9 = PsDefaultSystemLocaleId;
    if ( !PsDefaultSystemLocaleId )
      v9 = -4370;
    v18 = 7;
LABEL_14:
    LOWORD(v21) = v9;
LABEL_15:
    if ( v9 != -4370 )
    {
LABEL_16:
      v19 = *v5;
      v20 = 0;
      if ( *v5 )
      {
        do
        {
          if ( v5[4 * v20 + 2] == v9 )
            break;
          ++v20;
        }
        while ( v20 < (unsigned int)v19 );
      }
      if ( v20 >= (unsigned int)v19 )
      {
        if ( (unsigned int)v19 >= 0x40 )
          return v6;
        v5[4 * v19 + 2] = v9;
        *(_DWORD *)&v5[4 * (*v5)++ + 4] = v18;
      }
    }
  }
  if ( (a4 & 4) == 0 )
  {
    if ( (a3 & 0x3FF) != 0 )
    {
      *((_BYTE *)v5 + 516) = 1;
      if ( (int)LdrpGetParentLangId(v9, &v21) >= 0 )
      {
        v9 = v21;
      }
      else
      {
        v9 = 0;
        LOWORD(v21) = 0;
      }
      if ( v9 )
        --v10;
      else
        v10 = -1;
    }
    else
    {
      v9 = -4370;
      LOWORD(v21) = -4370;
    }
    v18 = 2;
    goto LABEL_15;
  }
  *((_BYTE *)v5 + 516) = 1;
  return v6;
}
