/*
 * XREFs of MmInitializeHandBuiltProcess2 @ 0x14057ED38
 * Callers:
 *     PspAllocateProcess @ 0x14046F030 (PspAllocateProcess.c)
 * Callees:
 *     MiGetWsAndInsertVad @ 0x140030AE0 (MiGetWsAndInsertVad.c)
 *     KiStackAttachProcess @ 0x1400CD1F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CE820 (KiUnstackDetachProcess.c)
 *     MiGetWsAndMakePageTablesNx @ 0x14014B648 (MiGetWsAndMakePageTablesNx.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     MiInsertVadCharges @ 0x14042FE40 (MiInsertVadCharges.c)
 *     MiAllocateVad @ 0x14046D108 (MiAllocateVad.c)
 *     MiInitializeLockedPagesTracking @ 0x140656EC8 (MiInitializeLockedPagesTracking.c)
 */

__int64 __fastcall MmInitializeHandBuiltProcess2(_KPROCESS *BugCheckParameter1)
{
  __int64 Vad; // rax
  __int64 v3; // rsi
  int inserted; // ebx
  _BYTE v6[48]; // [rsp+20h] [rbp-48h] BYREF

  MiGetWsAndMakePageTablesNx();
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v6);
  Vad = MiAllocateVad(0x7FFE0000uLL, 0x7FFEFFFFuLL);
  v3 = Vad;
  if ( Vad )
  {
    inserted = MiInsertVadCharges(Vad, BugCheckParameter1);
    MiGetWsAndInsertVad(v3);
  }
  else
  {
    inserted = -1073741801;
  }
  KiUnstackDetachProcess((struct _KTHREAD *)v6, 0);
  if ( inserted >= 0 && (MmTrackLockedPages & 0x10000001) == 1 )
    MiInitializeLockedPagesTracking(BugCheckParameter1);
  return (unsigned int)inserted;
}
