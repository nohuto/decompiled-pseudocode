/*
 * XREFs of KiMcaDeferredRecoveryService @ 0x14015D610
 * Callers:
 *     sub_140218690 @ 0x140218690 (sub_140218690.c)
 *     DeferredRoutine @ 0x1402186B8 (DeferredRoutine.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn KiMcaDeferredRecoveryService(
        ULONG BugCheckCode,
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h]

  retaddr = 0LL;
  KeBugCheckEx(BugCheckCode, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}
