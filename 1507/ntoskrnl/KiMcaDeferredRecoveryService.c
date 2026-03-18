/*
 * XREFs of KiMcaDeferredRecoveryService @ 0x14018CF60
 * Callers:
 *     sub_140268DB8 @ 0x140268DB8 (sub_140268DB8.c)
 *     DeferredRoutine @ 0x140268DE0 (DeferredRoutine.c)
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
