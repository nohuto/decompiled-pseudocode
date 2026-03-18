/*
 * XREFs of CmpInsertCallbackInListByAltitude @ 0x1405BDEBC
 * Callers:
 *     CmpRegisterCallbackInternal @ 0x1405BDDDC (CmpRegisterCallbackInternal.c)
 * Callees:
 *     RtlCompareAltitudes @ 0x1401299C4 (RtlCompareAltitudes.c)
 *     CmpUnlockCallbackList @ 0x1405BDF54 (CmpUnlockCallbackList.c)
 *     CmpLockCallbackListExclusive @ 0x1405BDFD4 (CmpLockCallbackListExclusive.c)
 */

__int64 __fastcall CmpInsertCallbackInListByAltitude(__int64 a1, char a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 *v7; // rax
  __int64 v8; // rcx
  LONG v10; // eax

  v4 = 0;
  CmpLockCallbackListExclusive();
  *(_QWORD *)(a1 + 24) = ++CmpCallbackCookie;
  v6 = CallbackListHead;
  if ( (__int64 *)CallbackListHead != &CallbackListHead )
  {
    do
    {
      v10 = RtlCompareAltitudes((PCUNICODE_STRING)(v6 + 48), (PCUNICODE_STRING)(a1 + 48));
      if ( v10 )
      {
        if ( v10 < 0 )
          break;
      }
      else if ( !a2 )
      {
        goto LABEL_12;
      }
      v6 = *(_QWORD *)v6;
    }
    while ( (__int64 *)v6 != &CallbackListHead );
    if ( !v10 && !a2 )
    {
LABEL_12:
      v4 = -1071906799;
      goto LABEL_4;
    }
  }
  v7 = *(__int64 **)(v6 + 8);
  v8 = *v7;
  *(_QWORD *)a1 = *v7;
  *(_QWORD *)(a1 + 8) = v7;
  if ( *(__int64 **)(v8 + 8) != v7 )
    __fastfail(3u);
  *(_QWORD *)(v8 + 8) = a1;
  *v7 = a1;
  _InterlockedIncrement(&CmpCallBackCount);
LABEL_4:
  CmpUnlockCallbackList(v8, v5);
  return v4;
}
