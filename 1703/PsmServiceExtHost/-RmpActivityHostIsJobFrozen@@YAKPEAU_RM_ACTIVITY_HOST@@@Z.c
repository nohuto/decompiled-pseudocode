/*
 * XREFs of ?RmpActivityHostIsJobFrozen@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002E76C
 * Callers:
 *     ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180033074 (-RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall RmpActivityHostIsJobFrozen(struct _RM_ACTIVITY_HOST *a1)
{
  int v2; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)a1 + 14) == 1 )
    return (*((unsigned __int8 *)a1 + 820) >> 6) & 1;
  (*(void (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int *))(*(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL) + 200LL))(
    (char *)a1 + 528,
    *((unsigned int *)a1 + 149),
    (char *)a1 + 64,
    *((unsigned int *)a1 + 150),
    *((_QWORD *)a1 + 3),
    &v2);
  return v2 == 7;
}
