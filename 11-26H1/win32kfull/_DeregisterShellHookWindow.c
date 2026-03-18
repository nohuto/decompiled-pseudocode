/*
 * XREFs of _DeregisterShellHookWindow @ 0x1401C0E60
 * Callers:
 *     ?xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x14004544C (-xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     NtUserDeregisterShellHookWindow @ 0x1401C0710 (NtUserDeregisterShellHookWindow.c)
 *     ?CleanupShellRelatedData@@YA_NPEAUtagWND@@@Z @ 0x1401C0B30 (-CleanupShellRelatedData@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     ?VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1401C1018 (-VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
 */

__int64 __fastcall DeregisterShellHookWindow(struct tagWND *a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rcx

  v5 = *((_QWORD *)a1 + 3);
  if ( !v5 )
    return 0LL;
  if ( (unsigned int)VWPLRemoveBase((struct tagVWPL **)(*(_QWORD *)(v5 + 8) + 224LL), a2, a1, a4, 0LL) )
    SetOrClrWF(0, a1, 0x740u, 1);
  return 1LL;
}
