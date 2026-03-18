/*
 * XREFs of CmpGetValueDataFromCache @ 0x14042A878
 * Callers:
 *     CmpQueryKeyValueData @ 0x140427AD0 (CmpQueryKeyValueData.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x140429488 (CmpCompareNewValueDataAgainstKCBCache.c)
 * Callees:
 *     CmpGetValueData @ 0x140428050 (CmpGetValueData.c)
 */

__int64 __fastcall CmpGetValueDataFromCache(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, __int64 a5)
{
  bool ValueData; // al
  unsigned int v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF

  ValueData = CmpGetValueData(*(_QWORD *)(a1 + 32), a2, a3, &v7, &v8, a4, a5);
  return v8 & -(__int64)ValueData;
}
