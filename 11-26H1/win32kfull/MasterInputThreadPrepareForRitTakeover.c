/*
 * XREFs of MasterInputThreadPrepareForRitTakeover @ 0x140249234
 * Callers:
 *     EditionDeactivateMitInput @ 0x1402A9FC0 (EditionDeactivateMitInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1401A15C0 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     EditionPrepareHidForInputThreadMigration @ 0x140249400 (EditionPrepareHidForInputThreadMigration.c)
 *     ?RITORDIT@@YAPEADXZ @ 0x140249528 (-RITORDIT@@YAPEADXZ.c)
 */

__int64 MasterInputThreadPrepareForRitTakeover()
{
  bool v0; // di
  bool v1; // si
  char *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx

  v0 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v1 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v0 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v2 = RITORDIT();
    UserSessionState = W32GetUserSessionState(v4, v3);
    LOBYTE(v6) = v1;
    LOBYTE(v7) = v0;
    WPP_RECORDER_AND_TRACE_SF_s(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v6,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      20,
      10,
      (__int64)&WPP_3c68cde6c0ef378d0531fb0a1e9b2719_Traceguids,
      (__int64)v2);
  }
  EditionPrepareHidForInputThreadMigration();
  return EtwTraceDitDisEngaged();
}
