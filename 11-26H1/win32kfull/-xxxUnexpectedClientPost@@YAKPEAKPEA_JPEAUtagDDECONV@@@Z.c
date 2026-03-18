/*
 * XREFs of ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402CDC68
 * Callers:
 *     xxxDDETrackPostHook @ 0x14026E294 (xxxDDETrackPostHook.c)
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402CD040 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     ?AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z @ 0x1402CC454 (-AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z.c)
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1402CC6E8 (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?SpontaneousTerminate@@YAKPEAKPEAUtagDDECONV@@@Z @ 0x1402CCB74 (-SpontaneousTerminate@@YAKPEAKPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402CCCA0 (-xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402CD3EC (-xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402CD704 (-xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxClientFreeDDEHandle @ 0x1402D81A4 (xxxClientFreeDDEHandle.c)
 */

__int64 __fastcall xxxUnexpectedClientPost(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  unsigned int (*v4)(unsigned int *, __int64 *, struct tagDDECONV *); // rdx

  switch ( *a1 )
  {
    case 0x3E1u:
      return SpontaneousTerminate(a1, a3);
    case 0x3E2u:
      return xxxAdvise(a1, a2, (struct tagDDECONV **)a3);
    case 0x3E3u:
      v4 = (unsigned int (*)(unsigned int *, __int64 *, struct tagDDECONV *))xxxUnadviseAck;
      return AnticipatePost(*((struct tagDDECONV **)a3 + 4), v4, 0LL, 0LL, 0LL, 0) != 0LL ? 2 : 0;
    case 0x3E4u:
      xxxClientFreeDDEHandle(*a2, 1LL);
      return 3LL;
    case 0x3E5u:
      return AbnormalDDEPost(a3, *a1);
    case 0x3E6u:
      v4 = (unsigned int (*)(unsigned int *, __int64 *, struct tagDDECONV *))xxxRequestAck;
      return AnticipatePost(*((struct tagDDECONV **)a3 + 4), v4, 0LL, 0LL, 0LL, 0) != 0LL ? 2 : 0;
    case 0x3E7u:
      return xxxPoke(a1, (__int64 *)a2, a3);
    case 0x3E8u:
      return xxxExecute(a1, (__int64 *)a2, a3);
  }
  return 0LL;
}
