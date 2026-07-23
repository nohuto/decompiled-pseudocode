/*
 * XREFs of DrvDbFindDatabaseNode @ 0x1404B7D3C
 * Callers:
 *     DrvDbGetObjectDatabaseNode @ 0x1404DEB08 (DrvDbGetObjectDatabaseNode.c)
 *     DrvDbDispatchDriverDatabase @ 0x1404E5860 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbSuspendDatabase @ 0x140552338 (DrvDbSuspendDatabase.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140576810 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbRegisterDatabase @ 0x140579054 (DrvDbRegisterDatabase.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x14057EFFC (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x1406E12D8 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1406E260C (DrvDbSetDriverDatabaseMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
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
