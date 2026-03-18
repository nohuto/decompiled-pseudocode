/*
 * XREFs of ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01E16B0
 * Callers:
 *     ?xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E1B74 (-xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E1CE0 (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E2238 (-xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E24AC (-xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E26E0 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E29D0 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxDDETrackSendHook @ 0x1C01E3110 (xxxDDETrackSendHook.c)
 * Callees:
 *     ?Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01E1734 (-Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 */

void *__fastcall AnticipatePost(
        struct tagDDECONV *a1,
        unsigned int (*a2)(unsigned int *, __int64 *, struct tagDDECONV *),
        void *a3,
        void *a4,
        struct tagINTDDEINFO *a5,
        unsigned int a6)
{
  struct tagXSTATE *v7; // rdi
  void *result; // rax
  char *v9; // rcx

  v7 = Createpxs(a2, a3, a4, a5, a6);
  result = 0LL;
  if ( v7 )
  {
    v9 = (char *)a1 + 56;
    *((_QWORD *)v7 + 2) = *((_QWORD *)a1 + 2);
    if ( *((_QWORD *)a1 + 7) )
      v9 = (char *)(*((_QWORD *)a1 + 8) + 24LL);
    HMAssignmentLock(v9, v7);
    HMAssignmentLock((char *)a1 + 64, v7);
    return *(void **)v7;
  }
  return result;
}
