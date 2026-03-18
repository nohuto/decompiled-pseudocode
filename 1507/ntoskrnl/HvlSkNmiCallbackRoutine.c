/*
 * XREFs of HvlSkNmiCallbackRoutine @ 0x1401EF744
 * Callers:
 *     <none>
 * Callees:
 *     PopPoCoalescinCallback @ 0x140139F40 (PopPoCoalescinCallback.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     AlpcMessageDeleteProcedure @ 0x14055E308 (AlpcMessageDeleteProcedure.c)
 */

BOOLEAN __fastcall HvlSkNmiCallbackRoutine(PVOID *Context, BOOLEAN Handled)
{
  void *v2; // rbx
  ULONG_PTR v3; // r9
  ULONG_PTR v4; // r8
  ULONG_PTR v5; // rdx
  ULONG v6; // ecx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-18h]

  v2 = qword_14034D088;
  if ( qword_14034D088 && (*((_DWORD *)qword_14034D088 + 1) & 1) != 0 )
  {
    HvlEnlightenments &= 0x4000u;
    off_140321960(Context);
    off_140321858();
    v3 = *((_QWORD *)v2 + 4);
    v4 = *((_QWORD *)v2 + 3);
    v5 = *((_QWORD *)v2 + 2);
    v6 = *((_DWORD *)v2 + 2);
    BugCheckParameter4 = *((_QWORD *)v2 + 5);
    KiHypervisorInitiatedCrashDump = 1;
    PoAllProcIntrDisabled = 1;
    KeBugCheckEx(v6, v5, v4, v3, BugCheckParameter4);
  }
  return 0;
}
