/*
 * XREFs of MiDeleteAllPartialCloneVads @ 0x140663140
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x14050A958 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiDeleteVad @ 0x140028450 (MiDeleteVad.c)
 *     MiLockVad @ 0x14002BB30 (MiLockVad.c)
 *     MiReferenceVad @ 0x14002BEFC (MiReferenceVad.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

int __fastcall MiDeleteAllPartialCloneVads(_KPROCESS *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *v4; // rbx
  _QWORD *i; // rax
  _QWORD *v6; // rax
  __int64 v7; // rdi
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  _BYTE v11[48]; // [rsp+20h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  KiStackAttachProcess(a1, 0, (__int64)v11);
  v4 = 0LL;
  for ( i = (_QWORD *)KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[3]; i; i = (_QWORD *)*i )
    v4 = i;
  while ( v4 )
  {
    v6 = (_QWORD *)v4[1];
    v7 = (__int64)v4;
    v8 = v4;
    if ( v6 )
    {
      do
      {
        v4 = v6;
        v6 = (_QWORD *)*v6;
      }
      while ( v6 );
    }
    else
    {
      while ( 1 )
      {
        v4 = (_QWORD *)(v4[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v4 || (_QWORD *)*v4 == v8 )
          break;
        v8 = v4;
      }
    }
    MiLockVad((__int64)CurrentThread, v7);
    MiReferenceVad(v7);
    MiDeleteVad(v9, a2);
  }
  return KiUnstackDetachProcess((struct _KTHREAD *)v11, 0);
}
