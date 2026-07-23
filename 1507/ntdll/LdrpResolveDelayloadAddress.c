/*
 * XREFs of LdrpResolveDelayloadAddress @ 0x180016A40
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x180016B20 (LdrpHandleProtectedDelayload.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x180079C94 (LdrpHandleUnprotectedDelayLoad.c)
 * Callees:
 *     LdrpResolveProcedureAddress @ 0x180016890 (LdrpResolveProcedureAddress.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     AVrfCallAPILookupCallback @ 0x1800C4AE0 (AVrfCallAPILookupCallback.c)
 */

char *__fastcall LdrpResolveDelayloadAddress(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        int *a6)
{
  __int64 v6; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  const char *v11; // rdx
  int v12; // r8d
  int v13; // eax
  char *v14; // rbx
  __int64 v16; // r9
  char *v17; // [rsp+40h] [rbp+8h] BYREF
  __int64 v18; // [rsp+50h] [rbp+18h] BYREF

  v6 = *(unsigned int *)(a3 + 12);
  v17 = 0LL;
  v9 = *(_QWORD *)(a1 + 48);
  v10 = *(_QWORD *)(v9 + *(unsigned int *)(a3 + 16) + 8 * ((a4 - v6 - v9) >> 3));
  if ( v10 < 0 )
  {
    v11 = 0LL;
    v12 = (unsigned __int16)v10;
  }
  else
  {
    v11 = (const char *)(v10 + v9 + 2);
    v12 = 0;
  }
  v13 = LdrpResolveProcedureAddress(a2, v11, v12, 0, &v17);
  *a6 = v13;
  if ( v13 < 0 )
    return v17;
  if ( AvrfpAPILookupCallbacksEnabled )
    AVrfCallAPILookupCallback(*(_QWORD *)(a1 + 48), a2[6], (_DWORD)v17, 1, (__int64)&v17);
  if ( !HashTable )
    return v17;
  v18 = 0LL;
  v16 = *(_QWORD *)(a1 + 48);
  v14 = v17;
  ((void (__fastcall *)(__int64 *, _QWORD *, char *, __int64, _QWORD))HashTable)(&v18, a2, v17, v16, 0LL);
  if ( v18 )
    return (char *)v18;
  return v14;
}
