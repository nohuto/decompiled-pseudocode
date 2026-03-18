/*
 * XREFs of ?Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01E1734
 * Callers:
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01E16B0 (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E1CE0 (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C01E206C (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E2340 (-xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E26E0 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagXSTATE *__fastcall Createpxs(
        unsigned int (*a1)(unsigned int *, __int64 *, struct tagDDECONV *),
        void *a2,
        void *a3,
        struct tagINTDDEINFO *a4,
        unsigned int a5)
{
  void *v7; // rdi
  struct tagXSTATE *result; // rax
  __int64 v10; // rdx
  __int64 v11; // r8

  v7 = a3;
  LOBYTE(a3) = 11;
  result = (struct tagXSTATE *)HMAllocObject(gptiCurrent, 0LL, a3);
  if ( result )
  {
    *((_QWORD *)result + 3) = 0LL;
    *((_QWORD *)result + 4) = a1;
    *((_QWORD *)result + 5) = a2;
    *((_QWORD *)result + 6) = v7;
    *((_QWORD *)result + 7) = a4;
    *((_DWORD *)result + 16) = a5;
  }
  else
  {
    if ( a4 )
      Win32FreePool(a4, v10, v11);
    return 0LL;
  }
  return result;
}
