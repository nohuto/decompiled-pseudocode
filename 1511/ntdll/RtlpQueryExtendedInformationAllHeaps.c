/*
 * XREFs of RtlpQueryExtendedInformationAllHeaps @ 0x1800E1840
 * Callers:
 *     RtlpQueryExtendedHeapInformation @ 0x1800E13A4 (RtlpQueryExtendedHeapInformation.c)
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x180051130 (RtlpEnumProcessHeaps.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall RtlpQueryExtendedInformationAllHeaps(_RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *a1)
{
  int Flink; // ecx
  int v3; // ebx
  _LIST_ENTRY *Blink; // rbx
  _OWORD v6[11]; // [rsp+20h] [rbp-79h] BYREF
  _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR var20; // [rsp+D0h] [rbp+37h] BYREF

  Flink = (int)a1->HashEntry.Linkage.Flink;
  if ( (unsigned int)(Flink - 1) <= 4 || Flink == 0x80000000 )
  {
    RtlpEnumProcessHeaps(
      (PRTL_DYNAMIC_HASH_TABLE)RtlpLockUlockAllHeapsCallback,
      (_RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *)1,
      1);
    if ( LODWORD(a1->HashEntry.Linkage.Flink) == 0x80000000 )
      goto LABEL_8;
    memset(&var20, 0, 20);
    v3 = RtlpEnumProcessHeaps((PRTL_DYNAMIC_HASH_TABLE)RtlpHeapQueryTotalReserveSize, &var20, 3);
    if ( v3 >= 0 )
    {
      memset(v6, 0, 0xA8uLL);
      Blink = a1->HashEntry.Linkage.Blink;
      LODWORD(v6[2]) = *((_DWORD *)&var20.CurEntry + 4);
      v6[1] = var20.HashEntry.Linkage;
      LODWORD(v6[0]) = 1;
      *((_QWORD *)&v6[0] + 1) = 48LL;
      v3 = ((__int64 (__fastcall *)(_OWORD *, unsigned __int64))Blink)(v6, a1->HashEntry.Signature);
      if ( v3 >= 0 && LODWORD(a1->HashEntry.Linkage.Flink) >= 2 )
LABEL_8:
        v3 = RtlpEnumProcessHeaps((PRTL_DYNAMIC_HASH_TABLE)RtlpQueryExtendedInformationHeap, a1, 3);
    }
    RtlpEnumProcessHeaps((PRTL_DYNAMIC_HASH_TABLE)RtlpLockUlockAllHeapsCallback, 0LL, 1);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v3;
}
