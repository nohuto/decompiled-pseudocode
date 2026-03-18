/*
 * XREFs of ExpandedMonitorSpace @ 0x14003121C
 * Callers:
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEAUtagWND@@AEBU1@@Z @ 0x1400309A0 (-MiPConvertPoint@@YA-AUtagPOINT@@PEAUtagWND@@AEBU1@@Z.c)
 *     _GetPointerDeviceRects @ 0x140030CA8 (_GetPointerDeviceRects.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1401D1C14 (VirtualizeMultiMonDigitizerSize.c)
 *     GetHimetricScaleForMonitor @ 0x140260D78 (GetHimetricScaleForMonitor.c)
 * Callees:
 *     ExpandMonitorSpaceVertex @ 0x1401768E8 (ExpandMonitorSpaceVertex.c)
 */

__int64 __fastcall ExpandedMonitorSpace(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // di
  unsigned __int16 v4; // bx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  __int128 v9; // [rsp+20h] [rbp-18h]

  v2 = a2;
  v4 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo(a1, a2) + 96) + 40LL) + 62LL);
  UserSessionState = W32GetUserSessionState(v6, v5);
  *(_OWORD *)a1 = 0LL;
  v9 = *(_OWORD *)(**(_QWORD **)(UserSessionState + 56968) + 24LL);
  *(_QWORD *)a1 = ExpandMonitorSpaceVertex(v2, v4, v9);
  *(_QWORD *)(a1 + 8) = ExpandMonitorSpaceVertex(v2, v4, *((_QWORD *)&v9 + 1));
  return a1;
}
