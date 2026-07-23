/*
 * XREFs of RtlpPopulateContext @ 0x14007D0B0
 * Callers:
 *     RtlInitEnumerationHashTable @ 0x14007CFC8 (RtlInitEnumerationHashTable.c)
 *     RtlInsertEntryHashTable @ 0x14007D02C (RtlInsertEntryHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x14009187C (RtlRemoveEntryHashTable.c)
 *     RtlInitStrongEnumerationHashTable @ 0x1402134EC (RtlInitStrongEnumerationHashTable.c)
 * Callees:
 *     RtlpGetChainHead @ 0x14007D144 (RtlpGetChainHead.c)
 */

_QWORD *__fastcall RtlpPopulateContext(_DWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r8d
  __int64 v4; // rdx
  _QWORD *result; // rax
  unsigned __int64 v6; // r9
  _QWORD *v7; // r11
  _QWORD *v8; // r8
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rdx

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
      v10 = *(_QWORD *)(*v8 + 16LL);
      if ( v10 && v10 >= v6 )
        break;
      v8 = (_QWORD *)*v8;
    }
    while ( (_QWORD *)*v9 != result );
  }
  *v7 = result;
  v7[1] = v8;
  v7[2] = v6;
  return result;
}
