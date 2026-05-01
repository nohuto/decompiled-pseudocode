/*
 * XREFs of ?RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004EC0
 * Callers:
 *     RmpActivityHostDelete @ 0x180004E58 (RmpActivityHostDelete.c)
 *     RmpActivityHostAbortInitialization @ 0x18002EBF0 (RmpActivityHostAbortInitialization.c)
 * Callees:
 *     RmpGameModeUnregisterActivityHost @ 0x180032224 (RmpGameModeUnregisterActivityHost.c)
 */

void __fastcall RmpActivityHostCleanupCommonState(struct _RM_ACTIVITY_HOST *a1)
{
  struct _RM_GAME_MODE_CONTEXT *v2; // rcx
  __int64 v3; // rax
  __int64 v4; // r8
  struct _RM_ACTIVITY_HOST **v5; // rdx

  v2 = (struct _RM_GAME_MODE_CONTEXT *)(*((_QWORD *)a1 + 5) + 2920LL);
  if ( *((_QWORD *)a1 + 134) )
    RmpGameModeUnregisterActivityHost(v2);
  v3 = *((_QWORD *)a1 + 128);
  if ( v3 )
  {
    v4 = *((_QWORD *)a1 + 129);
    v5 = (struct _RM_ACTIVITY_HOST **)*((_QWORD *)a1 + 130);
    if ( *(struct _RM_ACTIVITY_HOST **)(v4 + 8) != (struct _RM_ACTIVITY_HOST *)((char *)a1 + 1032)
      || *v5 != (struct _RM_ACTIVITY_HOST *)((char *)a1 + 1032) )
    {
      __fastfail(3u);
    }
    *v5 = (struct _RM_ACTIVITY_HOST *)v4;
    *(_QWORD *)(v4 + 8) = v5;
    --*(_DWORD *)(v3 + 32);
  }
  if ( *((_QWORD *)a1 + 99) )
    TpReleaseWork();
  if ( *((_QWORD *)a1 + 125) )
    TpReleaseWork();
  if ( *((_QWORD *)a1 + 110) )
  {
    TpReleaseWork();
    *((_QWORD *)a1 + 110) = 0LL;
  }
}
