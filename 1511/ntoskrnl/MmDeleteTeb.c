/*
 * XREFs of MmDeleteTeb @ 0x1404A92F8
 * Callers:
 *     PspInsertThread @ 0x1403EF330 (PspInsertThread.c)
 *     PspExitThread @ 0x1403F0588 (PspExitThread.c)
 *     PspAllocateThread @ 0x1403F0BB0 (PspAllocateThread.c)
 * Callees:
 *     MiObtainReferencedVad @ 0x14004B200 (MiObtainReferencedVad.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MiDeleteTebRange @ 0x1404A9390 (MiDeleteTebRange.c)
 */

__int64 __fastcall MmDeleteTeb(_KPROCESS *a1, __int64 a2)
{
  int v3; // ebx
  unsigned int *v4; // rax
  int v6; // [rsp+20h] [rbp-48h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v7; // [rsp+28h] [rbp-40h] BYREF

  v3 = 6200;
  if ( a1[1].ActiveProcessors.Bitmap[7] )
    v3 = 10296;
  KiStackAttachProcess(a1, 0LL, (__int64)&v7);
  v4 = MiObtainReferencedVad(a2, &v6);
  if ( v4 )
    MiDeleteTebRange(v4, a2, (v3 + 4095) & 0xFFFFF000, 0x4000LL);
  return KiUnstackDetachProcess(&v7, 0LL);
}
