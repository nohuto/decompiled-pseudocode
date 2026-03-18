/*
 * XREFs of FreeWindowMessageFilter @ 0x1C008A1A4
 * Callers:
 *     xxxFreeWindow @ 0x1C0088BC8 (xxxFreeWindow.c)
 *     _ChangeWindowMessageFilterEx @ 0x1C00E2230 (_ChangeWindowMessageFilterEx.c)
 * Callees:
 *     ?VWPLRemoveBase@@YAHPEAPEAUVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C00E3ABC (-VWPLRemoveBase@@YAHPEAPEAUVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
 *     ?MsgLookupTableCleanUp@@YAXPEAPEAX@Z @ 0x1C00EA094 (-MsgLookupTableCleanUp@@YAXPEAPEAX@Z.c)
 */

void __fastcall FreeWindowMessageFilter(struct tagWND *a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rax
  void **v5; // [rsp+40h] [rbp+8h] BYREF

  v4 = *((_QWORD *)a1 + 2);
  v5 = 0LL;
  if ( (unsigned int)VWPLRemoveBase(
                       (struct VWPL **)(*(_QWORD *)(v4 + 384) + 808LL),
                       a2,
                       a1,
                       a4,
                       (unsigned __int64 *)&v5) )
    MsgLookupTableCleanUp(v5);
}
