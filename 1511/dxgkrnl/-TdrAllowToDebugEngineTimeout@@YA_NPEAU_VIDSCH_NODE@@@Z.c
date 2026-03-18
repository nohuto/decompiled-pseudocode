/*
 * XREFs of ?TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@@Z @ 0x1C0143110
 * Callers:
 *     <none>
 * Callees:
 *     ?TdrValidateDebugMode@@YAXXZ @ 0x1C001E4B0 (-TdrValidateDebugMode@@YAXXZ.c)
 */

bool __fastcall TdrAllowToDebugEngineTimeout(struct _VIDSCH_NODE *a1)
{
  struct _VIDSCH_NODE *v1; // rdi
  char v2; // al

  v1 = a1;
  if ( (dword_1C0048024 & 1) != 0 )
  {
    v2 = byte_1C0048028;
  }
  else
  {
    LOBYTE(a1) = 1;
    dword_1C0048024 |= 1u;
    v2 = (unsigned __int8)WdIsDebuggerPresent(a1) != 0;
    byte_1C0048028 = v2;
  }
  byte_1C0047174 = v2;
  TdrValidateDebugMode();
  if ( (byte_1C0047174 || (unsigned __int8)WdQueryDebugFlag(0LL)) && !g_TdrDebugMode )
  {
    DbgPrintEx(
      0x65u,
      0,
      "\n"
      "The GPU Scheduler detected an engine timeout condition. We broke into the  debugger to allow a chance for debugging this issue.\n");
    g_EngineTimeoutNode = v1;
    g_TdrDebugMode = -1;
    DbgPrintEx(
      0x65u,
      0,
      "\n"
      "Please edit dxgkrnl!g_TdrDebugMode variable to choose timeout debug policy\n"
      "using command 'ed dxgkrnl!g_TdrDebugMode (mode)'\n"
      "           or 'ed 0x%p (mode)'\n"
      "where (mode) is: \n"
      "      0x00 - to continue execution as planned in end-user scenario\n"
      "      0x01 - to ignore timeout (useful to debug the timeout)\n"
      "      0x02 - to continue execution as with mode 0x00 but disable the timeout debugging\n"
      "      0x03 - same as 0x02 but will not check for consecutive recoveries.\n"
      "\n",
      (const void *)&g_TdrDebugMode);
    __debugbreak();
  }
  return g_TdrDebugMode == 1;
}
