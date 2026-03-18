/*
 * XREFs of ?GetDPIMETRICS@@YAPEAUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C010834C
 * Callers:
 *     xxxMenuDraw @ 0x1C0014214 (xxxMenuDraw.c)
 *     _ServerFixupMenuDC @ 0x1C00ED968 (_ServerFixupMenuDC.c)
 *     xxxMNInvertItem @ 0x1C0139128 (xxxMNInvertItem.c)
 *     MNDrawArrow @ 0x1C023F0C4 (MNDrawArrow.c)
 *     xxxDrawMenuBarTemp @ 0x1C0240734 (xxxDrawMenuBarTemp.c)
 *     xxxMNDrawFullNC @ 0x1C02418A0 (xxxMNDrawFullNC.c)
 * Callees:
 *     <none>
 */

struct tagDPIMETRICS *__fastcall GetDPIMETRICS(struct tagWND *a1)
{
  bool v1; // zf
  __int64 v3; // rcx

  if ( a1 )
  {
    if ( (*((_DWORD *)a1 + 72) & 0x10000000) != 0 )
      return (struct tagDPIMETRICS *)GetDPIMETRICSForDpi(*((unsigned __int16 *)a1 + 180));
    v1 = *((_DWORD *)a1 + 86) == 0;
  }
  else
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(0LL) + 776) & 0x2000) != 0 )
      return (struct tagDPIMETRICS *)GetDPIMETRICSForDpi(*(unsigned __int16 *)(gpsi + 7286LL));
    v1 = (*(_DWORD *)(PsGetCurrentProcessWin32Process(v3) + 776) & 0x4000) == 0;
  }
  if ( !v1 )
    return (struct tagDPIMETRICS *)GetDPIMETRICSForDpi(*(unsigned __int16 *)(gpsi + 7286LL));
  return (struct tagDPIMETRICS *)GetDPIMETRICSForDpi(96);
}
