/*
 * XREFs of ?CleanupActivationFiltersForDesktop@@YAXPEAUtagDESKTOP@@@Z @ 0x1C014ADFC
 * Callers:
 *     CleanupIAMAccess @ 0x1C014AD50 (CleanupIAMAccess.c)
 * Callees:
 *     <none>
 */

void __fastcall CleanupActivationFiltersForDesktop(struct tagDESKTOP *a1)
{
  char *v1; // rsi
  char *v2; // rbx
  char *v3; // rdi
  __int64 v4; // rcx
  char **v5; // rax

  v1 = (char *)a1 + 248;
  v2 = (char *)*((_QWORD *)a1 + 31);
  if ( v2 )
  {
    while ( v2 != v1 )
    {
      v3 = v2;
      v2 = *(char **)v2;
      v4 = *(_QWORD *)v3;
      v5 = (char **)*((_QWORD *)v3 + 1);
      if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || *v5 != v3 )
        __fastfail(3u);
      *v5 = (char *)v4;
      *(_QWORD *)(v4 + 8) = v5;
      HMAssignmentUnlock(v3 + 16);
      Win32FreePool(v3);
    }
  }
}
