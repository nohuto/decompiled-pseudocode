/*
 * XREFs of FeedbackGetWindowSetting @ 0x1C01DB828
 * Callers:
 *     ?ContactVisualization@@YAHKPEBUtagPOINTERINFONODE@@HK@Z @ 0x1C01DABE0 (-ContactVisualization@@YAHKPEBUtagPOINTERINFONODE@@HK@Z.c)
 *     ?GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z @ 0x1C01DAF68 (-GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z.c)
 *     ?GetWindowVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@HHHPEAH@Z @ 0x1C01DB03C (-GetWindowVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@HHHPEAH@Z.c)
 *     NtUserGetWindowFeedbackSetting @ 0x1C021C7A0 (NtUserGetWindowFeedbackSetting.c)
 * Callees:
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     _IsTopLevelWindow @ 0x1C00665B0 (_IsTopLevelWindow.c)
 */

__int64 __fastcall FeedbackGetWindowSetting(__int64 a1, unsigned int a2, unsigned __int8 a3, _DWORD *a4)
{
  __int64 v7; // r10
  __int64 v8; // rbp
  int v9; // ebx
  int Prop; // eax
  __int64 v11; // rcx
  unsigned int v12; // r8d
  __int64 v13; // r11
  __int64 v14; // r10
  __int64 result; // rax
  unsigned __int8 v16; // cf

  v7 = a1;
  if ( !a1 )
    return 0LL;
  v8 = (unsigned __int16)gatomFeedbackSettings;
  v9 = 0x10000 << a2;
  while ( 1 )
  {
    Prop = GetProp(v7, v8, 1LL);
    if ( (v9 & Prop) != 0 )
      break;
    if ( (a3 & (unsigned __int8)v12) == 0 || (unsigned int)IsTopLevelWindow(v11) )
      v7 = v13;
    else
      v7 = *(_QWORD *)(v14 + 88);
    if ( !v7 )
      return 0LL;
  }
  v16 = _bittest(&Prop, a2);
  result = v12;
  LOBYTE(v13) = v16;
  *a4 = v13;
  return result;
}
