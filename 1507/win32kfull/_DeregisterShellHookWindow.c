/*
 * XREFs of _DeregisterShellHookWindow @ 0x1C00FF250
 * Callers:
 *     xxxFreeWindow @ 0x1C0088BC8 (xxxFreeWindow.c)
 * Callees:
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     ?VWPLRemoveBase@@YAHPEAPEAUVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C00E3ABC (-VWPLRemoveBase@@YAHPEAPEAUVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
 */

__int64 __fastcall DeregisterShellHookWindow(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx

  v5 = *((_QWORD *)a1 + 3);
  if ( !v5 )
    return 0LL;
  if ( (unsigned int)VWPLRemoveBase((struct VWPL **)(*(_QWORD *)(v5 + 8) + 248LL), a2, a1, a4, 0LL) )
    SetOrClrWF(0, a1, 0x740u, 1);
  return 1LL;
}
