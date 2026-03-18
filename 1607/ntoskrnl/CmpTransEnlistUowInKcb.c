/*
 * XREFs of CmpTransEnlistUowInKcb @ 0x140087CB8
 * Callers:
 *     CmpSetKeySecurity @ 0x14000A660 (CmpSetKeySecurity.c)
 *     CmDeleteValueKey @ 0x1403FAE34 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x1403FE088 (CmpCreateChild.c)
 *     CmDeleteKey @ 0x1403FF378 (CmDeleteKey.c)
 *     CmSetValueKey @ 0x1404037B0 (CmSetValueKey.c)
 *     CmRenameKey @ 0x1405FD4E8 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1405FE35C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405FE7F4 (CmSetLastWriteTimeKey.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x14060DD60 (CmpUndoDeleteKeyForTransEx.c)
 * Callees:
 *     CmpReferenceKeyControlBlock @ 0x1404A0538 (CmpReferenceKeyControlBlock.c)
 */

__int64 __fastcall CmpTransEnlistUowInKcb(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  __int64 result; // rax

  v2 = a2 + 200;
  v4 = *(_QWORD **)(a2 + 208);
  v5 = a1 + 4;
  if ( *v4 != v2 )
    __fastfail(3u);
  *v5 = v2;
  a1[5] = v4;
  *v4 = v5;
  *(_QWORD *)(v2 + 8) = v5;
  result = CmpReferenceKeyControlBlock(a2);
  a1[6] = a2;
  return result;
}
