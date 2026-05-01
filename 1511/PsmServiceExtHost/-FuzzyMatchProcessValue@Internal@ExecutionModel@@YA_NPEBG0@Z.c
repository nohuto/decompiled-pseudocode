/*
 * XREFs of ?FuzzyMatchProcessValue@Internal@ExecutionModel@@YA_NPEBG0@Z @ 0x180049058
 * Callers:
 *     ?GetWin32GameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z @ 0x18001C610 (-GetWin32GameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ExecutionModel::Internal::FuzzyMatchProcessValue(
        const WCHAR *lpStringValue,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  char v3; // bl
  unsigned int v5; // r14d
  unsigned int v6; // ebp
  int v7; // r15d
  int v8; // r12d
  int cchValue; // esi
  WCHAR v10; // ax
  const WCHAR *v11; // r9
  bool v12; // r13
  const unsigned __int16 *v14; // [rsp+68h] [rbp+10h]

  v14 = a2;
  v3 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  do
  {
    cchValue = 0;
    while ( *lpStringValue == 32 )
      ++lpStringValue;
    v10 = *lpStringValue;
    v11 = lpStringValue;
    do
    {
      if ( !v10 )
        break;
      ++lpStringValue;
      ++cchValue;
      v10 = *lpStringValue;
    }
    while ( *lpStringValue != 32 );
    if ( !cchValue )
      break;
    v12 = *lpStringValue != 0;
    v5 += cchValue;
    ++v6;
    if ( FindStringOrdinal(0x400000u, a2, -1, v11, cchValue, 1) != -1 )
    {
      v7 += cchValue;
      ++v8;
    }
    a2 = v14;
  }
  while ( v12 );
  if ( !v5 || !v6 )
    return 0;
  if ( 100 * v7 / v5 > 0x32 || v6 >= 3 && 100 * v8 / v6 > 0x32 )
    return 1;
  return v3;
}
