/*
 * XREFs of _anonymous_namespace_::SetMonitorDockThresholds @ 0x1401644D4
 * Callers:
 *     ?ArrangementParameterInfo@WindowArrangementSPI@@YA?AW4ParamInfoResult@1@IKPEAX_N1@Z @ 0x140163FC8 (-ArrangementParameterInfo@WindowArrangementSPI@@YA-AW4ParamInfoResult@1@IKPEAX_N1@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x14016475C (WPP_RECORDER_AND_TRACE_SF_dD.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall anonymous_namespace_::SetMonitorDockThresholds(
        unsigned int a1,
        __int64 a2,
        unsigned __int8 (__fastcall *a3)(struct MOVESIZEDATA *, _QWORD))
{
  __int64 v3; // r14
  unsigned int v5; // edi
  struct MOVESIZEDATA *v6; // rcx
  bool v7; // bl
  bool v8; // si
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  int *v12; // rsi
  unsigned int v13; // ebp
  unsigned int *i; // rbx
  int v15; // r15d
  __int64 v16; // rbx
  bool v17; // bl
  bool v18; // di
  __int64 v19; // rax
  void *v20; // rdx
  int v21; // r8d
  bool v23; // bl
  bool v24; // di
  __int64 v25; // rax
  void *v26; // rdx
  int v27; // r8d

  v3 = (int)a2;
  v5 = a1;
  if ( (a1 & 0xFFFFFF00) == 0 )
    return 0LL;
  v6 = WPP_GLOBAL_Control;
  v7 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_dD(*((_QWORD *)WPP_GLOBAL_Control + 3), v11, v10, *(_QWORD *)(UserSessionState + 69152));
  }
  v12 = (int *)&unk_140361CC8;
  v13 = v5;
  for ( i = (unsigned int *)&unk_140361CC8; i != (unsigned int *)&WPP_15e60d5f70ff331c62675cac58a45242_Traceguids; ++i )
  {
    v15 = *i;
    LOBYTE(v6) = v13;
    if ( !a3(v6, *i) )
    {
      v23 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v24 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v23 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v25 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
        v26 = &WPP_15e60d5f70ff331c62675cac58a45242_Traceguids;
        LOBYTE(v27) = v24;
        LOBYTE(v26) = v23;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          (_DWORD)v26,
          v27,
          *(_QWORD *)(v25 + 69152),
          3,
          1,
          11,
          (__int64)&WPP_15e60d5f70ff331c62675cac58a45242_Traceguids,
          v3,
          v15);
      }
      return 2LL;
    }
    v13 >>= 8;
  }
  do
  {
    v16 = *v12++;
    *(_BYTE *)(*(_QWORD *)(W32GetUserSessionState(v6, a2) + 63432) + v16 + 4 * v3) = v5;
    v5 >>= 8;
  }
  while ( v12 != (int *)&WPP_15e60d5f70ff331c62675cac58a45242_Traceguids );
  v17 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v17 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v19 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    v20 = &WPP_15e60d5f70ff331c62675cac58a45242_Traceguids;
    LOBYTE(v21) = v18;
    LOBYTE(v20) = v17;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)v20,
      v21,
      *(_QWORD *)(v19 + 69152),
      4,
      1,
      12,
      (__int64)&WPP_15e60d5f70ff331c62675cac58a45242_Traceguids);
  }
  return 1LL;
}
