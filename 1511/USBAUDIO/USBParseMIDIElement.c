/*
 * XREFs of USBParseMIDIElement @ 0x1C001E2C0
 * Callers:
 *     <none>
 * Callees:
 *     BusApiBuildFunctionUnit @ 0x1C001A2E8 (BusApiBuildFunctionUnit.c)
 *     USBParseGetUnitString @ 0x1C001D304 (USBParseGetUnitString.c)
 */

__int64 __fastcall USBParseMIDIElement(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  int v3; // esi
  unsigned __int8 *v7; // r11
  int v8; // r10d
  int v9; // r9d
  int v10; // r8d
  int v11; // eax
  int UnitString; // edi
  int v13; // ebp
  int *PoolWithTag; // r14
  __int64 i; // r8
  PCWSTR SourceString; // [rsp+90h] [rbp+18h] BYREF
  __int64 v18; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0;
  v7 = &a3[2 * a3[4]];
  v8 = v7[8];
  v9 = v8;
  if ( v7[8] )
  {
    v10 = v8 * v8;
    do
    {
      v11 = v7[v10 - 1 + 9];
      v10 -= v8;
      v3 = v11 | (v3 << 8);
      --v9;
    }
    while ( v9 );
  }
  UnitString = USBParseGetUnitString(a1, a3, &SourceString);
  if ( UnitString >= 0 )
  {
    UnitString = -1073741670;
    v13 = *(unsigned __int8 *)(a2 + 2) << 8;
    PoolWithTag = (int *)ExAllocatePoolWithTag(PagedPool, 4LL * a3[4], 0x41627845u);
    if ( PoolWithTag )
    {
      for ( i = 0LL; (unsigned int)i < a3[4]; i = (unsigned int)(i + 1) )
        PoolWithTag[i] = v13 | a3[2 * i + 5];
      UnitString = BusApiBuildFunctionUnit(
                     a1,
                     v13 | (unsigned int)a3[3],
                     8,
                     0,
                     0,
                     a3[4],
                     PoolWithTag,
                     SourceString,
                     0,
                     &v18);
      if ( UnitString >= 0 && v18 )
        *(_DWORD *)(v18 + 64) = v3;
      ExFreePool(PoolWithTag);
    }
  }
  return (unsigned int)UnitString;
}
