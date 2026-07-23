/*
 * XREFs of MmDeleteTeb @ 0x1404B2E50
 * Callers:
 *     PspAllocateThread @ 0x1404F8890 (PspAllocateThread.c)
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 *     PspInsertThread @ 0x1404F9B40 (PspInsertThread.c)
 * Callees:
 *     MiObtainReferencedVad @ 0x14003DEA0 (MiObtainReferencedVad.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiDeleteTebRange @ 0x1404B2EE8 (MiDeleteTebRange.c)
 */

int __fastcall MmDeleteTeb(_KPROCESS *a1, __int64 a2)
{
  int v3; // ebx
  unsigned __int64 v4; // rax
  int v6; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v7[48]; // [rsp+28h] [rbp-40h] BYREF

  v3 = 6200;
  if ( a1[1].ActiveProcessors.Bitmap[7] )
    v3 = 10296;
  KiStackAttachProcess(a1, 0, (__int64)v7);
  v4 = MiObtainReferencedVad(a2, &v6);
  if ( v4 )
    MiDeleteTebRange(v4, a2, (v3 + 4095) & 0xFFFFF000, 0x4000LL);
  return KiUnstackDetachProcess((struct _KTHREAD *)v7, 0);
}
