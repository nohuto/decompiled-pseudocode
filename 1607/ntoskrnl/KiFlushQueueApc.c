/*
 * XREFs of KiFlushQueueApc @ 0x1400C99F4
 * Callers:
 *     KeRundownApcQueues @ 0x1404EE9DC (KeRundownApcQueues.c)
 * Callees:
 *     KiAcquireThreadLockRaiseToDpc @ 0x1400CCC8C (KiAcquireThreadLockRaiseToDpc.c)
 */

_QWORD *__fastcall KiFlushQueueApc(__int64 a1, char a2)
{
  _QWORD *result; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rdx
  _QWORD *v7; // rdx
  unsigned __int8 v8; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 == 1 )
  {
    KiAcquireThreadLockRaiseToDpc(a1, &v8);
    if ( *(_QWORD *)(a1 + 168) == a1 + 168 )
    {
      *(_QWORD *)(a1 + 64) = 0LL;
      __writecr8(v8);
      return 0LL;
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 16LL * a2 + 152) == a1 + 16LL * a2 + 152 )
      return 0LL;
    KiAcquireThreadLockRaiseToDpc(a1, &v8);
  }
  v5 = (_QWORD *)(16LL * a2 + a1 + 152);
  result = (_QWORD *)*v5;
  if ( (_QWORD *)*v5 == v5 )
  {
    result = 0LL;
  }
  else
  {
    v6 = (_QWORD *)v5[1];
    if ( (_QWORD *)result[1] != v5 || (_QWORD *)*v6 != v5 )
      __fastfail(3u);
    *v6 = result;
    result[1] = v6;
    v7 = result;
    do
    {
      *((_BYTE *)v7 + 66) = 0;
      v7 = (_QWORD *)*v7;
    }
    while ( v7 != result );
    v5[1] = v5;
    *v5 = v5;
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  __writecr8(v8);
  return result;
}
