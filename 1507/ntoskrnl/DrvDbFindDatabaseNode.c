/*
 * XREFs of DrvDbFindDatabaseNode @ 0x140553AE0
 * Callers:
 *     DrvDbDispatchDriverDatabase @ 0x1404DD3CC (DrvDbDispatchDriverDatabase.c)
 *     DrvDbGetObjectDatabaseNode @ 0x1404DDE94 (DrvDbGetObjectDatabaseNode.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140557CC8 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbSuspendDatabase @ 0x1405958CC (DrvDbSuspendDatabase.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x1405BAD40 (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbRegisterDatabase @ 0x1405BB054 (DrvDbRegisterDatabase.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x14071ADA0 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14071C048 (DrvDbSetDriverDatabaseMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
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
