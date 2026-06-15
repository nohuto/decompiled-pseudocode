/*
 * XREFs of ?CastingStateChanged@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0006@@@Z @ 0x180005614
 * Callers:
 *     ?OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAU_CastingAppStateChangedContext@@@Z @ 0x180003EC0 (-OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAU_CastingAppStateChangedContext@@@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?CastingStateChanged@CApplication@@QEAAXH@Z @ 0x180004678 (-CastingStateChanged@CApplication@@QEAAXH@Z.c)
 */

void __fastcall CProcess::CastingStateChanged(__int64 a1, int a2, bool a3)
{
  if ( !*(_DWORD *)(a1 + 416) )
  {
    if ( a2 )
      --*(_DWORD *)(a1 + 472);
    else
      ++*(_DWORD *)(a1 + 472);
    if ( *(int *)(a1 + 472) < 0 )
    {
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x36u, (__int64)&WPP_fcf29b4c1df1b65e7f7c4a2882eee266_Traceguids);
      }
      *(_DWORD *)(a1 + 472) = 0;
    }
    else
    {
      CApplication::CastingStateChanged(*(CApplication **)(a1 + 224), a2 != 0 ? -1 : 1, a3);
    }
  }
}
