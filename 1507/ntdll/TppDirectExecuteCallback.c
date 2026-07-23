/*
 * XREFs of TppDirectExecuteCallback @ 0x18000AF10
 * Callers:
 *     <none>
 * Callees:
 *     TppFreeDirectParams @ 0x18000AFFC (TppFreeDirectParams.c)
 *     TpPostTask @ 0x180027C78 (TpPostTask.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 */

void __fastcall TppDirectExecuteCallback(_QWORD *a1, _RTL_SRWLOCK *a2)
{
  _RTL_SRWLOCK *v4; // rax
  _QWORD *Value; // rdi
  unsigned __int64 v6; // rdx
  bool v7; // bl
  __int128 v8; // [rsp+20h] [rbp-28h]
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  RtlAcquireSRWLockExclusive(a2 + 4);
  v4 = a2 + 5;
  if ( (_RTL_SRWLOCK *)v4->Value == v4 )
  {
    Value = 0LL;
  }
  else
  {
    Value = (_QWORD *)v4->Value;
    v6 = *(_QWORD *)v4->Value;
    if ( *(_RTL_SRWLOCK **)(v4->Value + 8) != v4 || *(_QWORD **)(v6 + 8) != Value )
      __fastfail(3u);
    v4->Value = v6;
    *(_QWORD *)(v6 + 8) = v4;
  }
  v7 = v4->Value != (_QWORD)v4;
  RtlReleaseSRWLockExclusive(a2 + 4);
  if ( v7 )
    TpPostTask(a2, a1[16], 1LL);
  if ( Value )
  {
    v8 = *((_OWORD *)Value - 2);
    v9 = *((_OWORD *)Value - 1);
    TppFreeDirectParams(Value - 4);
    a1[11] = a2[7].Value;
    a1[12] = a2;
    ((void (__fastcall *)(_QWORD *, _RTL_SRWLOCK *, _QWORD, __int128 *))a2[7].Value)(a1, a2, *((_QWORD *)&v8 + 1), &v9);
  }
}
