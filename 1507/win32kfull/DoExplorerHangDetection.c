/*
 * XREFs of DoExplorerHangDetection @ 0x1C00092E0
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C0049418 (xxxDoHotKeyStuff.c)
 *     ?_OnEnterActive@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1C0229C80 (-_OnEnterActive@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z.c)
 * Callees:
 *     ?IsValidForHangTest@@YAHPEAUtagTHREADINFO@@@Z @ 0x1C0009350 (-IsValidForHangTest@@YAHPEAUtagTHREADINFO@@@Z.c)
 *     IsThreadHung @ 0x1C008CD94 (IsThreadHung.c)
 *     ?ReportHungExplorerToWer@@YAJPEAUtagDESKTOP@@PEAUtagTHREADINFO@@@Z @ 0x1C0226320 (-ReportHungExplorerToWer@@YAJPEAUtagDESKTOP@@PEAUtagTHREADINFO@@@Z.c)
 */

struct tagTHREADINFO *__fastcall DoExplorerHangDetection(struct tagTHREADINFO **a1)
{
  struct tagTHREADINFO *result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  struct tagTHREADINFO *v5; // rdx

  result = (struct tagTHREADINFO *)IsValidForHangTest(a1[35]);
  if ( (_DWORD)result )
  {
    result = a1[1];
    v3 = *((_QWORD *)result + 23);
    if ( v3 )
    {
      result = (struct tagTHREADINFO *)IsValidForHangTest(*(struct tagTHREADINFO **)(v3 + 16));
      if ( (_DWORD)result )
      {
        if ( (unsigned int)IsThreadHung(v4, gdwHungAppTimeout) )
        {
          result = a1[1];
          v5 = *(struct tagTHREADINFO **)(*((_QWORD *)result + 23) + 16LL);
        }
        else
        {
          result = (struct tagTHREADINFO *)IsThreadHung(a1[35], gdwHungAppTimeout);
          if ( !(_DWORD)result )
            return result;
          v5 = a1[35];
        }
        if ( v5 )
          return (struct tagTHREADINFO *)ReportHungExplorerToWer((struct tagDESKTOP *)a1, v5);
      }
    }
  }
  return result;
}
