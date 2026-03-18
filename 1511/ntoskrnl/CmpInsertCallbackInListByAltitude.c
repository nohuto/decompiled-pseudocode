/*
 * XREFs of CmpInsertCallbackInListByAltitude @ 0x140548B04
 * Callers:
 *     CmpRegisterCallbackInternal @ 0x140548A24 (CmpRegisterCallbackInternal.c)
 * Callees:
 *     RtlCompareAltitudes @ 0x1400E9E7C (RtlCompareAltitudes.c)
 *     CmpUnlockCallbackList @ 0x1404C4FA0 (CmpUnlockCallbackList.c)
 *     CmpLockCallbackListExclusive @ 0x140548B9C (CmpLockCallbackListExclusive.c)
 */

__int64 __fastcall CmpInsertCallbackInListByAltitude(__int64 a1, char a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rsi
  __int64 *v6; // rax
  __int64 v7; // rcx
  LONG v9; // eax

  v4 = 0;
  CmpLockCallbackListExclusive();
  *(_QWORD *)(a1 + 24) = ++CmpCallbackCookie;
  v5 = CallbackListHead;
  if ( (__int64 *)CallbackListHead != &CallbackListHead )
  {
    do
    {
      v9 = RtlCompareAltitudes((PCUNICODE_STRING)(v5 + 48), (PCUNICODE_STRING)(a1 + 48));
      if ( v9 )
      {
        if ( v9 < 0 )
          break;
      }
      else if ( !a2 )
      {
        goto LABEL_12;
      }
      v5 = *(_QWORD *)v5;
    }
    while ( (__int64 *)v5 != &CallbackListHead );
    if ( !v9 && !a2 )
    {
LABEL_12:
      v4 = -1071906799;
      goto LABEL_4;
    }
  }
  v6 = *(__int64 **)(v5 + 8);
  v7 = *v6;
  *(_QWORD *)a1 = *v6;
  *(_QWORD *)(a1 + 8) = v6;
  if ( *(__int64 **)(v7 + 8) != v6 )
    __fastfail(3u);
  *(_QWORD *)(v7 + 8) = a1;
  *v6 = a1;
  _InterlockedIncrement(&CmpCallBackCount);
LABEL_4:
  CmpUnlockCallbackList();
  return v4;
}
