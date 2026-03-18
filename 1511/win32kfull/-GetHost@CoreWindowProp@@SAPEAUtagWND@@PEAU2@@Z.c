/*
 * XREFs of ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C022651C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 *     xxxActivateThisWindow @ 0x1C008E8B8 (xxxActivateThisWindow.c)
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C01EA1D0 (-RequestModernAppClose@@YAHXZ.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C022663C (-IsHostThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 */

struct tagWND *__fastcall CoreWindowProp::GetHost(struct tagWND *a1)
{
  struct tagWND *result; // rax

  result = (struct tagWND *)GetProp((__int64)a1, CoreWindowProp::s_atom, 1LL);
  if ( result )
    return (struct tagWND *)*((_QWORD *)result + 3);
  return result;
}
