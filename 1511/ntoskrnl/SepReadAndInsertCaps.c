/*
 * XREFs of SepReadAndInsertCaps @ 0x1406567C8
 * Callers:
 *     SepBuildCapPolicyTable @ 0x1400F3BAC (SepBuildCapPolicyTable.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140003C28 (RtlStringCchPrintfW.c)
 *     RtlInsertEntryHashTable @ 0x140006C90 (RtlInsertEntryHashTable.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwQueryKey @ 0x1401508E0 (ZwQueryKey.c)
 *     ZwEnumerateKey @ 0x140150C60 (ZwEnumerateKey.c)
 *     SepRmCapPoolExpand @ 0x140201A34 (SepRmCapPoolExpand.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SepRegOpenKey @ 0x1403BED14 (SepRegOpenKey.c)
 *     SepReadSingleCap @ 0x140656B20 (SepReadSingleCap.c)
 */

__int64 __fastcall SepReadAndInsertCaps(HANDLE KeyHandle, int a2, __int64 a3)
{
  int v3; // eax
  ULONG v4; // r14d
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v6; // rsi
  unsigned int *PoolWithTag; // rdi
  NTSTATUS v8; // ebx
  ULONG v9; // r13d
  ULONG v10; // r15d
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax
  int SingleCap; // eax
  _RTL_DYNAMIC_HASH_TABLE *v14; // r10
  ULONG_PTR v15; // r8
  ULONG Length; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandlea; // [rsp+38h] [rbp-C8h] BYREF
  PRTL_DYNAMIC_HASH_TABLE_ENTRY Entry; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+48h] [rbp-B8h]
  __int64 v21; // [rsp+50h] [rbp-B0h]
  PRTL_DYNAMIC_HASH_TABLE HashTable; // [rsp+58h] [rbp-A8h]
  wchar_t pszDest[344]; // [rsp+60h] [rbp-A0h] BYREF

  v3 = *(_DWORD *)(a3 + 48);
  v4 = a2 + 50;
  HashTable = (PRTL_DYNAMIC_HASH_TABLE)a3;
  v6 = 0LL;
  v21 = *(_QWORD *)(a3 + 56);
  Entry = 0LL;
  KeyHandlea = 0LL;
  Length = 0;
  v20 = v3;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(a2 + 50), 0x70536553u);
  if ( !PoolWithTag )
    goto LABEL_2;
  v8 = ZwQueryKey(KeyHandle, KeyFullInformation, PoolWithTag, v4, &Length);
  if ( v8 >= 0 )
    goto LABEL_8;
  if ( v8 != -2147483643 && v8 != -1073741789 )
  {
LABEL_28:
    if ( v8 >= 0 )
      goto LABEL_33;
LABEL_29:
    if ( v6 )
      ExFreePoolWithTag(v6, 0x70536553u);
    goto LABEL_31;
  }
  PoolWithTag = (unsigned int *)SepRmCapPoolExpand(PoolWithTag, Length);
  if ( !PoolWithTag )
  {
LABEL_2:
    v8 = -1073741670;
    goto LABEL_31;
  }
  v4 = Length;
  v8 = ZwQueryKey(KeyHandle, KeyFullInformation, PoolWithTag, Length, &Length);
  if ( v8 >= 0 )
  {
LABEL_8:
    v9 = PoolWithTag[5];
    v10 = 0;
    if ( v9 )
    {
      while ( 1 )
      {
        v11 = ZwEnumerateKey(KeyHandle, v10, KeyBasicInformation, PoolWithTag, v4, &Length);
        v8 = v11;
        if ( v11 < 0 )
        {
          if ( v11 != -2147483643 && v11 != -1073741789 )
            goto LABEL_28;
          PoolWithTag = (unsigned int *)SepRmCapPoolExpand(PoolWithTag, Length);
          if ( !PoolWithTag )
            goto LABEL_2;
          v4 = Length;
          v8 = ZwEnumerateKey(KeyHandle, v10, KeyBasicInformation, PoolWithTag, Length, &Length);
          if ( v8 < 0 )
            goto LABEL_31;
        }
        *((_WORD *)PoolWithTag + ((unsigned __int64)PoolWithTag[3] >> 1) + 8) = 0;
        v8 = RtlStringCchPrintfW(
               pszDest,
               0x156uLL,
               L"%s\\%s",
               L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa\\CentralizedAccessPolicies\\CAPs",
               PoolWithTag + 4);
        if ( v8 < 0 )
          goto LABEL_31;
        v8 = SepRegOpenKey(pszDest, 0x201u, &KeyHandlea);
        if ( v8 < 0 )
          goto LABEL_31;
        v12 = ZwQueryKey(KeyHandlea, KeyFullInformation, PoolWithTag, v4, &Length);
        v8 = v12;
        if ( v12 < 0 )
        {
          if ( v12 != -2147483643 && v12 != -1073741789 )
            goto LABEL_28;
          PoolWithTag = (unsigned int *)SepRmCapPoolExpand(PoolWithTag, Length);
          if ( !PoolWithTag )
            goto LABEL_2;
          v4 = Length;
          v8 = ZwQueryKey(KeyHandlea, KeyFullInformation, PoolWithTag, Length, &Length);
          if ( v8 < 0 )
            goto LABEL_31;
        }
        SingleCap = SepReadSingleCap(KeyHandlea, (__int64)&Entry);
        v6 = Entry;
        v8 = SingleCap;
        if ( SingleCap < 0 )
          goto LABEL_29;
        v14 = HashTable;
        Entry[1].Linkage.Blink = (struct _LIST_ENTRY *)HashTable;
        v15 = *((unsigned int *)&v6[1].Linkage.Flink->Flink + (unsigned int)BYTE1(v6[1].Linkage.Flink->Flink) + 1);
        if ( !*((_DWORD *)&v6[1].Linkage.Flink->Flink + (unsigned int)BYTE1(v6[1].Linkage.Flink->Flink) + 1) )
          v15 = 1LL;
        if ( !RtlInsertEntryHashTable(v14, v6, v15, 0LL) )
        {
          v8 = -1073741670;
          goto LABEL_28;
        }
        v6 = 0LL;
        Entry = 0LL;
        ZwClose(KeyHandlea);
        ++v10;
        KeyHandlea = 0LL;
        if ( v10 >= v9 )
          goto LABEL_28;
      }
    }
    goto LABEL_28;
  }
LABEL_31:
  if ( KeyHandlea )
    ZwClose(KeyHandlea);
LABEL_33:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x70536553u);
  return (unsigned int)v8;
}
