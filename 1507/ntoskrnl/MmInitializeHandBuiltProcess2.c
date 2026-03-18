/*
 * XREFs of MmInitializeHandBuiltProcess2 @ 0x1405C008C
 * Callers:
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 * Callees:
 *     MiGetWsAndInsertVad @ 0x14008A9F0 (MiGetWsAndInsertVad.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     MiGetWsAndMakePageTablesNx @ 0x14016F234 (MiGetWsAndMakePageTablesNx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiAllocateVad @ 0x140468608 (MiAllocateVad.c)
 *     MiInsertVadCharges @ 0x1404B8410 (MiInsertVadCharges.c)
 *     MiInitializeLockedPagesTracking @ 0x1406A1690 (MiInitializeLockedPagesTracking.c)
 */

__int64 __fastcall MmInitializeHandBuiltProcess2(_KPROCESS *BugCheckParameter1)
{
  int inserted; // ebx
  _QWORD *Vad; // rax
  unsigned __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdi
  _BYTE v8[48]; // [rsp+20h] [rbp-48h] BYREF

  inserted = 0;
  MiGetWsAndMakePageTablesNx();
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v8);
  if ( (char *)MmHighestUserAddress - 0x10000 > (char *)0x7FFE0000 )
  {
    Vad = MiAllocateVad(0x7FFE0000uLL, 0x7FFEFFFFuLL);
    v6 = (__int64)Vad;
    if ( Vad )
    {
      inserted = MiInsertVadCharges((__int64)Vad, BugCheckParameter1, v4, v5);
      MiGetWsAndInsertVad(v6);
    }
    else
    {
      inserted = -1073741801;
    }
  }
  KiUnstackDetachProcess((struct _KTHREAD *)v8, 0);
  if ( inserted >= 0 && (MmTrackLockedPages & 0x10000001) == 1 )
    MiInitializeLockedPagesTracking(BugCheckParameter1);
  return (unsigned int)inserted;
}
