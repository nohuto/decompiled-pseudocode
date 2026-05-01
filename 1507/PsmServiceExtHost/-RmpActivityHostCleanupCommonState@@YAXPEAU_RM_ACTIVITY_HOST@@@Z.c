/*
 * XREFs of ?RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003B664
 * Callers:
 *     ?RmpActivityHostCleanupAllState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003B640 (-RmpActivityHostCleanupAllState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     RmpActivityHostAbortInitialization @ 0x18003B6E4 (RmpActivityHostAbortInitialization.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpActivityHostCleanupCommonState(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // rdx

  v1 = *((_QWORD *)a1 + 105);
  if ( v1 )
  {
    v2 = (_QWORD *)((char *)a1 + 848);
    v3 = *v2;
    v4 = (_QWORD *)v2[1];
    if ( *(_QWORD **)(*v2 + 8LL) != v2 || (_QWORD *)*v4 != v2 )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    --*(_DWORD *)(v1 + 32);
  }
}
