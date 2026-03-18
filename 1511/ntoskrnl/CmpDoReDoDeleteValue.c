/*
 * XREFs of CmpDoReDoDeleteValue @ 0x1405ED144
 * Callers:
 *     CmpDoReDoRecord @ 0x1405ED194 (CmpDoReDoRecord.c)
 * Callees:
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x140151F40 (ZwDeleteValueKey.c)
 *     CmpDoReOpenTransKey @ 0x1405ED434 (CmpDoReOpenTransKey.c)
 */

__int64 __fastcall CmpDoReDoDeleteValue(__int64 a1, UNICODE_STRING *a2)
{
  NTSTATUS v3; // ebx
  HANDLE KeyHandle; // [rsp+38h] [rbp+10h] BYREF

  v3 = CmpDoReOpenTransKey(a1, &a2[2], 2LL, &KeyHandle);
  if ( v3 >= 0 )
  {
    v3 = ZwDeleteValueKey(KeyHandle, a2 + 3);
    ZwClose(KeyHandle);
  }
  return (unsigned int)v3;
}
