/*
 * XREFs of KeEnumerateQueueApc @ 0x1401D6518
 * Callers:
 *     DbgkpLkmdSnapThread @ 0x1401B784C (DbgkpLkmdSnapThread.c)
 * Callees:
 *     KiAcquireThreadLockRaiseToDpc @ 0x1400CCC8C (KiAcquireThreadLockRaiseToDpc.c)
 */

__int64 __fastcall KeEnumerateQueueApc(
        __int64 a1,
        void (__fastcall *a2)(_QWORD *, __int64, __int64),
        __int64 a3,
        char *a4)
{
  char v7; // bl
  char v8; // bp
  _QWORD **v9; // r14
  _QWORD *i; // rdi
  __int64 result; // rax
  unsigned __int8 v12; // [rsp+50h] [rbp+8h] BYREF

  if ( a4 )
  {
    v7 = *a4;
    v8 = *a4;
  }
  else
  {
    v7 = 0;
    v8 = 1;
  }
  KiAcquireThreadLockRaiseToDpc(a1, &v12);
  do
  {
    v9 = (_QWORD **)(16LL * v7 + a1 + 152);
    for ( i = *v9; i != v9; i = (_QWORD *)*i )
      a2(i - 2, 88LL, a3);
    ++v7;
  }
  while ( v7 <= v8 );
  *(_QWORD *)(a1 + 64) = 0LL;
  result = v12;
  __writecr8(v12);
  return result;
}
