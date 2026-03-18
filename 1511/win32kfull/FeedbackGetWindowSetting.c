/*
 * XREFs of FeedbackGetWindowSetting @ 0x1C01DBE2C
 * Callers:
 *     ?ContactVisualization@@YAHKPEBUtagPOINTERINFONODE@@HK@Z @ 0x1C01DB1E0 (-ContactVisualization@@YAHKPEBUtagPOINTERINFONODE@@HK@Z.c)
 *     ?GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z @ 0x1C01DB568 (-GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z.c)
 *     ?GetWindowVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@HHHPEAH@Z @ 0x1C01DB63C (-GetWindowVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@HHHPEAH@Z.c)
 *     NtUserGetWindowFeedbackSetting @ 0x1C021C590 (NtUserGetWindowFeedbackSetting.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     _IsTopLevelWindow @ 0x1C0056918 (_IsTopLevelWindow.c)
 */

__int64 __fastcall FeedbackGetWindowSetting(__int64 a1, unsigned int a2, unsigned __int8 a3, _DWORD *a4)
{
  __int64 v7; // r10
  __int64 v8; // rbp
  int v9; // ebx
  int Prop; // eax
  unsigned int v11; // r8d
  __int64 v12; // r10
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
    if ( (a3 & (unsigned __int8)v11) == 0 || (unsigned int)IsTopLevelWindow(v12) )
      v7 = v13;
    else
      v7 = *(_QWORD *)(v14 + 88);
    if ( !v7 )
      return 0LL;
  }
  v16 = _bittest(&Prop, a2);
  result = v11;
  LOBYTE(v13) = v16;
  *a4 = v13;
  return result;
}
