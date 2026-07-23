/*
 * XREFs of RtlCompareString @ 0x18008C740
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x180073B70 (RtlUpperChar.c)
 */

LONG __cdecl RtlCompareString(PSTRING String1, PSTRING String2, BOOLEAN CaseInSensitive)
{
  int Length; // ebp
  int v4; // r12d
  char *Buffer; // rbx
  char *v6; // rdi
  int v7; // eax
  char *v8; // rsi
  signed __int64 v9; // rdi
  CHAR v10; // r14
  unsigned __int8 v12; // r15
  unsigned __int8 v13; // al
  int v14; // ecx
  signed __int64 v15; // rdi

  Length = String1->Length;
  v4 = String2->Length;
  Buffer = String1->Buffer;
  v6 = String2->Buffer;
  v7 = v4;
  if ( Length <= v4 )
    v7 = String1->Length;
  v8 = &Buffer[v7];
  if ( !CaseInSensitive )
  {
    if ( Buffer < v8 )
    {
      v15 = v6 - Buffer;
      while ( 1 )
      {
        LOBYTE(v14) = *Buffer;
        v13 = Buffer[v15];
        if ( *Buffer != v13 )
          break;
        if ( ++Buffer >= v8 )
          return Length - v4;
      }
      v14 = (unsigned __int8)v14;
      return v14 - v13;
    }
    return Length - v4;
  }
  if ( Buffer >= v8 )
    return Length - v4;
  v9 = v6 - Buffer;
  while ( 1 )
  {
    v10 = Buffer[v9];
    if ( *Buffer != v10 )
    {
      v12 = RtlUpperChar(*Buffer);
      v13 = RtlUpperChar(v10);
      if ( v12 != v13 )
        break;
    }
    if ( ++Buffer >= v8 )
      return Length - v4;
  }
  v14 = v12;
  return v14 - v13;
}
