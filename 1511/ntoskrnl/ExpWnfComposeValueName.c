/*
 * XREFs of ExpWnfComposeValueName @ 0x1403E11DC
 * Callers:
 *     ExpWnfLookupPermanentName @ 0x1403E0F08 (ExpWnfLookupPermanentName.c)
 *     ExpWnfWriteStateData @ 0x1403E68DC (ExpWnfWriteStateData.c)
 *     ExpWnfRegisterPermanentName @ 0x1404C2D98 (ExpWnfRegisterPermanentName.c)
 *     ExpWnfDeletePermanentName @ 0x1404C53D0 (ExpWnfDeletePermanentName.c)
 *     ExpWnfPopulateStateData @ 0x140546B98 (ExpWnfPopulateStateData.c)
 *     ExpWnfDeletePermanentStateData @ 0x140677B58 (ExpWnfDeletePermanentStateData.c)
 * Callees:
 *     RtlInt64ToUnicodeString @ 0x1403E12EC (RtlInt64ToUnicodeString.c)
 */

__int64 __fastcall ExpWnfComposeValueName(__int64 a1, UNICODE_STRING *a2)
{
  unsigned int v3; // r8d
  __int64 result; // rax
  unsigned int v5; // ebx
  __int64 v6; // r9
  wchar_t *Buffer; // rdx
  bool v8; // zf
  __int64 v9; // rcx

  RtlInt64ToUnicodeString(a1 ^ 0x41C64E6DA3BC0074LL, 0x10u, a2);
  v3 = a2->Length >> 1;
  result = 32LL;
  v5 = 16 - v3;
  a2->Length = 32;
  if ( v3 )
  {
    v6 = v3;
    do
    {
      Buffer = a2->Buffer;
      --v6;
      v8 = v3-- == 1;
      result = Buffer[v6];
      Buffer[v3 + v5] = result;
    }
    while ( !v8 );
  }
  if ( v5 )
  {
    v9 = 2LL * v5;
    do
    {
      result = (__int64)a2->Buffer;
      v9 -= 2LL;
      *(_WORD *)(v9 + result) = 48;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
