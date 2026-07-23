/*
 * XREFs of CmpValueEnumStackMatchingValueInUpperLayer @ 0x14060B704
 * Callers:
 *     CmpValueEnumStackAdvance @ 0x14060B534 (CmpValueEnumStackAdvance.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     CmpFindNameInListCellWithStatus @ 0x140401A80 (CmpFindNameInListCellWithStatus.c)
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x14060B698 (CmpValueEnumStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpValueEnumStackMatchingValueInUpperLayer(__int64 a1, __int16 a2, __int64 a3, char *a4)
{
  char v8; // bp
  int v9; // ebp
  char v10; // bl
  __int64 EntryAtLayerHeight; // rax
  __int64 result; // rax
  UNICODE_STRING v13; // [rsp+40h] [rbp-28h] BYREF
  int v14; // [rsp+78h] [rbp+10h] BYREF

  RtlInitUnicodeString(&v13, 0LL);
  v8 = *(_BYTE *)(a3 + 16);
  v13.Buffer = (wchar_t *)(a3 + 20);
  v9 = (v8 & 1) << 16;
  v13.Length = *(_WORD *)(a3 + 2);
  v10 = 0;
  v13.MaximumLength = v13.Length;
  while ( ++a2 <= *(__int16 *)(a1 + 12) )
  {
    EntryAtLayerHeight = CmpValueEnumStackGetEntryAtLayerHeight(a1, a2);
    result = CmpFindNameInListCellWithStatus(
               *(_QWORD *)EntryAtLayerHeight,
               *(_QWORD *)(EntryAtLayerHeight + 8),
               *(_DWORD *)(EntryAtLayerHeight + 24),
               &v13,
               v9,
               0LL,
               &v14);
    if ( (int)result >= 0 )
    {
      v10 = 1;
      break;
    }
    if ( (_DWORD)result != -1073741772 )
      return result;
  }
  *a4 = v10;
  return 0LL;
}
