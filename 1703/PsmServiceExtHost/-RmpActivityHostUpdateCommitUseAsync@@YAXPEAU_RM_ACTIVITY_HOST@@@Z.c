/*
 * XREFs of ?RmpActivityHostUpdateCommitUseAsync@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002EC0C
 * Callers:
 *     ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x18000B0A0 (-RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 *     ?RmpEnforcerJobCompletionThread@@YAKPEAX@Z @ 0x180020820 (-RmpEnforcerJobCompletionThread@@YAKPEAX@Z.c)
 * Callees:
 *     ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180005754 (-RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 */

void __fastcall RmpActivityHostUpdateCommitUseAsync(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v2; // rcx

  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 1524LL) & 2) == 0 && (*((_BYTE *)a1 + 1132) & 1) == 0 )
  {
    RmpObjectAddRef(a1);
    v2 = *((_QWORD *)a1 + 130);
    *((_DWORD *)a1 + 283) |= 1u;
    TpPostWork(v2);
  }
}
