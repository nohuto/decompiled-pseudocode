/*
 * XREFs of ScanHexFormat @ 0x1404DE3F0
 * Callers:
 *     RtlGUIDFromString @ 0x1404DE2FC (RtlGUIDFromString.c)
 * Callees:
 *     <none>
 */

__int64 ScanHexFormat(unsigned __int16 *a1, int a2, unsigned __int16 *a3, ...)
{
  unsigned int v3; // edi
  _QWORD *v4; // r11
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  unsigned __int16 v10; // dx
  int v11; // edx
  unsigned __int16 v12; // r8
  int v13; // edx
  int v14; // edx
  int *v15; // rax
  __int64 v17; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int16 *v18; // [rsp+30h] [rbp+18h]

  v3 = 0;
  v4 = &v17 + 6;
  while ( 1 )
  {
LABEL_2:
    v7 = *a3;
    if ( !*a3 )
    {
      if ( a2 && *a1 )
        return (unsigned int)-1;
      return v3;
    }
    if ( v7 == 37 )
    {
      LOWORD(v7) = *++a3;
      if ( *a3 != 37 )
        break;
    }
    if ( !a2 || *a1 != (_WORD)v7 )
      return 0xFFFFFFFFLL;
    ++a1;
    --a2;
    ++a3;
  }
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v10 = *a3;
      if ( (unsigned __int16)(*a3 - 48) <= 9u )
      {
        v9 = v10 + 10 * v9 - 48;
        goto LABEL_8;
      }
      if ( v10 != 108 )
        break;
      ++v8;
      ++a3;
    }
    if ( ((v10 - 88) & 0xFFDF) == 0 )
      break;
LABEL_8:
    ++a3;
  }
  v11 = 0;
  v18 = a3 + 1;
  if ( !v9 )
  {
LABEL_16:
    v15 = (int *)v4[1];
    ++v4;
    if ( v8 )
      *v15 = v11;
    else
      *(_WORD *)v15 = v11;
    ++v3;
    a3 = v18;
    goto LABEL_2;
  }
  while ( 1 )
  {
    --v9;
    if ( !a2 )
      return 0xFFFFFFFFLL;
    v12 = *a1;
    v13 = 16 * v11;
    if ( (unsigned __int16)(*a1 - 48) > 9u )
    {
      if ( (unsigned __int16)(v12 - 97) > 5u )
      {
        if ( (unsigned __int16)(v12 - 65) > 5u )
          return 0xFFFFFFFFLL;
        v14 = v13 - 55;
      }
      else
      {
        v14 = v13 - 87;
      }
    }
    else
    {
      v14 = v13 - 48;
    }
    ++a1;
    v11 = v12 + v14;
    --a2;
    if ( !v9 )
      goto LABEL_16;
  }
}
