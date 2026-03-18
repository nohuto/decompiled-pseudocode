/*
 * XREFs of ?GetDPIMETRICS@@YAPEAUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C00FBD44
 * Callers:
 *     xxxMenuDraw @ 0x1C0050108 (xxxMenuDraw.c)
 *     _ServerFixupMenuDC @ 0x1C00E7618 (_ServerFixupMenuDC.c)
 *     xxxMNInvertItem @ 0x1C010D450 (xxxMNInvertItem.c)
 *     MNDrawArrow @ 0x1C023EF28 (MNDrawArrow.c)
 *     xxxDrawMenuBarTemp @ 0x1C0240598 (xxxDrawMenuBarTemp.c)
 *     xxxMNDrawFullNC @ 0x1C0241710 (xxxMNDrawFullNC.c)
 * Callees:
 *     <none>
 */

struct tagDPIMETRICS *__fastcall GetDPIMETRICS(struct tagWND *a1)
{
  __int64 v1; // rcx
  bool v2; // zf

  if ( a1 )
  {
    if ( (*((_DWORD *)a1 + 72) & 0x10000000) != 0 )
      return (struct tagDPIMETRICS *)GetDPIMETRICSForDpi(*((unsigned __int16 *)a1 + 180));
    v2 = *((_DWORD *)a1 + 86) == 0;
  }
  else
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(0LL) + 776) & 0x2000) != 0 )
      return (struct tagDPIMETRICS *)GetDPIMETRICSForDpi(*(unsigned __int16 *)(gpsi + 7286LL));
    v2 = (*(_DWORD *)(PsGetCurrentProcessWin32Process(v1) + 776) & 0x4000) == 0;
  }
  if ( v2 )
    return (struct tagDPIMETRICS *)GetDPIMETRICSForDpi(96);
  return (struct tagDPIMETRICS *)GetDPIMETRICSForDpi(*(unsigned __int16 *)(gpsi + 7286LL));
}
