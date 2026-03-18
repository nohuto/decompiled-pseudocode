/*
 * XREFs of RtlpPopulateContext @ 0x140006BF8
 * Callers:
 *     RtlInitEnumerationHashTable @ 0x140006B94 (RtlInitEnumerationHashTable.c)
 *     RtlInsertEntryHashTable @ 0x140006C90 (RtlInsertEntryHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x1400CFD90 (RtlRemoveEntryHashTable.c)
 *     RtlInitStrongEnumerationHashTable @ 0x1401F9394 (RtlInitStrongEnumerationHashTable.c)
 * Callees:
 *     RtlpGetChainHead @ 0x140006D94 (RtlpGetChainHead.c)
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
  unsigned __int64 v10; // r8

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
      if ( v10 && v10 >= v7 )
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
