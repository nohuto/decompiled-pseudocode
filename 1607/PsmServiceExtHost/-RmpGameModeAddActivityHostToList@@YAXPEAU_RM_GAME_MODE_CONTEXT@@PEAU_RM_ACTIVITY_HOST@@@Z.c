/*
 * XREFs of ?RmpGameModeAddActivityHostToList@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180031744
 * Callers:
 *     RmpGameModeOnHostImportanceChanged @ 0x1800320B0 (RmpGameModeOnHostImportanceChanged.c)
 *     RmpGameModeRegisterActivityHost @ 0x180032168 (RmpGameModeRegisterActivityHost.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpGameModeAddActivityHostToList(struct _RM_GAME_MODE_CONTEXT *a1, struct _RM_ACTIVITY_HOST *a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rdx

  v2 = (_QWORD *)((char *)a1 + 8);
  v3 = (_QWORD *)((char *)a2 + 1072);
  if ( (*((_BYTE *)a2 + 1112) & 0x41) == 0x41 )
  {
    v4 = *v2;
    if ( *(_QWORD **)(*v2 + 8LL) != v2 )
      __fastfail(3u);
    *v3 = v4;
    v3[1] = v2;
    *(_QWORD *)(v4 + 8) = v3;
    *v2 = v3;
  }
  else
  {
    v5 = (_QWORD *)v2[1];
    if ( (_QWORD *)*v5 != v2 )
      __fastfail(3u);
    *v3 = v2;
    v3[1] = v5;
    *v5 = v3;
    v2[1] = v3;
  }
}
