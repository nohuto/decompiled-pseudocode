/*
 * XREFs of ?RmpActivityHostCleanupTypeSpecificState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004F3C
 * Callers:
 *     RmpActivityHostDelete @ 0x180004E58 (RmpActivityHostDelete.c)
 *     RmpActivityHostCreateHostPsm @ 0x180005F08 (RmpActivityHostCreateHostPsm.c)
 * Callees:
 *     RmpPsmAppFamilyTableTryRemoveActivityHost @ 0x180005004 (RmpPsmAppFamilyTableTryRemoveActivityHost.c)
 *     ??3@YAXPEAX@Z @ 0x18001FB04 (--3@YAXPEAX@Z.c)
 */

void __fastcall RmpActivityHostCleanupTypeSpecificState(HANDLE *a1)
{
  HANDLE v2; // rcx

  if ( *((_DWORD *)a1 + 12) )
  {
    if ( *((_DWORD *)a1 + 12) == 2 )
      CloseHandle(a1[7]);
  }
  else
  {
    RmpPsmAppFamilyTableTryRemoveActivityHost((struct _RM_ACTIVITY_HOST *)a1);
    v2 = a1[76];
    if ( v2 )
      operator delete(v2);
  }
}
