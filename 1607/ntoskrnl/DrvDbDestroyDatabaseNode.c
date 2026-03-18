/*
 * XREFs of DrvDbDestroyDatabaseNode @ 0x1406E35CC
 * Callers:
 *     DrvDbDispatchDriverDatabase @ 0x1405028D0 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbOpenContext @ 0x140578960 (DrvDbOpenContext.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x14057EB50 (DrvDbOpenDriverDatabaseRegKey.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x1400885B0 (ExDeleteResourceLite.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140458CF0 (RtlFreeAnsiString.c)
 *     DrvDbUnloadDatabaseNode @ 0x1404FA690 (DrvDbUnloadDatabaseNode.c)
 */

__int64 __fastcall DrvDbDestroyDatabaseNode(__int64 a1, char *a2)
{
  int v3; // esi
  _QWORD *v4; // rdx
  void **v5; // rcx
  void *v6; // rdi

  v3 = DrvDbUnloadDatabaseNode(a1, (__int64)a2);
  if ( v3 >= 0 )
  {
    v4 = *(_QWORD **)a2;
    v5 = (void **)*((_QWORD *)a2 + 1);
    if ( *(char **)(*(_QWORD *)a2 + 8LL) != a2 || *v5 != a2 )
      __fastfail(3u);
    *v5 = v4;
    v4[1] = v5;
    v6 = (void *)*((_QWORD *)a2 + 17);
    if ( v6 )
    {
      ExDeleteResourceLite(*((PERESOURCE *)a2 + 17));
      ExFreePoolWithTag(v6, 0);
    }
    RtlFreeAnsiString((PUNICODE_STRING)a2 + 1);
    RtlFreeAnsiString((PUNICODE_STRING)(a2 + 40));
    ExFreePoolWithTag(a2, 0);
  }
  return (unsigned int)v3;
}
