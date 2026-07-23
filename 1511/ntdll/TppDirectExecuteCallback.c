/*
 * XREFs of TppDirectExecuteCallback @ 0x18007F240
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     TpPostTask @ 0x18002E55C (TpPostTask.c)
 *     TppFreeDirectParams @ 0x18007F32C (TppFreeDirectParams.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

void __fastcall TppDirectExecuteCallback(__int64 a1, _RTL_SRWLOCK *a2)
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
    TpPostTask((__int64)a2, *(char **)(a1 + 128), 1, 0LL);
  if ( Value )
  {
    v8 = *((_OWORD *)Value - 2);
    v9 = *((_OWORD *)Value - 1);
    TppFreeDirectParams(Value - 4);
    *(_RTL_SRWLOCK *)(a1 + 88) = a2[7];
    *(_QWORD *)(a1 + 96) = a2;
    ((void (__fastcall *)(__int64, _RTL_SRWLOCK *, _QWORD, __int128 *))a2[7].Value)(a1, a2, *((_QWORD *)&v8 + 1), &v9);
  }
}
