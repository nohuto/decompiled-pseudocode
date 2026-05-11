/*
 * XREFs of USBParseMIDIElement @ 0x1C001F910
 * Callers:
 *     <none>
 * Callees:
 *     BusApiBuildFunctionUnit @ 0x1C001B388 (BusApiBuildFunctionUnit.c)
 *     USBParseGetUnitString @ 0x1C001E5F0 (USBParseGetUnitString.c)
 */

__int64 __fastcall USBParseMIDIElement(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  __int64 v6; // rax
  unsigned __int64 v7; // r9
  unsigned __int8 v8; // al
  __int64 v9; // r8
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r10
  int v12; // ebp
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  int v15; // r8d
  int v16; // eax
  int UnitString; // edi
  int v18; // r14d
  int *PoolWithTag; // rsi
  __int64 i; // r8
  PCWSTR SourceString; // [rsp+80h] [rbp+8h] BYREF
  __int64 v23; // [rsp+90h] [rbp+18h] BYREF

  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL) + 40LL);
  v7 = v6 + *(unsigned __int16 *)(v6 + 2);
  v8 = *a3;
  if ( *a3 < 5u )
    return 3221225858LL;
  v9 = a3[4];
  v10 = v8;
  if ( v8 < (unsigned __int64)(2 * v9 + 5) )
    return 3221225858LL;
  v11 = (unsigned __int64)&a3[2 * v9 + 5];
  if ( v11 > v7 )
    return 3221225858LL;
  v12 = 0;
  if ( v8 < (unsigned __int64)(2 * v9 + 9) )
    return 3221225858LL;
  v13 = *(unsigned __int8 *)(v11 + 3);
  v14 = v13 + 2 * (v9 + 5);
  if ( v10 < v14 || (unsigned __int64)&a3[v14] > v7 )
    return 3221225858LL;
  if ( *(_BYTE *)(v11 + 3) )
  {
    v15 = v13 * v13;
    do
    {
      v16 = *(unsigned __int8 *)((unsigned int)(v15 - 1) + v11 + 4);
      v15 -= *(unsigned __int8 *)(v11 + 3);
      v12 = v16 | (v12 << 8);
      LODWORD(v13) = v13 - 1;
    }
    while ( (_DWORD)v13 );
  }
  UnitString = USBParseGetUnitString(a1, a3, &SourceString);
  if ( UnitString >= 0 )
  {
    UnitString = -1073741670;
    v18 = *(unsigned __int8 *)(a2 + 2) << 8;
    PoolWithTag = (int *)ExAllocatePoolWithTag(PagedPool, 4LL * a3[4], 0x41627845u);
    if ( PoolWithTag )
    {
      for ( i = 0LL; (unsigned int)i < a3[4]; i = (unsigned int)(i + 1) )
        PoolWithTag[i] = v18 | a3[2 * i + 5];
      UnitString = BusApiBuildFunctionUnit(
                     a1,
                     v18 | (unsigned int)a3[3],
                     8,
                     0,
                     0,
                     a3[4],
                     PoolWithTag,
                     SourceString,
                     0,
                     &v23);
      if ( UnitString >= 0 )
      {
        if ( v23 )
          *(_DWORD *)(v23 + 64) = v12;
      }
      ExFreePool(PoolWithTag);
    }
  }
  return (unsigned int)UnitString;
}
