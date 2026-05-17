/*
 * XREFs of RtlpPageHeapStop @ 0x1800C6D08
 * Callers:
 *     RtlApplicationVerifierStop @ 0x1800C6BE0 (RtlApplicationVerifierStop.c)
 * Callees:
 *     DbgPrint @ 0x180010000 (DbgPrint.c)
 */

void __fastcall __noreturn RtlpPageHeapStop(
        const void *a1,
        const char *a2,
        const void *a3,
        const char *a4,
        const void *a5,
        const char *a6,
        const void *a7,
        const char *a8,
        const void *a9,
        const char *a10)
{
  __int128 v10; // xmm1
  __int64 v11; // xmm0_8

  v10 = xmmword_1801459B0;
  AVrfpPageHeapPreviousStopData = AVrfpPageHeapStopData;
  *(_QWORD *)&AVrfpPageHeapStopData = a1;
  v11 = qword_1801459C0;
  *((_QWORD *)&xmmword_1801459B0 + 1) = a7;
  qword_1801459C0 = (__int64)a9;
  qword_1801450A0 = v11;
  xmmword_180145090 = v10;
  *((_QWORD *)&AVrfpPageHeapStopData + 1) = a3;
  *(_QWORD *)&xmmword_1801459B0 = a5;
  DbgPrint(
    "\n"
    "\n"
    "===========================================================\n"
    "VERIFIER STOP %p: pid 0x%X: %s \n"
    "\n"
    "\t%p : %s\n"
    "\t%p : %s\n"
    "\t%p : %s\n"
    "\t%p : %s\n"
    "===========================================================\n"
    "\n",
    a1,
    LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10);
  __debugbreak();
}
