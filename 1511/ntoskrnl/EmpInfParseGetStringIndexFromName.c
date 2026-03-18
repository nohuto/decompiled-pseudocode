/*
 * XREFs of EmpInfParseGetStringIndexFromName @ 0x140760758
 * Callers:
 *     EmpParseTargetRuleStringIndexList @ 0x140760518 (EmpParseTargetRuleStringIndexList.c)
 * Callees:
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x14076086C (EmpInfParseGetValueFromSectionAndKeyName.c)
 */

__int64 __fastcall EmpInfParseGetStringIndexFromName(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v4; // ebx
  __int64 ValueFromSectionAndKeyName; // rbp
  unsigned int v6; // eax
  char v7; // dl
  unsigned __int8 **v8; // r8
  unsigned __int8 *v9; // rcx
  int v10; // edi
  int v11; // r10d

  v4 = 0;
  ValueFromSectionAndKeyName = EmpInfParseGetValueFromSectionAndKeyName(a1, "Strings", a2);
  if ( !ValueFromSectionAndKeyName )
    return (unsigned int)-1073741275;
  v6 = 0;
  v7 = 0;
  if ( EmpNumberOfStrings )
  {
    v8 = (unsigned __int8 **)EmpStringTable;
    while ( 1 )
    {
      v9 = *v8;
      do
      {
        v10 = v9[ValueFromSectionAndKeyName - (_QWORD)*v8];
        v11 = *v9 - v10;
        if ( v11 )
          break;
        ++v9;
      }
      while ( v10 );
      if ( !v11 )
        break;
      ++v6;
      ++v8;
      if ( v6 >= EmpNumberOfStrings )
        goto LABEL_11;
    }
    v7 = 1;
  }
LABEL_11:
  *a3 = v6;
  if ( !v7 )
    return (unsigned int)-1073741275;
  return v4;
}
