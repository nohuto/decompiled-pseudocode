/*
 * XREFs of MiDeleteAllPartialCloneVads @ 0x14062CB58
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x14046100C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiLockVad @ 0x140063AC0 (MiLockVad.c)
 *     MiReferenceVad @ 0x140063C70 (MiReferenceVad.c)
 *     MiDeleteVad @ 0x14006AE10 (MiDeleteVad.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall MiDeleteAllPartialCloneVads(_KPROCESS *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v2; // rbx
  _QWORD *i; // rax
  _QWORD *v4; // rax
  __int64 v5; // rdi
  _QWORD *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  $D4FCF91253F76F57393CBFE908971F67 v10; // [rsp+20h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  KiStackAttachProcess(a1, 0LL, (__int64)&v10);
  v2 = 0LL;
  for ( i = (_QWORD *)KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[1]; i; i = (_QWORD *)*i )
    v2 = i;
  while ( v2 )
  {
    v4 = (_QWORD *)v2[1];
    v5 = (__int64)v2;
    v6 = v2;
    if ( v4 )
    {
      do
      {
        v2 = v4;
        v4 = (_QWORD *)*v4;
      }
      while ( v4 );
    }
    else
    {
      while ( 1 )
      {
        v2 = (_QWORD *)(v2[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v2 || (_QWORD *)*v2 == v6 )
          break;
        v6 = v2;
      }
    }
    MiLockVad((__int64)CurrentThread, v5);
    MiReferenceVad(v5);
    MiDeleteVad(v7, 0x40000000, v8);
  }
  return KiUnstackDetachProcess(&v10, 0LL);
}
