/*
 * XREFs of FeedbackGetWindowSetting @ 0x1401FFAEC
 * Callers:
 *     _anonymous_namespace_::ContactVisualizationWorker @ 0x1401B8710 (_anonymous_namespace_--ContactVisualizationWorker.c)
 *     _anonymous_namespace_::GetWindowBarrelVisualizationSetting @ 0x14020CA6C (_anonymous_namespace_--GetWindowBarrelVisualizationSetting.c)
 *     NtUserGetWindowFeedbackSetting @ 0x1402B5450 (NtUserGetWindowFeedbackSetting.c)
 * Callees:
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 */

__int64 __fastcall FeedbackGetWindowSetting(__int64 a1, __int64 a2, char a3, _DWORD *a4)
{
  unsigned int v6; // esi
  __int64 v7; // rbx
  int v8; // edi
  __int64 UserSessionState; // rax
  int Prop; // eax
  __int64 result; // rax
  unsigned __int8 v12; // cf

  v6 = a2;
  v7 = a1;
  v8 = 0;
  while ( 1 )
  {
    if ( !v7 )
      return 0LL;
    UserSessionState = W32GetUserSessionState(a1, a2);
    Prop = GetProp(v7, *(unsigned __int16 *)(UserSessionState + 41390), 1u);
    a1 = v6;
    a2 = (unsigned int)(0x10000 << v6);
    if ( ((unsigned int)a2 & Prop) != 0 )
      break;
    if ( (a3 & 1) == 0 || IsTopLevelWindow(v7) )
      v7 = 0LL;
    else
      v7 = *(_QWORD *)(v7 + 104);
  }
  v12 = _bittest(&Prop, v6);
  result = 1LL;
  LOBYTE(v8) = v12;
  *a4 = v8;
  return result;
}
