/*
 * XREFs of CompareId @ 0x1C000EE0C
 * Callers:
 *     IoctlToNVMe @ 0x1C0009BF0 (IoctlToNVMe.c)
 *     ReadMultiSzRegistryValueAndCompareId @ 0x1C000FA6C (ReadMultiSzRegistryValueAndCompareId.c)
 * Callees:
 *     GetStringLength @ 0x1C000FA50 (GetStringLength.c)
 *     StringToULONG @ 0x1C000FBAC (StringToULONG.c)
 */

bool __fastcall CompareId(__int64 a1, unsigned int a2, char *a3, unsigned int a4, __int64 a5)
{
  char v5; // bl
  char *v9; // r10
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int StringLength; // eax
  int v13; // edx
  __int64 v14; // r11
  char v15; // cl
  char v16; // r9
  int v17; // eax
  __int64 v18; // r8

  v5 = 0;
  v9 = a3;
  if ( !a1 || !a3 )
    return 1;
LABEL_3:
  if ( *a3 || a3[1] )
  {
    if ( a2 >= (unsigned int)GetStringLength(a3, a4) )
      StringLength = GetStringLength(v11, v10);
    else
      StringLength = a2;
    if ( !StringLength )
      return 0;
    v13 = 0;
    v5 = 1;
    v14 = a1 - (_QWORD)v9;
    while ( 1 )
    {
      v15 = *v9;
      if ( *v9 == 42 )
        break;
      v16 = v9[v14];
      if ( !v16 || !v15 || v16 != v15 && v15 != 63 )
      {
        v5 = 0;
        v17 = GetStringLength(v11, a4);
        a3 = (char *)((unsigned int)(v17 + 1) + v18);
        v9 = a3;
        goto LABEL_3;
      }
      ++v9;
      if ( ++v13 >= StringLength )
        goto LABEL_19;
    }
    ++v9;
  }
LABEL_19:
  if ( a5 && v5 == 1 && *v9 == 32 )
    return (unsigned __int8)StringToULONG(v9 + 1) != 0;
  return v5;
}
