/*
 * XREFs of MiDeleteAllPartialCloneVads @ 0x1406AA5D0
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x140406774 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiLockVad @ 0x140089660 (MiLockVad.c)
 *     MiReferenceVad @ 0x1400896D4 (MiReferenceVad.c)
 *     MiDeleteVad @ 0x14008B8E0 (MiDeleteVad.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall MiDeleteAllPartialCloneVads(_KPROCESS *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v2; // r8
  __int64 v3; // r9
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
  for ( i = (_QWORD *)KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0]; i; i = (_QWORD *)*i )
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
    MiLockVad((__int64)CurrentThread, v7, v2, v3);
    MiReferenceVad(v7);
    MiDeleteVad(v9, 0x40000000);
  }
  return KiUnstackDetachProcess((struct _KTHREAD *)v11, 0);
}
