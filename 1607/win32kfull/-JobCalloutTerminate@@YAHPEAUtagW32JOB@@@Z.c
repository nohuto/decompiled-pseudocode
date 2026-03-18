/*
 * XREFs of ?JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z @ 0x1C00972D8
 * Callers:
 *     UserJobCallout @ 0x1C00995A0 (UserJobCallout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall JobCalloutTerminate(struct tagW32JOB *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct tagW32JOB **v5; // rcx
  struct tagW32JOB *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8

  v4 = *((_QWORD *)a1 + 7);
  if ( v4 )
  {
    Win32FreePool(v4, a2, a3);
    *((_QWORD *)a1 + 7) = 0LL;
    *((_DWORD *)a1 + 12) = 0;
    *((_DWORD *)a1 + 13) = 0;
  }
  v5 = (struct tagW32JOB **)gpJobsList;
  if ( gpJobsList )
  {
    while ( 1 )
    {
      v6 = *v5;
      if ( *v5 == a1 )
        break;
      v5 = (struct tagW32JOB **)*v5;
      if ( !*(_QWORD *)v6 )
        goto LABEL_6;
    }
    *v5 = *(struct tagW32JOB **)a1;
  }
LABEL_6:
  RtlDestroyAtomTable(*((PRTL_ATOM_TABLE *)a1 + 2));
  Win32FreePool(a1, v7, v8);
  return 1LL;
}
