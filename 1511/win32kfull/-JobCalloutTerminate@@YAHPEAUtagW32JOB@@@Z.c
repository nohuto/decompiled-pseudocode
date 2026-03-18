/*
 * XREFs of ?JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z @ 0x1C00D072C
 * Callers:
 *     UserJobCallout @ 0x1C00CEC90 (UserJobCallout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall JobCalloutTerminate(struct tagW32JOB *a1)
{
  __int64 v2; // rcx
  struct tagW32JOB **v3; // rcx
  struct tagW32JOB *v4; // rax

  v2 = *((_QWORD *)a1 + 7);
  if ( v2 )
  {
    Win32FreePool(v2);
    *((_QWORD *)a1 + 7) = 0LL;
    *((_DWORD *)a1 + 12) = 0;
    *((_DWORD *)a1 + 13) = 0;
  }
  v3 = (struct tagW32JOB **)gpJobsList;
  if ( gpJobsList )
  {
    while ( 1 )
    {
      v4 = *v3;
      if ( *v3 == a1 )
        break;
      v3 = (struct tagW32JOB **)*v3;
      if ( !*(_QWORD *)v4 )
        goto LABEL_6;
    }
    *v3 = *(struct tagW32JOB **)a1;
  }
LABEL_6:
  RtlDestroyAtomTable(*((PRTL_ATOM_TABLE *)a1 + 2));
  Win32FreePool(a1);
  return 1LL;
}
