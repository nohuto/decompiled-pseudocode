/*
 * XREFs of Simulator_TestNotifyRet @ 0x1C004333C
 * Callers:
 *     Simulator_AsyncEvalObjectCallBack @ 0x1C0042960 (Simulator_AsyncEvalObjectCallBack.c)
 *     Simulator_Post_Generic @ 0x1C0042F70 (Simulator_Post_Generic.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Simulator_TestNotifyRet(_DWORD *Argument1, int a2)
{
  if ( g_SimulatorCallbackObject )
  {
    Argument1[18] = a2;
    Argument1[2] = 2;
    ExNotifyCallback(g_SimulatorCallbackObject, Argument1, 0LL);
    return (unsigned int)Argument1[18];
  }
  else
  {
    __debugbreak();
    return 3221225473LL;
  }
}
