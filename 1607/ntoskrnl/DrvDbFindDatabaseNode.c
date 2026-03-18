/*
 * XREFs of DrvDbFindDatabaseNode @ 0x1404D429C
 * Callers:
 *     DrvDbGetObjectDatabaseNode @ 0x1404FBB78 (DrvDbGetObjectDatabaseNode.c)
 *     DrvDbDispatchDriverDatabase @ 0x1405028D0 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbSuspendDatabase @ 0x140551DF8 (DrvDbSuspendDatabase.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x1405762D0 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbRegisterDatabase @ 0x140578B14 (DrvDbRegisterDatabase.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x14057EB50 (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x1406E11A0 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1406E24D4 (DrvDbSetDriverDatabaseMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400C39C0 (RtlInitUnicodeStringEx.c)
 *     RtlEqualUnicodeString @ 0x14040F720 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall DrvDbFindDatabaseNode(__int64 a1, const WCHAR *a2, const UNICODE_STRING **a3)
{
  NTSTATUS inited; // edi
  const UNICODE_STRING **v6; // rsi
  const UNICODE_STRING *i; // rbx
  UNICODE_STRING String2; // [rsp+20h] [rbp-18h] BYREF

  *a3 = 0LL;
  inited = RtlInitUnicodeStringEx(&String2, a2);
  if ( inited >= 0 )
  {
    v6 = (const UNICODE_STRING **)(a1 + 16);
    inited = -1073741772;
    for ( i = *v6; i != (const UNICODE_STRING *)v6; i = *(const UNICODE_STRING **)&i->Length )
    {
      if ( RtlEqualUnicodeString(i + 1, &String2, 1u) )
      {
        inited = 0;
        *a3 = i;
        return (unsigned int)inited;
      }
    }
  }
  return (unsigned int)inited;
}
