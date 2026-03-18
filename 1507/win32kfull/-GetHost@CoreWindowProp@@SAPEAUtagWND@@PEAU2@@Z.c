/*
 * XREFs of ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C022615C
 * Callers:
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C0004690 (-RequestModernAppClose@@YAHXZ.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0009784 (-IsHostThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     xxxActivateThisWindow @ 0x1C007F264 (xxxActivateThisWindow.c)
 * Callees:
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 */

struct tagWND *__fastcall CoreWindowProp::GetHost(struct tagWND *a1)
{
  struct tagWND *result; // rax

  result = (struct tagWND *)GetProp((__int64)a1, CoreWindowProp::s_atom, 1LL);
  if ( result )
    return (struct tagWND *)*((_QWORD *)result + 3);
  return result;
}
