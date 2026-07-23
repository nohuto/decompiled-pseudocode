/*
 * XREFs of RtlpPopulateContext @ 0x18007500C
 * Callers:
 *     RtlInitEnumerationHashTable @ 0x180074EB0 (RtlInitEnumerationHashTable.c)
 *     RtlInsertEntryHashTable @ 0x180074F20 (RtlInsertEntryHashTable.c)
 *     RtlLookupEntryHashTable @ 0x180074FB0 (RtlLookupEntryHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x180081E00 (RtlRemoveEntryHashTable.c)
 *     RtlInitStrongEnumerationHashTable @ 0x1800EB490 (RtlInitStrongEnumerationHashTable.c)
 * Callees:
 *     RtlpGetChainHead @ 0x18007515C (RtlpGetChainHead.c)
 */

_QWORD *__fastcall RtlpPopulateContext(_DWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r10d
  __int64 v4; // rdx
  _QWORD *result; // rax
  _QWORD *v6; // r9
  unsigned __int64 v7; // r11
  _QWORD *v8; // rdx
  _QWORD *v9; // rcx

  v3 = (69069 * (a3 >> a1[1]) + 1) & 0xFFFF0000 | ((1103515245 * (a3 >> a1[1]) + 12345) >> 16);
  v4 = v3 & a1[4];
  if ( (unsigned int)v4 < a1[3] )
    v4 = v3 & ((2 * a1[4]) | 1);
  result = (_QWORD *)RtlpGetChainHead(a1, v4);
  v8 = result;
  if ( (_QWORD *)*result != result )
  {
    do
    {
      v9 = (_QWORD *)*v8;
      if ( *(_QWORD *)(*v8 + 16LL) >= v7 && v9[2] )
        break;
      v8 = (_QWORD *)*v8;
    }
    while ( (_QWORD *)*v9 != result );
  }
  *v6 = result;
  v6[1] = v8;
  v6[2] = v7;
  return result;
}
