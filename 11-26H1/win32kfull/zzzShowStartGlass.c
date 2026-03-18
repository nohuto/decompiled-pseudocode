/*
 * XREFs of zzzShowStartGlass @ 0x1402A76B8
 * Callers:
 *     NtUserShowStartGlass @ 0x1402BFFE0 (NtUserShowStartGlass.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     zzzCalcStartCursorHide @ 0x14028AAB0 (zzzCalcStartCursorHide.c)
 */

__int64 __fastcall zzzShowStartGlass(__int64 a1)
{
  unsigned int v1; // ebp
  __int128 v2; // rax
  __int64 v3; // r8
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  bool v8; // di
  bool v9; // si
  __int64 v10; // rax
  int v11; // r8d
  int v12; // edx
  bool v13; // di
  bool v14; // si
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx

  v1 = a1;
  *(_QWORD *)&v2 = PsGetCurrentProcessWin32Process(a1);
  v4 = v2;
  if ( (_QWORD)v2 )
  {
    v2 = -(__int128)*(unsigned __int64 *)v2;
    v4 &= *((_QWORD *)&v2 + 1);
  }
  v5 = *(unsigned int *)(v4 + 12);
  if ( (v5 & 0x400) != 0 )
  {
    UserSessionState = W32GetUserSessionState(v5, *((_QWORD *)&v2 + 1));
    *(_DWORD *)(UserSessionState + 66792) |= 0x8000000u;
    v8 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v10 = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
      LOBYTE(v11) = v9;
      LOBYTE(v12) = v8;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v11,
        *(_QWORD *)(v10 + 69152),
        4,
        2,
        24,
        (__int64)&WPP_835b3a91c6b03c100663678aa6bd529e_Traceguids);
    }
    v5 = *(unsigned int *)(v4 + 12);
    LODWORD(v5) = v5 | 0x100;
    *(_DWORD *)(v4 + 12) = v5;
    v13 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v13 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v15 = W32GetUserSessionState(v5, WPP_GLOBAL_Control);
      LOBYTE(v16) = v14;
      LOBYTE(v17) = v13;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v16,
        *(_QWORD *)(v15 + 69152),
        4,
        2,
        25,
        (__int64)&WPP_835b3a91c6b03c100663678aa6bd529e_Traceguids,
        v4);
      LODWORD(v5) = *(_DWORD *)(v4 + 12);
    }
  }
  *(_DWORD *)(v4 + 12) = v5 | 0x400;
  zzzCalcStartCursorHide((struct W32_PUSH_LOCK *)v4, v1, v3);
  return 1LL;
}
