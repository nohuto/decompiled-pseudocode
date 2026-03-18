/*
 * XREFs of DrvDbFindDatabaseNode @ 0x140447070
 * Callers:
 *     DrvDbDispatchDriverDatabase @ 0x140443694 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbGetObjectDatabaseNode @ 0x140444650 (DrvDbGetObjectDatabaseNode.c)
 *     DrvDbRegisterDatabase @ 0x1405245A4 (DrvDbRegisterDatabase.c)
 *     DrvDbSuspendDatabase @ 0x1405254B4 (DrvDbSuspendDatabase.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x1405422FC (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140549920 (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x14069ADE0 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14069BA8C (DrvDbSetDriverDatabaseMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     RtlEqualUnicodeString @ 0x14040F490 (RtlEqualUnicodeString.c)
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
