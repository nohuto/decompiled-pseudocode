/*
 * XREFs of MmInitializeHandBuiltProcess2 @ 0x140549A5C
 * Callers:
 *     PspAllocateProcess @ 0x14044C768 (PspAllocateProcess.c)
 * Callees:
 *     MiGetWsAndInsertVad @ 0x140062070 (MiGetWsAndInsertVad.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     MiGetWsAndMakePageTablesNx @ 0x140141B8C (MiGetWsAndMakePageTablesNx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MiInsertVadCharges @ 0x140415EF0 (MiInsertVadCharges.c)
 *     MiAllocateVad @ 0x140463408 (MiAllocateVad.c)
 *     MiInitializeLockedPagesTracking @ 0x140621E34 (MiInitializeLockedPagesTracking.c)
 */

__int64 __fastcall MmInitializeHandBuiltProcess2(_KPROCESS *BugCheckParameter1)
{
  int inserted; // ebx
  _QWORD *Vad; // rax
  unsigned __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  $D4FCF91253F76F57393CBFE908971F67 v8; // [rsp+20h] [rbp-48h] BYREF

  inserted = 0;
  MiGetWsAndMakePageTablesNx();
  KiStackAttachProcess(BugCheckParameter1, 0LL, (__int64)&v8);
  if ( (char *)MmHighestUserAddress - 0x10000 > (char *)0x7FFE0000 )
  {
    Vad = MiAllocateVad(0x7FFE0000uLL, 0x7FFEFFFFuLL);
    v4 = (unsigned __int64)Vad;
    if ( Vad )
    {
      inserted = MiInsertVadCharges((__int64)Vad, BugCheckParameter1);
      MiGetWsAndInsertVad(v4, v5, v6);
    }
    else
    {
      inserted = -1073741801;
    }
  }
  KiUnstackDetachProcess(&v8, 0LL);
  if ( inserted >= 0 && (MmTrackLockedPages & 0x10000001) == 1 )
    MiInitializeLockedPagesTracking(BugCheckParameter1);
  return (unsigned int)inserted;
}
