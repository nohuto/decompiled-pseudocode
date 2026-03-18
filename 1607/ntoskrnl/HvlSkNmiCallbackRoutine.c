/*
 * XREFs of HvlSkNmiCallbackRoutine @ 0x1401C05B0
 * Callers:
 *     <none>
 * Callees:
 *     xHalFreeMessageTarget @ 0x140130D64 (xHalFreeMessageTarget.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     CmpMarkLockTryAcquired @ 0x1405281C8 (CmpMarkLockTryAcquired.c)
 */

BOOLEAN __fastcall HvlSkNmiCallbackRoutine(PVOID *Context, BOOLEAN Handled)
{
  void *v2; // rbx
  ULONG_PTR v3; // r9
  ULONG_PTR v4; // r8
  ULONG_PTR v5; // rdx
  ULONG v6; // ecx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-18h]

  v2 = qword_1403221C8;
  if ( qword_1403221C8 && (*((_DWORD *)qword_1403221C8 + 1) & 1) != 0 )
  {
    HvlEnlightenments &= 0x2000u;
    off_1402F24B0(Context);
    off_1402F23A8();
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
