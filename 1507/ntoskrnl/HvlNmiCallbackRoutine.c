/*
 * XREFs of HvlNmiCallbackRoutine @ 0x1401EF364
 * Callers:
 *     <none>
 * Callees:
 *     PopPoCoalescinCallback @ 0x140139F40 (PopPoCoalescinCallback.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

BOOLEAN __fastcall HvlNmiCallbackRoutine(PVOID Context, BOOLEAN Handled)
{
  _QWORD *v2; // rbx
  ULONG_PTR v3; // r9
  ULONG_PTR v4; // r8
  ULONG_PTR v5; // rdx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-18h]

  v2 = qword_14034D088;
  if ( qword_14034D088 && (*((_DWORD *)qword_14034D088 + 1) & 1) != 0 )
  {
    off_140321858();
    v3 = v2[18];
    v4 = v2[17];
    v5 = v2[16];
    BugCheckParameter4 = v2[19];
    KiHypervisorInitiatedCrashDump = 1;
    KeBugCheckEx(0x20001u, v5, v4, v3, BugCheckParameter4);
  }
  return 0;
}
